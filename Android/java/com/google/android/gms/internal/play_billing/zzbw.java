package com.google.android.gms.internal.play_billing;

import java.io.IOException;

public final class zzbw extends IOException {
    zzbw() {
        super("CodedOutputStream was writing to a flat byte array and ran out of space.");
    }

    zzbw(String s, Throwable throwable0) {
        super("CodedOutputStream was writing to a flat byte array and ran out of space.: " + s, throwable0);
    }

    zzbw(Throwable throwable0) {
        super("CodedOutputStream was writing to a flat byte array and ran out of space.", throwable0);
    }
}

