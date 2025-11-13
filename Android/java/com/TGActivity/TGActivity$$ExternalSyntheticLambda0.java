package com.TGActivity;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.android.play.core.review.ReviewManager;

public final class TGActivity..ExternalSyntheticLambda0 implements OnCompleteListener {
    public final TGActivity f$0;
    public final ReviewManager f$1;

    public TGActivity..ExternalSyntheticLambda0(TGActivity tGActivity0, ReviewManager reviewManager0) {
        this.f$0 = tGActivity0;
        this.f$1 = reviewManager0;
    }

    @Override  // com.google.android.gms.tasks.OnCompleteListener
    public final void onComplete(Task task0) {
        this.f$0.lambda$showRateDialog$1$com-TGActivity-TGActivity(this.f$1, task0);
    }
}

