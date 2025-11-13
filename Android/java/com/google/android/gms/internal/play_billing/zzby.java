package com.google.android.gms.internal.play_billing;

import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;

public abstract class zzby extends zzbf {
    zzbz zza;
    private static final Logger zzb;
    private static final boolean zzc;

    static {
        zzby.zzb = Logger.getLogger("com.google.android.gms.internal.play_billing.zzby");
        zzby.zzc = false;
    }

    private zzby() {
        throw null;
    }

    zzby(zzbx zzbx0) {
    }

    final void zzA(String s, zzft zzft0) throws IOException {
        zzby.zzb.logp(Level.WARNING, "com.google.protobuf.CodedOutputStream", "inefficientWriteStringNoTag", "Converting ill-formed UTF-16. Your Protocol Buffer will not round trip correctly!", zzft0);
        byte[] arr_b = s.getBytes(zzda.zzb);
        try {
            this.zzq(arr_b.length);
            this.zzl(arr_b, 0, arr_b.length);
        }
        catch(IndexOutOfBoundsException indexOutOfBoundsException0) {
            throw new zzbw(indexOutOfBoundsException0);
        }
    }

    static boolean zzB() [...] // 潜在的解密器

    public abstract int zza();

    public abstract void zzb(byte arg1) throws IOException;

    public abstract void zzd(int arg1, boolean arg2) throws IOException;

    public abstract void zze(int arg1, zzbq arg2) throws IOException;

    public abstract void zzf(int arg1, int arg2) throws IOException;

    public abstract void zzg(int arg1) throws IOException;

    public abstract void zzh(int arg1, long arg2) throws IOException;

    public abstract void zzi(long arg1) throws IOException;

    public abstract void zzj(int arg1, int arg2) throws IOException;

    public abstract void zzk(int arg1) throws IOException;

    public abstract void zzl(byte[] arg1, int arg2, int arg3) throws IOException;

    public abstract void zzm(int arg1, String arg2) throws IOException;

    public abstract void zzo(int arg1, int arg2) throws IOException;

    public abstract void zzp(int arg1, int arg2) throws IOException;

    public abstract void zzq(int arg1) throws IOException;

    public abstract void zzr(int arg1, long arg2) throws IOException;

    public abstract void zzs(long arg1) throws IOException;

    @Deprecated
    static int zzt(int v, zzec zzec0, zzeo zzeo0) {
        int v1 = zzby.zzw(v << 3);
        return v1 + v1 + ((zzay)zzec0).zza(zzeo0);
    }

    static int zzu(zzec zzec0, zzeo zzeo0) {
        int v = ((zzay)zzec0).zza(zzeo0);
        return zzby.zzw(v) + v;
    }

    public static int zzv(String s) {
        int v;
        try {
            v = zzfu.zzc(s);
            return zzby.zzw(v) + v;
        }
        catch(zzft unused_ex) {
            v = s.getBytes(zzda.zzb).length;
            return zzby.zzw(v) + v;
        }
    }

    public static int zzw(int v) [...] // 潜在的解密器

    public static int zzx(long v) {
        return 640 - Long.numberOfLeadingZeros(v) * 9 >>> 6;
    }

    public static zzby zzy(byte[] arr_b, int v, int v1) {
        return new zzbv(arr_b, 0, v1);
    }

    public final void zzz() {
        if(this.zza() != 0) {
            throw new IllegalStateException("Did not write as much data as expected.");
        }
    }
}

