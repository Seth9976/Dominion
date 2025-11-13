// 函数: sub_d5b5d8
// 地址: 0xd5b5d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if (arg6 == 0)
    if ((zx.d(arg4) & 1) != 0)
    label_d5bbb4:
        operator delete(arg5)
        
        if ((zx.d(arg8) & 1) != 0)
            operator delete(arg9)
    else
    label_d5b860:
        
        if ((zx.d(arg8) & 1) != 0)
            operator delete(arg9)
    
    sub_1101e04(arg1)
    noreturn

char* x8_2 = arg7
char* x0_1 = arg6

if (x8_2 != arg6)
    char* x23_1 = x8_2
    
    do
        x23_1 = &x23_1[-0x18]
        
        if ((zx.d(*x23_1) & 1) != 0)
            operator delete(*(x8_2 - 8))
        
        x8_2 = x23_1
    while (arg6 != x23_1)
    
    x0_1 = arg6

arg7 = arg6
operator delete(x0_1)

if ((zx.d(arg4) & 1) == 0)
    goto label_d5b860

goto label_d5bbb4
