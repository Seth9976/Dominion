package androidx.lifecycle;

import android.os.Binder;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.Size;
import android.util.SizeF;
import android.util.SparseArray;
import androidx.savedstate.SavedStateRegistry.SavedStateProvider;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map.Entry;
import java.util.Map;
import java.util.Set;

public final class SavedStateHandle {
    static class SavingStateLiveData extends MutableLiveData {
        private SavedStateHandle mHandle;
        private String mKey;

        SavingStateLiveData(SavedStateHandle handle, String key) {
            this.mKey = key;
            this.mHandle = handle;
        }

        SavingStateLiveData(SavedStateHandle handle, String key, Object value) {
            super(value);
            this.mKey = key;
            this.mHandle = handle;
        }

        void detach() {
            this.mHandle = null;
        }

        @Override  // androidx.lifecycle.MutableLiveData
        public void setValue(Object value) {
            SavedStateHandle savedStateHandle0 = this.mHandle;
            if(savedStateHandle0 != null) {
                savedStateHandle0.mRegular.put(this.mKey, value);
            }
            super.setValue(value);
        }
    }

    private static final Class[] ACCEPTABLE_CLASSES = null;
    private static final String KEYS = "keys";
    private static final String VALUES = "values";
    private final Map mLiveDatas;
    final Map mRegular;
    private final SavedStateProvider mSavedStateProvider;
    final Map mSavedStateProviders;

    static {
        SavedStateHandle.ACCEPTABLE_CLASSES = new Class[]{Boolean.TYPE, boolean[].class, Double.TYPE, double[].class, Integer.TYPE, int[].class, Long.TYPE, long[].class, String.class, String[].class, Binder.class, Bundle.class, Byte.TYPE, byte[].class, Character.TYPE, char[].class, CharSequence.class, CharSequence[].class, ArrayList.class, Float.TYPE, float[].class, Parcelable.class, Parcelable[].class, Serializable.class, Short.TYPE, short[].class, SparseArray.class, Size.class, SizeF.class};
    }

    public SavedStateHandle() {
        this.mSavedStateProviders = new HashMap();
        this.mLiveDatas = new HashMap();
        this.mSavedStateProvider = new SavedStateProvider() {
            @Override  // androidx.savedstate.SavedStateRegistry$SavedStateProvider
            public Bundle saveState() {
                for(Object object0: new HashMap(SavedStateHandle.this.mSavedStateProviders).entrySet()) {
                    Bundle bundle0 = ((SavedStateProvider)((Map.Entry)object0).getValue()).saveState();
                    String s = (String)((Map.Entry)object0).getKey();
                    SavedStateHandle.this.set(s, bundle0);
                }
                Set set0 = SavedStateHandle.this.mRegular.keySet();
                ArrayList arrayList0 = new ArrayList(set0.size());
                ArrayList arrayList1 = new ArrayList(arrayList0.size());
                for(Object object1: set0) {
                    arrayList0.add(((String)object1));
                    arrayList1.add(SavedStateHandle.this.mRegular.get(((String)object1)));
                }
                Bundle bundle1 = new Bundle();
                bundle1.putParcelableArrayList("keys", arrayList0);
                bundle1.putParcelableArrayList("values", arrayList1);
                return bundle1;
            }
        };
        this.mRegular = new HashMap();
    }

    public SavedStateHandle(Map initialState) {
        this.mSavedStateProviders = new HashMap();
        this.mLiveDatas = new HashMap();
        this.mSavedStateProvider = new SavedStateProvider() {
            @Override  // androidx.savedstate.SavedStateRegistry$SavedStateProvider
            public Bundle saveState() {
                for(Object object0: new HashMap(SavedStateHandle.this.mSavedStateProviders).entrySet()) {
                    Bundle bundle0 = ((SavedStateProvider)((Map.Entry)object0).getValue()).saveState();
                    String s = (String)((Map.Entry)object0).getKey();
                    SavedStateHandle.this.set(s, bundle0);
                }
                Set set0 = SavedStateHandle.this.mRegular.keySet();
                ArrayList arrayList0 = new ArrayList(set0.size());
                ArrayList arrayList1 = new ArrayList(arrayList0.size());
                for(Object object1: set0) {
                    arrayList0.add(((String)object1));
                    arrayList1.add(SavedStateHandle.this.mRegular.get(((String)object1)));
                }
                Bundle bundle1 = new Bundle();
                bundle1.putParcelableArrayList("keys", arrayList0);
                bundle1.putParcelableArrayList("values", arrayList1);
                return bundle1;
            }
        };
        this.mRegular = new HashMap(initialState);
    }

