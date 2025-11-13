// 函数: sub_daf89c
// 地址: 0xdaf89c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *arg3

if (x22 != 0)
    char* x8_3 = arg3[1]
    void* x0_3 = x22
    
    if (x8_3 != x22)
        char* x23_1 = x8_3
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(x8_3 - 8))
            
            x8_3 = x23_1
        while (x22 != x23_1)
        
        x0_3 = *arg3
    
    arg3[1] = x22
    operator delete(x0_3)
    
    if ((zx.d(*(arg2 + 0x30)) & 1) == 0)
        goto label_daf8b4
    
    goto label_daf928

if ((zx.d(*(arg2 + 0x30)) & 1) == 0)
label_daf8b4:
    
    if ((zx.d(*(arg2 + 0x18)) & 1) != 0)
        goto label_daf938
    
    goto label_daf8bc

label_daf928:
operator delete(*(arg2 + 0x40))

if ((zx.d(*(arg2 + 0x18)) & 1) == 0)
label_daf8bc:
    
    if ((zx.d(*arg2) & 1) != 0)
        operator delete(*(arg2 + 0x10))
else
label_daf938:
    operator delete(*(arg2 + 0x28))
    
    if ((zx.d(*arg2) & 1) != 0)
        operator delete(*(arg2 + 0x10))

operator delete(arg2)
sub_1101e04(arg1)
noreturn
