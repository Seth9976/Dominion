package com.google.android.gms.internal.play_billing;

public final class zzgu extends zzcs implements zzed {
    private static final zzgu zzb;
    private int zzd;
    private String zze;
    private String zzf;
    private int zzg;

    static {
        zzgu zzgu0 = new zzgu();
        zzgu.zzb = zzgu0;
        zzcs.zzt(zzgu.class, zzgu0);
    }

    private zzgu() {
        this.zze = "";
        this.zzf = "";
    }

    static void zzA(zzgu zzgu0, String s) {
        s.getClass();
        zzgu0.zzd |= 1;
        zzgu0.zze = s;
    }

    static void zzB(zzgu zzgu0, String s) {
        s.getClass();
        zzgu0.zzd |= 2;
        zzgu0.zzf = s;
    }

    static void zzC(zzgu zzgu0, int v) {
        zzgu0.zzd |= 4;
        zzgu0.zzg = v;
    }

    @Override  // com.google.android.gms.internal.play_billing.zzcs
    protected final Object zzx(int v, Object object0, Object object1) {
        if(v - 1 != 0) {
            switch(v - 1) {
                case 2: {
                    return zzgu.zzq(zzgu.zzb, "\u0001\u0003\u0000\u0001\u0001\u0003\u0003\u0000\u0000\u0000\u0001ဈ\u0000\u0002ဈ\u0001\u0003င\u0002", new Object[]{"zzd", "zze", "zzf", "zzg"});
                }
                case 3: {
                    return new zzgu();
                }
                default: {
                    switch(v - 1) {
                        case 4: {
                            return new zzgt(null);
                        }
                        case 5: {
                            return zzgu.zzb;
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

    public static zzgt zzy() {
        return (zzgt)zzgu.zzb.zzg();
    }

    static zzgu zzz() {
        return zzgu.zzb;
    }
}

