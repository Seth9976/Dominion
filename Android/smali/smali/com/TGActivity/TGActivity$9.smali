.class Lcom/TGActivity/TGActivity$9;
.super Ljava/lang/Object;
.source "TGActivity.java"

# interfaces
.implements Lcom/android/billingclient/api/AcknowledgePurchaseResponseListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/TGActivity/TGActivity;->handlePurchase(Lcom/android/billingclient/api/Purchase;)V
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

    iput-object p1, p0, Lcom/TGActivity/TGActivity$9;->this$0:Lcom/TGActivity/TGActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAcknowledgePurchaseResponse(Lcom/android/billingclient/api/BillingResult;)V
    .locals 0

    return-void
.end method
