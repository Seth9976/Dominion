.class public Lcom/TGActivity/TGActivity;
.super Landroid/app/NativeActivity;
.source "TGActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/TGActivity/TGActivity$MyEditText;,
        Lcom/TGActivity/TGActivity$OldMyEditText;,
        Lcom/TGActivity/TGActivity$MusicIntentReceiver;,
        Lcom/TGActivity/TGActivity$Channels;
    }
.end annotation


# static fields
.field static final synthetic $assertionsDisabled:Z = false

.field public static final TAG:Ljava/lang/String; = "TGLOG"

.field private static m_ClipboardManager:Landroid/content/ClipboardManager;


# instance fields
.field public MUSIC_SOUND_ID:I

.field audioBufferQueue:Ljava/util/ArrayDeque;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayDeque<",
            "[S>;"
        }
    .end annotation
.end field

.field audioBufferQueueLock:Ljava/util/concurrent/locks/ReentrantLock;

.field private billingClient:Lcom/android/billingclient/api/BillingClient;

.field echoCanceller:Landroid/media/audiofx/AcousticEchoCanceler;

.field editText:Lcom/TGActivity/TGActivity$MyEditText;

.field frameMultiplier:I

.field frameSizeBytes:I

.field g_editText:Lcom/TGActivity/TGActivity$OldMyEditText;

.field gainControl:Landroid/media/audiofx/AutomaticGainControl;

.field volatile isRecording:Z

.field volatile listProductDetails:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/android/billingclient/api/ProductDetails;",
            ">;"
        }
    .end annotation
.end field

.field volatile listSkuDetails:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/android/billingclient/api/SkuDetails;",
            ">;"
        }
    .end annotation
.end field

.field mediaPlayer:Landroid/media/MediaPlayer;

.field micIsOn:Z

.field noiseSupressor:Landroid/media/audiofx/NoiseSuppressor;

.field oldAudioMode:I

.field oldSpeakerPhoneOn:Z

.field queueLastInputCharacter:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field recorder:Landroid/media/AudioRecord;

.field recordingThread:Ljava/lang/Thread;

.field sampleRate:I

