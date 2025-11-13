package com.android.vending.billing;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

public interface IInAppBillingService extends IInterface {
    public static abstract class Stub extends Binder implements IInAppBillingService {
        static class Proxy implements IInAppBillingService {
            private IBinder mRemote;

            Proxy(IBinder iBinder0) {
                this.mRemote = iBinder0;
            }

            @Override  // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override  // com.android.vending.billing.IInAppBillingService
            public int consumePurchase(int v, String s, String s1) throws RemoteException {
                Parcel parcel0 = Parcel.obtain();
                Parcel parcel1 = Parcel.obtain();
                try {
                    parcel0.writeInterfaceToken("com.android.vending.billing.IInAppBillingService");
                    parcel0.writeInt(v);
                    parcel0.writeString(s);
                    parcel0.writeString(s1);
                    this.mRemote.transact(5, parcel0, parcel1, 0);
                    parcel1.readException();
                    return parcel1.readInt();
                }
                finally {
                    parcel1.recycle();
                    parcel0.recycle();
                }
            }

            @Override  // com.android.vending.billing.IInAppBillingService
            public Bundle getBuyIntent(int v, String s, String s1, String s2, String s3) throws RemoteException {
                Parcel parcel0 = Parcel.obtain();
                Parcel parcel1 = Parcel.obtain();
                try {
                    parcel0.writeInterfaceToken("com.android.vending.billing.IInAppBillingService");
                    parcel0.writeInt(v);
                    parcel0.writeString(s);
                    parcel0.writeString(s1);
                    parcel0.writeString(s2);
                    parcel0.writeString(s3);
                    this.mRemote.transact(3, parcel0, parcel1, 0);
                    parcel1.readException();
                    return parcel1.readInt() == 0 ? null : ((Bundle)Bundle.CREATOR.createFromParcel(parcel1));
                }
                finally {
                    parcel1.recycle();
                    parcel0.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return "com.android.vending.billing.IInAppBillingService";
            }

            @Override  // com.android.vending.billing.IInAppBillingService
            public Bundle getPurchases(int v, String s, String s1, String s2) throws RemoteException {
                Parcel parcel0 = Parcel.obtain();
                Parcel parcel1 = Parcel.obtain();
                try {
                    parcel0.writeInterfaceToken("com.android.vending.billing.IInAppBillingService");
                    parcel0.writeInt(v);
                    parcel0.writeString(s);
                    parcel0.writeString(s1);
                    parcel0.writeString(s2);
                    this.mRemote.transact(4, parcel0, parcel1, 0);
                    parcel1.readException();
                    return parcel1.readInt() == 0 ? null : ((Bundle)Bundle.CREATOR.createFromParcel(parcel1));
                }
                finally {
                    parcel1.recycle();
                    parcel0.recycle();
                }
            }

            @Override  // com.android.vending.billing.IInAppBillingService
            public Bundle getSkuDetails(int v, String s, String s1, Bundle bundle0) throws RemoteException {
                Parcel parcel0 = Parcel.obtain();
                Parcel parcel1 = Parcel.obtain();
                try {
                    parcel0.writeInterfaceToken("com.android.vending.billing.IInAppBillingService");
                    parcel0.writeInt(v);
                    parcel0.writeString(s);
                    parcel0.writeString(s1);
                    if(bundle0 == null) {
                        parcel0.writeInt(0);
                    }
                    else {
                        parcel0.writeInt(1);
                        bundle0.writeToParcel(parcel0, 0);
                    }
                    this.mRemote.transact(2, parcel0, parcel1, 0);
                    parcel1.readException();
                    return parcel1.readInt() == 0 ? null : ((Bundle)Bundle.CREATOR.createFromParcel(parcel1));
                }
                finally {
                    parcel1.recycle();
                    parcel0.recycle();
                }
            }

            @Override  // com.android.vending.billing.IInAppBillingService
            public int isBillingSupported(int v, String s, String s1) throws RemoteException {
                Parcel parcel0 = Parcel.obtain();
                Parcel parcel1 = Parcel.obtain();
                try {
                    parcel0.writeInterfaceToken("com.android.vending.billing.IInAppBillingService");
                    parcel0.writeInt(v);
                    parcel0.writeString(s);
                    parcel0.writeString(s1);
                    this.mRemote.transact(1, parcel0, parcel1, 0);
                    parcel1.readException();
                    return parcel1.readInt();
                }
                finally {
                    parcel1.recycle();
                    parcel0.recycle();
                }
            }
        }

