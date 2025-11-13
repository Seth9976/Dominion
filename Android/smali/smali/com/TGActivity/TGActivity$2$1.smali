.class Lcom/TGActivity/TGActivity$2$1;
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

    iput-object p1, p0, Lcom/TGActivity/TGActivity$2$1;->this$1:Lcom/TGActivity/TGActivity$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    const/4 p1, 0x2

    invoke-static {p1}, Lcom/TGActivity/TGActivity;->jniRateDialogResult(I)V

    return-void
.end method
