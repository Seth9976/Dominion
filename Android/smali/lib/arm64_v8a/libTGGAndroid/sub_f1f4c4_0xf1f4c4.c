// 函数: sub_f1f4c4
// 地址: 0xf1f4c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg10) & 1) == 0)
    if ((zx.d(arg12) & 1) != 0)
        goto label_f1f564
    
    goto label_f1f4dc

operator delete(arg11)

if ((zx.d(arg12) & 1) != 0)
label_f1f564:
    operator delete(arg13)
    
    if ((zx.d(arg14) & 1) == 0)
        goto label_f1f4e4
    
    goto label_f1f574

label_f1f4dc:

if ((zx.d(arg14) & 1) == 0)
label_f1f4e4:
    
    if ((zx.d(arg16) & 1) != 0)
        goto label_f1f584
    
    goto label_f1f4ec

label_f1f574:
operator delete(arg15)

if ((zx.d(arg16) & 1) != 0)
label_f1f584:
    operator delete(arg17)
    
    if ((zx.d(arg2[0x68].b) & 1) == 0)
        goto label_f1f4f4
    
    goto label_f1f594

label_f1f4ec:

if ((zx.d(arg2[0x68].b) & 1) == 0)
label_f1f4f4:
    
    if ((zx.d(arg2[0x65].b) & 1) != 0)
        goto label_f1f5a4
    
    goto label_f1f4f8

label_f1f594:
operator delete(arg2[0x6a])
void* x0_6

if ((zx.d(arg2[0x65].b) & 1) != 0)
label_f1f5a4:
    operator delete(arg2[0x67])
    x0_6 = arg2[0x62]
    
    if (x0_6 == 0)
        goto label_f1f500
    
    goto label_f1f5b0

label_f1f4f8:
x0_6 = arg2[0x62]
void* x0_7

if (x0_6 == 0)
label_f1f500:
    x0_7 = arg2[0x5f]
    
    if (x0_7 != 0)
        goto label_f1f5c0
    
    goto label_f1f508

label_f1f5b0:
arg2[0x63] = x0_6
operator delete(x0_6)
x0_7 = arg2[0x5f]
void* x28

if (x0_7 == 0)
label_f1f508:
    x28 = arg2[0x5c]
    
    if (x28 != 0)
    label_f1f5d0:
        char* x8_13 = arg2[0x5d]
        void* x0_8 = x28
        
        if (x8_13 != x28)
            char* x20_1 = x8_13
            
            do
                x20_1 = &x20_1[-0x18]
                
                if ((zx.d(*x20_1) & 1) != 0)
                    operator delete(*(x8_13 - 8))
                
                x8_13 = x20_1
            while (x28 != x20_1)
            
            x0_8 = arg2[0x5c]
        
        arg2[0x5d] = x28
        operator delete(x0_8)
        
        if ((zx.d(arg2[0x59].b) & 1) == 0)
            goto label_f1f518
        
        goto label_f1f620
else
label_f1f5c0:
    arg2[0x60] = x0_7
    operator delete(x0_7)
    x28 = arg2[0x5c]
    
    if (x28 != 0)
        goto label_f1f5d0
void* x28_1

if ((zx.d(arg2[0x59].b) & 1) == 0)
label_f1f518:
    x28_1 = arg2[0x56]
    
    if (x28_1 != 0)
        goto label_f1f62c
    
    goto label_f1f520

label_f1f620:
operator delete(arg2[0x5b])
x28_1 = arg2[0x56]
void* x28_2

if (x28_1 != 0)
label_f1f62c:
    char* x8_15 = arg2[0x57]
    void* x0_11 = x28_1
    
    if (x8_15 != x28_1)
        char* x20_2 = x8_15
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x8_15 - 8))
            
            x8_15 = x20_2
        while (x28_1 != x20_2)
        
        x0_11 = arg2[0x56]
    
    arg2[0x57] = x28_1
    operator delete(x0_11)
    x28_2 = arg2[0x53]
    
    if (x28_2 == 0)
        goto label_f1f528
    
    goto label_f1f678

label_f1f520:
x28_2 = arg2[0x53]
void* x0_15

if (x28_2 != 0)
label_f1f678:
    int64_t* x8_16 = arg2[0x54]
    void* x0_13 = x28_2
    
    if (x8_16 != x28_2)
        int64_t* x20_3 = x8_16
        
        do
            x20_3 = &x20_3[-4]
            *x20_3 = arg3 + 0x10
            void* x0_14 = x20_3[1]
            
            if (x0_14 != 0)
                x8_16[-2] = x0_14
                operator delete(x0_14)
            
            x8_16 = x20_3
        while (x28_2 != x20_3)
        
        x0_13 = arg2[0x53]
    
    arg2[0x54] = x28_2
    operator delete(x0_13)
    x0_15 = arg2[0x50]
    
    if (x0_15 == 0)
        goto label_f1f530
    
    goto label_f1f6cc

label_f1f528:
x0_15 = arg2[0x50]
void* arg_8
void* x0_16

