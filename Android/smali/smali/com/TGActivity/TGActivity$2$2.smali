.class Lcom/TGActivity/TGActivity$2$2;
.super Ljava/lang/Object;
.source "TGActivity.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/TGActivity/TGActivity$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/TGActivity/TGActivity$2;


# direct methods
.method constructor <init>(Lcom/TGActivity/TGActivity$2;)V
    .locals 0

    iput-object p1, p0, Lcom/TGActivity/TGActivity$2$2;->this$1:Lcom/TGActivity/TGActivity$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 3

    iget-object p2, p0, Lcom/TGActivity/TGActivity$2$2;->this$1:Lcom/TGActivity/TGActivity$2;

    iget-object p2, p2, Lcom/TGActivity/TGActivity$2;->val$context:Landroid/content/Context;

    new-instance v0, Landroid/content/Intent;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "market://details?id="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/TGActivity/TGActivity$2$2;->this$1:Lcom/TGActivity/TGActivity$2;

    iget-object v2, v2, Lcom/TGActivity/TGActivity$2;->val$APP_PRODUCT_URL:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    const-string v2, "android.intent.action.VIEW"

    invoke-direct {v0, v2, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {p2, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    const/4 p1, 0x1

    invoke-static {p1}, Lcom/TGActivity/TGActivity;->jniRateDialogResult(I)V

    return-void
.end method
