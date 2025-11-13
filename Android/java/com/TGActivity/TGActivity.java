package com.TGActivity;

import android.app.AlertDialog.Builder;
import android.app.NativeActivity;
import android.app.NotificationManager;
import android.content.BroadcastReceiver;
import android.content.ClipData.Item;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.DialogInterface.OnClickListener;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.media.AudioAttributes.Builder;
import android.media.AudioAttributes;
import android.media.AudioManager;
import android.media.AudioRecord;
import android.media.MediaPlayer;
import android.media.SoundPool.Builder;
import android.media.SoundPool;
import android.media.audiofx.AcousticEchoCanceler;
import android.media.audiofx.AutomaticGainControl;
import android.media.audiofx.NoiseSuppressor;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Build.VERSION;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.util.Log;
import android.view.KeyEvent;
import android.view.ViewGroup.LayoutParams;
import android.view.inputmethod.BaseInputConnection;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputConnectionWrapper;
import android.view.inputmethod.InputMethodManager;
import android.widget.EditText;
import android.widget.TextView.BufferType;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.core.content.FileProvider;
import com.android.billingclient.api.AcknowledgePurchaseParams;
import com.android.billingclient.api.AcknowledgePurchaseResponseListener;
import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingClientStateListener;
import com.android.billingclient.api.BillingFlowParams.ProductDetailsParams;
import com.android.billingclient.api.BillingFlowParams;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.ProductDetailsResponseListener;
import com.android.billingclient.api.Purchase;
import com.android.billingclient.api.PurchasesResponseListener;
import com.android.billingclient.api.PurchasesUpdatedListener;
import com.android.billingclient.api.QueryProductDetailsParams.Product;
import com.android.billingclient.api.QueryProductDetailsParams;
import com.android.billingclient.api.QueryPurchasesParams;
import com.android.billingclient.api.SkuDetails;
import com.android.billingclient.api.SkuDetailsParams.Builder;
import com.android.billingclient.api.SkuDetailsParams;
import com.android.billingclient.api.SkuDetailsResponseListener;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.android.play.core.review.ReviewInfo;
import com.google.android.play.core.review.ReviewManager;
import com.google.android.play.core.review.ReviewManagerFactory;
import com.google.firebase.messaging.FirebaseMessaging;
import java.io.File;
import java.io.IOException;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.locks.ReentrantLock;

public class TGActivity extends NativeActivity {
    static enum Channels {
        Channel_Games;

        private static Channels[] $values() [...] // Inlined contents
    }

    class MusicIntentReceiver extends BroadcastReceiver {
        @Override  // android.content.BroadcastReceiver
        public void onReceive(Context context0, Intent intent0) {
            if(intent0.getAction().equals("android.intent.action.HEADSET_PLUG")) {
                AudioManager audioManager0 = (AudioManager)TGActivity.this.getSystemService("audio");
                if(TGActivity.this.micIsOn) {
                    if(audioManager0.isWiredHeadsetOn()) {
                        audioManager0.setSpeakerphoneOn(false);
                        return;
                    }
                    audioManager0.setSpeakerphoneOn(true);
                }
            }
        }
    }

    public class MyEditText extends EditText {
        class MyInputConnection extends InputConnectionWrapper {
            public MyInputConnection(InputConnection inputConnection0, boolean z) {
                super(inputConnection0, z);
            }

            @Override  // android.view.inputmethod.InputConnectionWrapper
            public boolean commitText(CharSequence charSequence0, int v) {
                TGActivity.nativeCommitText(String.valueOf(charSequence0), v);
                return super.commitText(charSequence0, v);
            }

            @Override  // android.view.inputmethod.InputConnectionWrapper
            public boolean deleteSurroundingText(int v, int v1) {
                TGActivity.nativeDeleteSurroundingText(v, v1);
                return super.deleteSurroundingText(v, v1);
            }

            @Override  // android.view.inputmethod.InputConnectionWrapper
            public boolean sendKeyEvent(KeyEvent keyEvent0) {
                return super.sendKeyEvent(keyEvent0);
            }

            @Override  // android.view.inputmethod.InputConnectionWrapper
            public boolean setComposingRegion(int v, int v1) {
                TGActivity.nativeSetSelection(v, v1);
                return super.setComposingRegion(v, v1);
            }

            @Override  // android.view.inputmethod.InputConnectionWrapper
            public boolean setComposingText(CharSequence charSequence0, int v) {
                TGActivity.nativeSetComposingText(String.valueOf(charSequence0), v);
                return super.setComposingText(charSequence0, v);
            }

