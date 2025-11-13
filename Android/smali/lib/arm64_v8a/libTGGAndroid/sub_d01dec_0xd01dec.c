// 函数: sub_d01dec
// 地址: 0xd01dec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

char* x20_1

if (arg12 != 0)
    char* x8_4 = arg13
    char* x0_2 = arg12
    
    if (x8_4 != arg12)
        char* x21_1 = x8_4
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_4 - 8))
            
            x8_4 = x21_1
        while (arg12 != x21_1)
        
        x0_2 = arg12
    
    arg13 = arg12
    operator delete(x0_2)
    x20_1 = arg10
    
    if (x20_1 == 0)
        goto label_d01e60
    
    goto label_d01ebc

x20_1 = arg10

if (x20_1 == 0)
label_d01e60:
    
    if ((zx.d(arg8) & 1) != 0)
    label_d01f0c:
        operator delete(arg9)
        
        if ((zx.d(arg6) & 1) != 0)
            return sub_d01f50(arg7) __tailcall
    else
    label_d01e68:
        
        if ((zx.d(arg6) & 1) != 0)
            return sub_d01f50(arg7) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_d01ebc:
char* x8_5 = arg11
char* x0_4 = x20_1

if (x8_5 != x20_1)
    char* x21_2 = x8_5
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_5 - 8))
        
        x8_5 = x21_2
    while (x20_1 != x21_2)
    
    x0_4 = arg10

arg11 = x20_1
operator delete(x0_4)

if ((zx.d(arg8) & 1) == 0)
    goto label_d01e68

goto label_d01f0c