.field volatile shared_audioData:[S

.field soundPool:Landroid/media/SoundPool;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const-string v0, "LoadLibrary"

    const-string v1, "TGLOG"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "TGGAndroid"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    const-string v0, "LoadLibrary done"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Landroid/app/NativeActivity;-><init>()V

    const/16 v0, 0x3e80

    iput v0, p0, Lcom/TGActivity/TGActivity;->sampleRate:I

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->recorder:Landroid/media/AudioRecord;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->echoCanceller:Landroid/media/audiofx/AcousticEchoCanceler;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->noiseSupressor:Landroid/media/audiofx/NoiseSuppressor;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->gainControl:Landroid/media/audiofx/AutomaticGainControl;

    mul-int/lit8 v0, v0, 0x14

    div-int/lit16 v0, v0, 0x3e8

    mul-int/lit8 v0, v0, 0x2

    iput v0, p0, Lcom/TGActivity/TGActivity;->frameSizeBytes:I

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->recordingThread:Ljava/lang/Thread;

    const/4 v0, 0x3

    iput v0, p0, Lcom/TGActivity/TGActivity;->frameMultiplier:I

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->shared_audioData:[S

    new-instance v2, Ljava/util/concurrent/locks/ReentrantLock;

    invoke-direct {v2}, Ljava/util/concurrent/locks/ReentrantLock;-><init>()V

    iput-object v2, p0, Lcom/TGActivity/TGActivity;->audioBufferQueueLock:Ljava/util/concurrent/locks/ReentrantLock;

    new-instance v2, Ljava/util/ArrayDeque;

    invoke-direct {v2, v0}, Ljava/util/ArrayDeque;-><init>(I)V

    iput-object v2, p0, Lcom/TGActivity/TGActivity;->audioBufferQueue:Ljava/util/ArrayDeque;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    const/4 v0, -0x1

    iput v0, p0, Lcom/TGActivity/TGActivity;->MUSIC_SOUND_ID:I

    new-instance v0, Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentLinkedQueue;-><init>()V

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->queueLastInputCharacter:Ljava/util/Queue;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->listSkuDetails:Ljava/util/List;

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->listProductDetails:Ljava/util/List;

    return-void
.end method

.method public static native SetSafeRect(IIII)V
.end method

.method private hideSystemUI()V
    .locals 2

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1706

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    return-void
.end method

.method public static native jniNewToken(Ljava/lang/String;)V
.end method

.method public static native jniRateDialogResult(I)V
.end method

.method public static native jni_getSkus()[Ljava/lang/String;
.end method

.method public static native jni_handlePurchase(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end method

.method public static native jni_handleSKUDetails(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
.end method

.method public static native jni_handleServiceConnected(Z)V
.end method

.method static synthetic lambda$showRateDialog$0(Lcom/google/android/gms/tasks/Task;)V
    .locals 0

    return-void
.end method

.method public static native nativeCommitText(Ljava/lang/String;I)V
.end method

.method public static native nativeDeleteSurroundingText(II)V
.end method

.method public static native nativeSetComposingText(Ljava/lang/String;I)V
.end method

.method public static native nativeSetSelection(II)V
.end method


# virtual methods
.method GoogleGamecenterOnCreate()V
    .locals 1

    const/4 v0, 0x3

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->setVolumeControlStream(I)V

    return-void
.end method

.method KeyboardClose()V
    .locals 1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->g_editText:Lcom/TGActivity/TGActivity$OldMyEditText;

    invoke-virtual {v0}, Lcom/TGActivity/TGActivity$OldMyEditText;->clearFocus()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->g_editText:Lcom/TGActivity/TGActivity$OldMyEditText;

    return-void
.end method

.method public KeyboardOpen(Ljava/lang/String;II)V
    .locals 2

    new-instance v0, Lcom/TGActivity/TGActivity$OldMyEditText;

    invoke-direct {v0, p0, p0}, Lcom/TGActivity/TGActivity$OldMyEditText;-><init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->g_editText:Lcom/TGActivity/TGActivity$OldMyEditText;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/TGActivity/TGActivity$OldMyEditText;->setInputType(I)V

    invoke-virtual {p0, p1, p2, p3}, Lcom/TGActivity/TGActivity;->KeyboardSet(Ljava/lang/String;II)V

    iget-object p1, p0, Lcom/TGActivity/TGActivity;->g_editText:Lcom/TGActivity/TGActivity$OldMyEditText;

    invoke-virtual {p1}, Lcom/TGActivity/TGActivity$OldMyEditText;->requestFocus()Z

    return-void
.end method

.method KeyboardSet(Ljava/lang/String;II)V
    .locals 2

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->g_editText:Lcom/TGActivity/TGActivity$OldMyEditText;

    sget-object v1, Landroid/widget/TextView$BufferType;->EDITABLE:Landroid/widget/TextView$BufferType;

    invoke-virtual {v0, p1, v1}, Lcom/TGActivity/TGActivity$OldMyEditText;->setText(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V

    iget-object p1, p0, Lcom/TGActivity/TGActivity;->g_editText:Lcom/TGActivity/TGActivity$OldMyEditText;

    invoke-virtual {p1, p2, p3}, Lcom/TGActivity/TGActivity$OldMyEditText;->setSelection(II)V

    return-void
.end method

.method public LoadMusic(Ljava/lang/String;II)I
    .locals 9

    const-string v0, "TGLOG"

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    if-nez v1, :cond_0

    new-instance v1, Landroid/media/MediaPlayer;

    invoke-direct {v1}, Landroid/media/MediaPlayer;-><init>()V

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    :cond_0
    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {v1, p1}, Landroid/content/res/AssetManager;->openFd(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object p1

    iget-object v3, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {p1}, Landroid/content/res/AssetFileDescriptor;->getFileDescriptor()Ljava/io/FileDescriptor;

    move-result-object v4

    invoke-virtual {p1}, Landroid/content/res/AssetFileDescriptor;->getStartOffset()J

    move-result-wide v5

    int-to-long p1, p2

    add-long/2addr v5, p1

    int-to-long v7, p3

    invoke-virtual/range {v3 .. v8}, Landroid/media/MediaPlayer;->setDataSource(Ljava/io/FileDescriptor;JJ)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    iget-object p1, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->prepare()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    iget p1, p0, Lcom/TGActivity/TGActivity;->MUSIC_SOUND_ID:I

    return p1

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "IOException prepare: "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :catch_1
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "IOException: "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v2
.end method

.method public LoadSound(Ljava/lang/String;III)I
    .locals 7

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    if-nez v0, :cond_0

    new-instance v0, Landroid/media/AudioAttributes$Builder;

    invoke-direct {v0}, Landroid/media/AudioAttributes$Builder;-><init>()V

    const/16 v1, 0xe

    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setUsage(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setContentType(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/media/AudioAttributes$Builder;->build()Landroid/media/AudioAttributes;

    move-result-object v0

    new-instance v1, Landroid/media/SoundPool$Builder;

    invoke-direct {v1}, Landroid/media/SoundPool$Builder;-><init>()V

    invoke-virtual {v1, v0}, Landroid/media/SoundPool$Builder;->setAudioAttributes(Landroid/media/AudioAttributes;)Landroid/media/SoundPool$Builder;

    move-result-object v0

    const/16 v1, 0x40

    invoke-virtual {v0, v1}, Landroid/media/SoundPool$Builder;->setMaxStreams(I)Landroid/media/SoundPool$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/media/SoundPool$Builder;->build()Landroid/media/SoundPool;

    move-result-object v0

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    :cond_0
    if-eqz p4, :cond_1

    invoke-virtual {p0, p1, p2, p3}, Lcom/TGActivity/TGActivity;->LoadMusic(Ljava/lang/String;II)I

    move-result p1

    return p1

    :cond_1
    :try_start_0
    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p4

    invoke-virtual {p4, p1}, Landroid/content/res/AssetManager;->openFd(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object p1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    invoke-virtual {p1}, Landroid/content/res/AssetFileDescriptor;->getFileDescriptor()Ljava/io/FileDescriptor;

    move-result-object v1

    invoke-virtual {p1}, Landroid/content/res/AssetFileDescriptor;->getStartOffset()J

    move-result-wide v2

    int-to-long p1, p2

    add-long/2addr v2, p1

    int-to-long v4, p3

    const/4 v6, 0x1

    invoke-virtual/range {v0 .. v6}, Landroid/media/SoundPool;->load(Ljava/io/FileDescriptor;JJI)I

    move-result p1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "IOException: "

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "TGLOG"

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    return p1
.end method

.method OnKeyboardChange(Landroid/widget/EditText;)V
    .locals 2

    invoke-virtual {p1}, Landroid/widget/EditText;->getSelectionStart()I

    move-result v0

    invoke-virtual {p1}, Landroid/widget/EditText;->getSelectionEnd()I

    move-result v1

    invoke-virtual {p1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1, v0, v1}, Lcom/TGActivity/TGActivity;->jni_keyboard_change(Ljava/lang/String;II)V

    return-void
.end method

.method public PlaySound(IFIF)I
    .locals 7

    iget v0, p0, Lcom/TGActivity/TGActivity;->MUSIC_SOUND_ID:I

    if-ne p1, v0, :cond_1

    if-eqz p3, :cond_0

    iget-object p3, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    const/4 p4, 0x1

    invoke-virtual {p3, p4}, Landroid/media/MediaPlayer;->setLooping(Z)V

    :cond_0
    iget-object p3, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {p3, p2, p2}, Landroid/media/MediaPlayer;->setVolume(FF)V

    iget-object p2, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {p2}, Landroid/media/MediaPlayer;->start()V

    return p1

    :cond_1
    const/4 v4, 0x0

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    move v1, p1

    move v2, p2

    move v3, p2

    move v5, p3

    move v6, p4

    invoke-virtual/range {v0 .. v6}, Landroid/media/SoundPool;->play(IFFIIF)I

    move-result p2

    if-nez p2, :cond_2

    new-instance p3, Ljava/lang/StringBuilder;

    const-string p4, "soundPool.play returned 0 id:"

    invoke-direct {p3, p4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "TGLOG"

    invoke-static {p3, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return p2
.end method

.method public StreamSetVolume(IF)V
    .locals 1

    iget v0, p0, Lcom/TGActivity/TGActivity;->MUSIC_SOUND_ID:I

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {p1, p2, p2}, Landroid/media/MediaPlayer;->setVolume(FF)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    invoke-virtual {v0, p1, p2, p2}, Landroid/media/SoundPool;->setVolume(IFF)V

    return-void
.end method

.method public StreamStop(I)V
    .locals 1

    iget v0, p0, Lcom/TGActivity/TGActivity;->MUSIC_SOUND_ID:I

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/TGActivity/TGActivity;->mediaPlayer:Landroid/media/MediaPlayer;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->stop()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    invoke-virtual {v0, p1}, Landroid/media/SoundPool;->stop(I)V

    return-void
.end method

.method public UnloadSound(I)I
    .locals 1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->soundPool:Landroid/media/SoundPool;

    invoke-virtual {v0, p1}, Landroid/media/SoundPool;->unload(I)Z

    const/4 p1, 0x1

    return p1
.end method

.method XClearNotifications()V
    .locals 1

    const-string v0, "notification"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    invoke-virtual {v0}, Landroid/app/NotificationManager;->cancelAll()V

    return-void
.end method

.method XClipboardCanPasteText()Z
    .locals 4

    const-string v0, "TGLOG"

    const/4 v1, 0x0

    :try_start_0
    sget-object v2, Lcom/TGActivity/TGActivity;->m_ClipboardManager:Landroid/content/ClipboardManager;

    if-nez v2, :cond_0

    const-string v2, "XClipboardCanPasteText clipboard==null"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_0
    invoke-virtual {v2}, Landroid/content/ClipboardManager;->hasPrimaryClip()Z

    move-result v3

    if-nez v3, :cond_1

    const-string v2, "XClipboardCanPasteText hasPrimaryClip==false"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_1
    invoke-virtual {v2}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v2

    if-nez v2, :cond_2

    const-string v2, "XClipboardCanPasteText primaryClip==null"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_2
    invoke-virtual {v2}, Landroid/content/ClipData$Item;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    if-nez v2, :cond_3

    const-string v2, "XClipboardCanPasteText itemText==null"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :cond_3
    const/4 v0, 0x1

    return v0

    :catch_0
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v1
.end method

.method XClipboardCopyText(Ljava/lang/String;)V
    .locals 2

    sget-object v0, Lcom/TGActivity/TGActivity;->m_ClipboardManager:Landroid/content/ClipboardManager;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v1, "friend code"

    invoke-static {v1, p1}, Landroid/content/ClipData;->newPlainText(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/ClipboardManager;->setPrimaryClip(Landroid/content/ClipData;)V

    return-void
.end method

.method XClipboardPasteText()Ljava/lang/String;
    .locals 4

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->XClipboardCanPasteText()Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    sget-object v0, Lcom/TGActivity/TGActivity;->m_ClipboardManager:Landroid/content/ClipboardManager;

    invoke-virtual {v0}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/ClipData$Item;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    if-nez v0, :cond_1

    return-object v1

    :cond_1
    invoke-interface {v0}, Ljava/lang/CharSequence;->length()I

    move-result v1

    const/16 v3, 0x80

    invoke-static {v1, v3}, Ljava/lang/Math;->min(II)I

    move-result v1

    invoke-interface {v0, v2, v1}, Ljava/lang/CharSequence;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method XOpenURL(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-direct {v0, v1, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method XSaveFileDir()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method adjustVolume(I)F
    .locals 3

    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    const/4 v1, 0x0

    const/4 v2, 0x3

    invoke-virtual {v0, v2, p1, v1}, Landroid/media/AudioManager;->adjustStreamVolume(III)V

    invoke-virtual {v0, v2}, Landroid/media/AudioManager;->getStreamMaxVolume(I)I

    move-result p1

    invoke-virtual {v0, v2}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result v0

    int-to-float v0, v0

    int-to-float p1, p1

    div-float/2addr v0, p1

    return v0
.end method

.method askNotificationPermission()V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x21

    if-lt v0, v1, :cond_1

    const-string v0, "android.permission.POST_NOTIFICATIONS"

    invoke-static {p0, v0}, Landroidx/core/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_0

    return-void

    :cond_0
    invoke-static {p0, v0}, Landroidx/core/app/ActivityCompat;->shouldShowRequestPermissionRationale(Landroid/app/Activity;Ljava/lang/String;)Z

    const/4 v1, 0x1

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v1}, Landroidx/core/app/ActivityCompat;->requestPermissions(Landroid/app/Activity;[Ljava/lang/String;I)V

    :cond_1
    return-void
.end method

.method billingConnect()V
    .locals 2

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    const-string v1, "TGLOG"

    if-nez v0, :cond_0

    const-string v0, "billingConnect called before init"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    const-string v0, "billingConnect"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    new-instance v1, Lcom/TGActivity/TGActivity$6;

    invoke-direct {v1, p0}, Lcom/TGActivity/TGActivity$6;-><init>(Lcom/TGActivity/TGActivity;)V

    invoke-virtual {v0, v1}, Lcom/android/billingclient/api/BillingClient;->startConnection(Lcom/android/billingclient/api/BillingClientStateListener;)V

    return-void
.end method

.method billingInit()V
    .locals 3

    const-string v0, "billingInit"

    const-string v1, "TGLOG"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lcom/TGActivity/TGActivity$4;

    invoke-direct {v0, p0}, Lcom/TGActivity/TGActivity$4;-><init>(Lcom/TGActivity/TGActivity;)V

    invoke-static {p0}, Lcom/android/billingclient/api/BillingClient;->newBuilder(Landroid/content/Context;)Lcom/android/billingclient/api/BillingClient$Builder;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/android/billingclient/api/BillingClient$Builder;->setListener(Lcom/android/billingclient/api/PurchasesUpdatedListener;)Lcom/android/billingclient/api/BillingClient$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/android/billingclient/api/BillingClient$Builder;->enablePendingPurchases()Lcom/android/billingclient/api/BillingClient$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/android/billingclient/api/BillingClient$Builder;->build()Lcom/android/billingclient/api/BillingClient;

    move-result-object v0

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->billingConnect()V

    const-string v0, "billingInit complete"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method billingLaunchPurchaseFlow(Ljava/lang/String;)I
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "billing billingLaunchPurchaseFlow for (v5) "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TGLOG"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->listProductDetails:Ljava/util/List;

    const/4 v2, -0x1

    if-nez v0, :cond_0

    const-string p1, "listProductDetails null"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :cond_0
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->listProductDetails:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/android/billingclient/api/ProductDetails;

    invoke-virtual {v3}, Lcom/android/billingclient/api/ProductDetails;->getProductId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    goto :goto_0

    :cond_2
    const/4 v3, 0x0

    :goto_0
    if-nez v3, :cond_3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "billing billingLaunchPurchaseFlow skuUnavailable v5 "

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :cond_3
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    invoke-static {}, Lcom/android/billingclient/api/BillingFlowParams$ProductDetailsParams;->newBuilder()Lcom/android/billingclient/api/BillingFlowParams$ProductDetailsParams$Builder;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/android/billingclient/api/BillingFlowParams$ProductDetailsParams$Builder;->setProductDetails(Lcom/android/billingclient/api/ProductDetails;)Lcom/android/billingclient/api/BillingFlowParams$ProductDetailsParams$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/android/billingclient/api/BillingFlowParams$ProductDetailsParams$Builder;->build()Lcom/android/billingclient/api/BillingFlowParams$ProductDetailsParams;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/android/billingclient/api/BillingFlowParams;->newBuilder()Lcom/android/billingclient/api/BillingFlowParams$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/android/billingclient/api/BillingFlowParams$Builder;->setProductDetailsParamsList(Ljava/util/List;)Lcom/android/billingclient/api/BillingFlowParams$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/android/billingclient/api/BillingFlowParams$Builder;->build()Lcom/android/billingclient/api/BillingFlowParams;

    move-result-object p1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    invoke-virtual {v0, p0, p1}, Lcom/android/billingclient/api/BillingClient;->launchBillingFlow(Landroid/app/Activity;Lcom/android/billingclient/api/BillingFlowParams;)Lcom/android/billingclient/api/BillingResult;

    move-result-object p1

    invoke-virtual {p1}, Lcom/android/billingclient/api/BillingResult;->getResponseCode()I

    move-result p1

    if-eqz p1, :cond_7

    const/4 v0, 0x1

    if-eq p1, v0, :cond_6

    const/4 v0, 0x4

    if-eq p1, v0, :cond_5

    const/4 v0, 0x7

    if-eq p1, v0, :cond_4

    const/4 p1, -0x5

    return p1

    :cond_4
    const/4 p1, -0x2

    return p1

    :cond_5
    const/4 p1, -0x3

    return p1

    :cond_6
    const/4 p1, -0x4

    return p1

    :cond_7
    const/4 p1, 0x0

    return p1
.end method

.method billingLaunchPurchaseFlow_4(Ljava/lang/String;)I
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "billing billingLaunchPurchaseFlow for "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TGLOG"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->listSkuDetails:Ljava/util/List;

    const/4 v2, -0x1

    if-nez v0, :cond_0

    const-string p1, "listSkuDetails null"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :cond_0
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->listSkuDetails:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/android/billingclient/api/SkuDetails;

    invoke-virtual {v3}, Lcom/android/billingclient/api/SkuDetails;->getSku()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    goto :goto_0

    :cond_2
    const/4 v3, 0x0

    :goto_0
    if-nez v3, :cond_3

    const-string p1, "billing billingLaunchPurchaseFlow skuUnavailable"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    :cond_3
    invoke-static {}, Lcom/android/billingclient/api/BillingFlowParams;->newBuilder()Lcom/android/billingclient/api/BillingFlowParams$Builder;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/android/billingclient/api/BillingFlowParams$Builder;->setSkuDetails(Lcom/android/billingclient/api/SkuDetails;)Lcom/android/billingclient/api/BillingFlowParams$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/android/billingclient/api/BillingFlowParams$Builder;->build()Lcom/android/billingclient/api/BillingFlowParams;

    move-result-object p1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    invoke-virtual {v0, p0, p1}, Lcom/android/billingclient/api/BillingClient;->launchBillingFlow(Landroid/app/Activity;Lcom/android/billingclient/api/BillingFlowParams;)Lcom/android/billingclient/api/BillingResult;

    move-result-object p1

    invoke-virtual {p1}, Lcom/android/billingclient/api/BillingResult;->getResponseCode()I

    move-result p1

    if-eqz p1, :cond_7

    const/4 v0, 0x1

    if-eq p1, v0, :cond_6

    const/4 v0, 0x4

    if-eq p1, v0, :cond_5

    const/4 v0, 0x7

    if-eq p1, v0, :cond_4

    const/4 p1, -0x5

    return p1

    :cond_4
    const/4 p1, -0x2

    return p1

    :cond_5
    const/4 p1, -0x3

    return p1

    :cond_6
    const/4 p1, -0x4

    return p1

    :cond_7
    const/4 p1, 0x0

    return p1
.end method

.method billingQuery()V
    .locals 3

    const-string v0, "billingQuery"

    const-string v1, "TGLOG"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {}, Lcom/TGActivity/TGActivity;->jni_getSkus()[Ljava/lang/String;

    move-result-object v0

    array-length v2, v0

    if-nez v2, :cond_0

    const-string v0, "billingQuery no skus"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->billingQuerySKUs([Ljava/lang/String;)V

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    invoke-static {}, Lcom/android/billingclient/api/QueryPurchasesParams;->newBuilder()Lcom/android/billingclient/api/QueryPurchasesParams$Builder;

    move-result-object v1

    const-string v2, "inapp"

    invoke-virtual {v1, v2}, Lcom/android/billingclient/api/QueryPurchasesParams$Builder;->setProductType(Ljava/lang/String;)Lcom/android/billingclient/api/QueryPurchasesParams$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/android/billingclient/api/QueryPurchasesParams$Builder;->build()Lcom/android/billingclient/api/QueryPurchasesParams;

    move-result-object v1

    new-instance v2, Lcom/TGActivity/TGActivity$5;

    invoke-direct {v2, p0}, Lcom/TGActivity/TGActivity$5;-><init>(Lcom/TGActivity/TGActivity;)V

    invoke-virtual {v0, v1, v2}, Lcom/android/billingclient/api/BillingClient;->queryPurchasesAsync(Lcom/android/billingclient/api/QueryPurchasesParams;Lcom/android/billingclient/api/PurchasesResponseListener;)V

    return-void
.end method

.method billingQuerySKUs([Ljava/lang/String;)V
    .locals 4

    const-string v0, "TGLOG"

    const-string v1, "billing billingQuerySKUs"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    invoke-static {}, Lcom/android/billingclient/api/QueryProductDetailsParams$Product;->newBuilder()Lcom/android/billingclient/api/QueryProductDetailsParams$Product$Builder;

    move-result-object v2

    aget-object v3, p1, v1

    invoke-virtual {v2, v3}, Lcom/android/billingclient/api/QueryProductDetailsParams$Product$Builder;->setProductId(Ljava/lang/String;)Lcom/android/billingclient/api/QueryProductDetailsParams$Product$Builder;

    move-result-object v2

    const-string v3, "inapp"

    invoke-virtual {v2, v3}, Lcom/android/billingclient/api/QueryProductDetailsParams$Product$Builder;->setProductType(Ljava/lang/String;)Lcom/android/billingclient/api/QueryProductDetailsParams$Product$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/android/billingclient/api/QueryProductDetailsParams$Product$Builder;->build()Lcom/android/billingclient/api/QueryProductDetailsParams$Product;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/android/billingclient/api/QueryProductDetailsParams;->newBuilder()Lcom/android/billingclient/api/QueryProductDetailsParams$Builder;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/android/billingclient/api/QueryProductDetailsParams$Builder;->setProductList(Ljava/util/List;)Lcom/android/billingclient/api/QueryProductDetailsParams$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/android/billingclient/api/QueryProductDetailsParams$Builder;->build()Lcom/android/billingclient/api/QueryProductDetailsParams;

    move-result-object p1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    new-instance v1, Lcom/TGActivity/TGActivity$7;

    invoke-direct {v1, p0}, Lcom/TGActivity/TGActivity$7;-><init>(Lcom/TGActivity/TGActivity;)V

    invoke-virtual {v0, p1, v1}, Lcom/android/billingclient/api/BillingClient;->queryProductDetailsAsync(Lcom/android/billingclient/api/QueryProductDetailsParams;Lcom/android/billingclient/api/ProductDetailsResponseListener;)V

    return-void
.end method

.method billingQuerySKUs_4([Ljava/lang/String;)V
    .locals 2

    invoke-static {}, Lcom/android/billingclient/api/SkuDetailsParams;->newBuilder()Lcom/android/billingclient/api/SkuDetailsParams$Builder;

    move-result-object v0

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/android/billingclient/api/SkuDetailsParams$Builder;->setSkusList(Ljava/util/List;)Lcom/android/billingclient/api/SkuDetailsParams$Builder;

    move-result-object p1

    const-string v1, "inapp"

    invoke-virtual {p1, v1}, Lcom/android/billingclient/api/SkuDetailsParams$Builder;->setType(Ljava/lang/String;)Lcom/android/billingclient/api/SkuDetailsParams$Builder;

    iget-object p1, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    invoke-virtual {v0}, Lcom/android/billingclient/api/SkuDetailsParams$Builder;->build()Lcom/android/billingclient/api/SkuDetailsParams;

    move-result-object v0

    new-instance v1, Lcom/TGActivity/TGActivity$8;

    invoke-direct {v1, p0}, Lcom/TGActivity/TGActivity$8;-><init>(Lcom/TGActivity/TGActivity;)V

    invoke-virtual {p1, v0, v1}, Lcom/android/billingclient/api/BillingClient;->querySkuDetailsAsync(Lcom/android/billingclient/api/SkuDetailsParams;Lcom/android/billingclient/api/SkuDetailsResponseListener;)V

    return-void
.end method

.method getFirebaseToken()V
    .locals 2

    invoke-static {}, Lcom/google/firebase/messaging/FirebaseMessaging;->getInstance()Lcom/google/firebase/messaging/FirebaseMessaging;

    move-result-object v0

    invoke-virtual {v0}, Lcom/google/firebase/messaging/FirebaseMessaging;->getToken()Lcom/google/android/gms/tasks/Task;

    move-result-object v0

    new-instance v1, Lcom/TGActivity/TGActivity$10;

    invoke-direct {v1, p0}, Lcom/TGActivity/TGActivity$10;-><init>(Lcom/TGActivity/TGActivity;)V

    invoke-virtual {v0, v1}, Lcom/google/android/gms/tasks/Task;->addOnCompleteListener(Lcom/google/android/gms/tasks/OnCompleteListener;)Lcom/google/android/gms/tasks/Task;

    return-void
.end method

.method public getLastUnicodeChar()I
    .locals 1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->queueLastInputCharacter:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->queueLastInputCharacter:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method handlePurchase(Lcom/android/billingclient/api/Purchase;)V
    .locals 5

    new-instance v0, Lcom/TGActivity/TGActivity$9;

    invoke-direct {v0, p0}, Lcom/TGActivity/TGActivity$9;-><init>(Lcom/TGActivity/TGActivity;)V

    invoke-virtual {p1}, Lcom/android/billingclient/api/Purchase;->getPurchaseState()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    invoke-virtual {p1}, Lcom/android/billingclient/api/Purchase;->getSkus()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {p1}, Lcom/android/billingclient/api/Purchase;->getOrderId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/android/billingclient/api/Purchase;->getPurchaseToken()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-static {v4, v2, v3}, Lcom/TGActivity/TGActivity;->jni_handlePurchase(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/android/billingclient/api/Purchase;->isAcknowledged()Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {}, Lcom/android/billingclient/api/AcknowledgePurchaseParams;->newBuilder()Lcom/android/billingclient/api/AcknowledgePurchaseParams$Builder;

    move-result-object v1

    invoke-virtual {p1}, Lcom/android/billingclient/api/Purchase;->getPurchaseToken()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/android/billingclient/api/AcknowledgePurchaseParams$Builder;->setPurchaseToken(Ljava/lang/String;)Lcom/android/billingclient/api/AcknowledgePurchaseParams$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/android/billingclient/api/AcknowledgePurchaseParams$Builder;->build()Lcom/android/billingclient/api/AcknowledgePurchaseParams;

    move-result-object p1

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->billingClient:Lcom/android/billingclient/api/BillingClient;

    invoke-virtual {v1, p1, v0}, Lcom/android/billingclient/api/BillingClient;->acknowledgePurchase(Lcom/android/billingclient/api/AcknowledgePurchaseParams;Lcom/android/billingclient/api/AcknowledgePurchaseResponseListener;)V

    goto :goto_1

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "handlePurchase failed "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/android/billingclient/api/Purchase;->getPurchaseState()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "TGLOG"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :goto_1
    return-void
.end method

.method hideKeyboard()V
    .locals 3

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v0, "input_method"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    invoke-virtual {v1}, Lcom/TGActivity/TGActivity$MyEditText;->getWindowToken()Landroid/os/IBinder;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/inputmethod/InputMethodManager;->hideSoftInputFromWindow(Landroid/os/IBinder;I)Z

    return-void
.end method

.method public native jni_keyboard_change(Ljava/lang/String;II)V
.end method

.method synthetic lambda$showRateDialog$1$com-TGActivity-TGActivity(Lcom/google/android/play/core/review/ReviewManager;Lcom/google/android/gms/tasks/Task;)V
    .locals 1

    invoke-virtual {p2}, Lcom/google/android/gms/tasks/Task;->isSuccessful()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p2}, Lcom/google/android/gms/tasks/Task;->getResult()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/google/android/play/core/review/ReviewInfo;

    invoke-interface {p1, p0, p2}, Lcom/google/android/play/core/review/ReviewManager;->launchReviewFlow(Landroid/app/Activity;Lcom/google/android/play/core/review/ReviewInfo;)Lcom/google/android/gms/tasks/Task;

    move-result-object p1

    new-instance p2, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda1;

    invoke-direct {p2}, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda1;-><init>()V

    invoke-virtual {p1, p2}, Lcom/google/android/gms/tasks/Task;->addOnCompleteListener(Lcom/google/android/gms/tasks/OnCompleteListener;)Lcom/google/android/gms/tasks/Task;

    :cond_0
    return-void
.end method

.method microphoneAutoGain(Z)V
    .locals 1

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->gainControl:Landroid/media/audiofx/AutomaticGainControl;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Landroid/media/audiofx/AutomaticGainControl;->setEnabled(Z)I

    :cond_0
    return-void
.end method

.method microphoneDispose()V
    .locals 2

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->recorder:Landroid/media/AudioRecord;

    invoke-virtual {v0}, Landroid/media/AudioRecord;->release()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->recorder:Landroid/media/AudioRecord;

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->echoCanceller:Landroid/media/audiofx/AcousticEchoCanceler;

    invoke-virtual {v1}, Landroid/media/audiofx/AcousticEchoCanceler;->release()V

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->echoCanceller:Landroid/media/audiofx/AcousticEchoCanceler;

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->noiseSupressor:Landroid/media/audiofx/NoiseSuppressor;

    invoke-virtual {v1}, Landroid/media/audiofx/NoiseSuppressor;->release()V

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->noiseSupressor:Landroid/media/audiofx/NoiseSuppressor;

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->gainControl:Landroid/media/audiofx/AutomaticGainControl;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Landroid/media/audiofx/AutomaticGainControl;->release()V

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->gainControl:Landroid/media/audiofx/AutomaticGainControl;

    :cond_0
    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    iget v1, p0, Lcom/TGActivity/TGActivity;->oldAudioMode:I

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setMode(I)V

    iget-boolean v1, p0, Lcom/TGActivity/TGActivity;->oldSpeakerPhoneOn:Z

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/TGActivity/TGActivity;->micIsOn:Z

    return-void
.end method

.method microphoneInit()V
    .locals 8

    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    invoke-virtual {v0}, Landroid/media/AudioManager;->getMode()I

    move-result v1

    iput v1, p0, Lcom/TGActivity/TGActivity;->oldAudioMode:I

    invoke-virtual {v0}, Landroid/media/AudioManager;->isSpeakerphoneOn()Z

    move-result v1

    iput-boolean v1, p0, Lcom/TGActivity/TGActivity;->oldSpeakerPhoneOn:Z

    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/TGActivity/TGActivity;->micIsOn:Z

    const/4 v2, 0x3

    invoke-virtual {v0, v2}, Landroid/media/AudioManager;->setMode(I)V

    invoke-virtual {v0}, Landroid/media/AudioManager;->isWiredHeadsetOn()Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    goto :goto_0

    :cond_0
    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    :goto_0
    new-instance v0, Landroid/media/AudioRecord;

    iget v4, p0, Lcom/TGActivity/TGActivity;->sampleRate:I

    iget v1, p0, Lcom/TGActivity/TGActivity;->frameSizeBytes:I

    iget v2, p0, Lcom/TGActivity/TGActivity;->frameMultiplier:I

    mul-int v7, v1, v2

    const/4 v3, 0x7

    const/16 v5, 0x10

    const/4 v6, 0x2

    move-object v2, v0

    invoke-direct/range {v2 .. v7}, Landroid/media/AudioRecord;-><init>(IIIII)V

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->recorder:Landroid/media/AudioRecord;

    invoke-virtual {v0}, Landroid/media/AudioRecord;->getAudioSessionId()I

    move-result v0

    invoke-static {v0}, Landroid/media/audiofx/AcousticEchoCanceler;->create(I)Landroid/media/audiofx/AcousticEchoCanceler;

    move-result-object v1

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->echoCanceller:Landroid/media/audiofx/AcousticEchoCanceler;

    invoke-static {}, Landroid/media/audiofx/NoiseSuppressor;->isAvailable()Z

    move-result v1

    const-string v2, "TGLOG"

    if-eqz v1, :cond_1

    invoke-static {v0}, Landroid/media/audiofx/NoiseSuppressor;->create(I)Landroid/media/audiofx/NoiseSuppressor;

    move-result-object v1

    iput-object v1, p0, Lcom/TGActivity/TGActivity;->noiseSupressor:Landroid/media/audiofx/NoiseSuppressor;

    goto :goto_1

    :cond_1
    const-string v1, "Noise suppressor not available"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_1
    invoke-static {}, Landroid/media/audiofx/AutomaticGainControl;->isAvailable()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {v0}, Landroid/media/audiofx/AutomaticGainControl;->create(I)Landroid/media/audiofx/AutomaticGainControl;

    move-result-object v0

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->gainControl:Landroid/media/audiofx/AutomaticGainControl;

    goto :goto_2

    :cond_2
    const-string v0, "AGC not available"

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return-void
.end method

.method microphoneSample([SI)I
    .locals 3

    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    invoke-virtual {v0}, Landroid/media/AudioManager;->getMode()I

    move-result v0

    const/4 v1, 0x3

    const-string v2, "TGLOG"

    if-eq v0, v1, :cond_0

    const-string v0, "mode is no longer MODE_IN_COMMUNICATION"

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->echoCanceller:Landroid/media/audiofx/AcousticEchoCanceler;

    invoke-virtual {v0}, Landroid/media/audiofx/AcousticEchoCanceler;->getEnabled()Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "echo canceller not enabled"

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    iget v0, p0, Lcom/TGActivity/TGActivity;->frameSizeBytes:I

    div-int/lit8 v0, v0, 0x2

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->audioBufferQueueLock:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->audioBufferQueue:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->peekFirst()Ljava/lang/Object;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/TGActivity/TGActivity;->audioBufferQueue:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->removeFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [S

    invoke-static {v1, v2, p1, v2, p2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    iget-object p1, p0, Lcom/TGActivity/TGActivity;->audioBufferQueueLock:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return v0
.end method

.method microphoneStart()V
    .locals 3

    const-string v0, "TGLOG"

    const-string v1, "mic start"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/TGActivity/TGActivity$1;

    invoke-direct {v1, p0}, Lcom/TGActivity/TGActivity$1;-><init>(Lcom/TGActivity/TGActivity;)V

    const-string v2, "AudioRecorder Thread"

    invoke-direct {v0, v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->recordingThread:Ljava/lang/Thread;

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->recorder:Landroid/media/AudioRecord;

    invoke-virtual {v0}, Landroid/media/AudioRecord;->startRecording()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/TGActivity/TGActivity;->isRecording:Z

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->recordingThread:Ljava/lang/Thread;

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method microphoneStop()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/TGActivity/TGActivity;->isRecording:Z

    :try_start_0
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->recordingThread:Ljava/lang/Thread;

    invoke-virtual {v0}, Ljava/lang/Thread;->join()V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, "TGLOG"

    const-string v1, "microphoneStop InterruptedException"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/TGActivity/TGActivity;->recordingThread:Ljava/lang/Thread;

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->recorder:Landroid/media/AudioRecord;

    invoke-virtual {v0}, Landroid/media/AudioRecord;->stop()V

    return-void
.end method

.method networkConnected()Z
    .locals 1

    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method networkConnectedWifi()Z
    .locals 2

    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getType()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    const-string v0, "onCreate"

    const-string v1, "TGLOG"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-super {p0, p1}, Landroid/app/NativeActivity;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 v0, 0x80

    invoke-virtual {p1, v0}, Landroid/view/Window;->addFlags(I)V

    const-string p1, "clipboard"

    invoke-virtual {p0, p1}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/ClipboardManager;

    sput-object p1, Lcom/TGActivity/TGActivity;->m_ClipboardManager:Landroid/content/ClipboardManager;

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getFirebaseToken()V

    const-string p1, "onCreate complete"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onDestroy() isfinishing: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->isFinishing()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " isChangingConfigurations: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->isChangingConfigurations()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TGLOG"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-super {p0}, Landroid/app/NativeActivity;->onDestroy()V

    const-string v0, "onDestroy() done"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected onResume()V
    .locals 2

    invoke-direct {p0}, Lcom/TGActivity/TGActivity;->hideSystemUI()V

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->billingQuery()V

    iget-boolean v0, p0, Lcom/TGActivity/TGActivity;->micIsOn:Z

    if-eqz v0, :cond_1

    const-string v0, "audio"

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setMode(I)V

    invoke-virtual {v0}, Landroid/media/AudioManager;->isWiredHeadsetOn()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    :cond_1
    :goto_0
    invoke-super {p0}, Landroid/app/NativeActivity;->onResume()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 0

    invoke-super {p0, p1}, Landroid/app/NativeActivity;->onWindowFocusChanged(Z)V

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/TGActivity/TGActivity;->hideSystemUI()V

    :cond_0
    return-void
.end method

.method quit()V
    .locals 0

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->finishAndRemoveTask()V

    return-void
.end method

.method sampleMicrophoneThread()V
    .locals 6

    :goto_0
    iget-boolean v0, p0, Lcom/TGActivity/TGActivity;->isRecording:Z

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/TGActivity/TGActivity;->frameSizeBytes:I

    div-int/lit8 v0, v0, 0x2

    new-array v1, v0, [S

    const/4 v2, 0x0

    :goto_1
    iget-object v3, p0, Lcom/TGActivity/TGActivity;->recorder:Landroid/media/AudioRecord;

    sub-int v4, v0, v2

    invoke-virtual {v3, v1, v2, v4}, Landroid/media/AudioRecord;->read([SII)I

    move-result v3

    if-gez v3, :cond_0

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "error reading audio "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "TGLOG"

    invoke-static {v4, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    :cond_0
    add-int/2addr v2, v3

    if-ge v2, v0, :cond_1

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->audioBufferQueueLock:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->audioBufferQueue:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->size()I

    move-result v0

    const/4 v2, 0x3

    if-le v0, v2, :cond_2

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->audioBufferQueue:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->removeFirst()Ljava/lang/Object;

    :cond_2
    iget-object v0, p0, Lcom/TGActivity/TGActivity;->audioBufferQueue:Ljava/util/ArrayDeque;

    invoke-virtual {v0, v1}, Ljava/util/ArrayDeque;->addLast(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/TGActivity/TGActivity;->audioBufferQueueLock:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    goto :goto_0

    :cond_3
    return-void
.end method

.method shareImage(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v1, "com.templegamesgames.DominionAndroid.fileprovider"

    invoke-static {p1, v1, v0}, Landroidx/core/content/FileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.intent.action.SEND"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    invoke-virtual {p0}, Lcom/TGActivity/TGActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/ContentResolver;->getType(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "android.intent.extra.STREAM"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    const-string p1, "image/png"

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const/4 p1, 0x0

    invoke-static {v0, p1}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/TGActivity/TGActivity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "shareImage exception:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "TGLOG"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method showKeyboard()V
    .locals 2

    const-string v0, ""

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1, v1}, Lcom/TGActivity/TGActivity;->showKeyboardFull(Ljava/lang/String;II)V

    return-void
.end method

.method showKeyboardFull(Ljava/lang/String;II)V
    .locals 7

    new-instance v6, Lcom/TGActivity/TGActivity$3;

    move-object v0, v6

    move-object v1, p0

    move-object v2, p0

    move-object v3, p1

    move v4, p2

    move v5, p3

    invoke-direct/range {v0 .. v5}, Lcom/TGActivity/TGActivity$3;-><init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;Ljava/lang/String;II)V

    invoke-virtual {p0, v6}, Lcom/TGActivity/TGActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public showRateDialog()V
    .locals 3

    invoke-static {p0}, Lcom/google/android/play/core/review/ReviewManagerFactory;->create(Landroid/content/Context;)Lcom/google/android/play/core/review/ReviewManager;

    move-result-object v0

    invoke-interface {v0}, Lcom/google/android/play/core/review/ReviewManager;->requestReviewFlow()Lcom/google/android/gms/tasks/Task;

    move-result-object v1

    new-instance v2, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda0;

    invoke-direct {v2, p0, v0}, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda0;-><init>(Lcom/TGActivity/TGActivity;Lcom/google/android/play/core/review/ReviewManager;)V

    invoke-virtual {v1, v2}, Lcom/google/android/gms/tasks/Task;->addOnCompleteListener(Lcom/google/android/gms/tasks/OnCompleteListener;)Lcom/google/android/gms/tasks/Task;

    return-void
.end method

.method public showRateDialog_old(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    const-string v0, "TGLOG"

    const-string v1, "show rate dlg"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lcom/TGActivity/TGActivity$2;

    move-object v2, v0

    move-object v3, p0

    move-object v4, p0

    move-object v5, p1

    move-object v6, p2

    move-object v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/TGActivity/TGActivity$2;-><init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/TGActivity/TGActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
