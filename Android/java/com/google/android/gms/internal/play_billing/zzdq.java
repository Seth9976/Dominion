package com.google.android.gms.internal.play_billing;

abstract class zzdq {
    private static final zzdq zza;
    private static final zzdq zzb;

    static {
        zzdq.zza = new zzdm(null);
        zzdq.zzb = new zzdo(null);
    }

    zzdq(zzdp zzdp0) {
    }

    abstract void zza(Object arg1, long arg2);

    abstract void zzb(Object arg1, Object arg2, long arg3);

    static zzdq zzc() {
        return zzdq.zza;
    }

    static zzdq zzd() {
        return zzdq.zzb;
    }
}

