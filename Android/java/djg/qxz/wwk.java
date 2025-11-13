package djg.qxz;

import android.app.Activity;
import android.content.Intent;
import android.content.ServiceConnection;

public class wwk extends Activity {
    @Override  // android.content.ContextWrapper
    public boolean bindService(Intent intent, ServiceConnection servconn, int flag) {
        Intent intent1;
        try {
            if(intent == null) {
                intent1 = null;
            }
            else if(intent.getAction() != null) {
                if(intent.getAction().equals("com.android.vending.licensing.ILicensingService")) {
                    intent1 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                    intent1.setPackage("ru.uzctuncs.xgpxdxueg");
                }
                else {
                    intent1 = intent;
                }
                if(intent1.getAction().equals("com.android.vending.billing.InAppBillingService.BIND")) {
                    intent1 = new Intent("ru.uzctuncs.xgpxdxueg");
                    intent1.setPackage("ru.uzctuncs.xgpxdxueg");
                }
            }
            else {
                intent1 = intent;
            }
            if(intent1 != null && intent1.getAction() == null) {
                if(intent1.getComponent() != null && intent1.getComponent().getClassName().equals("com.google.android.finsky.services.LicensingService")) {
                    intent1 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                    intent1.setPackage("ru.uzctuncs.xgpxdxueg");
                }
                if(intent1.getComponent() != null && intent1.getComponent().getClassName().equals("com.google.android.finsky.billing.iab.InAppBillingService")) {
                    intent1 = new Intent("ru.uzctuncs.xgpxdxueg");
                    intent1.setPackage("ru.uzctuncs.xgpxdxueg");
                }
            }
            return super.bindService(intent1, servconn, flag);
        }
        catch(Throwable throwable0) {
            throwable0.printStackTrace();
            return true;
        }
    }
}

