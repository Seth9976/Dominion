// 函数: sub_ce53f4
// 地址: 0xce53f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

char* x20_1

if (arg12 != 0)
    char* x8_3 = arg13
    char* x0_2 = arg12
    
    if (x8_3 != arg12)
        char* x21_1 = x8_3
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_3 - 8))
            
            x8_3 = x21_1
        while (arg12 != x21_1)
        
        x0_2 = arg12
    
    arg13 = arg12
    operator delete(x0_2)
    x20_1 = arg10
    
    if (x20_1 == 0)
        goto label_ce5598
    
    goto label_ce55f4

x20_1 = arg10

if (x20_1 == 0)
label_ce5598:
    
    if ((zx.d(arg8) & 1) != 0)
    label_ce5644:
        operator delete(arg9)
        
        if ((zx.d(arg6) & 1) != 0)
            return sub_ce56cc(arg7) __tailcall
    else
    label_ce55a0:
        
        if ((zx.d(arg6) & 1) != 0)
            return sub_ce56cc(arg7) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_ce55f4:
char* x8_4 = arg11
char* x0_4 = x20_1

if (x8_4 != x20_1)
    char* x21_2 = x8_4
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_4 - 8))
        
        x8_4 = x21_2
    while (x20_1 != x21_2)
    
    x0_4 = arg10

arg11 = x20_1
operator delete(x0_4)

if ((zx.d(arg8) & 1) == 0)
    goto label_ce55a0

goto label_ce5644
