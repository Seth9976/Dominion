package com.google.android.gms.internal.play_billing;

import java.io.IOException;
import java.lang.reflect.Field;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map.Entry;
import java.util.RandomAccess;
import sun.misc.Unsafe;

final class zzef implements zzeo {
    private static final int[] zza;
    private static final Unsafe zzb;
    private final int[] zzc;
    private final Object[] zzd;
    private final int zze;
    private final int zzf;
    private final zzec zzg;
    private final boolean zzh;
    private final int[] zzi;
    private final int zzj;
    private final int zzk;
    private final zzdq zzl;
    private final zzff zzm;
    private final zzce zzn;
    private final zzei zzo;
    private final zzdx zzp;

    static {
        zzef.zza = new int[0];
        zzef.zzb = zzfp.zzg();
    }

    private zzef(int[] arr_v, Object[] arr_object, int v, int v1, zzec zzec0, int v2, boolean z, int[] arr_v1, int v3, int v4, zzei zzei0, zzdq zzdq0, zzff zzff0, zzce zzce0, zzdx zzdx0) {
        this.zzc = arr_v;
        this.zzd = arr_object;
        this.zze = v;
        this.zzf = v1;
        this.zzh = zzce0 != null && zzce0.zzf(zzec0);
        this.zzi = arr_v1;
        this.zzj = v3;
        this.zzk = v4;
        this.zzo = zzei0;
        this.zzl = zzdq0;
        this.zzm = zzff0;
        this.zzn = zzce0;
        this.zzg = zzec0;
        this.zzp = zzdx0;
    }

    private static void zzA(Object object0) {
        if(!zzef.zzL(object0)) {
            throw new IllegalArgumentException("Mutating immutable message: " + object0);
        }
    }

    private final void zzB(Object object0, Object object1, int v) {
        if(!this.zzI(object1, v)) {
            return;
        }
        int v1 = this.zzs(v);
        Unsafe unsafe0 = zzef.zzb;
        Object object2 = unsafe0.getObject(object1, ((long)(v1 & 0xFFFFF)));
        if(object2 == null) {
            throw new IllegalStateException("Source subfield " + this.zzc[v] + " is present but null: " + object1.toString());
        }
        zzeo zzeo0 = this.zzv(v);
        if(!this.zzI(object0, v)) {
            if(zzef.zzL(object2)) {
                Object object3 = zzeo0.zze();
                zzeo0.zzg(object3, object2);
                unsafe0.putObject(object0, ((long)(v1 & 0xFFFFF)), object3);
            }
            else {
                unsafe0.putObject(object0, ((long)(v1 & 0xFFFFF)), object2);
            }
            this.zzD(object0, v);
            return;
        }
        Object object4 = unsafe0.getObject(object0, ((long)(v1 & 0xFFFFF)));
        if(!zzef.zzL(object4)) {
            Object object5 = zzeo0.zze();
            zzeo0.zzg(object5, object4);
            unsafe0.putObject(object0, ((long)(v1 & 0xFFFFF)), object5);
            object4 = object5;
        }
        zzeo0.zzg(object4, object2);
    }

    private final void zzC(Object object0, Object object1, int v) {
        int v1 = this.zzc[v];
        if(!this.zzM(object1, v1, v)) {
            return;
        }
        int v2 = this.zzs(v);
        Unsafe unsafe0 = zzef.zzb;
        Object object2 = unsafe0.getObject(object1, ((long)(v2 & 0xFFFFF)));
        if(object2 == null) {
            throw new IllegalStateException("Source subfield " + this.zzc[v] + " is present but null: " + object1.toString());
        }
        zzeo zzeo0 = this.zzv(v);
        if(!this.zzM(object0, v1, v)) {
            if(zzef.zzL(object2)) {
                Object object3 = zzeo0.zze();
                zzeo0.zzg(object3, object2);
                unsafe0.putObject(object0, ((long)(v2 & 0xFFFFF)), object3);
            }
            else {
                unsafe0.putObject(object0, ((long)(v2 & 0xFFFFF)), object2);
            }
            this.zzE(object0, v1, v);
            return;
        }
        Object object4 = unsafe0.getObject(object0, ((long)(v2 & 0xFFFFF)));
        if(!zzef.zzL(object4)) {
            Object object5 = zzeo0.zze();
            zzeo0.zzg(object5, object4);
            unsafe0.putObject(object0, ((long)(v2 & 0xFFFFF)), object5);
            object4 = object5;
        }
        zzeo0.zzg(object4, object2);
    }

    private final void zzD(Object object0, int v) {
        int v1 = this.zzp(v);
        if(((long)(0xFFFFF & v1)) == 0xFFFFFL) {
            return;
        }
        zzfp.zzq(object0, ((long)(0xFFFFF & v1)), 1 << (v1 >>> 20) | zzfp.zzc(object0, ((long)(0xFFFFF & v1))));
    }

    private final void zzE(Object object0, int v, int v1) {
        zzfp.zzq(object0, ((long)(this.zzp(v1) & 0xFFFFF)), v);
    }

    private final void zzF(Object object0, int v, Object object1) {
        int v1 = this.zzs(v);
        zzef.zzb.putObject(object0, ((long)(v1 & 0xFFFFF)), object1);
        this.zzD(object0, v);
    }

    private final void zzG(Object object0, int v, int v1, Object object1) {
        int v2 = this.zzs(v1);
        zzef.zzb.putObject(object0, ((long)(v2 & 0xFFFFF)), object1);
        this.zzE(object0, v, v1);
    }

    private final boolean zzH(Object object0, Object object1, int v) {
        return this.zzI(object0, v) == this.zzI(object1, v);
    }

    private final boolean zzI(Object object0, int v) {
        int v1 = this.zzp(v);
        if(Long.compare(v1 & 0xFFFFF, 0xFFFFFL) == 0) {
            int v2 = this.zzs(v);
            switch(v2 >>> 20 & 0xFF) {
                case 0: {
                    return Double.doubleToRawLongBits(zzfp.zza(object0, ((long)(v2 & 0xFFFFF)))) != 0L;
                }
                case 1: {
                    return Float.floatToRawIntBits(zzfp.zzb(object0, ((long)(v2 & 0xFFFFF)))) != 0;
                }
                case 2: {
                    return zzfp.zzd(object0, ((long)(v2 & 0xFFFFF))) != 0L;
                }
                case 3: {
                    return zzfp.zzd(object0, ((long)(v2 & 0xFFFFF))) != 0L;
                }
                case 4: {
                    return zzfp.zzc(object0, ((long)(v2 & 0xFFFFF))) != 0;
                }
                case 5: {
                    return zzfp.zzd(object0, ((long)(v2 & 0xFFFFF))) != 0L;
                }
                case 6: {
                    return zzfp.zzc(object0, ((long)(v2 & 0xFFFFF))) != 0;
                }
                case 7: {
                    return zzfp.zzw(object0, ((long)(v2 & 0xFFFFF)));
                }
                case 8: {
                    Object object1 = zzfp.zzf(object0, ((long)(v2 & 0xFFFFF)));
                    if(object1 instanceof String) {
                        return !((String)object1).isEmpty();
                    }
                    if(!(object1 instanceof zzbq)) {
                        throw new IllegalArgumentException();
                    }
                    return !zzbq.zzb.equals(object1);
                }
                case 9: {
                    return zzfp.zzf(object0, ((long)(v2 & 0xFFFFF))) != null;
                }
                case 10: {
                    Object object2 = zzfp.zzf(object0, ((long)(v2 & 0xFFFFF)));
                    return !zzbq.zzb.equals(object2);
                }
                case 11: {
                    return zzfp.zzc(object0, ((long)(v2 & 0xFFFFF))) != 0;
                }
                case 12: {
                    return zzfp.zzc(object0, ((long)(v2 & 0xFFFFF))) != 0;
                }
                case 13: {
                    return zzfp.zzc(object0, ((long)(v2 & 0xFFFFF))) != 0;
                }
                case 14: {
                    return zzfp.zzd(object0, ((long)(v2 & 0xFFFFF))) != 0L;
                }
                case 15: {
                    return zzfp.zzc(object0, ((long)(v2 & 0xFFFFF))) != 0;
                }
                case 16: {
                    return zzfp.zzd(object0, ((long)(v2 & 0xFFFFF))) != 0L;
                }
                case 17: {
                    return zzfp.zzf(object0, ((long)(v2 & 0xFFFFF))) != null;
                }
                default: {
                    throw new IllegalArgumentException();
                }
            }
        }
        return (zzfp.zzc(object0, ((long)(v1 & 0xFFFFF))) & 1 << (v1 >>> 20)) != 0;
    }

    private final boolean zzJ(Object object0, int v, int v1, int v2, int v3) {
        return v1 == 0xFFFFF ? this.zzI(object0, v) : (v2 & v3) != 0;
    }

    private static boolean zzK(Object object0, int v, zzeo zzeo0) {
        return zzeo0.zzk(zzfp.zzf(object0, ((long)(v & 0xFFFFF))));
    }

    private static boolean zzL(Object object0) {
        if(object0 == null) {
            return false;
        }
        return object0 instanceof zzcs ? ((zzcs)object0).zzw() : true;
    }

    private final boolean zzM(Object object0, int v, int v1) {
        return zzfp.zzc(object0, ((long)(this.zzp(v1) & 0xFFFFF))) == v;
    }

    private static boolean zzN(Object object0, long v) {
        return ((Boolean)zzfp.zzf(object0, v)).booleanValue();
    }

