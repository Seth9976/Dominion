// 函数: sub_d933c4
// 地址: 0xd933c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg12) & 1) != 0)
    operator delete(arg13)

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

char* x20_1

if (arg10 != 0)
    char* x8_4 = arg11
    char* x0_2 = arg10
    
    if (x8_4 != arg10)
        char* x21_1 = x8_4
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_4 - 8))
            
            x8_4 = x21_1
        while (arg10 != x21_1)
        
        x0_2 = arg10
    
    arg11 = arg10
    operator delete(x0_2)
    x20_1 = arg8
    
    if (x20_1 == 0)
        goto label_d93490
    
    goto label_d934ec

x20_1 = arg8

if (x20_1 == 0)
label_d93490:
    
    if ((zx.d(arg6) & 1) != 0)
    label_d9353c:
        operator delete(arg7)
        
        if ((zx.d(arg4) & 1) != 0)
            return sub_d93598(arg5) __tailcall
    else
    label_d93498:
        
        if ((zx.d(arg4) & 1) != 0)
            return sub_d93598(arg5) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_d934ec:
char* x8_5 = arg9
char* x0_4 = x20_1

if (x8_5 != x20_1)
    char* x21_2 = x8_5
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_5 - 8))
        
        x8_5 = x21_2
    while (x20_1 != x21_2)
    
    x0_4 = arg8

arg9 = x20_1
operator delete(x0_4)

if ((zx.d(arg6) & 1) == 0)
    goto label_d93498

goto label_d9353c
