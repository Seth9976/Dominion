// 函数: sub_f21e4c
// 地址: 0xf21e4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = *arg5

if (x24 != 0)
    int64_t* x8_1 = *(arg2 + 0xc8)
    void* x0 = x24
    
    if (x8_1 != x24)
        int64_t* x25_1 = x8_1
        
        do
            x25_1 = &x25_1[-3]
            void* x0_1 = *x25_1
            
            if (x0_1 != 0)
                int64_t x9_1 = x8_1[-1]
                x8_1[-2] = x0_1
                Botan::deallocate_memory(x0_1, x9_1 - x0_1, 1)
            
            x8_1 = x25_1
        while (x24 != x25_1)
        
        x0 = *arg5
    
    *(arg2 + 0xc8) = x24
    operator delete(x0)

void* x0_2

if ((zx.d(*(arg2 + 0xa8)) & 1) == 0)
    x0_2 = *(arg2 + 0x88)
    
    if (x0_2 != 0)
        goto label_f21ef8
    
    goto label_f21eb8

operator delete(*(arg2 + 0xb8))
x0_2 = *(arg2 + 0x88)
int64_t* x0_5

if (x0_2 != 0)
label_f21ef8:
    *(arg2 + 0x90) = x0_2
    operator delete(x0_2)
    x0_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = 0
    
    if (x0_5 == 0)
        goto label_f21ec4
    
    goto label_f21f14

label_f21eb8:
x0_5 = *(arg2 + 0x80)
*(arg2 + 0x80) = 0
int64_t* x0_6

if (x0_5 == 0)
label_f21ec4:
    x0_6 = *arg4
    *arg4 = 0
    
    if (x0_6 != 0)
        goto label_f21f2c
    
    goto label_f21ed4

label_f21f14:
(*(*x0_5 + 0x10))()
x0_6 = *arg4
*arg4 = 0

if (x0_6 != 0)
label_f21f2c:
    (*(*x0_6 + 0x10))()
    
    if ((zx.d(*arg3) & 1) == 0)
        goto label_f21edc
    
    goto label_f21f50

label_f21ed4:

if ((zx.d(*arg3) & 1) != 0)
label_f21f50:
    operator delete(*(arg2 + 0x38))
    
    if ((zx.d(*(arg2 + 0x10)) & 1) != 0)
    label_f21f60:
        operator delete(*(arg2 + 0x20))
        sub_1101e04(arg1)
        noreturn
else
label_f21edc:
    
    if ((zx.d(*(arg2 + 0x10)) & 1) != 0)
        goto label_f21f60

sub_1101e04(arg1)
noreturn
