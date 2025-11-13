.class Lcom/TGActivity/TGActivity$OldMyEditText$1;
.super Ljava/lang/Object;
.source "TGActivity.java"

# interfaces
.implements Landroid/text/TextWatcher;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/TGActivity/TGActivity$OldMyEditText;-><init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/TGActivity/TGActivity$OldMyEditText;

.field final synthetic val$me:Lcom/TGActivity/TGActivity$OldMyEditText;

.field final synthetic val$this$0:Lcom/TGActivity/TGActivity;


# direct methods
.method constructor <init>(Lcom/TGActivity/TGActivity$OldMyEditText;Lcom/TGActivity/TGActivity;Lcom/TGActivity/TGActivity$OldMyEditText;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    iput-object p1, p0, Lcom/TGActivity/TGActivity$OldMyEditText$1;->this$1:Lcom/TGActivity/TGActivity$OldMyEditText;

    iput-object p2, p0, Lcom/TGActivity/TGActivity$OldMyEditText$1;->val$this$0:Lcom/TGActivity/TGActivity;

    iput-object p3, p0, Lcom/TGActivity/TGActivity$OldMyEditText$1;->val$me:Lcom/TGActivity/TGActivity$OldMyEditText;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public afterTextChanged(Landroid/text/Editable;)V
    .locals 1

    iget-object p1, p0, Lcom/TGActivity/TGActivity$OldMyEditText$1;->this$1:Lcom/TGActivity/TGActivity$OldMyEditText;

    iget-object p1, p1, Lcom/TGActivity/TGActivity$OldMyEditText;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v0, p0, Lcom/TGActivity/TGActivity$OldMyEditText$1;->val$me:Lcom/TGActivity/TGActivity$OldMyEditText;

    invoke-virtual {p1, v0}, Lcom/TGActivity/TGActivity;->OnKeyboardChange(Landroid/widget/EditText;)V

    return-void
.end method

.method public beforeTextChanged(Ljava/lang/CharSequence;III)V
    .locals 0

    return-void
.end method

.method public onTextChanged(Ljava/lang/CharSequence;III)V
    .locals 0

    return-void
.end method
