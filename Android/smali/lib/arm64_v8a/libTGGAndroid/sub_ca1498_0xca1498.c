// 函数: sub_ca1498
// 地址: 0xca1498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t arg_d8 = 0
(*(*arg2 + 8))()
int64_t* x0_1 = arg3
arg3 = nullptr

if (x0_1 != 0)
    (*(*x0_1 + 8))()

char* x20_1

if (arg10 != 0)
    char* x8_6 = arg11
    char* x0_2 = arg10
    
    if (x8_6 != arg10)
        char* x21_1 = x8_6
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_6 - 8))
            
            x8_6 = x21_1
        while (arg10 != x21_1)
        
        x0_2 = arg10
    
    arg11 = arg10
    operator delete(x0_2)
    x20_1 = arg8
    
    if (x20_1 == 0)
        goto label_ca164c
    
    goto label_ca16a8

x20_1 = arg8

if (x20_1 == 0)
label_ca164c:
    
    if ((zx.d(arg6) & 1) != 0)
    label_ca16f8:
        operator delete(arg7)
        
        if ((zx.d(arg4) & 1) != 0)
            return sub_ca1734(arg5) __tailcall
    else
    label_ca1654:
        
        if ((zx.d(arg4) & 1) != 0)
            return sub_ca1734(arg5) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_ca16a8:
char* x8_7 = arg9
char* x0_4 = x20_1

if (x8_7 != x20_1)
    char* x21_2 = x8_7
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_7 - 8))
        
        x8_7 = x21_2
    while (x20_1 != x21_2)
    
    x0_4 = arg8

arg9 = x20_1
operator delete(x0_4)

if ((zx.d(arg6) & 1) == 0)
    goto label_ca1654

goto label_ca16f8
