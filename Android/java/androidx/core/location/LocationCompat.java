package androidx.core.location;

import android.location.Location;
import android.os.Build.VERSION;
import android.os.Bundle;
import androidx.core.util.Preconditions;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.concurrent.TimeUnit;
import tci.jyoysvb.zkcvv;

public final class LocationCompat {
    static class Api17Impl {
        static long getElapsedRealtimeNanos(Location location0) {
            return location0.getElapsedRealtimeNanos();
        }
    }

    static class Api18Impl {
        static boolean isMock(Location location0) {
            return location0.isFromMockProvider();
        }
    }

    static class Api26Impl {
        static float getBearingAccuracyDegrees(Location location0) {
            return location0.getBearingAccuracyDegrees();
        }

        static float getSpeedAccuracyMetersPerSecond(Location location0) {
            return location0.getSpeedAccuracyMetersPerSecond();
        }

        static float getVerticalAccuracyMeters(Location location0) {
            return location0.getVerticalAccuracyMeters();
        }

        static boolean hasBearingAccuracy(Location location0) {
            return location0.hasBearingAccuracy();
        }

        static boolean hasSpeedAccuracy(Location location0) {
            return location0.hasSpeedAccuracy();
        }

        static boolean hasVerticalAccuracy(Location location0) {
            return location0.hasVerticalAccuracy();
        }

        static void setBearingAccuracyDegrees(Location location0, float f) {
            location0.setBearingAccuracyDegrees(f);
        }

        static void setSpeedAccuracyMetersPerSecond(Location location0, float f) {
            location0.setSpeedAccuracyMetersPerSecond(f);
        }

        static void setVerticalAccuracyMeters(Location location0, float f) {
            location0.setVerticalAccuracyMeters(f);
        }
    }

    public static final String EXTRA_BEARING_ACCURACY = "bearingAccuracy";
    public static final String EXTRA_IS_MOCK = "mockLocation";
    public static final String EXTRA_MSL_ALTITUDE = "androidx.core.location.extra.MSL_ALTITUDE";
    public static final String EXTRA_MSL_ALTITUDE_ACCURACY = "androidx.core.location.extra.MSL_ALTITUDE_ACCURACY";
    public static final String EXTRA_SPEED_ACCURACY = "speedAccuracy";
    public static final String EXTRA_VERTICAL_ACCURACY = "verticalAccuracy";
    private static Method sSetIsFromMockProviderMethod;

    private static boolean containsExtra(Location location0, String s) {
        Bundle bundle0 = location0.getExtras();
        return bundle0 != null && bundle0.containsKey(s);
    }

    public static float getBearingAccuracyDegrees(Location location0) {
        if(Build.VERSION.SDK_INT >= 26) {
            return Api26Impl.getBearingAccuracyDegrees(location0);
        }
        Bundle bundle0 = location0.getExtras();
        return bundle0 == null ? 0.0f : bundle0.getFloat("bearingAccuracy", 0.0f);
    }

    public static long getElapsedRealtimeMillis(Location location0) {
        return TimeUnit.NANOSECONDS.toMillis(Api17Impl.getElapsedRealtimeNanos(location0));
    }

    public static long getElapsedRealtimeNanos(Location location0) {
        return Api17Impl.getElapsedRealtimeNanos(location0);
    }

    public static float getMslAltitudeAccuracyMeters(Location location0) {
        Preconditions.checkState(LocationCompat.hasMslAltitudeAccuracy(location0), "The Mean Sea Level altitude accuracy of the location is not set.");
        return LocationCompat.getOrCreateExtras(location0).getFloat("androidx.core.location.extra.MSL_ALTITUDE_ACCURACY");
    }

    public static double getMslAltitudeMeters(Location location0) {
        Preconditions.checkState(LocationCompat.hasMslAltitude(location0), "The Mean Sea Level altitude of the location is not set.");
        return LocationCompat.getOrCreateExtras(location0).getDouble("androidx.core.location.extra.MSL_ALTITUDE");
    }

    private static Bundle getOrCreateExtras(Location location0) {
        Bundle bundle0 = location0.getExtras();
        if(bundle0 == null) {
            location0.setExtras(new Bundle());
            return location0.getExtras();
        }
        return bundle0;
    }

    private static Method getSetIsFromMockProviderMethod() throws NoSuchMethodException {
        if(LocationCompat.sSetIsFromMockProviderMethod == null) {
            Method method0 = Location.class.getDeclaredMethod("setIsFromMockProvider", Boolean.TYPE);
            LocationCompat.sSetIsFromMockProviderMethod = method0;
            method0.setAccessible(true);
        }
        return LocationCompat.sSetIsFromMockProviderMethod;
    }

