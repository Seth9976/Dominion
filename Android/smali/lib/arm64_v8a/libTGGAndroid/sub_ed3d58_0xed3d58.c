// 函数: sub_ed3d58
// 地址: 0xed3d58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *arg5

if (x23 != 0)
    int64_t* x8_1 = *(arg2 + 0xc8)
    void* x0 = x23
    
    if (x8_1 != x23)
        int64_t* x25_1 = x8_1
        
        do
            x25_1 = &x25_1[-3]
            void* x0_1 = *x25_1
            
            if (x0_1 != 0)
                int64_t x9_1 = x8_1[-1]
                x8_1[-2] = x0_1
                Botan::deallocate_memory(x0_1, x9_1 - x0_1, 1)
            
            x8_1 = x25_1
        while (x23 != x25_1)
        
        x0 = *arg5
    
    *(arg2 + 0xc8) = x23
    operator delete(x0)

void* x0_2

if ((zx.d(*(arg2 + 0xa8)) & 1) == 0)
    x0_2 = *(arg2 + 0x88)
    
    if (x0_2 != 0)
        goto label_ed3e14
    
    goto label_ed3dd4

operator delete(*(arg2 + 0xb8))
x0_2 = *(arg2 + 0x88)
int64_t* x0_5

if (x0_2 != 0)
label_ed3e14:
    *(arg2 + 0x90) = x0_2
    operator delete(x0_2)
    x0_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = 0
    
    if (x0_5 == 0)
        goto label_ed3de0
    
    goto label_ed3e30

label_ed3dd4:
x0_5 = *(arg2 + 0x80)
*(arg2 + 0x80) = 0
int64_t* x0_6

if (x0_5 == 0)
label_ed3de0:
    x0_6 = *arg4
    *arg4 = 0
    
    if (x0_6 != 0)
        goto label_ed3e48
    
    goto label_ed3df0

label_ed3e30:
(*(*x0_5 + 0x10))()
x0_6 = *arg4
*arg4 = 0

if (x0_6 != 0)
label_ed3e48:
    (*(*x0_6 + 0x10))()
    
    if ((zx.d(*arg3) & 1) == 0)
        goto label_ed3df8
    
    goto label_ed3e68

label_ed3df0:

if ((zx.d(*arg3) & 1) != 0)
label_ed3e68:
    operator delete(*(arg2 + 0x38))
    
    if ((zx.d(*(arg2 + 0x10)) & 1) != 0)
    label_ed3e78:
        operator delete(*(arg2 + 0x20))
        sub_1101e04(arg1)
        noreturn
else
label_ed3df8:
    
    if ((zx.d(*(arg2 + 0x10)) & 1) != 0)
        goto label_ed3e78

sub_1101e04(arg1)
noreturn
