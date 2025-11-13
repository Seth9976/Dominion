// 函数: sub_ca14d8
// 地址: 0xca14d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg3) & 1) == 0)
    if ((zx.d(arg13) & 1) != 0)
        goto label_ca1510
    
    goto label_ca14ec

operator delete(arg4)
int64_t* x0_2

if ((zx.d(arg13) & 1) == 0)
label_ca14ec:
    x0_2 = arg2
    arg2 = nullptr
    
    if (x0_2 != 0)
        (*(*x0_2 + 0x10))()
else
label_ca1510:
    operator delete(arg14)
    x0_2 = arg2
    arg2 = nullptr
    
    if (x0_2 != 0)
        (*(*x0_2 + 0x10))()
char* x20_1

if (arg11 != 0)
    char* x8_6 = arg12
    char* x0_3 = arg11
    
    if (x8_6 != arg11)
        char* x21_1 = x8_6
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_6 - 8))
            
            x8_6 = x21_1
        while (arg11 != x21_1)
        
        x0_3 = arg11
    
    arg12 = arg11
    operator delete(x0_3)
    x20_1 = arg9
    
    if (x20_1 == 0)
        goto label_ca164c
    
    goto label_ca16a8

x20_1 = arg9

if (x20_1 == 0)
label_ca164c:
    
    if ((zx.d(arg7) & 1) != 0)
    label_ca16f8:
        operator delete(arg8)
        
        if ((zx.d(arg5) & 1) != 0)
            return sub_ca1734(arg6) __tailcall
    else
    label_ca1654:
        
        if ((zx.d(arg5) & 1) != 0)
            return sub_ca1734(arg6) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_ca16a8:
char* x8_7 = arg10
char* x0_5 = x20_1

if (x8_7 != x20_1)
    char* x21_2 = x8_7
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_7 - 8))
        
        x8_7 = x21_2
    while (x20_1 != x21_2)
    
    x0_5 = arg9

arg10 = x20_1
operator delete(x0_5)

if ((zx.d(arg7) & 1) == 0)
    goto label_ca1654

goto label_ca16f8