            @Override  // android.view.inputmethod.InputConnectionWrapper
            public boolean setSelection(int v, int v1) {
                TGActivity.nativeSetSelection(v, v1);
                return super.setSelection(v, v1);
            }
        }

        public MyEditText(Context context0) {
            super(context0);
        }

        @Override  // android.widget.TextView
        public boolean onCheckIsTextEditor() {
            return true;
        }

        @Override  // android.widget.TextView
        public InputConnection onCreateInputConnection(EditorInfo editorInfo0) {
            InputConnection inputConnection0 = new MyInputConnection(this, new BaseInputConnection(this, true), true);
            editorInfo0.inputType = 0x91;
            editorInfo0.imeOptions = 0x12000000;
            return inputConnection0;
        }
    }

    class OldMyEditText extends EditText {
        OldMyEditText(Context context0) {
            super(context0);
            this.addTextChangedListener(new TextWatcher() {
                @Override  // android.text.TextWatcher
                public void afterTextChanged(Editable editable0) {
                    TGActivity.this.OnKeyboardChange(this);
                }

                @Override  // android.text.TextWatcher
                public void beforeTextChanged(CharSequence charSequence0, int v, int v1, int v2) {
                }

                @Override  // android.text.TextWatcher
                public void onTextChanged(CharSequence charSequence0, int v, int v1, int v2) {
                }
            });
        }

        @Override  // android.widget.TextView
        protected void onSelectionChanged(int v, int v1) {
            TGActivity.this.OnKeyboardChange(this);
        }
    }

    static final boolean $assertionsDisabled = false;
    public int MUSIC_SOUND_ID;
    public static final String TAG = "TGLOG";
    ArrayDeque audioBufferQueue;
    ReentrantLock audioBufferQueueLock;
    private BillingClient billingClient;
    AcousticEchoCanceler echoCanceller;
    MyEditText editText;
    int frameMultiplier;
    int frameSizeBytes;
    OldMyEditText g_editText;
    AutomaticGainControl gainControl;
    volatile boolean isRecording;
    volatile List listProductDetails;
    volatile List listSkuDetails;
    private static ClipboardManager m_ClipboardManager;
    MediaPlayer mediaPlayer;
    boolean micIsOn;
    NoiseSuppressor noiseSupressor;
    int oldAudioMode;
    boolean oldSpeakerPhoneOn;
    Queue queueLastInputCharacter;
    AudioRecord recorder;
    Thread recordingThread;
    int sampleRate;
    volatile short[] shared_audioData;
    SoundPool soundPool;

    static {
        Log.d("TGLOG", "LoadLibrary");
        System.loadLibrary("TGGAndroid");
        Log.d("TGLOG", "LoadLibrary done");
    }

    public TGActivity() {
        this.sampleRate = 16000;
        this.recorder = null;
        this.echoCanceller = null;
        this.noiseSupressor = null;
        this.gainControl = null;
        this.frameSizeBytes = 640;
        this.recordingThread = null;
        this.frameMultiplier = 3;
        this.shared_audioData = null;
        this.audioBufferQueueLock = new ReentrantLock();
        this.audioBufferQueue = new ArrayDeque(3);
        this.soundPool = null;
        this.mediaPlayer = null;
        this.MUSIC_SOUND_ID = -1;
        this.queueLastInputCharacter = new ConcurrentLinkedQueue();
        this.editText = null;
        this.listSkuDetails = null;
        this.listProductDetails = null;
    }

    void GoogleGamecenterOnCreate() {
        this.setVolumeControlStream(3);
    }

    void KeyboardClose() {
        this.g_editText.clearFocus();
        this.g_editText = null;
    }

    public void KeyboardOpen(String s, int v, int v1) {
        OldMyEditText tGActivity$OldMyEditText0 = new OldMyEditText(this, this);
        this.g_editText = tGActivity$OldMyEditText0;
        tGActivity$OldMyEditText0.setInputType(1);
        this.KeyboardSet(s, v, v1);
        this.g_editText.requestFocus();
    }

    void KeyboardSet(String s, int v, int v1) {
        this.g_editText.setText(s, TextView.BufferType.EDITABLE);
        this.g_editText.setSelection(v, v1);
    }

