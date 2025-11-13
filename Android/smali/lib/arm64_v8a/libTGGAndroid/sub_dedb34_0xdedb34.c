// 函数: sub_dedb34
// 地址: 0xdedb34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20

if (arg8 != 0)
    char* x8_3 = arg9
    char* x0 = arg8
    
    if (x8_3 != arg8)
        char* x21_1 = x8_3
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_3 - 8))
            
            x8_3 = x21_1
        while (arg8 != x21_1)
        
        x0 = arg8
    
    arg9 = arg8
    operator delete(x0)
    x20 = arg6
    
    if (x20 == 0)
        goto label_dedb4c
    
    goto label_dedba8

x20 = arg6

if (x20 == 0)
label_dedb4c:
    
    if ((zx.d(arg4) & 1) != 0)
    label_dedbf8:
        operator delete(arg5)
        
        if ((zx.d(arg2) & 1) != 0)
            operator delete(arg3)
    else
    label_dedb54:
        
        if ((zx.d(arg2) & 1) != 0)
            operator delete(arg3)
    
    sub_1101e04(arg1)
    noreturn

label_dedba8:
char* x8_4 = arg7
char* x0_2 = x20

if (x8_4 != x20)
    char* x21_2 = x8_4
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_4 - 8))
        
        x8_4 = x21_2
    while (x20 != x21_2)
    
    x0_2 = arg6

arg7 = x20
operator delete(x0_2)

if ((zx.d(arg4) & 1) == 0)
    goto label_dedb54

goto label_dedbf8
