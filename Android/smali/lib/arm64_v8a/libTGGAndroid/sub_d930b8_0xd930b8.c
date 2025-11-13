// 函数: sub_d930b8
// 地址: 0xd930b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg2 + 0x10))(arg2)

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)

char* x20_1

if (arg11 != 0)
    char* x8_5 = arg12
    char* x0_2 = arg11
    
    if (x8_5 != arg11)
        char* x21_1 = x8_5
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x21_1
        while (arg11 != x21_1)
        
        x0_2 = arg11
    
    arg12 = arg11
    operator delete(x0_2)
    x20_1 = arg9
    
    if (x20_1 == 0)
        goto label_d93490
    
    goto label_d934ec

x20_1 = arg9

if (x20_1 == 0)
label_d93490:
    
    if ((zx.d(arg7) & 1) != 0)
    label_d9353c:
        operator delete(arg8)
        
        if ((zx.d(arg5) & 1) != 0)
            operator delete(arg6)
    else
    label_d93498:
        
        if ((zx.d(arg5) & 1) != 0)
            operator delete(arg6)
    
    sub_1101e04(arg1)
    noreturn

label_d934ec:
char* x8_6 = arg10
char* x0_4 = x20_1

if (x8_6 != x20_1)
    char* x21_2 = x8_6
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_6 - 8))
        
        x8_6 = x21_2
    while (x20_1 != x21_2)
    
    x0_4 = arg9

arg10 = x20_1
operator delete(x0_4)

if ((zx.d(arg7) & 1) == 0)
    goto label_d93498

goto label_d9353c