        private static final String DESCRIPTOR = "com.android.vending.billing.IInAppBillingService";
        static final int TRANSACTION_consumePurchase = 5;
        static final int TRANSACTION_getBuyIntent = 3;
        static final int TRANSACTION_getPurchases = 4;
        static final int TRANSACTION_getSkuDetails = 2;
        static final int TRANSACTION_isBillingSupported = 1;

        public Stub() {
            this.attachInterface(this, "com.android.vending.billing.IInAppBillingService");
        }

        @Override  // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        public static IInAppBillingService asInterface(IBinder iBinder0) {
            if(iBinder0 == null) {
                return null;
            }
            IInterface iInterface0 = iBinder0.queryLocalInterface("com.android.vending.billing.IInAppBillingService");
            return iInterface0 != null && iInterface0 instanceof IInAppBillingService ? ((IInAppBillingService)iInterface0) : new Proxy(iBinder0);
        }

        @Override  // android.os.Binder
        public boolean onTransact(int v, Parcel parcel0, Parcel parcel1, int v1) throws RemoteException {
            switch(v) {
                case 1: {
                    parcel0.enforceInterface("com.android.vending.billing.IInAppBillingService");
                    int v3 = this.isBillingSupported(parcel0.readInt(), parcel0.readString(), parcel0.readString());
                    parcel1.writeNoException();
                    parcel1.writeInt(v3);
                    return true;
                }
                case 2: {
                    parcel0.enforceInterface("com.android.vending.billing.IInAppBillingService");
                    Bundle bundle2 = this.getSkuDetails(parcel0.readInt(), parcel0.readString(), parcel0.readString(), (parcel0.readInt() == 0 ? null : ((Bundle)Bundle.CREATOR.createFromParcel(parcel0))));
                    parcel1.writeNoException();
                    if(bundle2 != null) {
                        parcel1.writeInt(1);
                        bundle2.writeToParcel(parcel1, 1);
                        return true;
                    }
                    parcel1.writeInt(0);
                    return true;
                }
                case 3: {
                    parcel0.enforceInterface("com.android.vending.billing.IInAppBillingService");
                    Bundle bundle1 = this.getBuyIntent(parcel0.readInt(), parcel0.readString(), parcel0.readString(), parcel0.readString(), parcel0.readString());
                    parcel1.writeNoException();
                    if(bundle1 != null) {
                        parcel1.writeInt(1);
                        bundle1.writeToParcel(parcel1, 1);
                        return true;
                    }
                    parcel1.writeInt(0);
                    return true;
                }
                case 4: {
                    parcel0.enforceInterface("com.android.vending.billing.IInAppBillingService");
                    Bundle bundle0 = this.getPurchases(parcel0.readInt(), parcel0.readString(), parcel0.readString(), parcel0.readString());
                    parcel1.writeNoException();
                    if(bundle0 != null) {
                        parcel1.writeInt(1);
                        bundle0.writeToParcel(parcel1, 1);
                        return true;
                    }
                    parcel1.writeInt(0);
                    return true;
                }
                case 5: {
                    parcel0.enforceInterface("com.android.vending.billing.IInAppBillingService");
                    int v2 = this.consumePurchase(parcel0.readInt(), parcel0.readString(), parcel0.readString());
                    parcel1.writeNoException();
                    parcel1.writeInt(v2);
                    return true;
                }
                case 0x5F4E5446: {
                    parcel1.writeString("com.android.vending.billing.IInAppBillingService");
                    return true;
                }
                default: {
                    return super.onTransact(v, parcel0, parcel1, v1);
                }
            }
        }
    }

    int consumePurchase(int arg1, String arg2, String arg3) throws RemoteException;

    Bundle getBuyIntent(int arg1, String arg2, String arg3, String arg4, String arg5) throws RemoteException;

    Bundle getPurchases(int arg1, String arg2, String arg3, String arg4) throws RemoteException;

    Bundle getSkuDetails(int arg1, String arg2, String arg3, Bundle arg4) throws RemoteException;

    int isBillingSupported(int arg1, String arg2, String arg3) throws RemoteException;
}

