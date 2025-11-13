.class public final synthetic Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda0;
.super Ljava/lang/Object;
.source "D8$$SyntheticClass"

# interfaces
.implements Lcom/google/android/gms/tasks/OnCompleteListener;


# instance fields
.field public final synthetic f$0:Lcom/TGActivity/TGActivity;

.field public final synthetic f$1:Lcom/google/android/play/core/review/ReviewManager;


# direct methods
.method public synthetic constructor <init>(Lcom/TGActivity/TGActivity;Lcom/google/android/play/core/review/ReviewManager;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda0;->f$0:Lcom/TGActivity/TGActivity;

    iput-object p2, p0, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda0;->f$1:Lcom/google/android/play/core/review/ReviewManager;

    return-void
.end method


# virtual methods
.method public final onComplete(Lcom/google/android/gms/tasks/Task;)V
    .locals 2

    iget-object v0, p0, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda0;->f$0:Lcom/TGActivity/TGActivity;

    iget-object v1, p0, Lcom/TGActivity/TGActivity$$ExternalSyntheticLambda0;->f$1:Lcom/google/android/play/core/review/ReviewManager;

    invoke-virtual {v0, v1, p1}, Lcom/TGActivity/TGActivity;->lambda$showRateDialog$1$com-TGActivity-TGActivity(Lcom/google/android/play/core/review/ReviewManager;Lcom/google/android/gms/tasks/Task;)V

    return-void
.end method