    public int LoadMusic(String s, int v, int v1) {
        if(this.mediaPlayer == null) {
            this.mediaPlayer = new MediaPlayer();
        }
        AssetManager assetManager0 = this.getAssets();
        try {
            AssetFileDescriptor assetFileDescriptor0 = assetManager0.openFd(s);
            this.mediaPlayer.setDataSource(assetFileDescriptor0.getFileDescriptor(), assetFileDescriptor0.getStartOffset() + ((long)v), ((long)v1));
        }
        catch(IOException iOException0) {
            Log.e("TGLOG", "IOException: " + iOException0.getMessage());
            return 0;
        }
        try {
            this.mediaPlayer.prepare();
            return this.MUSIC_SOUND_ID;
        }
        catch(IOException iOException1) {
            Log.e("TGLOG", "IOException prepare: " + iOException1.getMessage());
            return 0;
        }
    }

    public int LoadSound(String s, int v, int v1, int v2) {
        if(this.soundPool == null) {
            AudioAttributes audioAttributes0 = new AudioAttributes.Builder().setUsage(14).setContentType(2).build();
            this.soundPool = new SoundPool.Builder().setAudioAttributes(audioAttributes0).setMaxStreams(0x40).build();
        }
        if(v2 != 0) {
            return this.LoadMusic(s, v, v1);
        }
        try {
            AssetFileDescriptor assetFileDescriptor0 = this.getAssets().openFd(s);
            return this.soundPool.load(assetFileDescriptor0.getFileDescriptor(), assetFileDescriptor0.getStartOffset() + ((long)v), ((long)v1), 1);
        }
        catch(IOException iOException0) {
            Log.e("TGLOG", "IOException: " + iOException0.getMessage());
            return 0;
        }
    }

    void OnKeyboardChange(EditText editText0) {
        int v = editText0.getSelectionStart();
        int v1 = editText0.getSelectionEnd();
        this.jni_keyboard_change(editText0.getText().toString(), v, v1);
    }

    public int PlaySound(int v, float f, int v1, float f1) {
        if(v == this.MUSIC_SOUND_ID) {
            if(v1 != 0) {
                this.mediaPlayer.setLooping(true);
            }
            this.mediaPlayer.setVolume(f, f);
            this.mediaPlayer.start();
            return v;
        }
        int v2 = this.soundPool.play(v, f, f, 0, v1, f1);
        if(v2 == 0) {
            Log.d("TGLOG", "soundPool.play returned 0 id:" + v);
        }
        return v2;
    }

    public static native void SetSafeRect(int arg0, int arg1, int arg2, int arg3) {
    }

    public void StreamSetVolume(int v, float f) {
        if(v == this.MUSIC_SOUND_ID) {
            this.mediaPlayer.setVolume(f, f);
            return;
        }
        this.soundPool.setVolume(v, f, f);
    }

    public void StreamStop(int v) {
        if(v == this.MUSIC_SOUND_ID) {
            this.mediaPlayer.stop();
            return;
        }
        this.soundPool.stop(v);
    }

    public int UnloadSound(int v) {
        this.soundPool.unload(v);
        return 1;
    }

    void XClearNotifications() {
        ((NotificationManager)this.getSystemService("notification")).cancelAll();
    }

    boolean XClipboardCanPasteText() {
        try {
            ClipboardManager clipboardManager0 = TGActivity.m_ClipboardManager;
            if(clipboardManager0 == null) {
                Log.d("TGLOG", "XClipboardCanPasteText clipboard==null");
                return false;
            }
            if(!clipboardManager0.hasPrimaryClip()) {
                Log.d("TGLOG", "XClipboardCanPasteText hasPrimaryClip==false");
                return false;
            }
            ClipData.Item clipData$Item0 = clipboardManager0.getPrimaryClip().getItemAt(0);
            if(clipData$Item0 == null) {
                Log.d("TGLOG", "XClipboardCanPasteText primaryClip==null");
                return false;
            }
            if(clipData$Item0.getText() == null) {
                Log.d("TGLOG", "XClipboardCanPasteText itemText==null");
                return false;
            }
            return true;
        }
        catch(Exception exception0) {
            Log.d("TGLOG", exception0.toString());
            return false;
        }
    }

    void XClipboardCopyText(String s) {
        ClipboardManager clipboardManager0 = TGActivity.m_ClipboardManager;
        if(clipboardManager0 == null) {
            return;
        }
        clipboardManager0.setPrimaryClip(ClipData.newPlainText("friend code", s));
    }

