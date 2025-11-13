// 函数: sub_d931b8
// 地址: 0xd931b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg2 + 8))(arg2)
char* x20_1

if (arg9 != 0)
    char* x8_4 = arg10
    char* x0_1 = arg9
    
    if (x8_4 != arg9)
        char* x21_1 = x8_4
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_4 - 8))
            
            x8_4 = x21_1
        while (arg9 != x21_1)
        
        x0_1 = arg9
    
    arg10 = arg9
    operator delete(x0_1)
    x20_1 = arg7
    
    if (x20_1 == 0)
        goto label_d93490
    
    goto label_d934ec

x20_1 = arg7

if (x20_1 == 0)
label_d93490:
    
    if ((zx.d(arg5) & 1) != 0)
    label_d9353c:
        operator delete(arg6)
        
        if ((zx.d(arg3) & 1) != 0)
            return sub_d93598(arg4) __tailcall
    else
    label_d93498:
        
        if ((zx.d(arg3) & 1) != 0)
            return sub_d93598(arg4) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_d934ec:
char* x8_5 = arg8
char* x0_3 = x20_1

if (x8_5 != x20_1)
    char* x21_2 = x8_5
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_5 - 8))
        
        x8_5 = x21_2
    while (x20_1 != x21_2)
    
    x0_3 = arg7

arg8 = x20_1
operator delete(x0_3)

if ((zx.d(arg5) & 1) == 0)
    goto label_d93498

goto label_d9353c