    public void clearSavedStateProvider(String key) {
        this.mSavedStateProviders.remove(key);
    }

    public boolean contains(String key) {
        return this.mRegular.containsKey(key);
    }

    static SavedStateHandle createHandle(Bundle restoredState, Bundle defaultState) {
        if(restoredState == null && defaultState == null) {
            return new SavedStateHandle();
        }
        HashMap hashMap0 = new HashMap();
        if(defaultState != null) {
            for(Object object0: defaultState.keySet()) {
                hashMap0.put(((String)object0), defaultState.get(((String)object0)));
            }
        }
        if(restoredState == null) {
            return new SavedStateHandle(hashMap0);
        }
        ArrayList arrayList0 = restoredState.getParcelableArrayList("keys");
        ArrayList arrayList1 = restoredState.getParcelableArrayList("values");
        if(arrayList0 == null || arrayList1 == null || arrayList0.size() != arrayList1.size()) {
            throw new IllegalStateException("Invalid bundle passed as restored state");
        }
        for(int v = 0; v < arrayList0.size(); ++v) {
            hashMap0.put(((String)arrayList0.get(v)), arrayList1.get(v));
        }
        return new SavedStateHandle(hashMap0);
    }

    public Object get(String key) {
        return this.mRegular.get(key);
    }

    public MutableLiveData getLiveData(String key) {
        return this.getLiveDataInternal(key, false, null);
    }

    public MutableLiveData getLiveData(String key, Object initialValue) {
        return this.getLiveDataInternal(key, true, initialValue);
    }

    private MutableLiveData getLiveDataInternal(String key, boolean hasInitialValue, Object initialValue) {
        MutableLiveData mutableLiveData1;
        MutableLiveData mutableLiveData0 = (MutableLiveData)this.mLiveDatas.get(key);
        if(mutableLiveData0 != null) {
            return mutableLiveData0;
        }
        if(this.mRegular.containsKey(key)) {
            mutableLiveData1 = new SavingStateLiveData(this, key, this.mRegular.get(key));
        }
        else {
            mutableLiveData1 = hasInitialValue ? new SavingStateLiveData(this, key, initialValue) : new SavingStateLiveData(this, key);
        }
        this.mLiveDatas.put(key, mutableLiveData1);
        return mutableLiveData1;
    }

    public Set keys() {
        Set set0 = new HashSet(this.mRegular.keySet());
        ((HashSet)set0).addAll(this.mSavedStateProviders.keySet());
        ((HashSet)set0).addAll(this.mLiveDatas.keySet());
        return set0;
    }

    public Object remove(String key) {
        Object object0 = this.mRegular.remove(key);
        SavingStateLiveData savedStateHandle$SavingStateLiveData0 = (SavingStateLiveData)this.mLiveDatas.remove(key);
        if(savedStateHandle$SavingStateLiveData0 != null) {
            savedStateHandle$SavingStateLiveData0.detach();
        }
        return object0;
    }

    SavedStateProvider savedStateProvider() {
        return this.mSavedStateProvider;
    }

    public void set(String key, Object value) {
        SavedStateHandle.validateValue(value);
        MutableLiveData mutableLiveData0 = (MutableLiveData)this.mLiveDatas.get(key);
        if(mutableLiveData0 != null) {
            mutableLiveData0.setValue(value);
            return;
        }
        this.mRegular.put(key, value);
    }

    public void setSavedStateProvider(String key, SavedStateProvider provider) {
        this.mSavedStateProviders.put(key, provider);
    }

    private static void validateValue(Object value) {
        if(value == null) {
            return;
        }
        Class[] arr_class = SavedStateHandle.ACCEPTABLE_CLASSES;
        for(int v = 0; v < arr_class.length; ++v) {
            if(arr_class[v].isInstance(value)) {
                return;
            }
        }
        throw new IllegalArgumentException("Can\'t put value with type " + value.getClass() + " into saved state");
    }
}