    private static final void zzO(int v, Object object0, zzfx zzfx0) throws IOException {
        if(object0 instanceof String) {
            zzfx0.zzG(v, ((String)object0));
            return;
        }
        zzfx0.zzd(v, ((zzbq)object0));
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final int zza(Object object0) {
        int v44;
        int v42;
        int v41;
        int v40;
        int v37;
        int v33;
        int v25;
        int v24;
        int v23;
        int v20;
        int v19;
        int v18;
        int v17;
        int v16;
        int v15;
        int v14;
        int v13;
        int v11;
        int v10;
        int v9;
        Unsafe unsafe0 = zzef.zzb;
        int v = 0;
        int v1 = 0;
        int v2 = 0;
        int v3 = 0xFFFFF;
        while(v1 < this.zzc.length) {
            int v4 = this.zzs(v1);
            int v5 = v4 >>> 20 & 0xFF;
            int v6 = this.zzc[v1];
            int v7 = this.zzc[v1 + 2];
            int v8 = v7 & 0xFFFFF;
            if(v5 <= 17) {
                if(v8 != v3) {
                    v = v8 == 0xFFFFF ? 0 : unsafe0.getInt(object0, ((long)v8));
                    v3 = v8;
                }
                v9 = v3;
                v10 = v;
                v11 = 1 << (v7 >>> 20);
            }
            else {
                v9 = v3;
                v10 = v;
                v11 = 0;
            }
            boolean z = v5 < zzcj.zzJ.zza();
            long v12 = (long)(v4 & 0xFFFFF);
            switch(v5) {
                case 0: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v13 = zzby.zzw(v6 << 3);
                        v17 = v13 + 8;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 1: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v14 = zzby.zzw(v6 << 3);
                        v17 = v14 + 4;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 2: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(unsafe0.getLong(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 3: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(unsafe0.getLong(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 4: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(unsafe0.getInt(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 5: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v13 = zzby.zzw(v6 << 3);
                        v17 = v13 + 8;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 6: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v14 = zzby.zzw(v6 << 3);
                        v17 = v14 + 4;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 7: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v17 = zzby.zzw(v6 << 3) + 1;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 8: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        Object object1 = unsafe0.getObject(object0, v12);
                        if(object1 instanceof zzbq) {
                            v18 = zzby.zzw(v6 << 3);
                            v19 = ((zzbq)object1).zzd();
                            v20 = zzby.zzw(v19);
                            goto label_355;
                        }
                        else {
                            v15 = zzby.zzw(v6 << 3);
                            v16 = zzby.zzv(((String)object1));
                            goto label_385;
                        }
                        goto label_63;
                    }
                    break;
                }
                case 9: {
                label_63:
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v17 = zzeq.zzh(v6, unsafe0.getObject(object0, v12), this.zzv(v1));
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 10: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v18 = zzby.zzw(v6 << 3);
                        v19 = ((zzbq)unsafe0.getObject(object0, v12)).zzd();
                        v20 = zzby.zzw(v19);
                        goto label_355;
                    }
                    break;
                }
                case 11: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzw(unsafe0.getInt(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 12: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(unsafe0.getInt(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 13: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v14 = zzby.zzw(v6 << 3);
                        v17 = v14 + 4;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 14: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v13 = zzby.zzw(v6 << 3);
                        v17 = v13 + 8;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 15: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        int v21 = unsafe0.getInt(object0, v12);
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzw(v21 >> 0x1F ^ v21 + v21);
                        goto label_385;
                    }
                    break;
                }
                case 16: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        long v22 = unsafe0.getLong(object0, v12);
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(v22 >> 0x3F ^ v22 + v22);
                        goto label_385;
                    }
                    break;
                }
                case 17: {
                    if(this.zzJ(object0, v1, v9, v10, v11)) {
                        v17 = zzby.zzt(v6, ((zzec)unsafe0.getObject(object0, v12)), this.zzv(v1));
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 18: {
                    v17 = zzeq.zzd(v6, ((List)unsafe0.getObject(object0, v12)), false);
                    v2 += v17;
                    break;
                }
                case 19: {
                    v17 = zzeq.zzb(v6, ((List)unsafe0.getObject(object0, v12)), false);
                    v2 += v17;
                    break;
                }
                case 20: {
                    List list0 = (List)unsafe0.getObject(object0, v12);
                    v23 = list0.size() == 0 ? 0 : zzeq.zzg(list0) + list0.size() * zzby.zzw(v6 << 3);
                    v2 += v23;
                    break;
                }
                case 21: {
                    List list1 = (List)unsafe0.getObject(object0, v12);
                    v24 = list1.size();
                    if(v24 != 0) {
                        v15 = zzeq.zzl(list1);
                        v25 = zzby.zzw(v6 << 3);
                        v16 = v24 * v25;
                        goto label_385;
                    }
                    v17 = 0;
                    v2 += v17;
                    break;
                }
                case 22: {
                    List list2 = (List)unsafe0.getObject(object0, v12);
                    v24 = list2.size();
                    if(v24 != 0) {
                        v15 = zzeq.zzf(list2);
                        v25 = zzby.zzw(v6 << 3);
                        v16 = v24 * v25;
                        goto label_385;
                    }
                    v17 = 0;
                    v2 += v17;
                    break;
                }
                case 23: {
                    v17 = zzeq.zzd(v6, ((List)unsafe0.getObject(object0, v12)), false);
                    v2 += v17;
                    break;
                }
                case 24: {
                    v17 = zzeq.zzb(v6, ((List)unsafe0.getObject(object0, v12)), false);
                    v2 += v17;
                    break;
                }
                case 25: {
                    int v26 = ((List)unsafe0.getObject(object0, v12)).size();
                    if(v26 != 0) {
                        v17 = v26 * (zzby.zzw(v6 << 3) + 1);
                        v2 += v17;
                        break;
                    }
                    v17 = 0;
                    v2 += v17;
                    break;
                }
                case 26: {
                    List list3 = (List)unsafe0.getObject(object0, v12);
                    int v27 = list3.size();
                    if(v27 == 0) {
                        v23 = 0;
                    }
                    else {
                        v23 = zzby.zzw(v6 << 3) * v27;
                        if(list3 instanceof zzdk) {
                            zzdk zzdk0 = (zzdk)list3;
                            for(int v28 = 0; v28 < v27; ++v28) {
                                Object object2 = zzdk0.zzf(v28);
                                if(object2 instanceof zzbq) {
                                    int v29 = ((zzbq)object2).zzd();
                                    v23 += zzby.zzw(v29) + v29;
                                }
                                else {
                                    v23 += zzby.zzv(((String)object2));
                                }
                            }
                        }
                        else {
                            for(int v30 = 0; v30 < v27; ++v30) {
                                Object object3 = list3.get(v30);
                                if(object3 instanceof zzbq) {
                                    int v31 = ((zzbq)object3).zzd();
                                    v23 += zzby.zzw(v31) + v31;
                                }
                                else {
                                    v23 += zzby.zzv(((String)object3));
                                }
                            }
                        }
                    }
                    v2 += v23;
                    break;
                }
                case 27: {
                    List list4 = (List)unsafe0.getObject(object0, v12);
                    zzeo zzeo0 = this.zzv(v1);
                    int v32 = list4.size();
                    if(v32 == 0) {
                        v33 = 0;
                    }
                    else {
                        v33 = zzby.zzw(v6 << 3) * v32;
                        for(int v34 = 0; v34 < v32; ++v34) {
                            Object object4 = list4.get(v34);
                            if(object4 instanceof zzdi) {
                                int v35 = ((zzdi)object4).zza();
                                v33 += zzby.zzw(v35) + v35;
                            }
                            else {
                                v33 += zzby.zzu(((zzec)object4), zzeo0);
                            }
                        }
                    }
                    v2 += v33;
                    break;
                }
                case 28: {
                    List list5 = (List)unsafe0.getObject(object0, v12);
                    int v36 = list5.size();
                    if(v36 == 0) {
                        v37 = 0;
                    }
                    else {
                        v37 = v36 * zzby.zzw(v6 << 3);
                        for(int v38 = 0; v38 < list5.size(); ++v38) {
                            int v39 = ((zzbq)list5.get(v38)).zzd();
                            v37 += zzby.zzw(v39) + v39;
                        }
                    }
                    v2 += v37;
                    break;
                }
                case 29: {
                    List list6 = (List)unsafe0.getObject(object0, v12);
                    v24 = list6.size();
                    if(v24 != 0) {
                        v15 = zzeq.zzk(list6);
                        v25 = zzby.zzw(v6 << 3);
                        v16 = v24 * v25;
                        goto label_385;
                    }
                    v17 = 0;
                    v2 += v17;
                    break;
                }
                case 30: {
                    List list7 = (List)unsafe0.getObject(object0, v12);
                    v24 = list7.size();
                    if(v24 != 0) {
                        v15 = zzeq.zza(list7);
                        v25 = zzby.zzw(v6 << 3);
                        v16 = v24 * v25;
                        goto label_385;
                    }
                    v17 = 0;
                    v2 += v17;
                    break;
                }
                case 0x1F: {
                    v17 = zzeq.zzb(v6, ((List)unsafe0.getObject(object0, v12)), false);
                    v2 += v17;
                    break;
                }
                case 0x20: {
                    v17 = zzeq.zzd(v6, ((List)unsafe0.getObject(object0, v12)), false);
                    v2 += v17;
                    break;
                }
                case 33: {
                    List list8 = (List)unsafe0.getObject(object0, v12);
                    v24 = list8.size();
                    if(v24 != 0) {
                        v15 = zzeq.zzi(list8);
                        v25 = zzby.zzw(v6 << 3);
                        v16 = v24 * v25;
                        goto label_385;
                    }
                    v17 = 0;
                    v2 += v17;
                    break;
                }
                case 34: {
                    List list9 = (List)unsafe0.getObject(object0, v12);
                    v24 = list9.size();
                    if(v24 == 0) {
                        v17 = 0;
                        v2 += v17;
                        break;
                    }
                    else {
                        v15 = zzeq.zzj(list9);
                        v16 = v24 * zzby.zzw(v6 << 3);
                        goto label_385;
                    }
                    goto label_224;
                }
                case 35: {
                label_224:
                    v40 = zzeq.zze(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 36: {
                    v40 = zzeq.zzc(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 37: {
                    v40 = zzeq.zzg(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 38: {
                    v40 = zzeq.zzl(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 39: {
                    v40 = zzeq.zzf(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 40: {
                    v40 = zzeq.zze(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 41: {
                    v40 = zzeq.zzc(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 42: {
                    v40 = ((List)unsafe0.getObject(object0, v12)).size();
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 43: {
                    v40 = zzeq.zzk(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 44: {
                    v40 = zzeq.zza(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 45: {
                    v40 = zzeq.zzc(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 46: {
                    v40 = zzeq.zze(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                        break;
                    }
                    break;
                }
                case 0x2F: {
                    v40 = zzeq.zzi(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v41 = zzby.zzw(v6 << 3);
                        v42 = zzby.zzw(v40);
                        v37 = v41 + v42 + v40;
                        v2 += v37;
                    }
                    break;
                }
                case 0x30: {
                    v40 = zzeq.zzj(((List)unsafe0.getObject(object0, v12)));
                    if(v40 > 0) {
                        v2 += zzby.zzw(v6 << 3) + zzby.zzw(v40) + v40;
                    }
                    break;
                }
                case 49: {
                    List list10 = (List)unsafe0.getObject(object0, v12);
                    zzeo zzeo1 = this.zzv(v1);
                    int v43 = list10.size();
                    if(v43 == 0) {
                        v44 = 0;
                    }
                    else {
                        v44 = 0;
                        for(int v45 = 0; v45 < v43; ++v45) {
                            v44 += zzby.zzt(v6, ((zzec)list10.get(v45)), zzeo1);
                        }
                    }
                    v2 += v44;
                    break;
                }
                case 50: {
                    Object object5 = unsafe0.getObject(object0, v12);
                    Object object6 = this.zzw(v1);
                    zzdw zzdw0 = (zzdw)object5;
                    zzdv zzdv0 = (zzdv)object6;
                    if(!zzdw0.isEmpty()) {
                        Iterator iterator0 = zzdw0.entrySet().iterator();
                        if(iterator0.hasNext()) {
                            Object object7 = iterator0.next();
                            ((Map.Entry)object7).getKey();
                            ((Map.Entry)object7).getValue();
                            throw null;
                        }
                    }
                    break;
                }
                case 51: {
                    if(this.zzM(object0, v6, v1)) {
                        v13 = zzby.zzw(v6 << 3);
                        v17 = v13 + 8;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 52: {
                    if(this.zzM(object0, v6, v1)) {
                        v14 = zzby.zzw(v6 << 3);
                        v17 = v14 + 4;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 53: {
                    if(this.zzM(object0, v6, v1)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(zzef.zzt(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 54: {
                    if(this.zzM(object0, v6, v1)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(zzef.zzt(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 55: {
                    if(this.zzM(object0, v6, v1)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(zzef.zzo(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 56: {
                    if(this.zzM(object0, v6, v1)) {
                        v13 = zzby.zzw(v6 << 3);
                        v17 = v13 + 8;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 57: {
                    if(this.zzM(object0, v6, v1)) {
                        v14 = zzby.zzw(v6 << 3);
                        v17 = v14 + 4;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 58: {
                    if(this.zzM(object0, v6, v1)) {
                        v17 = zzby.zzw(v6 << 3) + 1;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 59: {
                    if(this.zzM(object0, v6, v1)) {
                        Object object8 = unsafe0.getObject(object0, v12);
                        if(object8 instanceof zzbq) {
                            v18 = zzby.zzw(v6 << 3);
                            v19 = ((zzbq)object8).zzd();
                            v20 = zzby.zzw(v19);
                        label_355:
                            v17 = v18 + (v20 + v19);
                            v2 += v17;
                            break;
                        }
                        else {
                            v15 = zzby.zzw(v6 << 3);
                            v16 = zzby.zzv(((String)object8));
                            goto label_385;
                        }
                        goto label_360;
                    }
                    break;
                }
                case 60: {
                label_360:
                    if(this.zzM(object0, v6, v1)) {
                        v17 = zzeq.zzh(v6, unsafe0.getObject(object0, v12), this.zzv(v1));
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 61: {
                    if(this.zzM(object0, v6, v1)) {
                        v19 = ((zzbq)unsafe0.getObject(object0, v12)).zzd();
                        v17 = zzby.zzw(v6 << 3) + (zzby.zzw(v19) + v19);
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 62: {
                    if(this.zzM(object0, v6, v1)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzw(zzef.zzo(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 0x3F: {
                    if(this.zzM(object0, v6, v1)) {
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzx(zzef.zzo(object0, v12));
                        goto label_385;
                    }
                    break;
                }
                case 0x40: {
                    if(this.zzM(object0, v6, v1)) {
                        v17 = zzby.zzw(v6 << 3) + 4;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 65: {
                    if(this.zzM(object0, v6, v1)) {
                        v17 = zzby.zzw(v6 << 3) + 8;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 66: {
                    if(this.zzM(object0, v6, v1)) {
                        int v46 = zzef.zzo(object0, v12);
                        v15 = zzby.zzw(v6 << 3);
                        v16 = zzby.zzw(v46 >> 0x1F ^ v46 + v46);
                    label_385:
                        v17 = v15 + v16;
                        v2 += v17;
                        break;
                    }
                    break;
                }
                case 67: {
                    if(this.zzM(object0, v6, v1)) {
                        long v47 = zzef.zzt(object0, v12);
                        v17 = zzby.zzw(v6 << 3) + zzby.zzx(v47 >> 0x3F ^ v47 + v47);
                        v2 += v17;
                    }
                    break;
                }
                case 68: {
                    if(this.zzM(object0, v6, v1)) {
                        v2 += zzby.zzt(v6, ((zzec)unsafe0.getObject(object0, v12)), this.zzv(v1));
                    }
                }
            }
            v1 += 3;
            v3 = v9;
            v = v10;
        }
        Object object9 = this.zzm.zzd(object0);
        int v48 = v2 + this.zzm.zza(object9);
        if(this.zzh) {
            zzci zzci0 = this.zzn.zzb(object0);
            int v50 = 0;
            for(int v49 = 0; v49 < zzci0.zza.zzb(); ++v49) {
                Map.Entry map$Entry0 = zzci0.zza.zzg(v49);
                v50 += zzci.zzb(((zzch)map$Entry0.getKey()), map$Entry0.getValue());
            }
            for(Object object10: zzci0.zza.zzc()) {
                v50 += zzci.zzb(((zzch)((Map.Entry)object10).getKey()), ((Map.Entry)object10).getValue());
            }
            return v48 + v50;
        }
        return v48;
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final int zzb(Object object0) {
        int v8;
        long v7;
        int v6;
        int v1 = 0;
        for(int v = 0; v < this.zzc.length; v += 3) {
            int v2 = this.zzs(v);
            int v3 = this.zzc[v];
            long v4 = (long)(0xFFFFF & v2);
            int v5 = 37;
            switch(v2 >>> 20 & 0xFF) {
                case 0: {
                    v6 = v1 * 53;
                    v7 = Double.doubleToLongBits(zzfp.zza(object0, v4));
                    v8 = (int)(v7 ^ v7 >>> 0x20);
                    v1 = v6 + v8;
                    break;
                }
                case 1: {
                    v6 = v1 * 53;
                    v8 = Float.floatToIntBits(zzfp.zzb(object0, v4));
                    v1 = v6 + v8;
                    break;
                }
                case 2: {
                    v6 = v1 * 53;
                    v7 = zzfp.zzd(object0, v4);
                    v8 = (int)(v7 ^ v7 >>> 0x20);
                    v1 = v6 + v8;
                    break;
                }
                case 3: {
                    v6 = v1 * 53;
                    v7 = zzfp.zzd(object0, v4);
                    v8 = (int)(v7 ^ v7 >>> 0x20);
                    v1 = v6 + v8;
                    break;
                }
                case 4: {
                    v6 = v1 * 53;
                    v8 = zzfp.zzc(object0, v4);
                    v1 = v6 + v8;
                    break;
                }
                case 5: {
                    v6 = v1 * 53;
                    v7 = zzfp.zzd(object0, v4);
                    v8 = (int)(v7 ^ v7 >>> 0x20);
                    v1 = v6 + v8;
                    break;
                }
                case 6: {
                    v6 = v1 * 53;
                    v8 = zzfp.zzc(object0, v4);
                    v1 = v6 + v8;
                    break;
                }
                case 7: {
                    v6 = v1 * 53;
                    v8 = zzda.zza(zzfp.zzw(object0, v4));
                    v1 = v6 + v8;
                    break;
                }
                case 8: {
                    v6 = v1 * 53;
                    v8 = ((String)zzfp.zzf(object0, v4)).hashCode();
                    v1 = v6 + v8;
                    break;
                }
                case 9: {
                    Object object1 = zzfp.zzf(object0, v4);
                    if(object1 != null) {
                        v5 = object1.hashCode();
                    }
                    v1 = v1 * 53 + v5;
                    break;
                }
                case 10: {
                    v6 = v1 * 53;
                    v8 = zzfp.zzf(object0, v4).hashCode();
                    v1 = v6 + v8;
                    break;
                }
                case 11: {
                    v6 = v1 * 53;
                    v8 = zzfp.zzc(object0, v4);
                    v1 = v6 + v8;
                    break;
                }
                case 12: {
                    v6 = v1 * 53;
                    v8 = zzfp.zzc(object0, v4);
                    v1 = v6 + v8;
                    break;
                }
                case 13: {
                    v6 = v1 * 53;
                    v8 = zzfp.zzc(object0, v4);
                    v1 = v6 + v8;
                    break;
                }
                case 14: {
                    v6 = v1 * 53;
                    v7 = zzfp.zzd(object0, v4);
                    v8 = (int)(v7 ^ v7 >>> 0x20);
                    v1 = v6 + v8;
                    break;
                }
                case 15: {
                    v1 = v1 * 53 + zzfp.zzc(object0, v4);
                    break;
                }
                case 16: {
                    v7 = zzfp.zzd(object0, v4);
                    v1 = v1 * 53 + ((int)(v7 ^ v7 >>> 0x20));
                    break;
                }
                case 17: {
                    Object object2 = zzfp.zzf(object0, v4);
                    if(object2 != null) {
                        v5 = object2.hashCode();
                    }
                    v1 = v1 * 53 + v5;
                    break;
                }
                case 18: 
                case 19: 
                case 20: 
                case 21: 
                case 22: 
                case 23: 
                case 24: 
                case 25: 
                case 26: 
                case 27: 
                case 28: 
                case 29: 
                case 30: 
                case 0x1F: 
                case 0x20: 
                case 33: 
                case 34: 
                case 35: 
                case 36: 
                case 37: 
                case 38: 
                case 39: 
                case 40: 
                case 41: 
                case 42: 
                case 43: 
                case 44: 
                case 45: 
                case 46: 
                case 0x2F: 
                case 0x30: 
                case 49: {
                    v1 = v1 * 53 + zzfp.zzf(object0, v4).hashCode();
                    break;
                }
                case 50: {
                    v1 = v1 * 53 + zzfp.zzf(object0, v4).hashCode();
                    break;
                }
                case 51: {
                    if(this.zzM(object0, v3, v)) {
                        v7 = Double.doubleToLongBits(zzef.zzm(object0, v4));
                        v1 = v1 * 53 + ((int)(v7 ^ v7 >>> 0x20));
                    }
                    break;
                }
                case 52: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + Float.floatToIntBits(zzef.zzn(object0, v4));
                    }
                    break;
                }
                case 53: {
                    if(this.zzM(object0, v3, v)) {
                        v7 = zzef.zzt(object0, v4);
                        v1 = v1 * 53 + ((int)(v7 ^ v7 >>> 0x20));
                    }
                    break;
                }
                case 54: {
                    if(this.zzM(object0, v3, v)) {
                        v7 = zzef.zzt(object0, v4);
                        v1 = v1 * 53 + ((int)(v7 ^ v7 >>> 0x20));
                    }
                    break;
                }
                case 55: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzef.zzo(object0, v4);
                    }
                    break;
                }
                case 56: {
                    if(this.zzM(object0, v3, v)) {
                        v7 = zzef.zzt(object0, v4);
                        v1 = v1 * 53 + ((int)(v7 ^ v7 >>> 0x20));
                    }
                    break;
                }
                case 57: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzef.zzo(object0, v4);
                    }
                    break;
                }
                case 58: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzda.zza(zzef.zzN(object0, v4));
                    }
                    break;
                }
                case 59: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + ((String)zzfp.zzf(object0, v4)).hashCode();
                    }
                    break;
                }
                case 60: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzfp.zzf(object0, v4).hashCode();
                    }
                    break;
                }
                case 61: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzfp.zzf(object0, v4).hashCode();
                    }
                    break;
                }
                case 62: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzef.zzo(object0, v4);
                    }
                    break;
                }
                case 0x3F: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzef.zzo(object0, v4);
                    }
                    break;
                }
                case 0x40: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzef.zzo(object0, v4);
                    }
                    break;
                }
                case 65: {
                    if(this.zzM(object0, v3, v)) {
                        v7 = zzef.zzt(object0, v4);
                        v1 = v1 * 53 + ((int)(v7 ^ v7 >>> 0x20));
                    }
                    break;
                }
                case 66: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzef.zzo(object0, v4);
                    }
                    break;
                }
                case 67: {
                    if(this.zzM(object0, v3, v)) {
                        v7 = zzef.zzt(object0, v4);
                        v1 = v1 * 53 + ((int)(v7 ^ v7 >>> 0x20));
                    }
                    break;
                }
                case 68: {
                    if(this.zzM(object0, v3, v)) {
                        v1 = v1 * 53 + zzfp.zzf(object0, v4).hashCode();
                    }
                }
            }
        }
        int v9 = v1 * 53 + this.zzm.zzd(object0).hashCode();
        return this.zzh ? v9 * 53 + this.zzn.zzb(object0).zza.hashCode() : v9;
    }

    final int zzc(Object object0, byte[] arr_b, int v, int v1, int v2, zzbc zzbc0) throws IOException {
        Unsafe unsafe7;
        Unsafe unsafe8;
        int v120;
        int v119;
        int v112;
        int v111;
        int v110;
        int v109;
        zzbc zzbc6;
        int v64;
        int v63;
        int v62;
        int v103;
        int v102;
        int v100;
        int v96;
        int v94;
        int v93;
        int v92;
        int v75;
        int v74;
        int v73;
        Unsafe unsafe4;
        zzbc zzbc7;
        int v61;
        int v59;
        int v58;
        zzbc zzbc5;
        int v57;
        int v29;
        int v28;
        int v27;
        int v51;
        int v50;
        int v39;
        int v36;
        int v35;
        int v34;
        zzbc zzbc3;
        Unsafe unsafe2;
        int v33;
        int v32;
        int v18;
        zzbc zzbc2;
        Unsafe unsafe1;
        int v17;
        int v16;
        int v15;
        int v14;
        int v13;
        int v12;
        int v3 = v2;
        zzbc zzbc1 = zzbc0;
        zzef.zzA(object0);
        Unsafe unsafe0 = zzef.zzb;
        int v4 = 0;
        int v5 = v;
        int v6 = 0;
        int v7 = 0;
        int v8 = 0;
        int v9 = -1;
        int v10 = 0xFFFFF;
        while(true) {
            if(v5 >= v1) {
                v18 = v3;
                unsafe7 = unsafe0;
                break;
            }
            int v11 = arr_b[v5];
            if(v11 < 0) {
                v12 = zzbd.zzi(v11, arr_b, v5 + 1, zzbc1);
                v7 = zzbc1.zza;
            }
            else {
                v7 = v11;
                v12 = v5 + 1;
            }
            if(v7 >>> 3 > v9) {
                v13 = v7 >>> 3 < this.zze || v7 >>> 3 > this.zzf ? -1 : this.zzq(v7 >>> 3, v6 / 3);
            }
            else {
                v13 = v7 >>> 3 < this.zze || v7 >>> 3 > this.zzf ? -1 : this.zzq(v7 >>> 3, 0);
            }
            if(v13 == -1) {
                v14 = v12;
                v15 = v8;
                v16 = v10;
                v17 = v7 >>> 3;
                unsafe1 = unsafe0;
                zzbc2 = zzbc1;
                v18 = v3;
            }
            else {
                int v19 = v7 & 7;
                int[] arr_v = this.zzc;
                int v20 = arr_v[v13 + 1];
                int v21 = v20 >>> 20 & 0xFF;
                long v22 = (long)(v20 & 0xFFFFF);
                int v23 = v7 >>> 3;
                if(v21 <= 17) {
                    int v24 = arr_v[v13 + 2];
                    int v25 = 1 << (v24 >>> 20);
                    int v26 = v24 & 0xFFFFF;
                    if(v26 == v10) {
                        v16 = v10;
                    }
                    else {
                        if(v10 != 0xFFFFF) {
                            unsafe0.putInt(object0, ((long)v10), v8);
                        }
                        v8 = v26 == 0xFFFFF ? 0 : unsafe0.getInt(object0, ((long)v26));
                        v16 = v26;
                    }
                    switch(v21) {
                        case 0: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            v4 = 0;
                            if(v19 == 1) {
                                v5 = v27 + 8;
                                v8 |= v25;
                                zzfp.zzo(object0, v22, Double.longBitsToDouble(zzbd.zzn(arr_b, v27)));
                                goto label_221;
                            }
                            goto label_131;
                        }
                        case 1: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            v4 = 0;
                            if(v19 == 5) {
                                v5 = v27 + 4;
                                v8 |= v25;
                                zzfp.zzp(object0, v22, Float.intBitsToFloat(zzbd.zzb(arr_b, v27)));
                                goto label_221;
                            }
                            goto label_131;
                        }
                        case 2: 
                        case 3: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            v4 = 0;
                            if(v19 == 0) {
                                int v31 = zzbd.zzk(arr_b, v27, zzbc1);
                                unsafe0.putLong(object0, v22, zzbc1.zzb);
                                v8 |= v25;
                                v5 = v31;
                                goto label_221;
                            }
                            goto label_131;
                        }
                        case 7: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            v4 = 0;
                            if(v19 == 0) {
                                v8 |= v25;
                                v5 = zzbd.zzk(arr_b, v27, zzbc1);
                                zzfp.zzm(object0, v22, zzbc1.zzb != 0L);
                                goto label_221;
                            }
                        label_131:
                            v32 = v8;
                            v33 = v27;
                            unsafe2 = unsafe0;
                            zzbc3 = zzbc1;
                            v34 = v29;
                            v35 = v28;
                            v36 = v23;
                            break;
                        }
                        case 8: {
                            v28 = v13;
                            v29 = v7;
                            if(v19 == 2) {
                                if((v20 & 0x20000000) == 0) {
                                    v4 = 0;
                                    v5 = zzbd.zzh(arr_b, v12, zzbc1);
                                    int v49 = zzbc1.zza;
                                    if(v49 >= 0) {
                                        v8 |= v25;
                                        if(v49 == 0) {
                                            zzbc1.zzc = "";
                                        }
                                        else {
                                            zzbc1.zzc = new String(arr_b, v5, v49, zzda.zzb);
                                            v5 += v49;
                                        }
                                        unsafe0.putObject(object0, v22, zzbc1.zzc);
                                    label_221:
                                        v7 = v29;
                                        v6 = v28;
                                        v10 = v16;
                                        v9 = v23;
                                        v3 = v2;
                                        continue;
                                    }
                                }
                                else {
                                    v5 = zzbd.zzh(arr_b, v12, zzbc1);
                                    int v37 = zzbc1.zza;
                                    if(v37 >= 0) {
                                        int v38 = v8 | v25;
                                        if(v37 == 0) {
                                            zzbc1.zzc = "";
                                            v39 = v38;
                                            v4 = 0;
                                        }
                                        else {
                                            if((arr_b.length - v5 - v37 | (v5 | v37)) < 0) {
                                                throw new ArrayIndexOutOfBoundsException(String.format("buffer length=%d, index=%d, size=%d", ((int)arr_b.length), v5, v37));
                                            }
                                            int v40 = v5 + v37;
                                            char[] arr_c = new char[v37];
                                            int v41;
                                            for(v41 = 0; v5 < v40; ++v41) {
                                                int v42 = arr_b[v5];
                                                if(!zzfq.zzd(((byte)v42))) {
                                                    break;
                                                }
                                                ++v5;
                                                arr_c[v41] = (char)v42;
                                            }
                                            while(v5 < v40) {
                                                int v43 = v5 + 1;
                                                int v44 = arr_b[v5];
                                                if(zzfq.zzd(((byte)v44))) {
                                                    arr_c[v41] = (char)v44;
                                                    ++v41;
                                                    v5 = v43;
                                                    while(v5 < v40) {
                                                        int v45 = arr_b[v5];
                                                        if(!zzfq.zzd(((byte)v45))) {
                                                            break;
                                                        }
                                                        ++v5;
                                                        arr_c[v41] = (char)v45;
                                                        ++v41;
                                                    }
                                                    continue;
                                                }
                                                if(v44 < 0xFFFFFFE0) {
                                                    if(v43 < v40) {
                                                        v5 += 2;
                                                        zzfq.zzc(((byte)v44), arr_b[v43], arr_c, v41);
                                                        ++v41;
                                                        continue;
                                                    }
                                                }
                                                else if(v44 >= -16) {
                                                    if(v43 < v40 - 2) {
                                                        int v46 = arr_b[v43];
                                                        int v47 = v5 + 3;
                                                        int v48 = arr_b[v5 + 2];
                                                        v5 += 4;
                                                        zzfq.zza(((byte)v44), ((byte)v46), ((byte)v48), arr_b[v47], arr_c, v41);
                                                        v41 += 2;
                                                        continue;
                                                    }
                                                }
                                                else if(v43 < v40 - 1) {
                                                    zzfq.zzb(((byte)v44), arr_b[v43], arr_b[v5 + 2], arr_c, v41);
                                                    v5 += 3;
                                                    ++v41;
                                                    continue;
                                                }
                                                throw zzdc.zzc();
                                            }
                                            v39 = v38;
                                            v4 = 0;
                                            zzbc1.zzc = new String(arr_c, 0, v41);
                                            v5 = v40;
                                        }
                                        v8 = v39;
                                        unsafe0.putObject(object0, v22, zzbc1.zzc);
                                        goto label_221;
                                    }
                                }
                                throw zzdc.zzd();
                            }
                            else {
                                v32 = v8;
                                v33 = v12;
                                unsafe2 = unsafe0;
                                zzbc3 = zzbc1;
                                v34 = v29;
                                v35 = v28;
                                v36 = v23;
                                break;
                            }
                            goto label_235;
                        }
                        case 9: {
                        label_235:
                            v50 = v13;
                            v51 = v7;
                            if(v19 == 2) {
                                Object object2 = this.zzx(object0, v50);
                                v5 = zzbd.zzm(object2, this.zzv(v50), arr_b, v12, v1, zzbc0);
                                this.zzF(object0, v50, object2);
                                v8 |= v25;
                                goto label_283;
                            }
                            goto label_269;
                        }
                        case 10: {
                            v50 = v13;
                            v51 = v7;
                            if(v19 == 2) {
                                v8 |= v25;
                                v5 = zzbd.zza(arr_b, v12, zzbc1);
                                unsafe0.putObject(object0, v22, zzbc1.zzc);
                                goto label_283;
                            }
                            goto label_269;
                        }
                        case 4: 
                        case 11: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            v4 = 0;
                            if(v19 == 0) {
                                v8 |= v25;
                                v5 = zzbd.zzh(arr_b, v27, zzbc1);
                                unsafe0.putInt(object0, v22, zzbc1.zza);
                                goto label_221;
                            }
                            goto label_131;
                        }
                        case 12: {
                            v50 = v13;
                            v51 = v7;
                            if(v19 == 0) {
                                v5 = zzbd.zzh(arr_b, v12, zzbc1);
                                int v52 = zzbc1.zza;
                                zzcw zzcw0 = this.zzu(v50);
                                if((v20 & 0x80000000) == 0 || zzcw0 == null || zzcw0.zza(v52)) {
                                    v8 |= v25;
                                    unsafe0.putInt(object0, v22, v52);
                                }
                                else {
                                    zzef.zzd(object0).zzj(v51, ((long)v52));
                                }
                                goto label_283;
                            }
                            goto label_269;
                        }
                        case 6: 
                        case 13: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            v4 = 0;
                            if(v19 == 5) {
                                v5 = v27 + 4;
                                v8 |= v25;
                                unsafe0.putInt(object0, v22, zzbd.zzb(arr_b, v27));
                                goto label_221;
                            }
                            goto label_131;
                        }
                        case 5: 
                        case 14: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            v4 = 0;
                            if(v19 == 1) {
                                unsafe0.putLong(object0, v22, zzbd.zzn(arr_b, v27));
                                v5 = v27 + 8;
                                v8 |= v25;
                                goto label_221;
                            }
                            goto label_131;
                        }
                        case 15: {
                            v50 = v13;
                            v51 = v7;
                            if(v19 == 0) {
                                v8 |= v25;
                                v5 = zzbd.zzh(arr_b, v12, zzbc1);
                                unsafe0.putInt(object0, v22, zzbc1.zza >>> 1 ^ -(zzbc1.zza & 1));
                                goto label_283;
                            }
                        label_269:
                            v33 = v12;
                            v32 = v8;
                            unsafe2 = unsafe0;
                            zzbc3 = zzbc1;
                            v34 = v51;
                            v35 = v50;
                            v36 = v23;
                            break;
                        }
                        case 16: {
                            if(v19 == 0) {
                                int v53 = zzbd.zzk(arr_b, v12, zzbc1);
                                v50 = v13;
                                v51 = v7;
                                unsafe0.putLong(object0, v22, zzbc1.zzb >>> 1 ^ -(1L & zzbc1.zzb));
                                v8 |= v25;
                                v5 = v53;
                            label_283:
                                v7 = v51;
                                v6 = v50;
                                v10 = v16;
                                v9 = v23;
                                v4 = 0;
                                v3 = v2;
                                continue;
                            }
                            else {
                                v33 = v12;
                                v35 = v13;
                                v32 = v8;
                                unsafe2 = unsafe0;
                                zzbc3 = zzbc1;
                                v34 = v7;
                            }
                            v36 = v23;
                            break;
                        }
                        default: {
                            v27 = v12;
                            v28 = v13;
                            v29 = v7;
                            if(v19 == 3) {
                                Object object1 = this.zzx(object0, v28);
                                int v30 = zzbd.zzl(object1, this.zzv(v28), arr_b, v27, v1, v23 << 3 | 4, zzbc0);
                                this.zzF(object0, v28, object1);
                                v3 = v2;
                                zzbc1 = zzbc0;
                                v9 = v23;
                                v6 = v28;
                                v5 = v30;
                                v10 = v16;
                                v4 = 0;
                                v7 = v29;
                                v8 |= v25;
                                continue;
                            }
                            goto label_131;
                        }
                    }
                    unsafe1 = unsafe2;
                    v4 = v35;
                    v15 = v32;
                    v7 = v34;
                    v18 = v2;
                    zzbc2 = zzbc3;
                    v17 = v36;
                    v14 = v33;
                }
                else {
                    v16 = v10;
                    int v54 = v7;
                    v15 = v8;
                    zzbc zzbc4 = zzbc1;
                    int v55 = 10;
                    if(v21 == 27) {
                        if(v19 == 2) {
                            zzcz zzcz0 = (zzcz)unsafe0.getObject(object0, v22);
                            if(!zzcz0.zzc()) {
                                int v56 = zzcz0.size();
                                if(v56 != 0) {
                                    v55 = v56 + v56;
                                }
                                zzcz0 = zzcz0.zzd(v55);
                                unsafe0.putObject(object0, v22, zzcz0);
                            }
                            v3 = v2;
                            v9 = v23;
                            v6 = v13;
                            v5 = zzbd.zze(this.zzv(v13), v54, arr_b, v12, v1, zzcz0, zzbc0);
                            v10 = v16;
                            v4 = 0;
                            v7 = v54;
                            v8 = v15;
                            continue;
                        }
                        else {
                            unsafe1 = unsafe0;
                            v57 = v54;
                            zzbc5 = zzbc1;
                            v58 = v13;
                            v59 = v12;
                            goto label_804;
                        }
                        goto label_335;
                    }
                    else {
                    label_335:
                        if(v21 <= 49) {
                            Unsafe unsafe3 = zzef.zzb;
                            zzcz zzcz1 = (zzcz)unsafe3.getObject(object0, v22);
                            if(zzcz1.zzc()) {
                                v61 = v23;
                            }
                            else {
                                int v60 = zzcz1.size();
                                if(v60 != 0) {
                                    v55 = v60 + v60;
                                }
                                v61 = v23;
                                zzcz zzcz2 = zzcz1.zzd(v55);
                                unsafe3.putObject(object0, v22, zzcz2);
                                zzcz1 = zzcz2;
                            }
                        alab4:
                            switch(v21) {
                                case 26: {
                                    v62 = v12;
                                    v63 = v54;
                                    unsafe4 = unsafe0;
                                    v73 = v13;
                                    zzbc6 = zzbc1;
                                    v74 = v61;
                                    if(v19 == 2) {
                                        if((((long)v20) & 0x20000000L) == 0L) {
                                            v75 = zzbd.zzh(arr_b, v62, zzbc6);
                                            int v82 = zzbc6.zza;
                                            if(v82 >= 0) {
                                                if(v82 == 0) {
                                                    zzcz1.add("");
                                                    goto label_556;
                                                }
                                                else {
                                                    zzcz1.add(new String(arr_b, v75, v82, zzda.zzb));
                                                }
                                            alab1:
                                                while(true) {
                                                    v75 += v82;
                                                    while(true) {
                                                    label_556:
                                                        if(v75 >= v1) {
                                                            goto label_594;
                                                        }
                                                        int v83 = zzbd.zzh(arr_b, v75, zzbc6);
                                                        if(v63 != zzbc6.zza) {
                                                            goto label_594;
                                                        }
                                                        v75 = zzbd.zzh(arr_b, v83, zzbc6);
                                                        v82 = zzbc6.zza;
                                                        if(v82 < 0) {
                                                            break alab1;
                                                        }
                                                        if(v82 != 0) {
                                                            zzcz1.add(new String(arr_b, v75, v82, zzda.zzb));
                                                            break;
                                                        }
                                                        zzcz1.add("");
                                                    }
                                                }
                                                throw zzdc.zzd();
                                            }
                                        }
                                        else {
                                            v75 = zzbd.zzh(arr_b, v62, zzbc6);
                                            int v84 = zzbc6.zza;
                                            if(v84 >= 0) {
                                                if(v84 == 0) {
                                                    zzcz1.add("");
                                                    goto label_579;
                                                }
                                                else {
                                                    int v85 = v75 + v84;
                                                    if(!zzfu.zze(arr_b, v75, v85)) {
                                                        throw zzdc.zzc();
                                                    }
                                                    zzcz1.add(new String(arr_b, v75, v84, zzda.zzb));
                                                alab2:
                                                    while(true) {
                                                        v75 = v85;
                                                        while(true) {
                                                        label_579:
                                                            if(v75 >= v1) {
                                                                goto label_594;
                                                            }
                                                            int v86 = zzbd.zzh(arr_b, v75, zzbc6);
                                                            if(v63 != zzbc6.zza) {
                                                                goto label_594;
                                                            }
                                                            v75 = zzbd.zzh(arr_b, v86, zzbc6);
                                                            int v87 = zzbc6.zza;
                                                            if(v87 < 0) {
                                                                throw zzdc.zzd();
                                                            }
                                                            if(v87 != 0) {
                                                                v85 = v75 + v87;
                                                                if(!zzfu.zze(arr_b, v75, v85)) {
                                                                    break alab2;
                                                                }
                                                                zzcz1.add(new String(arr_b, v75, v87, zzda.zzb));
                                                                break;
                                                            }
                                                            zzcz1.add("");
                                                        }
                                                    }
                                                    throw zzdc.zzc();
                                                label_594:
                                                    v64 = v74;
                                                    v5 = v75;
                                                    v4 = v73;
                                                    unsafe0 = unsafe4;
                                                    goto label_770;
                                                }
                                            }
                                        }
                                        throw zzdc.zzd();
                                    }
                                label_601:
                                    v64 = v74;
                                    v4 = v73;
                                    unsafe0 = unsafe4;
                                    v5 = v62;
                                    goto label_770;
                                }
                                case 28: {
                                    zzbc7 = zzbc1;
                                    int v88 = v54;
                                    if(v19 == 2) {
                                        int v89 = zzbd.zzh(arr_b, v12, zzbc7);
                                        int v90 = zzbc7.zza;
                                        if(v90 < 0) {
                                            throw zzdc.zzd();
                                        }
                                        if(v90 > arr_b.length - v89) {
                                            throw zzdc.zzg();
                                        }
                                        if(v90 == 0) {
                                            zzcz1.add(zzbq.zzb);
                                            goto label_617;
                                        }
                                        else {
                                            zzcz1.add(zzbq.zzl(arr_b, v89, v90));
                                        }
                                    alab3:
                                        while(true) {
                                            v89 += v90;
                                            while(true) {
                                            label_617:
                                                if(v89 >= v1) {
                                                    goto label_631;
                                                }
                                                int v91 = zzbd.zzh(arr_b, v89, zzbc7);
                                                if(v88 != zzbc7.zza) {
                                                    goto label_631;
                                                }
                                                v89 = zzbd.zzh(arr_b, v91, zzbc7);
                                                v90 = zzbc7.zza;
                                                if(v90 < 0) {
                                                    throw zzdc.zzd();
                                                }
                                                if(v90 > arr_b.length - v89) {
                                                    break alab3;
                                                }
                                                if(v90 != 0) {
                                                    zzcz1.add(zzbq.zzl(arr_b, v89, v90));
                                                    break;
                                                }
                                                zzcz1.add(zzbq.zzb);
                                            }
                                        }
                                        throw zzdc.zzg();
                                    label_631:
                                        v5 = v89;
                                        v64 = v61;
                                        v63 = v88;
                                        v62 = v12;
                                        zzbc6 = zzbc7;
                                        v4 = v13;
                                    }
                                    else {
                                        v64 = v61;
                                        v63 = v88;
                                        v62 = v12;
                                        zzbc6 = zzbc7;
                                        v4 = v13;
                                        v5 = v62;
                                    }
                                    goto label_770;
                                }
                                case 18: 
                                case 35: {
                                    v62 = v12;
                                    v63 = v54;
                                    v4 = v13;
                                    v64 = v61;
                                    zzbc6 = zzbc1;
                                    if(v19 == 2) {
                                        zzca zzca0 = (zzca)zzcz1;
                                        v5 = zzbd.zzh(arr_b, v62, zzbc6);
                                        int v67 = zzbc6.zza + v5;
                                        while(v5 < v67) {
                                            zzca0.zzf(Double.longBitsToDouble(zzbd.zzn(arr_b, v5)));
                                            v5 += 8;
                                        }
                                        if(v5 != v67) {
                                            throw zzdc.zzg();
                                        }
                                    }
                                    else if(v19 == 1) {
                                        v5 = v62 + 8;
                                        zzca zzca1 = (zzca)zzcz1;
                                        zzca1.zzf(Double.longBitsToDouble(zzbd.zzn(arr_b, v62)));
                                        while(v5 < v1) {
                                            int v68 = zzbd.zzh(arr_b, v5, zzbc6);
                                            if(v63 != zzbc6.zza) {
                                                break;
                                            }
                                            zzca1.zzf(Double.longBitsToDouble(zzbd.zzn(arr_b, v68)));
                                            v5 = v68 + 8;
                                        }
                                    }
                                    else {
                                        v5 = v62;
                                    }
                                    goto label_770;
                                }
                                case 19: 
                                case 36: {
                                    v62 = v12;
                                    v63 = v54;
                                    v4 = v13;
                                    v64 = v61;
                                    zzbc6 = zzbc1;
                                    if(v19 == 2) {
                                        zzck zzck0 = (zzck)zzcz1;
                                        v5 = zzbd.zzh(arr_b, v62, zzbc6);
                                        int v69 = zzbc6.zza + v5;
                                        while(v5 < v69) {
                                            zzck0.zzf(Float.intBitsToFloat(zzbd.zzb(arr_b, v5)));
                                            v5 += 4;
                                        }
                                        if(v5 != v69) {
                                            throw zzdc.zzg();
                                        }
                                    }
                                    else if(v19 == 5) {
                                        v5 = v62 + 4;
                                        zzck zzck1 = (zzck)zzcz1;
                                        zzck1.zzf(Float.intBitsToFloat(zzbd.zzb(arr_b, v62)));
                                        while(v5 < v1) {
                                            int v70 = zzbd.zzh(arr_b, v5, zzbc6);
                                            if(v63 != zzbc6.zza) {
                                                break;
                                            }
                                            zzck1.zzf(Float.intBitsToFloat(zzbd.zzb(arr_b, v70)));
                                            v5 = v70 + 4;
                                        }
                                    }
                                    else {
                                        v5 = v62;
                                    }
                                    goto label_770;
                                }
                                case 20: 
                                case 21: 
                                case 37: 
                                case 38: {
                                    v62 = v12;
                                    v63 = v54;
                                    v4 = v13;
                                    v64 = v61;
                                    zzbc6 = zzbc1;
                                    if(v19 == 2) {
                                        zzdr zzdr0 = (zzdr)zzcz1;
                                        v5 = zzbd.zzh(arr_b, v62, zzbc6);
                                        int v71 = zzbc6.zza + v5;
                                        while(v5 < v71) {
                                            v5 = zzbd.zzk(arr_b, v5, zzbc6);
                                            zzdr0.zzf(zzbc6.zzb);
                                        }
                                        if(v5 != v71) {
                                            throw zzdc.zzg();
                                        }
                                    }
                                    else if(v19 == 0) {
                                        zzdr zzdr1 = (zzdr)zzcz1;
                                        v5 = zzbd.zzk(arr_b, v62, zzbc6);
                                        zzdr1.zzf(zzbc6.zzb);
                                        while(v5 < v1) {
                                            int v72 = zzbd.zzh(arr_b, v5, zzbc6);
                                            if(v63 != zzbc6.zza) {
                                                break;
                                            }
                                            v5 = zzbd.zzk(arr_b, v72, zzbc6);
                                            zzdr1.zzf(zzbc6.zzb);
                                        }
                                    }
                                    else {
                                        v5 = v62;
                                    }
                                    goto label_770;
                                }
                                case 25: 
                                case 42: {
                                    v62 = v12;
                                    v63 = v54;
                                    unsafe4 = unsafe0;
                                    v73 = v13;
                                    zzbc6 = zzbc1;
                                    v74 = v61;
                                    if(v19 == 2) {
                                        zzbe zzbe0 = (zzbe)zzcz1;
                                        v75 = zzbd.zzh(arr_b, v62, zzbc6);
                                        int v80 = zzbc6.zza + v75;
                                        while(v75 < v80) {
                                            v75 = zzbd.zzk(arr_b, v75, zzbc6);
                                            zzbe0.zze(zzbc6.zzb != 0L);
                                        }
                                        if(v75 != v80) {
                                            throw zzdc.zzg();
                                        }
                                        goto label_594;
                                    }
                                    else if(v19 == 0) {
                                        zzbe zzbe1 = (zzbe)zzcz1;
                                        v75 = zzbd.zzk(arr_b, v62, zzbc6);
                                        zzbe1.zze(zzbc6.zzb != 0L);
                                        while(v75 < v1) {
                                            int v81 = zzbd.zzh(arr_b, v75, zzbc6);
                                            if(v63 != zzbc6.zza) {
                                                break;
                                            }
                                            v75 = zzbd.zzk(arr_b, v81, zzbc6);
                                            zzbe1.zze(zzbc6.zzb != 0L);
                                        }
                                        goto label_594;
                                    }
                                    goto label_601;
                                }
                                case 22: 
                                case 29: 
                                case 39: 
                                case 43: {
                                    v62 = v12;
                                    v63 = v54;
                                    unsafe4 = unsafe0;
                                    v73 = v13;
                                    zzbc6 = zzbc1;
                                    v74 = v61;
                                    if(v19 == 2) {
                                        v75 = zzbd.zzf(arr_b, v62, zzcz1, zzbc6);
                                        goto label_594;
                                    }
                                    else if(v19 == 0) {
                                        v64 = v74;
                                        v4 = v73;
                                        unsafe0 = unsafe4;
                                        v5 = zzbd.zzj(v63, arr_b, v62, v1, zzcz1, zzbc0);
                                        goto label_770;
                                    }
                                    goto label_601;
                                }
                                case 30: 
                                case 44: {
                                    switch(v19) {
                                        case 0: {
                                            zzbc7 = zzbc1;
                                            v92 = v61;
                                            v93 = v13;
                                            v94 = zzbd.zzj(v54, arr_b, v12, v1, zzcz1, zzbc0);
                                            break;
                                        }
                                        case 2: {
                                            v94 = zzbd.zzf(arr_b, v12, zzcz1, zzbc1);
                                            zzbc7 = zzbc1;
                                            v93 = v13;
                                            v92 = v61;
                                            break;
                                        }
                                        default: {
                                            v63 = v54;
                                            v62 = v12;
                                            goto label_735;
                                        }
                                    }
                                    zzcw zzcw1 = this.zzu(v93);
                                    zzff zzff0 = this.zzm;
                                    if(zzcw1 == null) {
                                        v96 = v94;
                                        v100 = v93;
                                    }
                                    else if(zzcz1 instanceof RandomAccess) {
                                        int v95 = zzcz1.size();
                                        v96 = v94;
                                        Object object3 = null;
                                        int v98 = 0;
                                        for(int v97 = 0; v97 < v95; ++v97) {
                                            Integer integer0 = (Integer)zzcz1.get(v97);
                                            int v99 = (int)integer0;
                                            if(zzcw1.zza(v99)) {
                                                if(v97 != v98) {
                                                    zzcz1.set(v98, integer0);
                                                }
                                                ++v98;
                                            }
                                            else {
                                                object3 = zzeq.zzo(object0, v92, v99, object3, zzff0);
                                            }
                                        }
                                        v100 = v93;
                                        if(v98 != v95) {
                                            zzcz1.subList(v98, v95).clear();
                                        }
                                    }
                                    else {
                                        v96 = v94;
                                        v100 = v93;
                                        Object object4 = null;
                                        Iterator iterator0 = zzcz1.iterator();
                                        while(iterator0.hasNext()) {
                                            Object object5 = iterator0.next();
                                            int v101 = (int)(((Integer)object5));
                                            if(!zzcw1.zza(v101)) {
                                                object4 = zzeq.zzo(object0, v92, v101, object4, zzff0);
                                                iterator0.remove();
                                            }
                                        }
                                    }
                                    v5 = v96;
                                    v64 = v92;
                                    v63 = v54;
                                    v62 = v12;
                                    zzbc6 = zzbc7;
                                    v4 = v100;
                                    goto label_770;
                                }
                                case 24: 
                                case 0x1F: 
                                case 41: 
                                case 45: {
                                    v62 = v12;
                                    v63 = v54;
                                    unsafe4 = unsafe0;
                                    v73 = v13;
                                    zzbc6 = zzbc1;
                                    v74 = v61;
                                    if(v19 == 2) {
                                        zzct zzct0 = (zzct)zzcz1;
                                        v75 = zzbd.zzh(arr_b, v62, zzbc6);
                                        int v78 = zzbc6.zza + v75;
                                        while(v75 < v78) {
                                            zzct0.zzg(zzbd.zzb(arr_b, v75));
                                            v75 += 4;
                                        }
                                        if(v75 != v78) {
                                            throw zzdc.zzg();
                                        }
                                        goto label_594;
                                    }
                                    else if(v19 == 5) {
                                        v75 = v62 + 4;
                                        zzct zzct1 = (zzct)zzcz1;
                                        zzct1.zzg(zzbd.zzb(arr_b, v62));
                                        while(v75 < v1) {
                                            int v79 = zzbd.zzh(arr_b, v75, zzbc6);
                                            if(v63 != zzbc6.zza) {
                                                break;
                                            }
                                            zzct1.zzg(zzbd.zzb(arr_b, v79));
                                            v75 = v79 + 4;
                                        }
                                        goto label_594;
                                    }
                                    goto label_601;
                                }
                                case 23: 
                                case 0x20: 
                                case 40: 
                                case 46: {
                                    v62 = v12;
                                    v63 = v54;
                                    unsafe4 = unsafe0;
                                    v73 = v13;
                                    zzbc6 = zzbc1;
                                    v74 = v61;
                                    if(v19 == 2) {
                                        zzdr zzdr2 = (zzdr)zzcz1;
                                        v75 = zzbd.zzh(arr_b, v62, zzbc6);
                                        int v76 = zzbc6.zza + v75;
                                        while(v75 < v76) {
                                            zzdr2.zzf(zzbd.zzn(arr_b, v75));
                                            v75 += 8;
                                        }
                                        if(v75 != v76) {
                                            throw zzdc.zzg();
                                        }
                                        goto label_594;
                                    }
                                    else if(v19 == 1) {
                                        v75 = v62 + 8;
                                        zzdr zzdr3 = (zzdr)zzcz1;
                                        zzdr3.zzf(zzbd.zzn(arr_b, v62));
                                        while(v75 < v1) {
                                            int v77 = zzbd.zzh(arr_b, v75, zzbc6);
                                            if(v63 != zzbc6.zza) {
                                                break;
                                            }
                                            zzdr3.zzf(zzbd.zzn(arr_b, v77));
                                            v75 = v77 + 8;
                                        }
                                        goto label_594;
                                    }
                                    goto label_601;
                                }
                                case 33: 
                                case 0x2F: {
                                    v102 = v54;
                                    if(v19 == 2) {
                                        zzct zzct2 = (zzct)zzcz1;
                                        v103 = zzbd.zzh(arr_b, v12, zzbc1);
                                        int v104 = zzbc1.zza + v103;
                                        while(v103 < v104) {
                                            v103 = zzbd.zzh(arr_b, v103, zzbc4);
                                            zzct2.zzg(zzbc4.zza >>> 1 ^ -(zzbc4.zza & 1));
                                        }
                                        if(v103 != v104) {
                                            throw zzdc.zzg();
                                        }
                                        v63 = v102;
                                        v62 = v12;
                                        goto label_766;
                                    }
                                    else if(v19 == 0) {
                                        zzct zzct3 = (zzct)zzcz1;
                                        v103 = zzbd.zzh(arr_b, v12, zzbc1);
                                        zzct3.zzg(zzbc1.zza >>> 1 ^ -(zzbc1.zza & 1));
                                        while(v103 < v1) {
                                            int v105 = zzbd.zzh(arr_b, v103, zzbc4);
                                            if(v102 != zzbc4.zza) {
                                                break;
                                            }
                                            v103 = zzbd.zzh(arr_b, v105, zzbc4);
                                            zzct3.zzg(zzbc4.zza >>> 1 ^ -(zzbc4.zza & 1));
                                        }
                                        v63 = v102;
                                        v62 = v12;
                                        goto label_766;
                                    }
                                    else {
                                        v63 = v102;
                                        v62 = v12;
                                        goto label_735;
                                    }
                                    goto label_732;
                                }
                                case 34: 
                                case 0x30: {
                                label_732:
                                    switch(v19) {
                                        case 0: {
                                            zzdr zzdr4 = (zzdr)zzcz1;
                                            v103 = zzbd.zzk(arr_b, v12, zzbc1);
                                            zzdr4.zzf(zzbc1.zzb >>> 1 ^ -(1L & zzbc1.zzb));
                                            while(true) {
                                                if(v103 < v1) {
                                                    int v106 = zzbd.zzh(arr_b, v103, zzbc4);
                                                    v102 = v54;
                                                    if(v102 == zzbc4.zza) {
                                                        v103 = zzbd.zzk(arr_b, v106, zzbc4);
                                                        zzdr4.zzf(zzbc4.zzb >>> 1 ^ -(1L & zzbc4.zzb));
                                                        v54 = v102;
                                                        continue;
                                                    }
                                                    else {
                                                        break;
                                                    }
                                                }
                                                v102 = v54;
                                                break;
                                            }
                                            v63 = v102;
                                            v62 = v12;
                                            goto label_766;
                                        }
                                        case 2: {
                                            zzdr zzdr5 = (zzdr)zzcz1;
                                            v103 = zzbd.zzh(arr_b, v12, zzbc1);
                                            int v107 = zzbc1.zza + v103;
                                            while(v103 < v107) {
                                                v103 = zzbd.zzk(arr_b, v103, zzbc4);
                                                zzdr5.zzf(zzbc4.zzb >>> 1 ^ -(1L & zzbc4.zzb));
                                            }
                                            if(v103 == v107) {
                                                v62 = v12;
                                                v63 = v54;
                                            label_766:
                                                v4 = v13;
                                                v64 = v61;
                                                zzbc6 = zzbc1;
                                                v5 = v103;
                                            label_770:
                                                if(v5 == v62) {
                                                    v14 = v5;
                                                    v17 = v64;
                                                    v7 = v63;
                                                    unsafe1 = unsafe0;
                                                    zzbc2 = zzbc6;
                                                    v18 = v2;
                                                    break alab4;
                                                }
                                                else {
                                                    v9 = v64;
                                                    v7 = v63;
                                                    v6 = v4;
                                                    zzbc1 = zzbc6;
                                                    v10 = v16;
                                                    v4 = 0;
                                                    v8 = v15;
                                                    v3 = v2;
                                                    continue;
                                                }
                                            }
                                            throw zzdc.zzg();
                                        }
                                        default: {
                                            v62 = v12;
                                            v63 = v54;
                                        label_735:
                                            v4 = v13;
                                            v64 = v61;
                                            zzbc6 = zzbc1;
                                            v5 = v62;
                                            goto label_770;
                                        }
                                    }
                                }
                                default: {
                                    v62 = v12;
                                    v63 = v54;
                                    v4 = v13;
                                    v64 = v61;
                                    zzbc6 = zzbc1;
                                    if(v19 == 3) {
                                        int v65 = v63 & -8 | 4;
                                        zzeo zzeo0 = this.zzv(v4);
                                        v5 = zzbd.zzc(zzeo0, arr_b, v62, v1, v65, zzbc0);
                                        zzcz1.add(zzbc6.zzc);
                                        while(v5 < v1) {
                                            int v66 = zzbd.zzh(arr_b, v5, zzbc6);
                                            if(v63 != zzbc6.zza) {
                                                break;
                                            }
                                            v5 = zzbd.zzc(zzeo0, arr_b, v66, v1, v65, zzbc0);
                                            zzcz1.add(zzbc6.zzc);
                                        }
                                    }
                                    else {
                                        v5 = v62;
                                    }
                                    goto label_770;
                                }
                            }
                        }
                        else {
                            zzbc5 = zzbc1;
                            unsafe1 = unsafe0;
                            v58 = v13;
                            v57 = v54;
                            if(v21 == 50) {
                                if(v19 == 2) {
                                    Unsafe unsafe5 = zzef.zzb;
                                    Object object6 = this.zzw(v58);
                                    Object object7 = unsafe5.getObject(object0, v22);
                                    if(!((zzdw)object7).zze()) {
                                        zzdw zzdw0 = zzdw.zza().zzb();
                                        zzdx.zza(zzdw0, object7);
                                        unsafe5.putObject(object0, v22, zzdw0);
                                    }
                                    zzdv zzdv0 = (zzdv)object6;
                                    throw null;
                                }
                                v59 = v12;
                            label_804:
                                v18 = v2;
                                v4 = v58;
                                v17 = v23;
                                v7 = v57;
                                v14 = v59;
                                zzbc2 = zzbc5;
                            }
                            else {
                                Unsafe unsafe6 = zzef.zzb;
                                long v108 = (long)(arr_v[v58 + 2] & 0xFFFFF);
                                switch(v21) {
                                    case 51: {
                                        v109 = v58;
                                        v17 = v23;
                                        v7 = v57;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 1) {
                                            v111 = v110 + 8;
                                            unsafe6.putObject(object0, v22, Double.longBitsToDouble(zzbd.zzn(arr_b, v110)));
                                            unsafe6.putInt(object0, v108, v17);
                                            break;
                                        }
                                        v111 = v110;
                                        break;
                                    }
                                    case 52: {
                                        v109 = v58;
                                        v17 = v23;
                                        v7 = v57;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 5) {
                                            v111 = v110 + 4;
                                            unsafe6.putObject(object0, v22, Float.intBitsToFloat(zzbd.zzb(arr_b, v110)));
                                            unsafe6.putInt(object0, v108, v17);
                                            break;
                                        }
                                        v111 = v110;
                                        break;
                                    }
                                    case 53: 
                                    case 54: {
                                        v109 = v58;
                                        v17 = v23;
                                        v7 = v57;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 0) {
                                            v112 = zzbd.zzk(arr_b, v110, zzbc2);
                                            unsafe6.putObject(object0, v22, zzbc2.zzb);
                                            unsafe6.putInt(object0, v108, v17);
                                            v111 = v112;
                                            break;
                                        }
                                        v111 = v110;
                                        break;
                                    }
                                    case 58: {
                                        v109 = v58;
                                        v17 = v23;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 0) {
                                            v112 = zzbd.zzk(arr_b, v110, zzbc2);
                                            v7 = v57;
                                            unsafe6.putObject(object0, v22, Boolean.valueOf(zzbc2.zzb != 0L));
                                            unsafe6.putInt(object0, v108, v17);
                                            v111 = v112;
                                        }
                                        else {
                                            v7 = v57;
                                            v111 = v110;
                                        }
                                        break;
                                    }
                                    case 59: {
                                        v109 = v58;
                                        v17 = v23;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 2) {
                                            v111 = zzbd.zzh(arr_b, v110, zzbc2);
                                            int v113 = zzbc2.zza;
                                            if(v113 == 0) {
                                                unsafe6.putObject(object0, v22, "");
                                            }
                                            else {
                                                int v114 = v111 + v113;
                                                if((v20 & 0x20000000) != 0 && !zzfu.zze(arr_b, v111, v114)) {
                                                    throw zzdc.zzc();
                                                }
                                                unsafe6.putObject(object0, v22, new String(arr_b, v111, v113, zzda.zzb));
                                                v111 = v114;
                                            }
                                            unsafe6.putInt(object0, v108, v17);
                                            v7 = v57;
                                        }
                                        else {
                                            v7 = v57;
                                            v111 = v110;
                                        }
                                        break;
                                    }
                                    case 60: {
                                        if(v19 == 2) {
                                            Object object8 = this.zzy(object0, v23, v58);
                                            v110 = v12;
                                            int v115 = zzbd.zzm(object8, this.zzv(v58), arr_b, v12, v1, zzbc0);
                                            this.zzG(object0, v23, v58, object8);
                                            v111 = v115;
                                            v109 = v58;
                                            v17 = v23;
                                            zzbc2 = zzbc0;
                                            v7 = v57;
                                        }
                                        else {
                                            v110 = v12;
                                            v109 = v58;
                                            v17 = v23;
                                            zzbc2 = zzbc0;
                                            v7 = v57;
                                            v111 = v110;
                                        }
                                        break;
                                    }
                                    case 61: {
                                        if(v19 == 2) {
                                            v111 = zzbd.zza(arr_b, v12, zzbc0);
                                            unsafe6.putObject(object0, v22, zzbc0.zzc);
                                            unsafe6.putInt(object0, v108, v23);
                                            goto label_954;
                                        }
                                        goto label_946;
                                    }
                                    case 55: 
                                    case 62: {
                                        v109 = v58;
                                        v17 = v23;
                                        v7 = v57;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 0) {
                                            v111 = zzbd.zzh(arr_b, v110, zzbc2);
                                            unsafe6.putObject(object0, v22, zzbc2.zza);
                                            unsafe6.putInt(object0, v108, v17);
                                            break;
                                        }
                                        v111 = v110;
                                        break;
                                    }
                                    case 0x3F: {
                                        if(v19 == 0) {
                                            int v116 = zzbd.zzh(arr_b, v12, zzbc0);
                                            int v117 = zzbc0.zza;
                                            zzcw zzcw2 = this.zzu(v58);
                                            if(zzcw2 == null || zzcw2.zza(v117)) {
                                                unsafe6.putObject(object0, v22, v117);
                                                unsafe6.putInt(object0, v108, v23);
                                            }
                                            else {
                                                zzef.zzd(object0).zzj(v57, ((long)v117));
                                            }
                                            v111 = v116;
                                            goto label_954;
                                        }
                                        goto label_946;
                                    }
                                    case 57: 
                                    case 0x40: {
                                        v109 = v58;
                                        v17 = v23;
                                        v7 = v57;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 5) {
                                            v111 = v110 + 4;
                                            unsafe6.putObject(object0, v22, zzbd.zzb(arr_b, v110));
                                            unsafe6.putInt(object0, v108, v17);
                                            break;
                                        }
                                        v111 = v110;
                                        break;
                                    }
                                    case 56: 
                                    case 65: {
                                        v109 = v58;
                                        v17 = v23;
                                        v7 = v57;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        if(v19 == 1) {
                                            v111 = v110 + 8;
                                            unsafe6.putObject(object0, v22, zzbd.zzn(arr_b, v110));
                                            unsafe6.putInt(object0, v108, v17);
                                            break;
                                        }
                                        v111 = v110;
                                        break;
                                    }
                                    case 66: {
                                        if(v19 == 0) {
                                            v111 = zzbd.zzh(arr_b, v12, zzbc0);
                                            unsafe6.putObject(object0, v22, ((int)(zzbc0.zza >>> 1 ^ -(zzbc0.zza & 1))));
                                            unsafe6.putInt(object0, v108, v23);
                                            goto label_954;
                                        }
                                    label_946:
                                        v109 = v58;
                                        v17 = v23;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        v7 = v57;
                                        v111 = v110;
                                        break;
                                    }
                                    case 67: {
                                        if(v19 == 0) {
                                            v111 = zzbd.zzk(arr_b, v12, zzbc0);
                                            unsafe6.putObject(object0, v22, ((long)(zzbc0.zzb >>> 1 ^ -(1L & zzbc0.zzb))));
                                            unsafe6.putInt(object0, v108, v23);
                                        label_954:
                                            v109 = v58;
                                            v17 = v23;
                                            v110 = v12;
                                            zzbc2 = zzbc0;
                                            v7 = v57;
                                            break;
                                        }
                                        else {
                                            v109 = v58;
                                            v17 = v23;
                                            v110 = v12;
                                        }
                                        zzbc2 = zzbc0;
                                        v7 = v57;
                                        v111 = v110;
                                        break;
                                    }
                                    case 68: {
                                        if(v19 == 3) {
                                            Object object9 = this.zzy(object0, v23, v58);
                                            int v118 = zzbd.zzl(object9, this.zzv(v58), arr_b, v12, v1, v57 & -8 | 4, zzbc0);
                                            this.zzG(object0, v23, v58, object9);
                                            v109 = v58;
                                            v17 = v23;
                                            v110 = v12;
                                            v111 = v118;
                                            zzbc2 = zzbc0;
                                            v7 = v57;
                                            break;
                                        }
                                    label_977:
                                        v109 = v58;
                                        v17 = v23;
                                        v7 = v57;
                                        v110 = v12;
                                        zzbc2 = zzbc0;
                                        v111 = v110;
                                        break;
                                    }
                                    default: {
                                        goto label_977;
                                    }
                                }
                                if(v111 == v110) {
                                    v18 = v2;
                                    v14 = v111;
                                    v4 = v109;
                                }
                                else {
                                    v3 = v2;
                                    zzbc1 = zzbc2;
                                    v10 = v16;
                                    v4 = 0;
                                    v6 = v109;
                                    v8 = v15;
                                    unsafe0 = unsafe1;
                                    v9 = v17;
                                    v5 = v111;
                                    continue;
                                }
                            }
                        }
                    }
                }
            }
            if(v7 != v18 || v18 == 0) {
                if(!this.zzh || zzbc2.zzd == zzcd.zza) {
                    v119 = v17;
                    v120 = v7;
                    unsafe8 = unsafe1;
                    v5 = zzbd.zzg(v120, arr_b, v14, v1, zzef.zzd(object0), zzbc0);
                }
                else {
                    if(zzbc2.zzd.zzb(this.zzg, v17) == null) {
                        v119 = v17;
                        v120 = v7;
                        unsafe8 = unsafe1;
                        v5 = zzbd.zzg(v7, arr_b, v14, v1, zzef.zzd(object0), zzbc0);
                        goto label_1016;
                    }
                    zzco zzco0 = (zzco)object0;
                    throw null;
                }
            label_1016:
                v6 = v4;
                v9 = v119;
                v7 = v120;
                unsafe0 = unsafe8;
                v10 = v16;
                v4 = 0;
                v8 = v15;
                zzbc1 = zzbc0;
                v3 = v18;
                continue;
            }
            else {
                v5 = v14;
                v10 = v16;
                v8 = v15;
                unsafe7 = unsafe1;
            }
            break;
        }
        if(v10 != 0xFFFFF) {
            unsafe7.putInt(object0, ((long)v10), v8);
        }
        int v121 = this.zzj;
        while(v121 < this.zzk) {
            int v122 = this.zzi[v121];
            int v123 = this.zzc[v122];
            Object object10 = zzfp.zzf(object0, ((long)(this.zzs(v122) & 0xFFFFF)));
            if(object10 == null || this.zzu(v122) == null) {
                ++v121;
                continue;
            }
            zzdw zzdw1 = (zzdw)object10;
            zzdv zzdv1 = (zzdv)this.zzw(v122);
            throw null;
        }
        if(v18 == 0) {
            if(v5 != v1) {
                throw zzdc.zze();
            }
            return v5;
        }
        if(v5 > v1 || v7 != v18) {
            throw zzdc.zze();
        }
        return v5;
    }

    static zzfg zzd(Object object0) {
        zzfg zzfg0 = ((zzcs)object0).zzc;
        if(zzfg0 == zzfg.zzc()) {
            zzfg0 = zzfg.zzf();
            ((zzcs)object0).zzc = zzfg0;
        }
        return zzfg0;
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final Object zze() {
        return ((zzcs)this.zzg).zzl();
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final void zzf(Object object0) {
        if(zzef.zzL(object0)) {
            if(object0 instanceof zzcs) {
                ((zzcs)object0).zzu(0x7FFFFFFF);
                ((zzcs)object0).zza = 0;
                ((zzcs)object0).zzs();
            }
            int[] arr_v = this.zzc;
            for(int v = 0; v < arr_v.length; v += 3) {
                int v1 = this.zzs(v);
                long v2 = (long)(0xFFFFF & v1);
                switch(v1 >>> 20 & 0xFF) {
                    case 9: 
                    case 17: {
                        if(this.zzI(object0, v)) {
                            this.zzv(v).zzf(zzef.zzb.getObject(object0, v2));
                        }
                        break;
                    }
                    case 18: 
                    case 19: 
                    case 20: 
                    case 21: 
                    case 22: 
                    case 23: 
                    case 24: 
                    case 25: 
                    case 26: 
                    case 27: 
                    case 28: 
                    case 29: 
                    case 30: 
                    case 0x1F: 
                    case 0x20: 
                    case 33: 
                    case 34: 
                    case 35: 
                    case 36: 
                    case 37: 
                    case 38: 
                    case 39: 
                    case 40: 
                    case 41: 
                    case 42: 
                    case 43: 
                    case 44: 
                    case 45: 
                    case 46: 
                    case 0x2F: 
                    case 0x30: 
                    case 49: {
                        this.zzl.zza(object0, v2);
                        break;
                    }
                    case 50: {
                        Unsafe unsafe0 = zzef.zzb;
                        Object object1 = unsafe0.getObject(object0, v2);
                        if(object1 != null) {
                            ((zzdw)object1).zzc();
                            unsafe0.putObject(object0, v2, object1);
                        }
                        break;
                    }
                    case 60: 
                    case 68: {
                        if(this.zzM(object0, this.zzc[v], v)) {
                            this.zzv(v).zzf(zzef.zzb.getObject(object0, v2));
                        }
                    }
                }
            }
            this.zzm.zzg(object0);
            if(this.zzh) {
                this.zzn.zzd(object0);
            }
        }
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final void zzg(Object object0, Object object1) {
        zzef.zzA(object0);
        object1.getClass();
        for(int v = 0; v < this.zzc.length; v += 3) {
            int v1 = this.zzs(v);
            int v2 = this.zzc[v];
            long v3 = (long)(0xFFFFF & v1);
            switch(v1 >>> 20 & 0xFF) {
                case 0: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzo(object0, v3, zzfp.zza(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 1: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzp(object0, v3, zzfp.zzb(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 2: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzr(object0, v3, zzfp.zzd(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 3: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzr(object0, v3, zzfp.zzd(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 4: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzq(object0, v3, zzfp.zzc(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 5: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzr(object0, v3, zzfp.zzd(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 6: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzq(object0, v3, zzfp.zzc(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 7: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzm(object0, v3, zzfp.zzw(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 8: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzs(object0, v3, zzfp.zzf(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 9: {
                    this.zzB(object0, object1, v);
                    break;
                }
                case 10: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzs(object0, v3, zzfp.zzf(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 11: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzq(object0, v3, zzfp.zzc(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 12: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzq(object0, v3, zzfp.zzc(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 13: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzq(object0, v3, zzfp.zzc(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 14: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzr(object0, v3, zzfp.zzd(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 15: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzq(object0, v3, zzfp.zzc(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 16: {
                    if(this.zzI(object1, v)) {
                        zzfp.zzr(object0, v3, zzfp.zzd(object1, v3));
                        this.zzD(object0, v);
                    }
                    break;
                }
                case 17: {
                    this.zzB(object0, object1, v);
                    break;
                }
                case 18: 
                case 19: 
                case 20: 
                case 21: 
                case 22: 
                case 23: 
                case 24: 
                case 25: 
                case 26: 
                case 27: 
                case 28: 
                case 29: 
                case 30: 
                case 0x1F: 
                case 0x20: 
                case 33: 
                case 34: 
                case 35: 
                case 36: 
                case 37: 
                case 38: 
                case 39: 
                case 40: 
                case 41: 
                case 42: 
                case 43: 
                case 44: 
                case 45: 
                case 46: 
                case 0x2F: 
                case 0x30: 
                case 49: {
                    this.zzl.zzb(object0, object1, v3);
                    break;
                }
                case 50: {
                    zzfp.zzs(object0, v3, zzdx.zza(zzfp.zzf(object0, v3), zzfp.zzf(object1, v3)));
                    break;
                }
                case 51: 
                case 52: 
                case 53: 
                case 54: 
                case 55: 
                case 56: 
                case 57: 
                case 58: 
                case 59: {
                    if(this.zzM(object1, v2, v)) {
                        zzfp.zzs(object0, v3, zzfp.zzf(object1, v3));
                        this.zzE(object0, v2, v);
                    }
                    break;
                }
                case 60: {
                    this.zzC(object0, object1, v);
                    break;
                }
                case 61: 
                case 62: 
                case 0x3F: 
                case 0x40: 
                case 65: 
                case 66: 
                case 67: {
                    if(this.zzM(object1, v2, v)) {
                        zzfp.zzs(object0, v3, zzfp.zzf(object1, v3));
                        this.zzE(object0, v2, v);
                    }
                    break;
                }
                case 68: {
                    this.zzC(object0, object1, v);
                }
            }
        }
        zzeq.zzq(this.zzm, object0, object1);
        if(this.zzh) {
            zzeq.zzp(this.zzn, object0, object1);
        }
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final void zzh(Object object0, byte[] arr_b, int v, int v1, zzbc zzbc0) throws IOException {
        this.zzc(object0, arr_b, v, v1, 0, zzbc0);
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final void zzi(Object object0, zzfx zzfx0) throws IOException {
        int[] arr_v2;
        Iterator iterator2;
        Map.Entry map$Entry2;
        int v9;
        int v8;
        Map.Entry map$Entry1;
        Iterator iterator1;
        Map.Entry map$Entry0;
        if(this.zzh) {
            zzci zzci0 = this.zzn.zzb(object0);
            if(zzci0.zza.isEmpty()) {
                map$Entry0 = null;
                iterator1 = null;
            }
            else {
                Iterator iterator0 = zzci0.zzf();
                Object object1 = iterator0.next();
                map$Entry0 = (Map.Entry)object1;
                iterator1 = iterator0;
            }
        }
        else {
            map$Entry0 = null;
            iterator1 = null;
        }
        int[] arr_v = this.zzc;
        Unsafe unsafe0 = zzef.zzb;
        int v = 0xFFFFF;
        int v2 = 0;
        for(int v1 = 0; v2 < arr_v.length; v1 = v9) {
            int v3 = this.zzs(v2);
            int[] arr_v1 = this.zzc;
            int v4 = v3 >>> 20 & 0xFF;
            int v5 = arr_v1[v2];
            if(v4 <= 17) {
                int v6 = arr_v1[v2 + 2];
                int v7 = v6 & 0xFFFFF;
                if(v7 == v) {
                    map$Entry1 = map$Entry0;
                }
                else {
                    if(v7 == 0xFFFFF) {
                        map$Entry1 = map$Entry0;
                        v1 = 0;
                    }
                    else {
                        map$Entry1 = map$Entry0;
                        v1 = unsafe0.getInt(object0, ((long)v7));
                    }
                    v = v7;
                }
                v8 = 1 << (v6 >>> 20);
                v9 = v1;
                map$Entry2 = map$Entry1;
            }
            else {
                v9 = v1;
                map$Entry2 = map$Entry0;
                v8 = 0;
            }
            while(map$Entry2 != null && this.zzn.zza(map$Entry2) <= v5) {
                this.zzn.zze(zzfx0, map$Entry2);
                if(iterator1.hasNext()) {
                    Object object2 = iterator1.next();
                    map$Entry2 = (Map.Entry)object2;
                }
                else {
                    map$Entry2 = null;
                }
            }
            long v10 = (long)(v3 & 0xFFFFF);
            switch(v4) {
                case 0: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzf(v5, zzfp.zza(object0, v10));
                    }
                    break;
                }
                case 1: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzo(v5, zzfp.zzb(object0, v10));
                    }
                    break;
                }
                case 2: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzt(v5, unsafe0.getLong(object0, v10));
                    }
                    break;
                }
                case 3: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzK(v5, unsafe0.getLong(object0, v10));
                    }
                    break;
                }
                case 4: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzr(v5, unsafe0.getInt(object0, v10));
                    }
                    break;
                }
                case 5: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzm(v5, unsafe0.getLong(object0, v10));
                    }
                    break;
                }
                case 6: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzk(v5, unsafe0.getInt(object0, v10));
                    }
                    break;
                }
                case 7: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzb(v5, zzfp.zzw(object0, v10));
                    }
                    break;
                }
                case 8: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzef.zzO(v5, unsafe0.getObject(object0, v10), zzfx0);
                    }
                    break;
                }
                case 9: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzv(v5, unsafe0.getObject(object0, v10), this.zzv(v2));
                    }
                    break;
                }
                case 10: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzd(v5, ((zzbq)unsafe0.getObject(object0, v10)));
                    }
                    break;
                }
                case 11: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzI(v5, unsafe0.getInt(object0, v10));
                    }
                    break;
                }
                case 12: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzi(v5, unsafe0.getInt(object0, v10));
                    }
                    break;
                }
                case 13: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzx(v5, unsafe0.getInt(object0, v10));
                    }
                    break;
                }
                case 14: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzz(v5, unsafe0.getLong(object0, v10));
                    }
                    break;
                }
                case 15: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzB(v5, unsafe0.getInt(object0, v10));
                    }
                    break;
                }
                case 16: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzD(v5, unsafe0.getLong(object0, v10));
                    }
                    break;
                }
                case 17: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    if(this.zzJ(object0, v2, v, v9, v8)) {
                        zzfx0.zzq(v5, unsafe0.getObject(object0, v10), this.zzv(v2));
                    }
                    break;
                }
                case 18: {
                    zzeq.zzt(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 19: {
                    zzeq.zzx(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 20: {
                    zzeq.zzz(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 21: {
                    zzeq.zzF(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 22: {
                    zzeq.zzy(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 23: {
                    zzeq.zzw(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 24: {
                    zzeq.zzv(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 25: {
                    zzeq.zzs(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 26: {
                    int v11 = this.zzc[v2];
                    List list0 = (List)unsafe0.getObject(object0, v10);
                    if(list0 != null && !list0.isEmpty()) {
                        zzfx0.zzH(v11, list0);
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 27: {
                    int v12 = this.zzc[v2];
                    List list1 = (List)unsafe0.getObject(object0, v10);
                    zzeo zzeo0 = this.zzv(v2);
                    if(list1 != null && !list1.isEmpty()) {
                        for(int v13 = 0; v13 < list1.size(); ++v13) {
                            ((zzbz)zzfx0).zzv(v12, list1.get(v13), zzeo0);
                        }
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 28: {
                    int v14 = this.zzc[v2];
                    List list2 = (List)unsafe0.getObject(object0, v10);
                    if(list2 != null && !list2.isEmpty()) {
                        zzfx0.zze(v14, list2);
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 29: {
                    zzeq.zzE(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 30: {
                    zzeq.zzu(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 0x1F: {
                    zzeq.zzA(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 0x20: {
                    zzeq.zzB(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 33: {
                    zzeq.zzC(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 34: {
                    zzeq.zzD(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, false);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 35: {
                    zzeq.zzt(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 36: {
                    zzeq.zzx(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 37: {
                    zzeq.zzz(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 38: {
                    zzeq.zzF(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 39: {
                    zzeq.zzy(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 40: {
                    zzeq.zzw(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 41: {
                    zzeq.zzv(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 42: {
                    zzeq.zzs(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 43: {
                    zzeq.zzE(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 44: {
                    zzeq.zzu(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 45: {
                    zzeq.zzA(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 46: {
                    zzeq.zzB(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 0x2F: {
                    zzeq.zzC(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 0x30: {
                    zzeq.zzD(this.zzc[v2], ((List)unsafe0.getObject(object0, v10)), zzfx0, true);
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 49: {
                    int v15 = this.zzc[v2];
                    List list3 = (List)unsafe0.getObject(object0, v10);
                    zzeo zzeo1 = this.zzv(v2);
                    if(list3 != null && !list3.isEmpty()) {
                        for(int v16 = 0; v16 < list3.size(); ++v16) {
                            ((zzbz)zzfx0).zzq(v15, list3.get(v16), zzeo1);
                        }
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 50: {
                    if(unsafe0.getObject(object0, v10) != null) {
                        zzdv zzdv0 = (zzdv)this.zzw(v2);
                        throw null;
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 51: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzf(v5, zzef.zzm(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 52: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzo(v5, zzef.zzn(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 53: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzt(v5, zzef.zzt(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 54: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzK(v5, zzef.zzt(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 55: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzr(v5, zzef.zzo(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 56: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzm(v5, zzef.zzt(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 57: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzk(v5, zzef.zzo(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 58: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzb(v5, zzef.zzN(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 59: {
                    if(this.zzM(object0, v5, v2)) {
                        zzef.zzO(v5, unsafe0.getObject(object0, v10), zzfx0);
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 60: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzv(v5, unsafe0.getObject(object0, v10), this.zzv(v2));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 61: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzd(v5, ((zzbq)unsafe0.getObject(object0, v10)));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 62: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzI(v5, zzef.zzo(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 0x3F: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzi(v5, zzef.zzo(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 0x40: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzx(v5, zzef.zzo(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 65: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzz(v5, zzef.zzt(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 66: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzB(v5, zzef.zzo(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 67: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzD(v5, zzef.zzt(object0, v10));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                case 68: {
                    if(this.zzM(object0, v5, v2)) {
                        zzfx0.zzq(v5, unsafe0.getObject(object0, v10), this.zzv(v2));
                    }
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
                default: {
                    iterator2 = iterator1;
                    arr_v2 = arr_v;
                    break;
                }
            }
            v2 += 3;
            map$Entry0 = map$Entry2;
            iterator1 = iterator2;
            arr_v = arr_v2;
        }
        while(map$Entry0 != null) {
            this.zzn.zze(zzfx0, map$Entry0);
            if(iterator1.hasNext()) {
                Object object3 = iterator1.next();
                map$Entry0 = (Map.Entry)object3;
            }
            else {
                map$Entry0 = null;
            }
        }
        Object object4 = this.zzm.zzd(object0);
        this.zzm.zzj(object4, zzfx0);
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final boolean zzj(Object object0, Object object1) {
        boolean z;
        int v = 0;
        while(v < this.zzc.length) {
            int v1 = this.zzs(v);
            long v2 = (long)(v1 & 0xFFFFF);
            switch(v1 >>> 20 & 0xFF) {
                case 0: {
                    if(!this.zzH(object0, object1, v) || Double.doubleToLongBits(zzfp.zza(object0, v2)) != Double.doubleToLongBits(zzfp.zza(object1, v2))) {
                        return false;
                    }
                    break;
                }
                case 1: {
                    if(this.zzH(object0, object1, v) && Float.floatToIntBits(zzfp.zzb(object0, v2)) == Float.floatToIntBits(zzfp.zzb(object1, v2))) {
                        break;
                    }
                    return false;
                }
                case 2: {
                    if(this.zzH(object0, object1, v) && zzfp.zzd(object0, v2) == zzfp.zzd(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 3: {
                    if(this.zzH(object0, object1, v) && zzfp.zzd(object0, v2) == zzfp.zzd(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 4: {
                    if(this.zzH(object0, object1, v) && zzfp.zzc(object0, v2) == zzfp.zzc(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 5: {
                    if(this.zzH(object0, object1, v) && zzfp.zzd(object0, v2) == zzfp.zzd(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 6: {
                    if(this.zzH(object0, object1, v) && zzfp.zzc(object0, v2) == zzfp.zzc(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 7: {
                    if(this.zzH(object0, object1, v) && zzfp.zzw(object0, v2) == zzfp.zzw(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 8: {
                    if(this.zzH(object0, object1, v) && zzeq.zzG(zzfp.zzf(object0, v2), zzfp.zzf(object1, v2))) {
                        break;
                    }
                    return false;
                }
                case 9: {
                    if(this.zzH(object0, object1, v) && zzeq.zzG(zzfp.zzf(object0, v2), zzfp.zzf(object1, v2))) {
                        break;
                    }
                    return false;
                }
                case 10: {
                    if(this.zzH(object0, object1, v) && zzeq.zzG(zzfp.zzf(object0, v2), zzfp.zzf(object1, v2))) {
                        break;
                    }
                    return false;
                }
                case 11: {
                    if(this.zzH(object0, object1, v) && zzfp.zzc(object0, v2) == zzfp.zzc(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 12: {
                    if(this.zzH(object0, object1, v) && zzfp.zzc(object0, v2) == zzfp.zzc(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 13: {
                    if(this.zzH(object0, object1, v) && zzfp.zzc(object0, v2) == zzfp.zzc(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 14: {
                    if(this.zzH(object0, object1, v) && zzfp.zzd(object0, v2) == zzfp.zzd(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 15: {
                    if(this.zzH(object0, object1, v) && zzfp.zzc(object0, v2) == zzfp.zzc(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 16: {
                    if(this.zzH(object0, object1, v) && zzfp.zzd(object0, v2) == zzfp.zzd(object1, v2)) {
                        break;
                    }
                    return false;
                }
                case 17: {
                    if(this.zzH(object0, object1, v) && zzeq.zzG(zzfp.zzf(object0, v2), zzfp.zzf(object1, v2))) {
                        break;
                    }
                    return false;
                }
                case 18: 
                case 19: 
                case 20: 
                case 21: 
                case 22: 
                case 23: 
                case 24: 
                case 25: 
                case 26: 
                case 27: 
                case 28: 
                case 29: 
                case 30: 
                case 0x1F: 
                case 0x20: 
                case 33: 
                case 34: 
                case 35: 
                case 36: 
                case 37: 
                case 38: 
                case 39: 
                case 40: 
                case 41: 
                case 42: 
                case 43: 
                case 44: 
                case 45: 
                case 46: 
                case 0x2F: 
                case 0x30: 
                case 49: {
                    z = zzeq.zzG(zzfp.zzf(object0, v2), zzfp.zzf(object1, v2));
                    goto label_45;
                }
                case 50: {
                    z = zzeq.zzG(zzfp.zzf(object0, v2), zzfp.zzf(object1, v2));
                label_45:
                    if(!z) {
                        return false;
                    }
                    break;
                }
                case 51: 
                case 52: 
                case 53: 
                case 54: 
                case 55: 
                case 56: 
                case 57: 
                case 58: 
                case 59: 
                case 60: 
                case 61: 
                case 62: 
                case 0x3F: 
                case 0x40: 
                case 65: 
                case 66: 
                case 67: 
                case 68: {
                    int v3 = this.zzp(v);
                    if(zzfp.zzc(object0, ((long)(v3 & 0xFFFFF))) != zzfp.zzc(object1, ((long)(v3 & 0xFFFFF))) || !zzeq.zzG(zzfp.zzf(object0, v2), zzfp.zzf(object1, v2))) {
                        return false;
                    }
                }
            }
            v += 3;
        }
        if(!this.zzm.zzd(object0).equals(this.zzm.zzd(object1))) {
            return false;
        }
        return this.zzh ? this.zzn.zzb(object0).equals(this.zzn.zzb(object1)) : true;
    }

    @Override  // com.google.android.gms.internal.play_billing.zzeo
    public final boolean zzk(Object object0) {
        int v10;
        int v9;
        int v1 = 0;
        int v2 = 0xFFFFF;
        for(int v = 0; v1 < this.zzj; v = v9) {
            int v3 = this.zzi[v1];
            int v4 = this.zzc[v3];
            int v5 = this.zzs(v3);
            int v6 = this.zzc[v3 + 2];
            int v7 = v6 & 0xFFFFF;
            int v8 = 1 << (v6 >>> 20);
            if(v7 == v2) {
                v10 = v2;
                v9 = v;
            }
            else {
                if(v7 != 0xFFFFF) {
                    v = zzef.zzb.getInt(object0, ((long)v7));
                }
                v9 = v;
                v10 = v7;
            }
            if((0x10000000 & v5) != 0 && !this.zzJ(object0, v3, v10, v9, v8)) {
                return false;
            }
            switch(v5 >>> 20 & 0xFF) {
                case 9: 
                case 17: {
                    if(this.zzJ(object0, v3, v10, v9, v8) && !zzef.zzK(object0, v5, this.zzv(v3))) {
                        return false;
                    }
                    break;
                }
                case 27: 
                case 49: {
                    List list0 = (List)zzfp.zzf(object0, ((long)(v5 & 0xFFFFF)));
                    if(!list0.isEmpty()) {
                        zzeo zzeo0 = this.zzv(v3);
                        for(int v11 = 0; v11 < list0.size(); ++v11) {
                            if(!zzeo0.zzk(list0.get(v11))) {
                                return false;
                            }
                        }
                    }
                    break;
                }
                case 50: {
                    if(!((zzdw)zzfp.zzf(object0, ((long)(v5 & 0xFFFFF)))).isEmpty()) {
                        zzdv zzdv0 = (zzdv)this.zzw(v3);
                        throw null;
                    }
                    break;
                }
                case 60: 
                case 68: {
                    if(this.zzM(object0, v4, v3) && !zzef.zzK(object0, v5, this.zzv(v3))) {
                        return false;
                    }
                }
            }
            ++v1;
            v2 = v10;
        }
        return !this.zzh || this.zzn.zzb(object0).zzj();
    }

    static zzef zzl(Class class0, zzdz zzdz0, zzei zzei0, zzdq zzdq0, zzff zzff0, zzce zzce0, zzdx zzdx0) {
        Field field3;
        int v93;
        int v86;
        int v84;
        int v83;
        int v82;
        int v81;
        String s1;
        zzen zzen1;
        Field field1;
        int v80;
        int v79;
        Field field0;
        int v77;
        int v76;
        int v69;
        int v63;
        int v14;
        int[] arr_v;
        int v13;
        int v12;
        int v11;
        int v10;
        int v9;
        int v8;
        int v2;
        if(zzdz0 instanceof zzen) {
            zzen zzen0 = (zzen)zzdz0;
            String s = zzen0.zzd();
            int v = s.length();
            if(s.charAt(0) >= 0xD800) {
                for(int v1 = 1; true; v1 = v2) {
                    v2 = v1 + 1;
                    if(s.charAt(v1) < 0xD800) {
                        break;
                    }
                }
            }
            else {
                v2 = 1;
            }
            int v3 = v2 + 1;
            int v4 = s.charAt(v2);
            if(v4 >= 0xD800) {
                int v5 = v4 & 0x1FFF;
                int v6 = 13;
                int v7;
                while((v7 = s.charAt(v3)) >= 0xD800) {
                    v5 |= (v7 & 0x1FFF) << v6;
                    v6 += 13;
                    ++v3;
                }
                v4 = v5 | v7 << v6;
                ++v3;
            }
            if(v4 == 0) {
                v8 = 0;
                v9 = 0;
                v10 = 0;
                v11 = 0;
                v12 = 0;
                v13 = 0;
                arr_v = zzef.zza;
                v14 = 0;
            }
            else {
                int v15 = v3 + 1;
                int v16 = s.charAt(v3);
                if(v16 >= 0xD800) {
                    int v17 = v16 & 0x1FFF;
                    int v18 = 13;
                    int v19;
                    while((v19 = s.charAt(v15)) >= 0xD800) {
                        v17 |= (v19 & 0x1FFF) << v18;
                        v18 += 13;
                        ++v15;
                    }
                    v16 = v17 | v19 << v18;
                    ++v15;
                }
                int v20 = v15 + 1;
                int v21 = s.charAt(v15);
                if(v21 >= 0xD800) {
                    int v22 = v21 & 0x1FFF;
                    int v23 = 13;
                    int v24;
                    while((v24 = s.charAt(v20)) >= 0xD800) {
                        v22 |= (v24 & 0x1FFF) << v23;
                        v23 += 13;
                        ++v20;
                    }
                    v21 = v22 | v24 << v23;
                    ++v20;
                }
                int v25 = v20 + 1;
                int v26 = s.charAt(v20);
                if(v26 >= 0xD800) {
                    int v27 = v26 & 0x1FFF;
                    int v28 = 13;
                    int v29;
                    while((v29 = s.charAt(v25)) >= 0xD800) {
                        v27 |= (v29 & 0x1FFF) << v28;
                        v28 += 13;
                        ++v25;
                    }
                    v26 = v27 | v29 << v28;
                    ++v25;
                }
                int v30 = v25 + 1;
                int v31 = s.charAt(v25);
                if(v31 >= 0xD800) {
                    int v32 = v31 & 0x1FFF;
                    int v33 = 13;
                    int v34;
                    while((v34 = s.charAt(v30)) >= 0xD800) {
                        v32 |= (v34 & 0x1FFF) << v33;
                        v33 += 13;
                        ++v30;
                    }
                    v31 = v32 | v34 << v33;
                    ++v30;
                }
                int v35 = v30 + 1;
                v8 = s.charAt(v30);
                if(v8 >= 0xD800) {
                    int v36 = v8 & 0x1FFF;
                    int v37 = 13;
                    int v38;
                    while((v38 = s.charAt(v35)) >= 0xD800) {
                        v36 |= (v38 & 0x1FFF) << v37;
                        v37 += 13;
                        ++v35;
                    }
                    v8 = v36 | v38 << v37;
                    ++v35;
                }
                int v39 = v35 + 1;
                v9 = s.charAt(v35);
                if(v9 >= 0xD800) {
                    int v40 = v9 & 0x1FFF;
                    int v41 = 13;
                    int v42;
                    while((v42 = s.charAt(v39)) >= 0xD800) {
                        v40 |= (v42 & 0x1FFF) << v41;
                        v41 += 13;
                        ++v39;
                    }
                    v9 = v40 | v42 << v41;
                    ++v39;
                }
                int v43 = v39 + 1;
                int v44 = s.charAt(v39);
                if(v44 >= 0xD800) {
                    int v45 = v44 & 0x1FFF;
                    int v46 = 13;
                    int v47;
                    while((v47 = s.charAt(v43)) >= 0xD800) {
                        v45 |= (v47 & 0x1FFF) << v46;
                        v46 += 13;
                        ++v43;
                    }
                    v44 = v45 | v47 << v46;
                    ++v43;
                }
                int v48 = v43 + 1;
                int v49 = s.charAt(v43);
                if(v49 >= 0xD800) {
                    int v50 = v49 & 0x1FFF;
                    int v51 = 13;
                    int v52;
                    while((v52 = s.charAt(v48)) >= 0xD800) {
                        v50 |= (v52 & 0x1FFF) << v51;
                        v51 += 13;
                        ++v48;
                    }
                    v49 = v50 | v52 << v51;
                    ++v48;
                }
                v12 = v16 * 2 + v21;
                arr_v = new int[v49 + v9 + v44];
                v10 = v26;
                v13 = v49;
                v14 = v16;
                v11 = v31;
                v3 = v48;
            }
            Unsafe unsafe0 = zzef.zzb;
            Object[] arr_object = zzen0.zze();
            Class class1 = zzen0.zza().getClass();
            int v53 = v13 + v9;
            int[] arr_v1 = new int[v8 * 3];
            Object[] arr_object1 = new Object[v8 + v8];
            int v54 = 0;
            int v55 = 0;
            int v56 = v13;
            int v57 = v53;
            while(v3 < v) {
                int v58 = s.charAt(v3);
                if(v58 >= 0xD800) {
                    int v59 = v58 & 0x1FFF;
                    int v60 = v3 + 1;
                    int v61 = 13;
                    int v62;
                    while((v62 = s.charAt(v60)) >= 0xD800) {
                        v59 |= (v62 & 0x1FFF) << v61;
                        v61 += 13;
                        ++v60;
                    }
                    v58 = v59 | v62 << v61;
                    v63 = v60 + 1;
                }
                else {
                    v63 = v3 + 1;
                }
                int v64 = s.charAt(v63);
                if(v64 >= 0xD800) {
                    int v65 = v64 & 0x1FFF;
                    int v66 = v63 + 1;
                    int v67 = 13;
                    int v68;
                    while((v68 = s.charAt(v66)) >= 0xD800) {
                        v65 |= (v68 & 0x1FFF) << v67;
                        v67 += 13;
                        ++v66;
                    }
                    v64 = v65 | v68 << v67;
                    v69 = v66 + 1;
                }
                else {
                    v69 = v63 + 1;
                }
                if((v64 & 0x400) != 0) {
                    arr_v[v54] = v55;
                    ++v54;
                }
                int v70 = v64 & 0x800;
                if((v64 & 0xFF) >= 51) {
                    int v71 = s.charAt(v69);
                    if(v71 >= 0xD800) {
                        int v72 = 13;
                        int v73 = v71 & 0x1FFF;
                        int v74 = v69 + 1;
                        int v75;
                        while((v75 = s.charAt(v74)) >= 0xD800) {
                            v73 |= (v75 & 0x1FFF) << v72;
                            v72 += 13;
                            ++v74;
                        }
                        v71 = v73 | v75 << v72;
                        v76 = v74 + 1;
                    }
                    else {
                        v76 = v69 + 1;
                    }
                    v77 = v11;
                    switch((v64 & 0xFF) - 51) {
                        case 12: {
                            if(zzen0.zzc() == 1 || v70 != 0) {
                                arr_object1[v55 / 3 + v55 / 3 + 1] = arr_object[v12];
                                ++v12;
                            }
                            else {
                                v70 = 0;
                            }
                            break;
                        }
                        case 9: 
                        case 17: {
                            arr_object1[v55 / 3 + v55 / 3 + 1] = arr_object[v12];
                            ++v12;
                        }
                    }
                    int v78 = v71 + v71;
                    Object object0 = arr_object[v78];
                    if(object0 instanceof Field) {
                        field0 = (Field)object0;
                    }
                    else {
                        field0 = zzef.zzz(class1, ((String)object0));
                        arr_object[v78] = field0;
                    }
                    v79 = v10;
                    v80 = (int)unsafe0.objectFieldOffset(field0);
                    Object object1 = arr_object[v78 + 1];
                    if(object1 instanceof Field) {
                        field1 = (Field)object1;
                    }
                    else {
                        field1 = zzef.zzz(class1, ((String)object1));
                        arr_object[v78 + 1] = field1;
                    }
                    zzen1 = zzen0;
                    s1 = s;
                    v81 = v12;
                    v82 = v76;
                    v83 = (int)unsafe0.objectFieldOffset(field1);
                    v84 = 0;
                }
                else {
                    v79 = v10;
                    v77 = v11;
                    int v85 = v12 + 1;
                    Field field2 = zzef.zzz(class1, ((String)arr_object[v12]));
                    switch(v64 & 0xFF) {
                        case 9: 
                        case 17: {
                            zzen1 = zzen0;
                            arr_object1[v55 / 3 + v55 / 3 + 1] = field2.getType();
                            break;
                        }
                        case 27: {
                            zzen1 = zzen0;
                            v86 = v12 + 2;
                            arr_object1[v55 / 3 + v55 / 3 + 1] = arr_object[v85];
                            v85 = v86;
                            break;
                        }
                        case 12: 
                        case 30: 
                        case 44: {
                            zzen1 = zzen0;
                            if(zzen0.zzc() == 1 || v70 != 0) {
                                v86 = v12 + 2;
                                arr_object1[v55 / 3 + v55 / 3 + 1] = arr_object[v85];
                                v85 = v86;
                            }
                            else {
                                v70 = 0;
                            }
                            break;
                        }
                        case 49: {
                            zzen1 = zzen0;
                            arr_object1[v55 / 3 + v55 / 3 + 1] = arr_object[v85];
                            v85 = v12 + 2;
                            break;
                        }
                        case 50: {
                            arr_v[v56] = v55;
                            int v87 = v55 / 3 + v55 / 3;
                            arr_object1[v87] = arr_object[v85];
                            if(v70 == 0) {
                                v85 = v12 + 2;
                                ++v56;
                                v70 = 0;
                            }
                            else {
                                v85 = v12 + 3;
                                arr_object1[v87 + 1] = arr_object[v12 + 2];
                                ++v56;
                            }
                            zzen1 = zzen0;
                            break;
                        }
                        default: {
                            zzen1 = zzen0;
                            break;
                        }
                    }
                    int v88 = (int)unsafe0.objectFieldOffset(field2);
                    v83 = 0xFFFFF;
                    if((v64 & 0x1000) == 0 || (v64 & 0xFF) > 17) {
                        s1 = s;
                        v82 = v69;
                        v84 = 0;
                    }
                    else {
                        int v89 = v69 + 1;
                        int v90 = s.charAt(v69);
                        if(v90 >= 0xD800) {
                            int v91 = v90 & 0x1FFF;
                            int v92 = 13;
                            while(true) {
                                v82 = v89 + 1;
                                v93 = s.charAt(v89);
                                if(v93 < 0xD800) {
                                    break;
                                }
                                v91 |= (v93 & 0x1FFF) << v92;
                                v92 += 13;
                                v89 = v82;
                            }
                            v90 = v91 | v93 << v92;
                        }
                        else {
                            v82 = v89;
                        }
                        int v94 = v90 / 0x20 + v14 * 2;
                        Object object2 = arr_object[v94];
                        s1 = s;
                        if(object2 instanceof Field) {
                            field3 = (Field)object2;
                        }
                        else {
                            field3 = zzef.zzz(class1, ((String)object2));
                            arr_object[v94] = field3;
                        }
                        v84 = v90 % 0x20;
                        v83 = (int)unsafe0.objectFieldOffset(field3);
                    }
                    if((v64 & 0xFF) >= 18 && (v64 & 0xFF) <= 49) {
                        arr_v[v57] = v88;
                        ++v57;
                    }
                    v81 = v85;
                    v80 = v88;
                }
                arr_v1[v55] = v58;
                int v95 = v55 + 2;
                arr_v1[v55 + 1] = v80 | (((v64 & 0x100) == 0 ? 0 : 0x10000000) | ((v64 & 0x200) == 0 ? 0 : 0x20000000) | (v70 == 0 ? 0 : 0x80000000) | (v64 & 0xFF) << 20);
                v55 += 3;
                arr_v1[v95] = v84 << 20 | v83;
                v12 = v81;
                v3 = v82;
                zzen0 = zzen1;
                s = s1;
                v11 = v77;
                v10 = v79;
            }
            return new zzef(arr_v1, arr_object1, v10, v11, zzen0.zza(), zzen0.zzc(), false, arr_v, v13, v53, zzei0, zzdq0, zzff0, zzce0, zzdx0);
        }
        zzfc zzfc0 = (zzfc)zzdz0;
        throw null;
    }

    private static double zzm(Object object0, long v) {
        return (double)(((Double)zzfp.zzf(object0, v)));
    }

    private static float zzn(Object object0, long v) {
        return (float)(((Float)zzfp.zzf(object0, v)));
    }

    private static int zzo(Object object0, long v) {
        return (int)(((Integer)zzfp.zzf(object0, v)));
    }

    private final int zzp(int v) {
        return this.zzc[v + 2];
    }

    private final int zzq(int v, int v1) {
        int v2 = this.zzc.length / 3 - 1;
        while(v1 <= v2) {
            int v3 = v2 + v1 >>> 1;
            int v4 = v3 * 3;
            int v5 = this.zzc[v4];
            if(v == v5) {
                return v4;
            }
            if(v < v5) {
                v2 = v3 - 1;
            }
            else {
                v1 = v3 + 1;
            }
        }
        return -1;
    }

    private static int zzr(int v) [...] // Inlined contents

    private final int zzs(int v) {
        return this.zzc[v + 1];
    }

    private static long zzt(Object object0, long v) {
        return (long)(((Long)zzfp.zzf(object0, v)));
    }

    private final zzcw zzu(int v) {
        return (zzcw)this.zzd[v / 3 * 2 + 1];
    }

    private final zzeo zzv(int v) {
        Object[] arr_object = this.zzd;
        int v1 = v / 3 + v / 3;
        zzeo zzeo0 = (zzeo)arr_object[v1];
        if(zzeo0 != null) {
            return zzeo0;
        }
        zzeo zzeo1 = zzel.zza().zzb(((Class)arr_object[v1 + 1]));
        this.zzd[v1] = zzeo1;
        return zzeo1;
    }

    private final Object zzw(int v) {
        return this.zzd[v / 3 + v / 3];
    }

    private final Object zzx(Object object0, int v) {
        zzeo zzeo0 = this.zzv(v);
        int v1 = this.zzs(v);
        if(!this.zzI(object0, v)) {
            return zzeo0.zze();
        }
        Object object1 = zzef.zzb.getObject(object0, ((long)(v1 & 0xFFFFF)));
        if(zzef.zzL(object1)) {
            return object1;
        }
        Object object2 = zzeo0.zze();
        if(object1 != null) {
            zzeo0.zzg(object2, object1);
        }
        return object2;
    }

    private final Object zzy(Object object0, int v, int v1) {
        zzeo zzeo0 = this.zzv(v1);
        if(!this.zzM(object0, v, v1)) {
            return zzeo0.zze();
        }
        int v2 = this.zzs(v1);
        Object object1 = zzef.zzb.getObject(object0, ((long)(v2 & 0xFFFFF)));
        if(zzef.zzL(object1)) {
            return object1;
        }
        Object object2 = zzeo0.zze();
        if(object1 != null) {
            zzeo0.zzg(object2, object1);
        }
        return object2;
    }

    private static Field zzz(Class class0, String s) {
        try {
            return class0.getDeclaredField(s);
        }
        catch(NoSuchFieldException unused_ex) {
            Field[] arr_field = class0.getDeclaredFields();
            for(int v = 0; v < arr_field.length; ++v) {
                Field field0 = arr_field[v];
                if(s.equals(field0.getName())) {
                    return field0;
                }
            }
            throw new RuntimeException("Field " + s + " for " + class0.getName() + " not found. Known fields are " + Arrays.toString(arr_field));
        }
    }
}

