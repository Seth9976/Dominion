package androidx.core.os;

import android.os.Parcel;
import android.os.Parcelable.Creator;
import android.os.Parcelable;
import android.util.SparseArray;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public final class ParcelCompat {
    static class Api29Impl {
        static final List readParcelableList(Parcel parcel0, List list0, ClassLoader classLoader0) {
            return parcel0.readParcelableList(list0, classLoader0);
        }
    }

    static class Api30Impl {
        static final Parcelable.Creator readParcelableCreator(Parcel parcel0, ClassLoader classLoader0) {
            return parcel0.readParcelableCreator(classLoader0);
        }
    }

    static class TiramisuImpl {
        public static Object[] readArray(Parcel parcel0, ClassLoader classLoader0, Class class0) {
            return parcel0.readArray(classLoader0, class0);
        }

        public static ArrayList readArrayList(Parcel parcel0, ClassLoader classLoader0, Class class0) {
            return parcel0.readArrayList(classLoader0, class0);
        }

        public static HashMap readHashMap(Parcel parcel0, ClassLoader classLoader0, Class class0, Class class1) {
            return parcel0.readHashMap(classLoader0, class0, class1);
        }

        public static void readList(Parcel parcel0, List list0, ClassLoader classLoader0, Class class0) {
            parcel0.readList(list0, classLoader0, class0);
        }

        public static void readMap(Parcel parcel0, Map map0, ClassLoader classLoader0, Class class0, Class class1) {
            parcel0.readMap(map0, classLoader0, class0, class1);
        }

        static Parcelable readParcelable(Parcel parcel0, ClassLoader classLoader0, Class class0) {
            return (Parcelable)parcel0.readParcelable(classLoader0, class0);
        }

        static Object[] readParcelableArray(Parcel parcel0, ClassLoader classLoader0, Class class0) {
            return parcel0.readParcelableArray(classLoader0, class0);
        }

        public static Parcelable.Creator readParcelableCreator(Parcel parcel0, ClassLoader classLoader0, Class class0) {
            return parcel0.readParcelableCreator(classLoader0, class0);
        }

        static List readParcelableList(Parcel parcel0, List list0, ClassLoader classLoader0, Class class0) {
            return parcel0.readParcelableList(list0, classLoader0, class0);
        }

        static Serializable readSerializable(Parcel parcel0, ClassLoader classLoader0, Class class0) {
            return (Serializable)parcel0.readSerializable(classLoader0, class0);
        }

        public static SparseArray readSparseArray(Parcel parcel0, ClassLoader classLoader0, Class class0) {
            return parcel0.readSparseArray(classLoader0, class0);
        }
    }

    // 去混淆评级： 低(30)
    public static Object[] readArray(Parcel parcel0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readArray(parcel0, classLoader0, class0);
    }

    // 去混淆评级： 低(30)
    public static ArrayList readArrayList(Parcel parcel0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readArrayList(parcel0, classLoader0, class0);
    }

    public static boolean readBoolean(Parcel parcel0) {
        return parcel0.readInt() != 0;
    }

    // 去混淆评级： 低(30)
    public static HashMap readHashMap(Parcel parcel0, ClassLoader classLoader0, Class class0, Class class1) {
        return TiramisuImpl.readHashMap(parcel0, classLoader0, class0, class1);
    }

    public static void readList(Parcel parcel0, List list0, ClassLoader classLoader0, Class class0) {
        TiramisuImpl.readList(parcel0, list0, classLoader0, class0);
    }

    public static void readMap(Parcel parcel0, Map map0, ClassLoader classLoader0, Class class0, Class class1) {
        TiramisuImpl.readMap(parcel0, map0, classLoader0, class0, class1);
    }

    // 去混淆评级： 低(30)
    public static Parcelable readParcelable(Parcel parcel0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readParcelable(parcel0, classLoader0, class0);
    }

    // 去混淆评级： 低(30)
    public static Object[] readParcelableArray(Parcel parcel0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readParcelableArray(parcel0, classLoader0, class0);
    }

    // 去混淆评级： 低(30)
    public static Parcelable.Creator readParcelableCreator(Parcel parcel0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readParcelableCreator(parcel0, classLoader0, class0);
    }

    // 去混淆评级： 低(30)
    public static List readParcelableList(Parcel parcel0, List list0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readParcelableList(parcel0, list0, classLoader0, class0);
    }

    // 去混淆评级： 低(30)
    public static Serializable readSerializable(Parcel parcel0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readSerializable(parcel0, classLoader0, class0);
    }

    // 去混淆评级： 低(30)
    public static SparseArray readSparseArray(Parcel parcel0, ClassLoader classLoader0, Class class0) {
        return TiramisuImpl.readSparseArray(parcel0, classLoader0, class0);
    }

    public static void writeBoolean(Parcel parcel0, boolean z) {
        parcel0.writeInt(((int)z));
    }
}

