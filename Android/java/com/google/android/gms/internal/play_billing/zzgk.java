package com.google.android.gms.internal.play_billing;

public final class zzgk extends zzcs implements zzed {
    private static final zzgk zzb;
    private int zzd;
    private int zze;
    private String zzf;
    private int zzg;
    private String zzh;

    static {
        zzgk zzgk0 = new zzgk();
        zzgk.zzb = zzgk0;
        zzcs.zzt(zzgk.class, zzgk0);
    }

    private zzgk() {
        this.zzf = "";
        this.zzh = "";
    }

    static void zzA(zzgk zzgk0, int v) {
        zzgk0.zzd |= 1;
        zzgk0.zze = v;
    }

    static void zzB(zzgk zzgk0, String s) {
        s.getClass();
        zzgk0.zzd |= 2;
        zzgk0.zzf = s;
    }

    static void zzC(zzgk zzgk0, String s) {
        zzgk0.zzd |= 8;
        zzgk0.zzh = s;
    }

    static void zzD(zzgk zzgk0, int v) {
        zzgk0.zzg = v - 1;
        zzgk0.zzd |= 4;
    }

    @Override  // com.google.android.gms.internal.play_billing.zzcs
    protected final Object zzx(int v, Object object0, Object object1) {
        if(v - 1 != 0) {
            switch(v - 1) {
                case 2: {
                    return zzgk.zzq(zzgk.zzb, "\u0001\u0004\u0000\u0001\u0001\u0005\u0004\u0000\u0000\u0000\u0001င\u0000\u0002ဈ\u0001\u0004᠌\u0002\u0005ဈ\u0003", new Object[]{"zzd", "zze", "zzf", "zzg", zzgi.zza, "zzh"});
                }
                case 3: {
                    return new zzgk();
                }
                default: {
                    switch(v - 1) {
                        case 4: {
                            return new zzgg(null);
                        }
                        case 5: {
                            return zzgk.zzb;
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

    public static zzgg zzy() {
        return (zzgg)zzgk.zzb.zzg();
    }

    static zzgk zzz() {
        return zzgk.zzb;
    }
}

