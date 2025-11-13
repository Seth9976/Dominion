package com.TGActivity;

import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Build.VERSION;
import android.util.Log;
import androidx.core.app.NotificationCompat.Builder;
import com.google.firebase.messaging.FirebaseMessagingService;
import com.google.firebase.messaging.RemoteMessage;
import com.templegatesgames.DominionAndroid.R.drawable;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

public class MyFirebaseMessagingService extends FirebaseMessagingService {
    private static final String TAG = "TGLOG-MyFirebaseMsgService";

    public static native void jniNewToken(String arg0) {
    }

    public static native void jniNotification(String arg0, String arg1, String[] arg2, String[] arg3, int arg4) {
    }

    @Override  // com.google.firebase.messaging.FirebaseMessagingService
    public void onMessageReceived(RemoteMessage remoteMessage0) {
        String s1;
        String s;
        Log.d("TGLOG-MyFirebaseMsgService", "From: " + remoteMessage0.getFrom());
        if(remoteMessage0.getNotification() == null) {
            s = "";
            s1 = "";
        }
        else {
            Log.d("TGLOG-MyFirebaseMsgService", "Message Notification Body: " + remoteMessage0.getNotification().getBody());
            s = remoteMessage0.getNotification().getTitle();
            s1 = remoteMessage0.getNotification().getBody();
        }
        String[] arr_s = new String[8];
        String[] arr_s1 = new String[8];
        int v = 0;
        if(remoteMessage0.getData().size() > 0) {
            Log.d("TGLOG-MyFirebaseMsgService", "Message data payload: " + remoteMessage0.getData());
            try {
                JSONObject jSONObject0 = new JSONObject(remoteMessage0.getData());
                Iterator iterator0 = jSONObject0.keys();
                while(iterator0.hasNext()) {
                    Object object0 = iterator0.next();
                    String s2 = (String)object0;
                    if(jSONObject0.get(s2) instanceof String) {
                        try {
                            arr_s[v] = s2;
                            arr_s1[v] = jSONObject0.getString(s2);
                            ++v;
                        }
                        catch(JSONException unused_ex) {
                            ++v;
                            if(true) {
                                break;
                            }
                        }
                    }
                }
            }
            catch(JSONException unused_ex) {
            }
        }
        MyFirebaseMessagingService.jniNotification(s, s1, arr_s, arr_s1, v);
    }

    @Override  // com.google.firebase.messaging.FirebaseMessagingService
    public void onNewToken(String s) {
        Log.d("TGLOG-MyFirebaseMsgService", "Refreshed token: " + s);
        MyFirebaseMessagingService.jniNewToken(s);
    }

    private void sendNotification(String s, String s1) {
        Intent intent0 = new Intent(this, TGActivity.class);
        intent0.addFlags(0x4000000);
        PendingIntent pendingIntent0 = PendingIntent.getActivity(this, 0, intent0, 0x4000000);
        NotificationManager notificationManager0 = (NotificationManager)this.getSystemService("notification");
        if(Build.VERSION.SDK_INT >= 26) {
            NotificationChannel notificationChannel0 = MyFirebaseMessagingService..ExternalSyntheticApiModelOutline0.m("default", "Games", 4);
            notificationChannel0.setDescription("Game Invite and Your Turn messages");
            notificationManager0.createNotificationChannel(notificationChannel0);
        }
        Uri uri0 = RingtoneManager.getDefaultUri(2);
        notificationManager0.notify(0, new Builder(this).setContentTitle(s).setContentText(s1).setAutoCancel(true).setSound(uri0).setChannelId("default").setContentIntent(pendingIntent0).setSmallIcon(drawable.notification).build());
    }
}

