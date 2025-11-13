package com.google.android.gms.internal.play_billing;

public final class zzhl extends zzcs implements zzed {
    private static final zzhl zzb;
    private int zzd;
    private int zze;

    static {
        zzhl zzhl0 = new zzhl();
        zzhl.zzb = zzhl0;
        zzcs.zzt(zzhl.class, zzhl0);
    }

    @Override  // com.google.android.gms.internal.play_billing.zzcs
    protected final Object zzx(int v, Object object0, Object object1) {
        if(v - 1 != 0) {
            switch(v - 1) {
                case 2: {
                    return zzhl.zzq(zzhl.zzb, "\u0001\u0001\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u0000\u0001᠌\u0000", new Object[]{"zzd", "zze", zzhk.zza});
                }
                case 3: {
                    return new zzhl();
                }
                default: {
                    switch(v - 1) {
                        case 4: {
                            return new zzhj(null);
                        }
                        case 5: {
                            return zzhl.zzb;
                        }
                        default: {
                            return null;
                        }
                    }
                }
            }
        }
        return (byte)1;
    }

    static zzhl zzy() {
        return zzhl.zzb;
    }

    public static zzhl zzz() {
        return zzhl.zzb;
    }
}

