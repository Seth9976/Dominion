// 函数: sub_f228f4
// 地址: 0xf228f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = *arg6

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
        
        x0 = *arg6
    
    *(arg2 + 0xc8) = x24
    operator delete(x0)

void* x0_2

if ((zx.d(*(arg2 + 0xa8)) & 1) == 0)
    x0_2 = *(arg2 + 0x88)
    
    if (x0_2 != 0)
        goto label_f229bc
    
    goto label_f22974

operator delete(*(arg2 + 0xb8))
x0_2 = *(arg2 + 0x88)
int64_t* x0_6

if (x0_2 != 0)
label_f229bc:
    *(arg2 + 0x90) = x0_2
    operator delete(x0_2)
    x0_6 = *(arg2 + 0x80)
    *(arg2 + 0x80) = 0
    
    if (x0_6 == 0)
        goto label_f22980
    
    goto label_f229d8

label_f22974:
x0_6 = *(arg2 + 0x80)
*(arg2 + 0x80) = 0
int64_t* x0_7

if (x0_6 == 0)
label_f22980:
    x0_7 = *arg5
    *arg5 = 0
    
    if (x0_7 != 0)
        goto label_f229f0
    
    goto label_f22990

label_f229d8:
(*(*x0_6 + 0x10))()
x0_7 = *arg5
*arg5 = 0

if (x0_7 != 0)
label_f229f0:
    (*(*x0_7 + 0x10))()
    
    if ((zx.d(*arg4) & 1) == 0)
        goto label_f22998
    
    goto label_f22a10

label_f22990:

if ((zx.d(*arg4) & 1) != 0)
label_f22a10:
    operator delete(*(arg2 + 0x38))
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(*(arg2 + 0x20))
else
label_f22998:
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(*(arg2 + 0x20))

sub_1101e04(arg1)
noreturn
