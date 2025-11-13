package tci.jyoysvb;

import android.content.Context;
import android.content.ContextWrapper;
import android.content.Intent;
import android.content.ServiceConnection;
import android.util.Base64;
import java.lang.reflect.Method;
import java.security.KeyFactory;
import java.security.PublicKey;
import java.security.Signature;
import java.security.spec.KeySpec;
import java.security.spec.X509EncodedKeySpec;

public class zkcvv {
    public static boolean bindService(Context context0, Intent intent0, ServiceConnection serviceConnection0, int v) {
        try {
            if(intent0 != null && intent0.getAction() != null) {
                if(intent0.getAction().equals("com.android.vending.licensing.ILicensingService")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
                if(intent0.getAction().equals("com.android.vending.billing.InAppBillingService.BIND")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
            }
            if(intent0 != null && intent0.getAction() == null) {
                if(intent0.getComponent() != null && intent0.getComponent().getClassName().equals("com.google.android.finsky.services.LicensingService")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
                if(intent0.getComponent() != null && intent0.getComponent().getClassName().equals("com.google.android.finsky.billing.iab.InAppBillingService")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
            }
            return ((Boolean)context0.getClass().getMethod("bindService", Intent.class, ServiceConnection.class, Integer.TYPE).invoke(context0, intent0, serviceConnection0, v)).booleanValue();
        }
        catch(Throwable throwable0) {
        }
        throwable0.printStackTrace();
        return true;
    }

    public static boolean bindService(ContextWrapper contextWrapper0, Intent intent0, ServiceConnection serviceConnection0, int v) {
        try {
            if(intent0 != null && intent0.getAction() != null) {
                if(intent0.getAction().equals("com.android.vending.licensing.ILicensingService")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
                if(intent0.getAction().equals("com.android.vending.billing.InAppBillingService.BIND")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
            }
            if(intent0 != null && intent0.getAction() == null) {
                if(intent0.getComponent() != null && intent0.getComponent().getClassName().equals("com.google.android.finsky.services.LicensingService")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
                if(intent0.getComponent() != null && intent0.getComponent().getClassName().equals("com.google.android.finsky.billing.iab.InAppBillingService")) {
                    intent0 = new Intent("ru.uzctuncs.xgpxdxueg");
                    intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                }
            }
            return ((Boolean)contextWrapper0.getClass().getMethod("bindService", Intent.class, ServiceConnection.class, Integer.TYPE).invoke(contextWrapper0, intent0, serviceConnection0, v)).booleanValue();
        }
        catch(Throwable throwable0) {
        }
        throwable0.printStackTrace();
        return true;
    }

    public static PublicKey generatePublic(KeyFactory keyFactory0, KeySpec keySpec0) {
        try {
            if(keyFactory0.getAlgorithm().equals("RSA")) {
                try {
                    X509EncodedKeySpec x509EncodedKeySpec0 = (X509EncodedKeySpec)keySpec0;
                    String s = Base64.encodeToString(x509EncodedKeySpec0.getEncoded(), 2);
                    if(s != null && s.endsWith("IDAQAB")) {
                        x509EncodedKeySpec0 = new X509EncodedKeySpec(Base64.decode("MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAt8wG5ftmKv4q9OTMLDKwaejxXpSdGSwGuWue5fhMfeDNYJTloVpf89Hqg5Kjiq60HBdnPSXx6Evk4bTtdVZatAjYwJSfhEQQUKhRZT1yIlXonWkE5p+OrIPynU+Sa2guE77EJNFqzMopPIUyvVXVLsVJBrOU/7ywXep0vFCymM/9OtFDD9PXn+g7uFAIjoU48NN03BgAoqxOd1DMnZu184EjH2/gekA/eTWMF8H3XOmCCpPdXwHEpFwUwmjC+alNg/m5xy2ndlCoCej663UR0V8uW/tapDH+84wW5Y6wss9Ozp03Skj45oqL18mKVgTXeXg8tigquBlMMJbFQAoawwIDAQAB", 0));
                    }
                    return keyFactory0.generatePublic(x509EncodedKeySpec0);
                }
                catch(Throwable throwable1) {
                    throwable1.printStackTrace();
                }
            }
            return keyFactory0.generatePublic(keySpec0);
        }
        catch(Throwable throwable0) {
            throwable0.printStackTrace();
            try {
                return keyFactory0.generatePublic(keySpec0);
            }
            catch(Throwable throwable2) {
                throwable2.printStackTrace();
                return null;
            }
        }
    }

    public static void initVerify(Signature signature0, PublicKey publicKey0) {
        try {
            if(signature0.getAlgorithm().toLowerCase().equals("sha1withrsa") || signature0.getAlgorithm().toLowerCase().equals("sha256withrsa")) {
                String s = "";
                try {
                    s = Base64.encodeToString(publicKey0.getEncoded(), 2);
                }
                catch(Throwable unused_ex) {
                }
                if(s != null && s.endsWith("IDAQAB")) {
                    publicKey0 = KeyFactory.getInstance("RSA").generatePublic(new X509EncodedKeySpec(Base64.decode("MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAt8wG5ftmKv4q9OTMLDKwaejxXpSdGSwGuWue5fhMfeDNYJTloVpf89Hqg5Kjiq60HBdnPSXx6Evk4bTtdVZatAjYwJSfhEQQUKhRZT1yIlXonWkE5p+OrIPynU+Sa2guE77EJNFqzMopPIUyvVXVLsVJBrOU/7ywXep0vFCymM/9OtFDD9PXn+g7uFAIjoU48NN03BgAoqxOd1DMnZu184EjH2/gekA/eTWMF8H3XOmCCpPdXwHEpFwUwmjC+alNg/m5xy2ndlCoCej663UR0V8uW/tapDH+84wW5Y6wss9Ozp03Skj45oqL18mKVgTXeXg8tigquBlMMJbFQAoawwIDAQAB", 0)));
                }
            }
            signature0.getClass().getMethod("initVerify", PublicKey.class).invoke(signature0, publicKey0);
        }
        catch(Throwable throwable0) {
            throwable0.printStackTrace();
        }
    }

    public static Object invoke(Method method0, Object object0, Object[] arr_object) {
        try {
            if(method0.getName().equals("bindService") && arr_object != null && arr_object.length == 3 && arr_object[0].getClass().getName().equals("android.content.Intent")) {
                Intent intent0 = (Intent)arr_object[0];
                if(intent0 != null && intent0.getAction() != null) {
                    if(intent0.getAction().equals("com.android.vending.licensing.ILicensingService")) {
                        intent0 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                        intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                    }
                    if(intent0.getAction().equals("com.android.vending.billing.InAppBillingService.BIND")) {
                        intent0 = new Intent("ru.uzctuncs.xgpxdxueg");
                        intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                    }
                }
                if(intent0 != null && intent0.getAction() == null) {
                    if(intent0.getComponent() != null && intent0.getComponent().getClassName().equals("com.google.android.finsky.services.LicensingService")) {
                        intent0 = new Intent("ru.uzctuncs.xgpxdxueg.service");
                        intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                    }
                    if(intent0.getComponent() != null && intent0.getComponent().getClassName().equals("com.google.android.finsky.billing.iab.InAppBillingService")) {
                        intent0 = new Intent("ru.uzctuncs.xgpxdxueg");
                        intent0.setPackage("ru.uzctuncs.xgpxdxueg");
                    }
                }
                return Boolean.valueOf(((Boolean)method0.invoke(object0, intent0, arr_object[1], arr_object[2])).booleanValue());
            }
            if(method0.getName().equals("initVerify") && arr_object != null) {
                try {
                    if(arr_object.length == 1 && arr_object[0].getClass().getName().equals("java.security.PublicKey")) {
                        PublicKey publicKey0 = (PublicKey)arr_object[0];
                        if(((Signature)object0).getAlgorithm().toLowerCase().equals("sha1withrsa") || ((Signature)object0).getAlgorithm().toLowerCase().equals("sha256withrsa")) {
                            publicKey0 = KeyFactory.getInstance("RSA").generatePublic(new X509EncodedKeySpec(Base64.decode("MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAt8wG5ftmKv4q9OTMLDKwaejxXpSdGSwGuWue5fhMfeDNYJTloVpf89Hqg5Kjiq60HBdnPSXx6Evk4bTtdVZatAjYwJSfhEQQUKhRZT1yIlXonWkE5p+OrIPynU+Sa2guE77EJNFqzMopPIUyvVXVLsVJBrOU/7ywXep0vFCymM/9OtFDD9PXn+g7uFAIjoU48NN03BgAoqxOd1DMnZu184EjH2/gekA/eTWMF8H3XOmCCpPdXwHEpFwUwmjC+alNg/m5xy2ndlCoCej663UR0V8uW/tapDH+84wW5Y6wss9Ozp03Skj45oqL18mKVgTXeXg8tigquBlMMJbFQAoawwIDAQAB", 0)));
                        }
                        return method0.invoke(((Signature)object0), publicKey0);
                    }
                }
                catch(Throwable throwable1) {
                    throwable1.printStackTrace();
                }
            }
            return method0.invoke(object0, arr_object);
        }
        catch(Throwable throwable0) {
            throwable0.printStackTrace();
            return null;
        }
    }
}

