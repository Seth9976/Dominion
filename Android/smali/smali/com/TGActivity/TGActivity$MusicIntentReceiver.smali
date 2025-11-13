.class Lcom/TGActivity/TGActivity$MusicIntentReceiver;
.super Landroid/content/BroadcastReceiver;
.source "TGActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/TGActivity/TGActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MusicIntentReceiver"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/TGActivity/TGActivity;


# direct methods
.method private constructor <init>(Lcom/TGActivity/TGActivity;)V
    .locals 0

    iput-object p1, p0, Lcom/TGActivity/TGActivity$MusicIntentReceiver;->this$0:Lcom/TGActivity/TGActivity;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string p2, "android.intent.action.HEADSET_PLUG"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/TGActivity/TGActivity$MusicIntentReceiver;->this$0:Lcom/TGActivity/TGActivity;

    const-string p2, "audio"

    invoke-virtual {p1, p2}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/media/AudioManager;

    iget-object p2, p0, Lcom/TGActivity/TGActivity$MusicIntentReceiver;->this$0:Lcom/TGActivity/TGActivity;

    iget-boolean p2, p2, Lcom/TGActivity/TGActivity;->micIsOn:Z

    if-eqz p2, :cond_1

    invoke-virtual {p1}, Landroid/media/AudioManager;->isWiredHeadsetOn()Z

    move-result p2

    if-eqz p2, :cond_0

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    goto :goto_0

    :cond_0
    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    :cond_1
    :goto_0
    return-void
.end method
