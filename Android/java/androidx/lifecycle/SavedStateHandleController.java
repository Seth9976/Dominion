package androidx.lifecycle;

import android.os.Bundle;
import androidx.savedstate.SavedStateRegistry.AutoRecreated;
import androidx.savedstate.SavedStateRegistry;
import androidx.savedstate.SavedStateRegistryOwner;

final class SavedStateHandleController implements LifecycleEventObserver {
    static final class OnRecreation implements AutoRecreated {
        @Override  // androidx.savedstate.SavedStateRegistry$AutoRecreated
        public void onRecreated(SavedStateRegistryOwner owner) {
            if(!(owner instanceof ViewModelStoreOwner)) {
                throw new IllegalStateException("Internal error: OnRecreation should be registered only on componentsthat implement ViewModelStoreOwner");
            }
            ViewModelStore viewModelStore0 = ((ViewModelStoreOwner)owner).getViewModelStore();
            SavedStateRegistry savedStateRegistry0 = owner.getSavedStateRegistry();
            for(Object object0: viewModelStore0.keys()) {
                SavedStateHandleController.attachHandleIfNeeded(viewModelStore0.get(((String)object0)), savedStateRegistry0, owner.getLifecycle());
            }
            if(!viewModelStore0.keys().isEmpty()) {
                savedStateRegistry0.runOnNextRecreation(OnRecreation.class);
            }
        }
    }

    static final String TAG_SAVED_STATE_HANDLE_CONTROLLER = "androidx.lifecycle.savedstate.vm.tag";
    private final SavedStateHandle mHandle;
    private boolean mIsAttached;
    private final String mKey;

    SavedStateHandleController(String key, SavedStateHandle handle) {
        this.mIsAttached = false;
        this.mKey = key;
        this.mHandle = handle;
    }

    static void attachHandleIfNeeded(ViewModel viewModel, SavedStateRegistry registry, Lifecycle lifecycle) {
        SavedStateHandleController savedStateHandleController0 = (SavedStateHandleController)viewModel.getTag("androidx.lifecycle.savedstate.vm.tag");
        if(savedStateHandleController0 != null && !savedStateHandleController0.isAttached()) {
            savedStateHandleController0.attachToLifecycle(registry, lifecycle);
            SavedStateHandleController.tryToAddRecreator(registry, lifecycle);
        }
    }

    void attachToLifecycle(SavedStateRegistry registry, Lifecycle lifecycle) {
        if(this.mIsAttached) {
            throw new IllegalStateException("Already attached to lifecycleOwner");
        }
        this.mIsAttached = true;
        lifecycle.addObserver(this);
        registry.registerSavedStateProvider(this.mKey, this.mHandle.savedStateProvider());
    }

    static SavedStateHandleController create(SavedStateRegistry registry, Lifecycle lifecycle, String key, Bundle defaultArgs) {
        SavedStateHandleController savedStateHandleController0 = new SavedStateHandleController(key, SavedStateHandle.createHandle(registry.consumeRestoredStateForKey(key), defaultArgs));
        savedStateHandleController0.attachToLifecycle(registry, lifecycle);
        SavedStateHandleController.tryToAddRecreator(registry, lifecycle);
        return savedStateHandleController0;
    }

    SavedStateHandle getHandle() {
        return this.mHandle;
    }

    boolean isAttached() {
        return this.mIsAttached;
    }

    @Override  // androidx.lifecycle.LifecycleEventObserver
    public void onStateChanged(LifecycleOwner source, Event event) {
        if(event == Event.ON_DESTROY) {
            this.mIsAttached = false;
            source.getLifecycle().removeObserver(this);
        }
    }

    private static void tryToAddRecreator(SavedStateRegistry registry, Lifecycle lifecycle) {
        State lifecycle$State0 = lifecycle.getCurrentState();
        if(lifecycle$State0 != State.INITIALIZED && !lifecycle$State0.isAtLeast(State.STARTED)) {
            lifecycle.addObserver(new LifecycleEventObserver() {
                @Override  // androidx.lifecycle.LifecycleEventObserver
                public void onStateChanged(LifecycleOwner source, Event event) {
                    if(event == Event.ON_START) {
                        lifecycle.removeObserver(this);
                        registry.runOnNextRecreation(OnRecreation.class);
                    }
                }
            });
            return;
        }
        registry.runOnNextRecreation(OnRecreation.class);
    }
}