if (x0_15 == 0)
label_f1f530:
    x0_16 = arg2[0x4d]
    arg_8 = &arg2[0x4a]
    
    if (x0_16 != 0)
        goto label_f1f6e4
    
    goto label_f1f544

label_f1f6cc:
arg2[0x51] = x0_15
operator delete(x0_15)
x0_16 = arg2[0x4d]
arg_8 = &arg2[0x4a]
void* fp_1

if (x0_16 == 0)
label_f1f544:
    fp_1 = *arg_8
    
    if (fp_1 != 0)
    label_f1f6f8:
        int64_t* x8_19 = arg2[0x4b]
        void* x0_17 = fp_1
        
        if (x8_19 != fp_1)
            int64_t* x28_3 = x8_19
            
            do
                x28_3 = &x28_3[-4]
                *x28_3 = arg3 + 0x10
                void* x0_18 = x28_3[1]
                
                if (x0_18 != 0)
                    x8_19[-2] = x0_18
                    operator delete(x0_18)
                
                x8_19 = x28_3
            while (fp_1 != x28_3)
            
            x0_17 = *arg_8
        
        arg2[0x4b] = fp_1
        operator delete(x0_17)
else
label_f1f6e4:
    arg2[0x4e] = x0_16
    operator delete(x0_16)
    fp_1 = *arg_8
    
    if (fp_1 != 0)
        goto label_f1f6f8
arg2[0x48]
arg2[0x43] = arg9 + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &arg2[0x47])
void* x27 = arg2[0x44]
void* x0_20

if (x27 != 0)
    int64_t* x8_28 = arg2[0x45]
    void* x0_22 = x27
    
    if (x8_28 != x27)
        int64_t* fp_3 = x8_28
        
        do
            fp_3 = &fp_3[-4]
            *fp_3 = arg3 + 0x10
            void* x0_23 = fp_3[1]
            
            if (x0_23 != 0)
                x8_28[-2] = x0_23
                operator delete(x0_23)
            
            x8_28 = fp_3
        while (x27 != fp_3)
        
        x0_22 = arg2[0x44]
    
    arg2[0x45] = x27
    operator delete(x0_22)
    x0_20 = arg2[0x40]
    
    if (x0_20 == 0)
        goto label_f1f76c
    
    goto label_f1f87c

x0_20 = arg2[0x40]
void* x0_24

if (x0_20 == 0)
label_f1f76c:
    x0_24 = arg2[0x3d]
    
    if (x0_24 != 0)
        goto label_f1f88c
    
    goto label_f1f774

label_f1f87c:
arg2[0x41] = x0_20
operator delete(x0_20)
x0_24 = arg2[0x3d]
void* x0_25

if (x0_24 != 0)
label_f1f88c:
    arg2[0x3e] = x0_24
    operator delete(x0_24)
    x0_25 = arg2[0x3a]
    arg2[0x35] = arg4 + 0x10
    
    if (x0_25 == 0)
        goto label_f1f784
    
    goto label_f1f8a4

label_f1f774:
x0_25 = arg2[0x3a]
arg2[0x35] = arg4 + 0x10
void* x0_26

if (x0_25 == 0)
label_f1f784:
    x0_26 = arg2[0x37]
    arg2[0x36] = arg3 + 0x10
    
    if (x0_26 != 0)
        goto label_f1f8bc
    
    goto label_f1f794

label_f1f8a4:
arg2[0x3b] = x0_25
operator delete(x0_25)
x0_26 = arg2[0x37]
arg2[0x36] = arg3 + 0x10
void* x0_27

if (x0_26 != 0)
label_f1f8bc:
    arg2[0x38] = x0_26
    operator delete(x0_26)
    x0_27 = arg2[0x32]
    
    if (x0_27 == 0)
        goto label_f1f79c
    
    goto label_f1f8cc

label_f1f794:
x0_27 = arg2[0x32]
void* x0_28

if (x0_27 == 0)
label_f1f79c:
    x0_28 = arg2[0x2f]
    
    if (x0_28 != 0)
        goto label_f1f8dc
    
    goto label_f1f7a4

label_f1f8cc:
arg2[0x33] = x0_27
operator delete(x0_27)
x0_28 = arg2[0x2f]
void* x0_29

if (x0_28 != 0)
label_f1f8dc:
    arg2[0x30] = x0_28
    operator delete(x0_28)
    x0_29 = arg2[0x2c]
    
    if (x0_29 == 0)
        goto label_f1f7ac
    
    goto label_f1f8ec

label_f1f7a4:
x0_29 = arg2[0x2c]
void* x0_30

if (x0_29 == 0)
label_f1f7ac:
    x0_30 = *arg8
    
    if (x0_30 != 0)
        goto label_f1f8fc
    
    goto label_f1f7b4

label_f1f8ec:
arg2[0x2d] = x0_29
operator delete(x0_29)
x0_30 = *arg8
void* x0_31

if (x0_30 != 0)
label_f1f8fc:
    arg2[0x2a] = x0_30
    operator delete(x0_30)
    x0_31 = arg2[0x1c]
    
    if (x0_31 == 0)
        goto label_f1f7bc
    
    goto label_f1f90c

