package androidx.lifecycle;

import android.app.Application;
import android.os.Bundle;
import androidx.savedstate.SavedStateRegistry;
import androidx.savedstate.SavedStateRegistryOwner;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.util.Arrays;

public final class SavedStateViewModelFactory extends KeyedFactory {
    private static final Class[] ANDROID_VIEWMODEL_SIGNATURE;
    private static final Class[] VIEWMODEL_SIGNATURE;
    private final Application mApplication;
    private final Bundle mDefaultArgs;
    private final Factory mFactory;
    private final Lifecycle mLifecycle;
    private final SavedStateRegistry mSavedStateRegistry;

    static {
        SavedStateViewModelFactory.ANDROID_VIEWMODEL_SIGNATURE = new Class[]{Application.class, SavedStateHandle.class};
        SavedStateViewModelFactory.VIEWMODEL_SIGNATURE = new Class[]{SavedStateHandle.class};
    }

    public SavedStateViewModelFactory(Application application, SavedStateRegistryOwner owner) {
        this(application, owner, null);
    }

    public SavedStateViewModelFactory(Application application, SavedStateRegistryOwner owner, Bundle defaultArgs) {
        this.mSavedStateRegistry = owner.getSavedStateRegistry();
        this.mLifecycle = owner.getLifecycle();
        this.mDefaultArgs = defaultArgs;
        this.mApplication = application;
        NewInstanceFactory viewModelProvider$NewInstanceFactory0 = application == null ? NewInstanceFactory.getInstance() : AndroidViewModelFactory.getInstance(application);
        this.mFactory = viewModelProvider$NewInstanceFactory0;
    }

    @Override  // androidx.lifecycle.ViewModelProvider$KeyedFactory
    public ViewModel create(Class modelClass) {
        String s = modelClass.getCanonicalName();
        if(s == null) {
            throw new IllegalArgumentException("Local and anonymous classes can not be ViewModels");
        }
        return this.create(s, modelClass);
    }

    @Override  // androidx.lifecycle.ViewModelProvider$KeyedFactory
    public ViewModel create(String key, Class modelClass) {
        ViewModel viewModel0;
        boolean z = AndroidViewModel.class.isAssignableFrom(modelClass);
        Constructor constructor0 = !z || this.mApplication == null ? SavedStateViewModelFactory.findMatchingConstructor(modelClass, SavedStateViewModelFactory.VIEWMODEL_SIGNATURE) : SavedStateViewModelFactory.findMatchingConstructor(modelClass, SavedStateViewModelFactory.ANDROID_VIEWMODEL_SIGNATURE);
        if(constructor0 == null) {
            return this.mFactory.create(modelClass);
        }
        SavedStateHandleController savedStateHandleController0 = SavedStateHandleController.create(this.mSavedStateRegistry, this.mLifecycle, key, this.mDefaultArgs);
        try {
            if(z) {
                Application application0 = this.mApplication;
                viewModel0 = application0 == null ? ((ViewModel)constructor0.newInstance(savedStateHandleController0.getHandle())) : ((ViewModel)constructor0.newInstance(application0, savedStateHandleController0.getHandle()));
            }
            else {
                viewModel0 = (ViewModel)constructor0.newInstance(savedStateHandleController0.getHandle());
            }
            viewModel0.setTagIfAbsent("androidx.lifecycle.savedstate.vm.tag", savedStateHandleController0);
            return viewModel0;
        }
        catch(IllegalAccessException illegalAccessException0) {
        }
        catch(InstantiationException instantiationException0) {
            throw new RuntimeException("A " + modelClass + " cannot be instantiated.", instantiationException0);
        }
        catch(InvocationTargetException invocationTargetException0) {
            throw new RuntimeException("An exception happened in constructor of " + modelClass, invocationTargetException0.getCause());
        }
        throw new RuntimeException("Failed to access " + modelClass, illegalAccessException0);
    }

    private static Constructor findMatchingConstructor(Class modelClass, Class[] signature) {
        Constructor[] arr_constructor = modelClass.getConstructors();
        for(int v = 0; v < arr_constructor.length; ++v) {
            Constructor constructor0 = arr_constructor[v];
            if(Arrays.equals(signature, constructor0.getParameterTypes())) {
                return constructor0;
            }
        }
        return null;
    }

    @Override  // androidx.lifecycle.ViewModelProvider$OnRequeryFactory
    void onRequery(ViewModel viewModel) {
        SavedStateHandleController.attachHandleIfNeeded(viewModel, this.mSavedStateRegistry, this.mLifecycle);
    }
}

