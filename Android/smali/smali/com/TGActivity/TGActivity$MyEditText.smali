.class public Lcom/TGActivity/TGActivity$MyEditText;
.super Landroid/widget/EditText;
.source "TGActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/TGActivity/TGActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "MyEditText"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/TGActivity/TGActivity$MyEditText$MyInputConnection;
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/TGActivity/TGActivity;


# direct methods
.method public constructor <init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/TGActivity/TGActivity$MyEditText;->this$0:Lcom/TGActivity/TGActivity;

    invoke-direct {p0, p2}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public onCheckIsTextEditor()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public onCreateInputConnection(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;
    .locals 3

    new-instance v0, Lcom/TGActivity/TGActivity$MyEditText$MyInputConnection;

    new-instance v1, Landroid/view/inputmethod/BaseInputConnection;

    const/4 v2, 0x1

    invoke-direct {v1, p0, v2}, Landroid/view/inputmethod/BaseInputConnection;-><init>(Landroid/view/View;Z)V

    invoke-direct {v0, p0, v1, v2}, Lcom/TGActivity/TGActivity$MyEditText$MyInputConnection;-><init>(Lcom/TGActivity/TGActivity$MyEditText;Landroid/view/inputmethod/InputConnection;Z)V

    const/16 v1, 0x91

    iput v1, p1, Landroid/view/inputmethod/EditorInfo;->inputType:I

    const/high16 v1, 0x12000000

    iput v1, p1, Landroid/view/inputmethod/EditorInfo;->imeOptions:I

    return-object v0
.end method
