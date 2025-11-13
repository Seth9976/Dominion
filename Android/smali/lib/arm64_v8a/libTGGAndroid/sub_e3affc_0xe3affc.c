// 函数: sub_e3affc
// 地址: 0xe3affc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg6 == 0)
    if ((zx.d(arg4) & 1) != 0)
    label_e3b0d4:
        operator delete(arg5)
        
        if ((zx.d(arg2) & 1) != 0)
        label_e3b0e4:
            operator delete(arg3)
            sub_1101e04(arg1)
            noreturn
    else
    label_e3b014:
        
        if ((zx.d(arg2) & 1) != 0)
            goto label_e3b0e4
    
    sub_1101e04(arg1)
    noreturn

char* x8_2 = arg7
char* x0_1 = arg6

if (x8_2 != arg6)
    char* x21_1 = x8_2
    
    do
        x21_1 = &x21_1[-0x18]
        
        if ((zx.d(*x21_1) & 1) != 0)
            operator delete(*(x8_2 - 8))
        
        x8_2 = x21_1
    while (arg6 != x21_1)
    
    x0_1 = arg6

arg7 = arg6
operator delete(x0_1)

if ((zx.d(arg4) & 1) == 0)
    goto label_e3b014

goto label_e3b0d4
