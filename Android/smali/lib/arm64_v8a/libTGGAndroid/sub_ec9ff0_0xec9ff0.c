// 函数: sub_ec9ff0
// 地址: 0xec9ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) == 0)
    if ((zx.d(arg7) & 1) != 0)
        goto label_eca048
    
    goto label_eca008

operator delete(arg6)

if ((zx.d(arg7) & 1) != 0)
label_eca048:
    operator delete(arg8)
    
    if ((zx.d(arg9) & 1) == 0)
        goto label_eca010
    
    goto label_eca058

label_eca008:

if ((zx.d(arg9) & 1) == 0)
label_eca010:
    
    if ((zx.d(arg3) & 1) != 0)
        goto label_eca068
    
    goto label_eca014

label_eca058:
operator delete(arg10)
int64_t arg_b8
void* x0_5

if ((zx.d(arg3) & 1) != 0)
label_eca068:
    operator delete(arg4)
    x0_5 = arg13
    arg_b8 = arg2 + 0x10
    
    if (x0_5 == 0)
        goto label_eca024
    
    goto label_eca13c

label_eca014:
x0_5 = arg13
arg_b8 = arg2 + 0x10
void* x20

if (x0_5 != 0)
label_eca13c:
    void* arg_e0 = x0_5
    operator delete(x0_5)
    x20 = arg11
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_eca024:
    x20 = arg11
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

void* x21 = arg12
void* x0_6 = x20

if (x21 != x20)
    bool cond:0_1
    
    do
        uint32_t x8_8 = zx.d(*(x21 - 0x20))
        *(x21 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_8 & 1) != 0)
            operator delete(*(x21 - 0x10))
        
        void* x0_8 = *(x21 - 0x38)
        
        if (x0_8 != 0)
            *(x21 - 0x30) = x0_8
            operator delete(x0_8)
        
        void* x0_9 = *(x21 - 0x58)
        *(x21 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_9 != 0)
            *(x21 - 0x50) = x0_9
            operator delete(x0_9)
        
        cond:0_1 = x20 == x21 - 0x60
        x21 -= 0x60
    while (not(cond:0_1))
    x0_6 = arg11

arg12 = x20
operator delete(x0_6)
sub_1101e04(arg1)
noreturn
