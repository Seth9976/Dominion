// 函数: sub_daf7e8
// 地址: 0xdaf7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg4 + 8))(arg4)
void* x22 = *arg3

if (x22 != 0)
    char* x8_5 = arg3[1]
    void* x0_4 = x22
    
    if (x8_5 != x22)
        char* x23_1 = x8_5
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x23_1
        while (x22 != x23_1)
        
        x0_4 = *arg3
    
    arg3[1] = x22
    operator delete(x0_4)
    
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
