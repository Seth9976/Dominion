.class Lcom/TGActivity/TGActivity$MyEditText$MyInputConnection;
.super Landroid/view/inputmethod/InputConnectionWrapper;
.source "TGActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/TGActivity/TGActivity$MyEditText;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "MyInputConnection"
.end annotation


# instance fields
.field final synthetic this$1:Lcom/TGActivity/TGActivity$MyEditText;


# direct methods
.method public constructor <init>(Lcom/TGActivity/TGActivity$MyEditText;Landroid/view/inputmethod/InputConnection;Z)V
    .locals 0

    iput-object p1, p0, Lcom/TGActivity/TGActivity$MyEditText$MyInputConnection;->this$1:Lcom/TGActivity/TGActivity$MyEditText;

    invoke-direct {p0, p2, p3}, Landroid/view/inputmethod/InputConnectionWrapper;-><init>(Landroid/view/inputmethod/InputConnection;Z)V

    return-void
.end method


# virtual methods
.method public commitText(Ljava/lang/CharSequence;I)Z
    .locals 1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/TGActivity/TGActivity;->nativeCommitText(Ljava/lang/String;I)V

    invoke-super {p0, p1, p2}, Landroid/view/inputmethod/InputConnectionWrapper;->commitText(Ljava/lang/CharSequence;I)Z

    move-result p1

    return p1
.end method

.method public deleteSurroundingText(II)Z
    .locals 0

    invoke-static {p1, p2}, Lcom/TGActivity/TGActivity;->nativeDeleteSurroundingText(II)V

    invoke-super {p0, p1, p2}, Landroid/view/inputmethod/InputConnectionWrapper;->deleteSurroundingText(II)Z

    move-result p1

    return p1
.end method

.method public sendKeyEvent(Landroid/view/KeyEvent;)Z
    .locals 0

    invoke-super {p0, p1}, Landroid/view/inputmethod/InputConnectionWrapper;->sendKeyEvent(Landroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method public setComposingRegion(II)Z
    .locals 0

    invoke-static {p1, p2}, Lcom/TGActivity/TGActivity;->nativeSetSelection(II)V

    invoke-super {p0, p1, p2}, Landroid/view/inputmethod/InputConnectionWrapper;->setComposingRegion(II)Z

    move-result p1

    return p1
.end method

.method public setComposingText(Ljava/lang/CharSequence;I)Z
    .locals 1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/TGActivity/TGActivity;->nativeSetComposingText(Ljava/lang/String;I)V

    invoke-super {p0, p1, p2}, Landroid/view/inputmethod/InputConnectionWrapper;->setComposingText(Ljava/lang/CharSequence;I)Z

    move-result p1

    return p1
.end method

.method public setSelection(II)Z
    .locals 0

    invoke-static {p1, p2}, Lcom/TGActivity/TGActivity;->nativeSetSelection(II)V

    invoke-super {p0, p1, p2}, Landroid/view/inputmethod/InputConnectionWrapper;->setSelection(II)Z

    move-result p1

    return p1
.end method
