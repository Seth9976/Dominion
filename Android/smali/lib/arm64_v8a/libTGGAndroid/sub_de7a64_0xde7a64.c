// 函数: sub_de7a64
// 地址: 0xde7a64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) == 0)
    if ((zx.d(arg8) & 1) != 0)
        goto label_de7aa0
    
    goto label_de7a7c

operator delete(arg3)

if ((zx.d(arg8) & 1) != 0)
label_de7aa0:
    operator delete(arg9)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_de7a84
    
    goto label_de7ac0

label_de7a7c:

if ((zx.d(arg6) & 1) != 0)
label_de7ac0:
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) != 0)
        operator delete(arg5)
else
label_de7a84:
    
    if ((zx.d(arg4) & 1) != 0)
        operator delete(arg5)

char* x20_1

if (arg16 != 0)
    char* x8_8 = arg17
    char* x0_4 = arg16
    
    if (x8_8 != arg16)
        char* x21_1 = x8_8
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_8 - 8))
            
            x8_8 = x21_1
        while (arg16 != x21_1)
        
        x0_4 = arg16
    
    arg17 = arg16
    operator delete(x0_4)
    x20_1 = arg14
    
    if (x20_1 == 0)
        goto label_de7b68
    
    goto label_de7bc4

x20_1 = arg14

if (x20_1 == 0)
label_de7b68:
    
    if ((zx.d(arg12) & 1) != 0)
    label_de7c14:
        operator delete(arg13)
        
        if ((zx.d(arg10) & 1) != 0)
            return sub_de7c38(arg11) __tailcall
    else
    label_de7b70:
        
        if ((zx.d(arg10) & 1) != 0)
            return sub_de7c38(arg11) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_de7bc4:
char* x8_9 = arg15
char* x0_6 = x20_1

if (x8_9 != x20_1)
    char* x21_2 = x8_9
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_9 - 8))
        
        x8_9 = x21_2
    while (x20_1 != x21_2)
    
    x0_6 = arg14

arg15 = x20_1
operator delete(x0_6)

if ((zx.d(arg12) & 1) == 0)
    goto label_de7b70

goto label_de7c14
