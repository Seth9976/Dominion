// 函数: sub_ce5f84
// 地址: 0xce5f84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg2)
int64_t* x22 = arg11
arg11 = nullptr

if (x22 != 0)
    (*(*x22 + 8))(x22)

char* x20_1

if (arg9 != 0)
    char* x8_5 = arg10
    char* x0_2 = arg9
    
    if (x8_5 != arg9)
        char* x21_1 = x8_5
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x21_1
        while (arg9 != x21_1)
        
        x0_2 = arg9
    
    arg10 = arg9
    operator delete(x0_2)
    x20_1 = arg7
    
    if (x20_1 == 0)
        goto label_ce6080
    
    goto label_ce60dc

x20_1 = arg7

if (x20_1 == 0)
label_ce6080:
    
    if ((zx.d(arg5) & 1) != 0)
    label_ce612c:
        operator delete(arg6)
        
        if ((zx.d(arg3) & 1) != 0)
            operator delete(arg4)
    else
    label_ce6088:
        
        if ((zx.d(arg3) & 1) != 0)
            operator delete(arg4)
    
    sub_1101e04(arg1)
    noreturn

label_ce60dc:
char* x8_6 = arg8
char* x0_4 = x20_1

if (x8_6 != x20_1)
    char* x21_2 = x8_6
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_6 - 8))
        
        x8_6 = x21_2
    while (x20_1 != x21_2)
    
    x0_4 = arg7

arg8 = x20_1
operator delete(x0_4)

if ((zx.d(arg5) & 1) == 0)
    goto label_ce6088

goto label_ce612c
