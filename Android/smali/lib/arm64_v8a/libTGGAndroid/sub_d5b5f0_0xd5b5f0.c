// 函数: sub_d5b5f0
// 地址: 0xd5b5f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    if ((zx.d(arg2) & 1) != 0)
    label_d5bbb4:
        operator delete(arg3)
        
        if ((zx.d(arg6) & 1) != 0)
            operator delete(arg7)
    else
    label_d5b860:
        
        if ((zx.d(arg6) & 1) != 0)
            operator delete(arg7)
    
    sub_1101e04(arg1)
    noreturn

char* x8_2 = arg5
char* x0 = arg4

if (x8_2 != arg4)
    char* x23_1 = x8_2
    
    do
        x23_1 = &x23_1[-0x18]
        
        if ((zx.d(*x23_1) & 1) != 0)
            operator delete(*(x8_2 - 8))
        
        x8_2 = x23_1
    while (arg4 != x23_1)
    
    x0 = arg4

arg5 = arg4
operator delete(x0)

if ((zx.d(arg2) & 1) == 0)
    goto label_d5b860

goto label_d5bbb4