    public static float getSpeedAccuracyMetersPerSecond(Location location0) {
        if(Build.VERSION.SDK_INT >= 26) {
            return Api26Impl.getSpeedAccuracyMetersPerSecond(location0);
        }
        Bundle bundle0 = location0.getExtras();
        return bundle0 == null ? 0.0f : bundle0.getFloat("speedAccuracy", 0.0f);
    }

    public static float getVerticalAccuracyMeters(Location location0) {
        if(Build.VERSION.SDK_INT >= 26) {
            return Api26Impl.getVerticalAccuracyMeters(location0);
        }
        Bundle bundle0 = location0.getExtras();
        return bundle0 == null ? 0.0f : bundle0.getFloat("verticalAccuracy", 0.0f);
    }

    public static boolean hasBearingAccuracy(Location location0) {
        return Build.VERSION.SDK_INT < 26 ? LocationCompat.containsExtra(location0, "bearingAccuracy") : Api26Impl.hasBearingAccuracy(location0);
    }

    public static boolean hasMslAltitude(Location location0) {
        return LocationCompat.containsExtra(location0, "androidx.core.location.extra.MSL_ALTITUDE");
    }

    public static boolean hasMslAltitudeAccuracy(Location location0) {
        return LocationCompat.containsExtra(location0, "androidx.core.location.extra.MSL_ALTITUDE_ACCURACY");
    }

    public static boolean hasSpeedAccuracy(Location location0) {
        return Build.VERSION.SDK_INT < 26 ? LocationCompat.containsExtra(location0, "speedAccuracy") : Api26Impl.hasSpeedAccuracy(location0);
    }

    public static boolean hasVerticalAccuracy(Location location0) {
        return Build.VERSION.SDK_INT < 26 ? LocationCompat.containsExtra(location0, "verticalAccuracy") : Api26Impl.hasVerticalAccuracy(location0);
    }

    public static boolean isMock(Location location0) {
        return Api18Impl.isMock(location0);
    }

    private static void removeExtra(Location location0, String s) {
        Bundle bundle0 = location0.getExtras();
        if(bundle0 != null) {
            bundle0.remove(s);
            if(bundle0.isEmpty()) {
                location0.setExtras(null);
            }
        }
    }

    public static void removeMslAltitude(Location location0) {
        LocationCompat.removeExtra(location0, "androidx.core.location.extra.MSL_ALTITUDE");
    }

    public static void removeMslAltitudeAccuracy(Location location0) {
        LocationCompat.removeExtra(location0, "androidx.core.location.extra.MSL_ALTITUDE_ACCURACY");
    }

    public static void setBearingAccuracyDegrees(Location location0, float f) {
        if(Build.VERSION.SDK_INT >= 26) {
            Api26Impl.setBearingAccuracyDegrees(location0, f);
            return;
        }
        LocationCompat.getOrCreateExtras(location0).putFloat("bearingAccuracy", f);
    }

    public static void setMock(Location location0, boolean z) {
        try {
            zkcvv.invoke(LocationCompat.getSetIsFromMockProviderMethod(), location0, new Object[]{Boolean.valueOf(z)});
        }
        catch(NoSuchMethodException noSuchMethodException0) {
            NoSuchMethodError noSuchMethodError0 = new NoSuchMethodError();
            noSuchMethodError0.initCause(noSuchMethodException0);
            throw noSuchMethodError0;
        }
        catch(IllegalAccessException illegalAccessException0) {
            IllegalAccessError illegalAccessError0 = new IllegalAccessError();
            illegalAccessError0.initCause(illegalAccessException0);
            throw illegalAccessError0;
        }
        catch(InvocationTargetException invocationTargetException0) {
            throw new RuntimeException(invocationTargetException0);
        }
    }

    public static void setMslAltitudeAccuracyMeters(Location location0, float f) {
        LocationCompat.getOrCreateExtras(location0).putFloat("androidx.core.location.extra.MSL_ALTITUDE_ACCURACY", f);
    }

    public static void setMslAltitudeMeters(Location location0, double f) {
        LocationCompat.getOrCreateExtras(location0).putDouble("androidx.core.location.extra.MSL_ALTITUDE", f);
    }

    public static void setSpeedAccuracyMetersPerSecond(Location location0, float f) {
        if(Build.VERSION.SDK_INT >= 26) {
            Api26Impl.setSpeedAccuracyMetersPerSecond(location0, f);
            return;
        }
        LocationCompat.getOrCreateExtras(location0).putFloat("speedAccuracy", f);
    }

    public static void setVerticalAccuracyMeters(Location location0, float f) {
        if(Build.VERSION.SDK_INT >= 26) {
            Api26Impl.setVerticalAccuracyMeters(location0, f);
            return;
        }
        LocationCompat.getOrCreateExtras(location0).putFloat("verticalAccuracy", f);
    }
}

