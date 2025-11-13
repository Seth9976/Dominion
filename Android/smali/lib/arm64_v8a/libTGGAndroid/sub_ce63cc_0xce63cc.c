// 函数: sub_ce63cc
// 地址: 0xce63cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg8 != 0)
    char* x8_3 = arg9
    char* x0_1 = arg8
    
    if (x8_3 != arg8)
        char* x21_1 = x8_3
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_3 - 8))
            
            x8_3 = x21_1
        while (arg8 != x21_1)
        
        x0_1 = arg8
    
    arg9 = arg8
    operator delete(x0_1)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_ce63e4
    
    goto label_ce64b4

if ((zx.d(arg6) & 1) == 0)
label_ce63e4:
    
    if ((zx.d(arg4) & 1) != 0)
        goto label_ce64c4
    
    goto label_ce63ec

label_ce64b4:
operator delete(arg7)

if ((zx.d(arg4) & 1) == 0)
label_ce63ec:
    
    if ((zx.d(arg2) & 1) == 0)
        sub_1101e04(arg1)
        noreturn
else
label_ce64c4:
    operator delete(arg5)
    
    if ((zx.d(arg2) & 1) == 0)
        sub_1101e04(arg1)
        noreturn

operator delete(arg3)
sub_1101e04(arg1)
noreturn
