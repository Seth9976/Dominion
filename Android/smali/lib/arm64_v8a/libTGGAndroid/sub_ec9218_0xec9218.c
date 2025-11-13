// 函数: sub_ec9218
// 地址: 0xec9218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg6) & 1) == 0)
    if ((zx.d(arg8) & 1) != 0)
        goto label_ec926c
    
    goto label_ec9230

operator delete(arg7)

if ((zx.d(arg8) & 1) != 0)
label_ec926c:
    operator delete(arg9)
    
    if ((zx.d(arg10) & 1) == 0)
        goto label_ec9238
    
    goto label_ec927c

label_ec9230:

if ((zx.d(arg10) & 1) == 0)
label_ec9238:
    
    if ((zx.d(arg4) & 1) != 0)
        goto label_ec928c
    
    goto label_ec923c

label_ec927c:
operator delete(arg11)
int64_t arg_c8
void* x0_4

if ((zx.d(arg4) & 1) != 0)
label_ec928c:
    operator delete(arg5)
    x0_4 = arg14
    arg_c8 = arg3 + 0x10
    
    if (x0_4 == 0)
        goto label_ec924c
    
    goto label_ec9390

label_ec923c:
x0_4 = arg14
arg_c8 = arg3 + 0x10
void* x19

if (x0_4 != 0)
label_ec9390:
    void* arg_f0 = x0_4
    operator delete(x0_4)
    x19 = arg12
    
    if (x19 != 0)
    label_ec93a0:
        void* x22_1 = arg13
        void* x0_5 = x19
        
        if (x22_1 != x19)
            bool cond:0_1
            
            do
                uint32_t x8_8 = zx.d(*(x22_1 - 0x20))
                *(x22_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                
                if ((x8_8 & 1) != 0)
                    operator delete(*(x22_1 - 0x10))
                
                void* x0_7 = *(x22_1 - 0x38)
                
                if (x0_7 != 0)
                    *(x22_1 - 0x30) = x0_7
                    operator delete(x0_7)
                
                void* x0_8 = *(x22_1 - 0x58)
                *(x22_1 - 0x60) = arg2 + 0x10
                
                if (x0_8 != 0)
                    *(x22_1 - 0x50) = x0_8
                    operator delete(x0_8)
                
                cond:0_1 = x19 == x22_1 - 0x60
                x22_1 -= 0x60
            while (not(cond:0_1))
            x0_5 = arg12
        
        arg13 = x19
        operator delete(x0_5)
else
label_ec924c:
    x19 = arg12
    
    if (x19 != 0)
        goto label_ec93a0
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) arg_100 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
int64_t arg_108
void* x0_10

if (arg16 != 0)
    void* arg_130 = arg16
    operator delete(arg16)
    x0_10 = arg15
    arg_108 = arg2 + 0x10
    
    if (x0_10 != 0)
    label_ec94a4:
        void* arg_118 = x0_10
        operator delete(x0_10)
        sub_1101e04(arg1)
        noreturn
else
    x0_10 = arg15
    arg_108 = arg2 + 0x10
    
    if (x0_10 != 0)
        goto label_ec94a4
sub_1101e04(arg1)
noreturn
