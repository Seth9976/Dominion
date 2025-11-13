// 函数: sub_ca15c0
// 地址: 0xca15c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg15) & 1) == 0)
    if ((zx.d(arg5) & 1) != 0)
        goto label_ca1614
    
    goto label_ca15d8

operator delete(arg16)

if ((zx.d(arg5) & 1) == 0)
label_ca15d8:
    
    if ((zx.d(arg3) & 1) != 0)
        operator delete(arg4)
else
label_ca1614:
    operator delete(arg6)
    
    if ((zx.d(arg3) & 1) != 0)
        operator delete(arg4)

operator delete(arg2)
char* x20_1

if (arg13 != 0)
    char* x8_6 = arg14
    char* x0_4 = arg13
    
    if (x8_6 != arg13)
        char* x21_1 = x8_6
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_6 - 8))
            
            x8_6 = x21_1
        while (arg13 != x21_1)
        
        x0_4 = arg13
    
    arg14 = arg13
    operator delete(x0_4)
    x20_1 = arg11
    
    if (x20_1 == 0)
        goto label_ca164c
    
    goto label_ca16a8

x20_1 = arg11

if (x20_1 == 0)
label_ca164c:
    
    if ((zx.d(arg9) & 1) != 0)
    label_ca16f8:
        operator delete(arg10)
        
        if ((zx.d(arg7) & 1) != 0)
            return sub_ca1734(arg8) __tailcall
    else
    label_ca1654:
        
        if ((zx.d(arg7) & 1) != 0)
            return sub_ca1734(arg8) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_ca16a8:
char* x8_7 = arg12
char* x0_6 = x20_1

if (x8_7 != x20_1)
    char* x21_2 = x8_7
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_7 - 8))
        
        x8_7 = x21_2
    while (x20_1 != x21_2)
    
    x0_6 = arg11

arg12 = x20_1
operator delete(x0_6)

if ((zx.d(arg9) & 1) == 0)
    goto label_ca1654

goto label_ca16f8
