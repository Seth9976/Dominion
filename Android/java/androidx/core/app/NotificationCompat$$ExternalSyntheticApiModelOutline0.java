package androidx.core.app;

import android.app.Notification.Builder;
import android.app.Notification.DecoratedCustomViewStyle;
import android.app.Notification.MessagingStyle.Message;
import android.app.Notification.MessagingStyle;
import android.app.NotificationChannel;
import android.app.NotificationChannelGroup;
import android.app.Person;
import android.app.job.JobWorkItem;
import android.content.Context;
import android.content.Intent;

public final class NotificationCompat..ExternalSyntheticApiModelOutline0 {
    public static Notification.Builder m(Context context0, String s) {
        return new Notification.Builder(context0, s);
    }

    public static Notification.DecoratedCustomViewStyle m() {
        return new Notification.DecoratedCustomViewStyle();
    }

    public static Notification.MessagingStyle.Message m(CharSequence charSequence0, long v, Person person0) {
        return new Notification.MessagingStyle.Message(charSequence0, v, person0);
    }

    public static Notification.MessagingStyle.Message m(CharSequence charSequence0, long v, CharSequence charSequence1) {
        return new Notification.MessagingStyle.Message(charSequence0, v, charSequence1);
    }

    public static Notification.MessagingStyle m(Person person0) {
        return new Notification.MessagingStyle(person0);
    }

    public static Notification.MessagingStyle m(CharSequence charSequence0) {
        return new Notification.MessagingStyle(charSequence0);
    }

    public static NotificationChannel m(Object object0) [...] // Inlined contents

    public static NotificationChannel m(String s, CharSequence charSequence0, int v) {
        return new NotificationChannel(s, charSequence0, v);
    }

    public static NotificationChannelGroup m(String s, CharSequence charSequence0) {
        return new NotificationChannelGroup(s, charSequence0);
    }

    public static Person m(Object object0) [...] // Inlined contents

    public static JobWorkItem m(Intent intent0) {
        return new JobWorkItem(intent0);
    }

    public static Class m() {
        return Notification.MessagingStyle.class;
    }

    public static void m() {
    }

    public static Class m$1() {
        return Notification.DecoratedCustomViewStyle.class;
    }

    public static void m$1() {
    }

    public static void m$2() {
    }

    public static void m$3() {
    }

    public static void m$4() {
    }
}

