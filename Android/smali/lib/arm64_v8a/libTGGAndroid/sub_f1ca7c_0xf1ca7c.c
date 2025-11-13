// 函数: sub_f1ca7c
// 地址: 0xf1ca7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) == 0)
    if ((zx.d(arg7) & 1) != 0)
        goto label_f1cadc
    
    goto label_f1ca94

operator delete(arg6)

if ((zx.d(arg7) & 1) != 0)
label_f1cadc:
    operator delete(arg8)
    
    if ((zx.d(arg9) & 1) == 0)
        goto label_f1ca9c
    
    goto label_f1caec

label_f1ca94:

if ((zx.d(arg9) & 1) == 0)
label_f1ca9c:
    
    if ((zx.d(arg11) & 1) != 0)
        goto label_f1cafc
    
    goto label_f1caa0

label_f1caec:
operator delete(arg10)
void* x0_5

if ((zx.d(arg11) & 1) != 0)
label_f1cafc:
    operator delete(arg12)
    x0_5 = arg2[7]
    
    if (x0_5 == 0)
        goto label_f1caa8
    
    goto label_f1cb08

label_f1caa0:
x0_5 = arg2[7]
void* x0_6

if (x0_5 == 0)
label_f1caa8:
    x0_6 = arg2[4]
    *arg2 = arg4 + 0x10
    
    if (x0_6 != 0)
        goto label_f1cb20
    
    goto label_f1cab8

label_f1cb08:
arg2[8] = x0_5
operator delete(x0_5)
x0_6 = arg2[4]
*arg2 = arg4 + 0x10
void* x22

if (x0_6 == 0)
label_f1cab8:
    x22 = *arg3
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_f1cb20:
    arg2[5] = x0_6
    operator delete(x0_6)
    x22 = *arg3
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn

void* x23 = arg2[2]
void* x0_7 = x22

if (x23 != x22)
    bool cond:0_1
    
    do
        uint32_t x8_8 = zx.d(*(x23 - 0x20))
        *(x23 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_8 & 1) != 0)
            operator delete(*(x23 - 0x10))
        
        void* x0_9 = *(x23 - 0x38)
        
        if (x0_9 != 0)
            *(x23 - 0x30) = x0_9
            operator delete(x0_9)
        
        void* x0_10 = *(x23 - 0x58)
        *(x23 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_10 != 0)
            *(x23 - 0x50) = x0_10
            operator delete(x0_10)
        
        cond:0_1 = x22 == x23 - 0x60
        x23 -= 0x60
    while (not(cond:0_1))
    x0_7 = *arg3

arg2[2] = x22
operator delete(x0_7)
sub_1101e04(arg1)
noreturn
