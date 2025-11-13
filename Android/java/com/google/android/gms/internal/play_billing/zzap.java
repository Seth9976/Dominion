package com.google.android.gms.internal.play_billing;

import java.util.AbstractMap.SimpleImmutableEntry;
import java.util.Objects;

final class zzap extends zzai {
    final zzaq zza;

    zzap(zzaq zzaq0) {
        this.zza = zzaq0;
        super();
    }

    @Override
    public final Object get(int v) {
        zzaa.zza(v, this.zza.zzc, "index");
        return new AbstractMap.SimpleImmutableEntry(Objects.requireNonNull(this.zza.zzb[v + v]), Objects.requireNonNull(this.zza.zzb[v * 2 + 1]));
    }

    @Override
    public final int size() {
        return zzaq.zzi(this.zza);
    }

    @Override  // com.google.android.gms.internal.play_billing.zzaf
    public final boolean zzf() {
        return true;
    }
}

