.class Lcom/TGActivity/TGActivity$6;
.super Ljava/lang/Object;
.source "TGActivity.java"

# interfaces
.implements Lcom/android/billingclient/api/BillingClientStateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/TGActivity/TGActivity;->billingConnect()V
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

    iput-object p1, p0, Lcom/TGActivity/TGActivity$6;->this$0:Lcom/TGActivity/TGActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onBillingServiceDisconnected()V
    .locals 2

    const-string v0, "TGLOG"

    const-string v1, "billing disconnected"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/TGActivity/TGActivity;->jni_handleServiceConnected(Z)V

    return-void
.end method

.method public onBillingSetupFinished(Lcom/android/billingclient/api/BillingResult;)V
    .locals 1

    invoke-virtual {p1}, Lcom/android/billingclient/api/BillingResult;->getResponseCode()I

    move-result p1

    if-nez p1, :cond_0

    const-string p1, "TGLOG"

    const-string v0, "billing connected"

    invoke-static {p1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x1

    invoke-static {p1}, Lcom/TGActivity/TGActivity;->jni_handleServiceConnected(Z)V

    iget-object p1, p0, Lcom/TGActivity/TGActivity$6;->this$0:Lcom/TGActivity/TGActivity;

    invoke-virtual {p1}, Lcom/TGActivity/TGActivity;->billingQuery()V

    :cond_0
    return-void
.end method
