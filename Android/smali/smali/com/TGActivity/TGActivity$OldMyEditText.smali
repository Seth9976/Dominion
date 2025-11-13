.class Lcom/TGActivity/TGActivity$OldMyEditText;
.super Landroid/widget/EditText;
.source "TGActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/TGActivity/TGActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "OldMyEditText"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/TGActivity/TGActivity;


# direct methods
.method constructor <init>(Lcom/TGActivity/TGActivity;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/TGActivity/TGActivity$OldMyEditText;->this$0:Lcom/TGActivity/TGActivity;

    invoke-direct {p0, p2}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    new-instance p2, Lcom/TGActivity/TGActivity$OldMyEditText$1;

    invoke-direct {p2, p0, p1, p0}, Lcom/TGActivity/TGActivity$OldMyEditText$1;-><init>(Lcom/TGActivity/TGActivity$OldMyEditText;Lcom/TGActivity/TGActivity;Lcom/TGActivity/TGActivity$OldMyEditText;)V

    invoke-virtual {p0, p2}, Lcom/TGActivity/TGActivity$OldMyEditText;->addTextChangedListener(Landroid/text/TextWatcher;)V

    return-void
.end method


# virtual methods
.method protected onSelectionChanged(II)V
    .locals 0

    iget-object p1, p0, Lcom/TGActivity/TGActivity$OldMyEditText;->this$0:Lcom/TGActivity/TGActivity;

    invoke-virtual {p1, p0}, Lcom/TGActivity/TGActivity;->OnKeyboardChange(Landroid/widget/EditText;)V

    return-void
.end method
