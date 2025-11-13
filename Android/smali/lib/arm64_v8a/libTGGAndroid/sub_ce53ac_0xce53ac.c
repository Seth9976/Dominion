// 函数: sub_ce53ac
// 地址: 0xce53ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

int64_t* x0_2 = arg2
arg2 = nullptr

if (x0_2 != 0)
    (*(*x0_2 + 0x10))()

char* x20_1

if (arg13 != 0)
    char* x8_5 = arg14
    char* x0_3 = arg13
    
    if (x8_5 != arg13)
        char* x21_1 = x8_5
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x21_1
        while (arg13 != x21_1)
        
        x0_3 = arg13
    
    arg14 = arg13
    operator delete(x0_3)
    x20_1 = arg11
    
    if (x20_1 == 0)
        goto label_ce5598
    
    goto label_ce55f4

x20_1 = arg11

if (x20_1 == 0)
label_ce5598:
    
    if ((zx.d(arg9) & 1) != 0)
    label_ce5644:
        operator delete(arg10)
        
        if ((zx.d(arg7) & 1) != 0)
            return sub_ce56cc(arg8) __tailcall
    else
    label_ce55a0:
        
        if ((zx.d(arg7) & 1) != 0)
            return sub_ce56cc(arg8) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_ce55f4:
char* x8_6 = arg12
char* x0_5 = x20_1

if (x8_6 != x20_1)
    char* x21_2 = x8_6
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_6 - 8))
        
        x8_6 = x21_2
    while (x20_1 != x21_2)
    
    x0_5 = arg11

arg12 = x20_1
operator delete(x0_5)

if ((zx.d(arg9) & 1) == 0)
    goto label_ce55a0

goto label_ce5644
