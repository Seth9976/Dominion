// 函数: sub_d93134
// 地址: 0xd93134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg3) & 1) == 0)
    if ((zx.d(arg17) & 1) != 0)
        goto label_d93170
    
    goto label_d9314c

operator delete(arg4)

if ((zx.d(arg17) & 1) != 0)
label_d93170:
    operator delete(arg18)
    
    if ((zx.d(arg15) & 1) == 0)
        goto label_d93154
    
    goto label_d93190

label_d9314c:

if ((zx.d(arg15) & 1) != 0)
label_d93190:
    operator delete(arg16)
    
    if ((zx.d(arg13) & 1) != 0)
        operator delete(arg14)
else
label_d93154:
    
    if ((zx.d(arg13) & 1) != 0)
        operator delete(arg14)

(*(*arg2 + 8))(arg2)
char* x20_1

if (arg11 != 0)
    char* x8_10 = arg12
    char* x0_5 = arg11
    
    if (x8_10 != arg11)
        char* x21_1 = x8_10
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_10 - 8))
            
            x8_10 = x21_1
        while (arg11 != x21_1)
        
        x0_5 = arg11
    
    arg12 = arg11
    operator delete(x0_5)
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
            return sub_d93598(arg6) __tailcall
    else
    label_d93498:
        
        if ((zx.d(arg5) & 1) != 0)
            return sub_d93598(arg6) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_d934ec:
char* x8_11 = arg10
char* x0_7 = x20_1

if (x8_11 != x20_1)
    char* x21_2 = x8_11
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_11 - 8))
        
        x8_11 = x21_2
    while (x20_1 != x21_2)
    
    x0_7 = arg9

arg10 = x20_1
operator delete(x0_7)

if ((zx.d(arg7) & 1) == 0)
    goto label_d93498

goto label_d9353c
