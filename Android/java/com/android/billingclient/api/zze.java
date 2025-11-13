package com.android.billingclient.api;

import java.util.Objects;
import org.json.JSONObject;

public final class zze {
    private final String zza;
    private final String zzb;
    private final String zzc;

    zze(JSONObject jSONObject0, zzd zzd0) {
        this.zza = jSONObject0.optString("productId");
        this.zzb = jSONObject0.optString("productType");
        String s = jSONObject0.optString("offerToken");
        if(s.isEmpty()) {
            s = null;
        }
        this.zzc = s;
    }

    @Override
    public final boolean equals(Object object0) {
        if(this == object0) {
            return true;
        }
        return object0 instanceof zze ? this.zza.equals(((zze)object0).zza) && this.zzb.equals(((zze)object0).zzb) && Objects.equals(this.zzc, ((zze)object0).zzc) : false;
    }

    @Override
    public final int hashCode() {
        return Objects.hash(new Object[]{this.zza, this.zzb, this.zzc});
    }

    @Override
    public final String toString() {
        return String.format("{id: %s, type: %s, offer token: %s}", this.zza, this.zzb, this.zzc);
    }
}

