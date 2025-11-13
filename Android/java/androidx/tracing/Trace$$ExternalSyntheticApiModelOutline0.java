package androidx.tracing;

import android.graphics.drawable.AdaptiveIconDrawable;
import android.view.WindowInsetsController.OnControllableInsetsChangedListener;
import android.view.accessibility.AccessibilityNodeInfo.TouchDelegateInfo;
import android.view.inputmethod.InputContentInfo;
import dalvik.system.DelegateLastClassLoader;
import java.util.Map;

public final class Trace..ExternalSyntheticApiModelOutline0 {
    public static int m() {
        return 4;
    }

    public static WindowInsetsController.OnControllableInsetsChangedListener m(Object object0) {
        return (WindowInsetsController.OnControllableInsetsChangedListener)object0;
    }

    public static AccessibilityNodeInfo.TouchDelegateInfo m(Map map0) {
        return new AccessibilityNodeInfo.TouchDelegateInfo(map0);
    }

    public static InputContentInfo m(Object object0) {
        return (InputContentInfo)object0;
    }

    public static DelegateLastClassLoader m(String s, ClassLoader classLoader0) {
        return new DelegateLastClassLoader(s, classLoader0);
    }

    // 去混淆评级： 低(20)
    public static String m() [...] // 潜在的解密器

    public static void m() {
    }

    public static boolean m(Object object0) {
        return object0 instanceof AdaptiveIconDrawable;
    }

    public static int m$1() {
        return 8;
    }

    public static int m$2() {
        return 16;
    }

    public static int m$3() {
        return 0x20;
    }

    public static int m$4() {
        return 0x40;
    }

    public static int m$5() {
        return 0x80;
    }
}

