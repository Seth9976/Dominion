.class Lcom/TGActivity/TGActivity$1;
.super Ljava/lang/Object;
.source "TGActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/TGActivity/TGActivity;->microphoneStart()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/TGActivity/TGActivity;


# direct methods
.method constructor <init>(Lcom/TGActivity/TGActivity;)V
    .locals 0

    iput-object p1, p0, Lcom/TGActivity/TGActivity$1;->this$0:Lcom/TGActivity/TGActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/TGActivity/TGActivity$1;->this$0:Lcom/TGActivity/TGActivity;

    invoke-virtual {v0}, Lcom/TGActivity/TGActivity;->sampleMicrophoneThread()V

    return-void
.end method
