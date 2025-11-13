// 函数: sub_ce5420
// 地址: 0xce5420
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg2)

if (arg3 != 0)
    void* x21_1 = arg4
    void* x0_1 = arg3
    
    if (x21_1 != arg3)
        do
            x21_1 -= 8
            int64_t* x0_2 = *x21_1
            *x21_1 = 0
            
            if (x0_2 != 0)
                (*(*x0_2 + 0x10))()
        while (arg3 != x21_1)
        
        x0_1 = arg3
    
    arg4 = arg3
    operator delete(x0_1)

char* x20_2

if (arg11 != 0)
    char* x8_5 = arg12
    char* x0_3 = arg11
    
    if (x8_5 != arg11)
        char* x21_2 = x8_5
        
        do
            x21_2 = &x21_2[-0x18]
            
            if ((zx.d(*x21_2) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x21_2
        while (arg11 != x21_2)
        
        x0_3 = arg11
    
    arg12 = arg11
    operator delete(x0_3)
    x20_2 = arg9
    
    if (x20_2 == 0)
        goto label_ce5598
    
    goto label_ce55f4

x20_2 = arg9

if (x20_2 == 0)
label_ce5598:
    
    if ((zx.d(arg7) & 1) != 0)
    label_ce5644:
        operator delete(arg8)
        
        if ((zx.d(arg5) & 1) != 0)
            return sub_ce56cc(arg6) __tailcall
    else
    label_ce55a0:
        
        if ((zx.d(arg5) & 1) != 0)
            return sub_ce56cc(arg6) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_ce55f4:
char* x8_6 = arg10
char* x0_5 = x20_2

if (x8_6 != x20_2)
    char* x21_3 = x8_6
    
    do
        x21_3 = &x21_3[-0x18]
        
        if ((zx.d(*x21_3) & 1) != 0)
            operator delete(*(x8_6 - 8))
        
        x8_6 = x21_3
    while (x20_2 != x21_3)
    
    x0_5 = arg9

arg10 = x20_2
operator delete(x0_5)

if ((zx.d(arg7) & 1) == 0)
    goto label_ce55a0

goto label_ce5644