label_f1f7b4:
x0_31 = arg2[0x1c]
void* x0_32

if (x0_31 == 0)
label_f1f7bc:
    x0_32 = arg2[0x19]
    
    if (x0_32 != 0)
        goto label_f1f91c
    
    goto label_f1f7c4

label_f1f90c:
arg2[0x1d] = x0_31
operator delete(x0_31)
x0_32 = arg2[0x19]
void* x0_33

if (x0_32 != 0)
label_f1f91c:
    arg2[0x1a] = x0_32
    operator delete(x0_32)
    x0_33 = arg2[0x16]
    arg2[0x12] = arg6 + 0x10
    
    if (x0_33 == 0)
        goto label_f1f7d4
    
    goto label_f1f934

label_f1f7c4:
x0_33 = arg2[0x16]
arg2[0x12] = arg6 + 0x10
void* x26

if (x0_33 == 0)
label_f1f7d4:
    x26 = *arg7
    
    if (x26 != 0)
        goto label_f1f944
    
    goto label_f1f7dc

label_f1f934:
arg2[0x17] = x0_33
operator delete(x0_33)
x26 = *arg7
void* x0_38

if (x26 != 0)
label_f1f944:
    void* x28_5 = arg2[0x14]
    void* x0_34 = x26
    
    if (x28_5 != x26)
        bool cond:5_1
        
        do
            uint32_t x8_32 = zx.d(*(x28_5 - 0x20))
            *(x28_5 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_32 & 1) != 0)
                operator delete(*(x28_5 - 0x10))
            
            void* x0_36 = *(x28_5 - 0x38)
            
            if (x0_36 != 0)
                *(x28_5 - 0x30) = x0_36
                operator delete(x0_36)
            
            void* x0_37 = *(x28_5 - 0x58)
            *(x28_5 - 0x60) = arg3 + 0x10
            
            if (x0_37 != 0)
                *(x28_5 - 0x50) = x0_37
                operator delete(x0_37)
            
            cond:5_1 = x26 == x28_5 - 0x60
            x28_5 -= 0x60
        while (not(cond:5_1))
        x0_34 = *arg7
    
    arg2[0x14] = x26
    operator delete(x0_34)
    x0_38 = arg2[0xf]
    arg2[0xb] = arg6 + 0x10
    
    if (x0_38 == 0)
        goto label_f1f7ec
    
    goto label_f1f9d0

label_f1f7dc:
x0_38 = arg2[0xf]
arg2[0xb] = arg6 + 0x10
void* x24

if (x0_38 == 0)
label_f1f7ec:
    x24 = *arg5
    
    if (x24 != 0)
        goto label_f1f9e0
    
    goto label_f1f7f4

label_f1f9d0:
arg2[0x10] = x0_38
operator delete(x0_38)
x24 = *arg5
void* x0_43

if (x24 != 0)
label_f1f9e0:
    void* x26_1 = arg2[0xd]
    void* x0_39 = x24
    
    if (x26_1 != x24)
        bool cond:6_1
        
        do
            uint32_t x8_34 = zx.d(*(x26_1 - 0x20))
            *(x26_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_34 & 1) != 0)
                operator delete(*(x26_1 - 0x10))
            
            void* x0_41 = *(x26_1 - 0x38)
            
            if (x0_41 != 0)
                *(x26_1 - 0x30) = x0_41
                operator delete(x0_41)
            
            void* x0_42 = *(x26_1 - 0x58)
            *(x26_1 - 0x60) = arg3 + 0x10
            
            if (x0_42 != 0)
                *(x26_1 - 0x50) = x0_42
                operator delete(x0_42)
            
            cond:6_1 = x24 == x26_1 - 0x60
            x26_1 -= 0x60
        while (not(cond:6_1))
        x0_39 = *arg5
    
    arg2[0xd] = x24
    operator delete(x0_39)
    x0_43 = arg2[8]
    arg2[3] = arg4 + 0x10
    
    if (x0_43 == 0)
        goto label_f1f804
    
    goto label_f1fa6c

label_f1f7f4:
x0_43 = arg2[8]
arg2[3] = arg4 + 0x10
void* x0_44

if (x0_43 == 0)
label_f1f804:
    x0_44 = arg2[5]
    arg2[4] = arg3 + 0x10
    
    if (x0_44 != 0)
        goto label_f1fa84
    
    goto label_f1f814

label_f1fa6c:
arg2[9] = x0_43
operator delete(x0_43)
x0_44 = arg2[5]
arg2[4] = arg3 + 0x10
void* x0_45

if (x0_44 == 0)
label_f1f814:
    x0_45 = *arg2
    
    if (x0_45 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_f1fa84:
    arg2[6] = x0_44
    operator delete(x0_44)
    x0_45 = *arg2
    
    if (x0_45 == 0)
        sub_1101e04(arg1)
        noreturn

arg2[1] = x0_45
operator delete(x0_45)
sub_1101e04(arg1)
noreturn
