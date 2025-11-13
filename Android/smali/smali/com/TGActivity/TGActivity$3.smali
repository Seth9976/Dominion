.class Lcom/TGActivity/TGActivity$3;
.super Ljava/lang/Object;
.source "TGActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/TGActivity/TGActivity;->showKeyboardFull(Ljava/lang/String;II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/TGActivity/TGActivity;

.field final synthetic val$act:Landroid/content/Context;

.field final synthetic val$s:Ljava/lang/String;

.field final synthetic val$start:I

.field final synthetic val$stop:I


# direct methods
.method constructor <init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    iput-object p1, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iput-object p2, p0, Lcom/TGActivity/TGActivity$3;->val$act:Landroid/content/Context;

    iput-object p3, p0, Lcom/TGActivity/TGActivity$3;->val$s:Ljava/lang/String;

    iput p4, p0, Lcom/TGActivity/TGActivity$3;->val$start:I

    iput p5, p0, Lcom/TGActivity/TGActivity$3;->val$stop:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v0, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    new-instance v1, Lcom/TGActivity/TGActivity$MyEditText;

    iget-object v2, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v3, p0, Lcom/TGActivity/TGActivity$3;->val$act:Landroid/content/Context;

    invoke-direct {v1, v2, v3}, Lcom/TGActivity/TGActivity$MyEditText;-><init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;)V

    iput-object v1, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v1, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v2, v3, v3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2}, Lcom/TGActivity/TGActivity;->addContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v0, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/TGActivity/TGActivity$MyEditText;->setFocusable(Z)V

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v0, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    invoke-virtual {v0, v1}, Lcom/TGActivity/TGActivity$MyEditText;->setFocusableInTouchMode(Z)V

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v0, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    iget-object v1, p0, Lcom/TGActivity/TGActivity$3;->val$s:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/TGActivity/TGActivity$MyEditText;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v0, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    iget v1, p0, Lcom/TGActivity/TGActivity$3;->val$start:I

    iget v2, p0, Lcom/TGActivity/TGActivity$3;->val$stop:I

    invoke-virtual {v0, v1, v2}, Lcom/TGActivity/TGActivity$MyEditText;->setSelection(II)V

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v0, v0, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    invoke-virtual {v0}, Lcom/TGActivity/TGActivity$MyEditText;->requestFocus()Z

    iget-object v0, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    const-string v1, "input_method"

    invoke-virtual {v0, v1}, Lcom/TGActivity/TGActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    iget-object v1, p0, Lcom/TGActivity/TGActivity$3;->this$0:Lcom/TGActivity/TGActivity;

    iget-object v1, v1, Lcom/TGActivity/TGActivity;->editText:Lcom/TGActivity/TGActivity$MyEditText;

    const/4 v2, 0x2

    invoke-virtual {v0, v1, v2}, Landroid/view/inputmethod/InputMethodManager;->showSoftInput(Landroid/view/View;I)Z

    return-void
.end method
