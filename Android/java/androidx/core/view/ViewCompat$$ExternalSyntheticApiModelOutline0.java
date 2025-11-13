package androidx.core.view;

import android.content.ClipData;
import android.graphics.Insets;
import android.text.PrecomputedText.Params.Builder;
import android.text.PrecomputedText;
import android.text.TextPaint;
import android.view.ContentInfo.Builder;
import android.view.ContentInfo;
import android.view.PointerIcon;
import android.view.WindowInsets.Builder;
import android.view.WindowInsets;
import android.view.WindowInsetsAnimation.Bounds;
import android.view.WindowInsetsAnimation;
import android.view.animation.Interpolator;

public final class ViewCompat..ExternalSyntheticApiModelOutline0 {
    public static int m() {
        return 1;
    }

    public static PrecomputedText.Params.Builder m(TextPaint textPaint0) {
        return new PrecomputedText.Params.Builder(textPaint0);
    }

    public static PrecomputedText m(Object object0) [...] // Inlined contents

    public static ContentInfo.Builder m(ClipData clipData0, int v) {
        return new ContentInfo.Builder(clipData0, v);
    }

    public static ContentInfo.Builder m(ContentInfo contentInfo0) {
        return new ContentInfo.Builder(contentInfo0);
    }

    public static ContentInfo m(Object object0) {
        return (ContentInfo)object0;
    }

    public static PointerIcon m(Object object0) [...] // Inlined contents

    public static WindowInsets.Builder m() {
        return new WindowInsets.Builder();
    }

    public static WindowInsets.Builder m(WindowInsets windowInsets0) {
        return new WindowInsets.Builder(windowInsets0);
    }

    public static WindowInsetsAnimation.Bounds m(Insets insets0, Insets insets1) {
        return new WindowInsetsAnimation.Bounds(insets0, insets1);
    }

    public static WindowInsetsAnimation m(int v, Interpolator interpolator0, long v1) {
        return new WindowInsetsAnimation(v, interpolator0, v1);
    }

    public static WindowInsetsAnimation m(Object object0) {
        return (WindowInsetsAnimation)object0;
    }

    public static void m() {
    }

    public static boolean m(Object object0) {
        return object0 instanceof PrecomputedText;
    }

    public static int m$1() {
        return 2;
    }

    public static void m$1() {
    }
}