    String XClipboardPasteText() {
        if(!this.XClipboardCanPasteText()) {
            return "";
        }
        CharSequence charSequence0 = TGActivity.m_ClipboardManager.getPrimaryClip().getItemAt(0).getText();
        return charSequence0 == null ? "" : charSequence0.subSequence(0, Math.min(charSequence0.length(), 0x80)).toString();
    }

    void XOpenURL(String s) {
        this.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(s)));
    }

    String XSaveFileDir() {
        return this.getApplicationContext().getFilesDir().toString();
    }

    float adjustVolume(int v) {
        AudioManager audioManager0 = (AudioManager)this.getSystemService("audio");
        audioManager0.adjustStreamVolume(3, v, 0);
        int v1 = audioManager0.getStreamMaxVolume(3);
        return ((float)audioManager0.getStreamVolume(3)) / ((float)v1);
    }

    void askNotificationPermission() {
        if(Build.VERSION.SDK_INT < 33 || ContextCompat.checkSelfPermission(this, "android.permission.POST_NOTIFICATIONS") == 0) {
            return;
        }
        ActivityCompat.shouldShowRequestPermissionRationale(this, "android.permission.POST_NOTIFICATIONS");
        ActivityCompat.requestPermissions(this, new String[]{"android.permission.POST_NOTIFICATIONS"}, 1);
    }

    void billingConnect() {
        if(this.billingClient == null) {
            Log.d("TGLOG", "billingConnect called before init");
            return;
        }
        Log.d("TGLOG", "billingConnect");
        this.billingClient.startConnection(new BillingClientStateListener() {
            @Override  // com.android.billingclient.api.BillingClientStateListener
            public void onBillingServiceDisconnected() {
                Log.d("TGLOG", "billing disconnected");
                TGActivity.jni_handleServiceConnected(false);
            }

            @Override  // com.android.billingclient.api.BillingClientStateListener
            public void onBillingSetupFinished(BillingResult billingResult0) {
                if(billingResult0.getResponseCode() == 0) {
                    Log.d("TGLOG", "billing connected");
                    TGActivity.jni_handleServiceConnected(true);
                    TGActivity.this.billingQuery();
                }
            }
        });
    }

    void billingInit() {
        Log.d("TGLOG", "billingInit");
        com.TGActivity.TGActivity.4 tGActivity$40 = new PurchasesUpdatedListener() {
            @Override  // com.android.billingclient.api.PurchasesUpdatedListener
            public void onPurchasesUpdated(BillingResult billingResult0, List list0) {
                Log.d("TGLOG", "onPurchasesUpdated");
                if(billingResult0.getResponseCode() == 0 && list0 != null) {
                    for(Object object0: list0) {
                        TGActivity.this.handlePurchase(((Purchase)object0));
                    }
                }
            }
        };
        this.billingClient = BillingClient.newBuilder(this).setListener(tGActivity$40).enablePendingPurchases().build();
        this.billingConnect();
        Log.d("TGLOG", "billingInit complete");
    }

    int billingLaunchPurchaseFlow(String s) {
        Log.d("TGLOG", "billing billingLaunchPurchaseFlow for (v5) " + s);
        if(this.listProductDetails == null) {
            Log.d("TGLOG", "listProductDetails null");
            return -1;
        }
        ProductDetails productDetails0 = null;
        for(Object object0: this.listProductDetails) {
            ProductDetails productDetails1 = (ProductDetails)object0;
            if(s.equals(productDetails1.getProductId())) {
                productDetails0 = productDetails1;
                break;
            }
        }
        if(productDetails0 == null) {
            Log.d("TGLOG", "billing billingLaunchPurchaseFlow skuUnavailable v5 " + s);
            return -1;
        }
        ArrayList arrayList0 = new ArrayList();
        arrayList0.add(ProductDetailsParams.newBuilder().setProductDetails(productDetails0).build());
        BillingFlowParams billingFlowParams0 = BillingFlowParams.newBuilder().setProductDetailsParamsList(arrayList0).build();
        switch(this.billingClient.launchBillingFlow(this, billingFlowParams0).getResponseCode()) {
            case 0: {
                return 0;
            }
            case 1: {
                return -4;
            }
            case 4: {
                return -3;
            }
            case 7: {
                return -2;
            }
            default: {
                return -5;
            }
        }
    }

    int billingLaunchPurchaseFlow_4(String s) {
        Log.d("TGLOG", "billing billingLaunchPurchaseFlow for " + s);
        if(this.listSkuDetails == null) {
            Log.d("TGLOG", "listSkuDetails null");
            return -1;
        }
        SkuDetails skuDetails0 = null;
        for(Object object0: this.listSkuDetails) {
            SkuDetails skuDetails1 = (SkuDetails)object0;
            if(s.equals(skuDetails1.getSku())) {
                skuDetails0 = skuDetails1;
                break;
            }
        }
        if(skuDetails0 == null) {
            Log.d("TGLOG", "billing billingLaunchPurchaseFlow skuUnavailable");
            return -1;
        }
        BillingFlowParams billingFlowParams0 = BillingFlowParams.newBuilder().setSkuDetails(skuDetails0).build();
        switch(this.billingClient.launchBillingFlow(this, billingFlowParams0).getResponseCode()) {
            case 0: {
                return 0;
            }
            case 1: {
                return -4;
            }
            case 4: {
                return -3;
            }
            case 7: {
                return -2;
            }
            default: {
                return -5;
            }
        }
    }

    void billingQuery() {
        Log.d("TGLOG", "billingQuery");
        String[] arr_s = TGActivity.jni_getSkus();
        if(arr_s.length == 0) {
            Log.d("TGLOG", "billingQuery no skus");
            return;
        }
        this.billingQuerySKUs(arr_s);
        this.billingClient.queryPurchasesAsync(QueryPurchasesParams.newBuilder().setProductType("inapp").build(), new PurchasesResponseListener() {
            @Override  // com.android.billingclient.api.PurchasesResponseListener
            public void onQueryPurchasesResponse(BillingResult billingResult0, List list0) {
                if(billingResult0.getResponseCode() == 0 && list0 != null) {
                    for(Object object0: list0) {
                        TGActivity.this.handlePurchase(((Purchase)object0));
                    }
                }
            }
        });
    }

    void billingQuerySKUs(String[] arr_s) {
        Log.d("TGLOG", "billing billingQuerySKUs");
        ArrayList arrayList0 = new ArrayList();
        for(int v = 0; v < arr_s.length; ++v) {
            arrayList0.add(Product.newBuilder().setProductId(arr_s[v]).setProductType("inapp").build());
        }
        QueryProductDetailsParams queryProductDetailsParams0 = QueryProductDetailsParams.newBuilder().setProductList(arrayList0).build();
        this.billingClient.queryProductDetailsAsync(queryProductDetailsParams0, new ProductDetailsResponseListener() {
            @Override  // com.android.billingclient.api.ProductDetailsResponseListener
            public void onProductDetailsResponse(BillingResult billingResult0, List list0) {
                Log.d("TGLOG", "billing onSkuDetailsResponse");
                if(billingResult0.getResponseCode() == 4) {
                    Log.d("TGLOG", "billing onSkuDetailsResponse item unavailable");
                    return;
                }
                TGActivity.this.listProductDetails = list0;
                for(Object object0: list0) {
                    TGActivity.jni_handleSKUDetails(((ProductDetails)object0).getProductId(), ((ProductDetails)object0).getOneTimePurchaseOfferDetails().getFormattedPrice(), ((ProductDetails)object0).getOneTimePurchaseOfferDetails().getPriceCurrencyCode(), ((ProductDetails)object0).getOneTimePurchaseOfferDetails().getPriceAmountMicros());
                }
            }
        });
    }

    void billingQuerySKUs_4(String[] arr_s) {
        Builder skuDetailsParams$Builder0 = SkuDetailsParams.newBuilder();
        skuDetailsParams$Builder0.setSkusList(Arrays.asList(arr_s)).setType("inapp");
        this.billingClient.querySkuDetailsAsync(skuDetailsParams$Builder0.build(), new SkuDetailsResponseListener() {
            @Override  // com.android.billingclient.api.SkuDetailsResponseListener
            public void onSkuDetailsResponse(BillingResult billingResult0, List list0) {
                if(billingResult0.getResponseCode() == 4) {
                    Log.d("TGLOG", "billing onSkuDetailsResponse item unavailable");
                    return;
                }
                TGActivity.this.listSkuDetails = list0;
                for(Object object0: list0) {
                    TGActivity.jni_handleSKUDetails(((SkuDetails)object0).getSku(), ((SkuDetails)object0).getPrice(), ((SkuDetails)object0).getPriceCurrencyCode(), ((SkuDetails)object0).getPriceAmountMicros());
                }
            }
        });
    }

    void getFirebaseToken() {
        FirebaseMessaging.getInstance().getToken().addOnCompleteListener(new OnCompleteListener() {
            @Override  // com.google.android.gms.tasks.OnCompleteListener
            public void onComplete(Task task0) {
                if(!task0.isSuccessful()) {
                    Log.w("TGLOG", "Fetching FCM registration token failed", task0.getException());
                    return;
                }
                TGActivity.jniNewToken(((String)task0.getResult()));
            }
        });
    }

    public int getLastUnicodeChar() {
        return this.queueLastInputCharacter.isEmpty() ? 0 : ((int)(((Integer)this.queueLastInputCharacter.poll())));
    }

    void handlePurchase(Purchase purchase0) {
        com.TGActivity.TGActivity.9 tGActivity$90 = new AcknowledgePurchaseResponseListener() {
            @Override  // com.android.billingclient.api.AcknowledgePurchaseResponseListener
            public void onAcknowledgePurchaseResponse(BillingResult billingResult0) {
            }
        };
        if(purchase0.getPurchaseState() == 1) {
            ArrayList arrayList0 = purchase0.getSkus();
            String s = purchase0.getOrderId();
            String s1 = purchase0.getPurchaseToken();
            for(Object object0: arrayList0) {
                TGActivity.jni_handlePurchase(((String)object0), s, s1);
            }
            if(!purchase0.isAcknowledged()) {
                AcknowledgePurchaseParams acknowledgePurchaseParams0 = AcknowledgePurchaseParams.newBuilder().setPurchaseToken(purchase0.getPurchaseToken()).build();
                this.billingClient.acknowledgePurchase(acknowledgePurchaseParams0, tGActivity$90);
            }
        }
        else {
            Log.d("TGLOG", "handlePurchase failed " + purchase0.getPurchaseState());
        }
    }

    void hideKeyboard() {
        if(this.editText == null) {
            return;
        }
        ((InputMethodManager)this.getSystemService("input_method")).hideSoftInputFromWindow(this.editText.getWindowToken(), 0);
    }

    private void hideSystemUI() {
        this.getWindow().getDecorView().setSystemUiVisibility(0x1706);
    }

    public static native void jniNewToken(String arg0) {
    }

    public static native void jniRateDialogResult(int arg0) {
    }

    public static native String[] jni_getSkus() {
    }

    public static native void jni_handlePurchase(String arg0, String arg1, String arg2) {
    }

    public static native void jni_handleSKUDetails(String arg0, String arg1, String arg2, long arg3) {
    }

    public static native void jni_handleServiceConnected(boolean arg0) {
    }

    public native void jni_keyboard_change(String arg1, int arg2, int arg3) {
    }

    static void lambda$showRateDialog$0(Task task0) {
    }

    // 检测为 Lambda 实现
    void lambda$showRateDialog$1$com-TGActivity-TGActivity(ReviewManager reviewManager0, Task task0) [...]

    void microphoneAutoGain(boolean z) {
        AutomaticGainControl automaticGainControl0 = this.gainControl;
        if(automaticGainControl0 != null) {
            automaticGainControl0.setEnabled(z);
        }
    }

    void microphoneDispose() {
        this.recorder.release();
        this.recorder = null;
        this.echoCanceller.release();
        this.echoCanceller = null;
        this.noiseSupressor.release();
        this.noiseSupressor = null;
        AutomaticGainControl automaticGainControl0 = this.gainControl;
        if(automaticGainControl0 != null) {
            automaticGainControl0.release();
            this.gainControl = null;
        }
        AudioManager audioManager0 = (AudioManager)this.getSystemService("audio");
        audioManager0.setMode(this.oldAudioMode);
        audioManager0.setSpeakerphoneOn(this.oldSpeakerPhoneOn);
        this.micIsOn = false;
    }

    void microphoneInit() {
        AudioManager audioManager0 = (AudioManager)this.getSystemService("audio");
        this.oldAudioMode = audioManager0.getMode();
        this.oldSpeakerPhoneOn = audioManager0.isSpeakerphoneOn();
        this.micIsOn = true;
        audioManager0.setMode(3);
        if(audioManager0.isWiredHeadsetOn()) {
            audioManager0.setSpeakerphoneOn(false);
        }
        else {
            audioManager0.setSpeakerphoneOn(true);
        }
        AudioRecord audioRecord0 = new AudioRecord(7, this.sampleRate, 16, 2, this.frameSizeBytes * this.frameMultiplier);
        this.recorder = audioRecord0;
        int v = audioRecord0.getAudioSessionId();
        this.echoCanceller = AcousticEchoCanceler.create(v);
        if(NoiseSuppressor.isAvailable()) {
            this.noiseSupressor = NoiseSuppressor.create(v);
        }
        else {
            Log.d("TGLOG", "Noise suppressor not available");
        }
        if(AutomaticGainControl.isAvailable()) {
            this.gainControl = AutomaticGainControl.create(v);
            return;
        }
        Log.d("TGLOG", "AGC not available");
    }

    int microphoneSample(short[] arr_v, int v) {
        if(((AudioManager)this.getSystemService("audio")).getMode() != 3) {
            Log.d("TGLOG", "mode is no longer MODE_IN_COMMUNICATION");
        }
        if(!this.echoCanceller.getEnabled()) {
            Log.d("TGLOG", "echo canceller not enabled");
        }
        int v1 = this.frameSizeBytes / 2;
        this.audioBufferQueueLock.lock();
        if(this.audioBufferQueue.peekFirst() == null) {
            v1 = 0;
        }
        else {
            System.arraycopy(((short[])this.audioBufferQueue.removeFirst()), 0, arr_v, 0, v);
        }
        this.audioBufferQueueLock.unlock();
        return v1;
    }

    void microphoneStart() {
        Log.d("TGLOG", "mic start");
        this.recordingThread = new Thread(() -> while(TGActivity.this.isRecording) {
            int v = TGActivity.this.frameSizeBytes / 2;
            short[] arr_v = new short[v];
            int v1 = 0;
            while(true) {
                int v2 = TGActivity.this.recorder.read(arr_v, v1, v - v1);
                if(v2 < 0) {
                    Log.d("TGLOG", "error reading audio " + v2);
                }
                else {
                    int v3 = v1 + v2;
                    if(v3 >= v) {
                        break;
                    }
                    v1 = v3;
                }
            }
            TGActivity.this.audioBufferQueueLock.lock();
            if(TGActivity.this.audioBufferQueue.size() > 3) {
                TGActivity.this.audioBufferQueue.removeFirst();
            }
            TGActivity.this.audioBufferQueue.addLast(arr_v);
            TGActivity.this.audioBufferQueueLock.unlock();
        }, "AudioRecorder Thread");
        this.recorder.startRecording();
        this.isRecording = true;
        this.recordingThread.start();

        class com.TGActivity.TGActivity.1 implements Runnable {
            @Override
            public void run() {
                TGActivity.this.sampleMicrophoneThread();
            }
        }

    }

    void microphoneStop() {
        try {
            this.isRecording = false;
            this.recordingThread.join();
        }
        catch(InterruptedException unused_ex) {
            Log.d("TGLOG", "microphoneStop InterruptedException");
        }
        this.recordingThread = null;
        this.recorder.stop();
    }

    public static native void nativeCommitText(String arg0, int arg1) {
    }

    public static native void nativeDeleteSurroundingText(int arg0, int arg1) {
    }

    public static native void nativeSetComposingText(String arg0, int arg1) {
    }

    public static native void nativeSetSelection(int arg0, int arg1) {
    }

    boolean networkConnected() {
        NetworkInfo networkInfo0 = ((ConnectivityManager)this.getSystemService("connectivity")).getActiveNetworkInfo();
        return networkInfo0 != null && networkInfo0.isConnected();
    }

    boolean networkConnectedWifi() {
        NetworkInfo networkInfo0 = ((ConnectivityManager)this.getSystemService("connectivity")).getActiveNetworkInfo();
        return networkInfo0 != null && networkInfo0.isConnected() && networkInfo0.getType() == 1;
    }

    @Override  // android.app.NativeActivity
    protected void onCreate(Bundle bundle0) {
        Log.d("TGLOG", "onCreate");
        super.onCreate(bundle0);
        this.getWindow().addFlags(0x80);
        TGActivity.m_ClipboardManager = (ClipboardManager)this.getSystemService("clipboard");
        this.getFirebaseToken();
        Log.d("TGLOG", "onCreate complete");
    }

    @Override  // android.app.NativeActivity
    protected void onDestroy() {
        Log.d("TGLOG", "onDestroy() isfinishing: " + this.isFinishing() + " isChangingConfigurations: " + this.isChangingConfigurations());
        super.onDestroy();
        Log.d("TGLOG", "onDestroy() done");
    }

    @Override  // android.app.NativeActivity
    protected void onResume() {
        this.hideSystemUI();
        this.billingQuery();
        if(this.micIsOn) {
            AudioManager audioManager0 = (AudioManager)this.getSystemService("audio");
            audioManager0.setMode(3);
            if(audioManager0.isWiredHeadsetOn()) {
                audioManager0.setSpeakerphoneOn(false);
            }
            else {
                audioManager0.setSpeakerphoneOn(true);
            }
        }
        super.onResume();
    }

    @Override  // android.app.NativeActivity
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        if(z) {
            this.hideSystemUI();
        }
    }

    void quit() {
        this.finishAndRemoveTask();
    }

    // 检测为 Lambda 实现
    void sampleMicrophoneThread() [...]

    void shareImage(String s) {
        try {
            File file0 = new File(s);
            Uri uri0 = FileProvider.getUriForFile(this.getApplicationContext(), "com.templegamesgames.DominionAndroid.fileprovider", file0);
            Intent intent0 = new Intent();
            intent0.setAction("android.intent.action.SEND");
            intent0.addFlags(1);
            intent0.setDataAndType(uri0, this.getContentResolver().getType(uri0));
            intent0.putExtra("android.intent.extra.STREAM", uri0);
            intent0.setType("image/png");
            this.startActivity(Intent.createChooser(intent0, null));
        }
        catch(Exception exception0) {
            Log.d("TGLOG", "shareImage exception:" + exception0.getMessage());
        }
    }

    void showKeyboard() {
        this.showKeyboardFull("", 0, 0);
    }

    void showKeyboardFull(String s, int v, int v1) {
        this.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(TGActivity.this.editText == null) {
                    TGActivity.this.editText = new MyEditText(TGActivity.this, this);
                    MyEditText tGActivity$MyEditText0 = TGActivity.this.editText;
                    ViewGroup.LayoutParams viewGroup$LayoutParams0 = new ViewGroup.LayoutParams(-2, -2);
                    TGActivity.this.addContentView(tGActivity$MyEditText0, viewGroup$LayoutParams0);
                }
                TGActivity.this.editText.setFocusable(true);
                TGActivity.this.editText.setFocusableInTouchMode(true);
                TGActivity.this.editText.setText(s);
                TGActivity.this.editText.setSelection(v, v1);
                TGActivity.this.editText.requestFocus();
                ((InputMethodManager)TGActivity.this.getSystemService("input_method")).showSoftInput(TGActivity.this.editText, 2);
            }
        });
    }

    public void showRateDialog() {
        ReviewManager reviewManager0 = ReviewManagerFactory.create(this);
        reviewManager0.requestReviewFlow().addOnCompleteListener((Task task0) -> if(task0.isSuccessful()) {
            reviewManager0.launchReviewFlow(this, ((ReviewInfo)task0.getResult())).addOnCompleteListener(new TGActivity..ExternalSyntheticLambda1());
        });
    }

    public void showRateDialog_old(String s, String s1, String s2) {
        Log.d("TGLOG", "show rate dlg");
        this.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AlertDialog.Builder alertDialog$Builder0 = new AlertDialog.Builder(this, 2);
                alertDialog$Builder0.setTitle("Rate " + s);
                alertDialog$Builder0.setMessage("If you\'re enjoying " + s + ", please take a moment to rate it.\n\nThanks for your support!");
                alertDialog$Builder0.setNeutralButton("Remind me later", new DialogInterface.OnClickListener() {
                    @Override  // android.content.DialogInterface$OnClickListener
                    public void onClick(DialogInterface dialogInterface0, int v) {
                        dialogInterface0.dismiss();
                        TGActivity.jniRateDialogResult(2);
                    }
                });
                alertDialog$Builder0.setPositiveButton("Rate " + s1 + "!", new DialogInterface.OnClickListener() {
                    @Override  // android.content.DialogInterface$OnClickListener
                    public void onClick(DialogInterface dialogInterface0, int v) {
                        Intent intent0 = new Intent("android.intent.action.VIEW", Uri.parse(("market://details?id=" + com.TGActivity.TGActivity.2.this.val$APP_PRODUCT_URL)));
                        com.TGActivity.TGActivity.2.this.val$context.startActivity(intent0);
                        dialogInterface0.dismiss();
                        TGActivity.jniRateDialogResult(1);
                    }
                });
                alertDialog$Builder0.setNegativeButton("No, thanks", new DialogInterface.OnClickListener() {
                    @Override  // android.content.DialogInterface$OnClickListener
                    public void onClick(DialogInterface dialogInterface0, int v) {
                        dialogInterface0.dismiss();
                        TGActivity.jniRateDialogResult(3);
                    }
                });
                alertDialog$Builder0.show();
            }
        });
    }
}

