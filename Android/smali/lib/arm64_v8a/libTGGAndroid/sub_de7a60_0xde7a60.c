// 函数: sub_de7a60
// 地址: 0xde7a60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20_1

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
    x20_1 = arg6
    
    if (x20_1 == 0)
        goto label_de7b68
    
    goto label_de7bc4

x20_1 = arg6

if (x20_1 == 0)
label_de7b68:
    
    if ((zx.d(arg4) & 1) != 0)
    label_de7c14:
        operator delete(arg5)
        
        if ((zx.d(arg2) & 1) != 0)
            return sub_de7c38(arg3) __tailcall
    else
    label_de7b70:
        
        if ((zx.d(arg2) & 1) != 0)
            return sub_de7c38(arg3) __tailcall
    
    sub_1101e04(arg1)
    noreturn

label_de7bc4:
char* x8_4 = arg7
char* x0_2 = x20_1

if (x8_4 != x20_1)
    char* x21_2 = x8_4
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_4 - 8))
        
        x8_4 = x21_2
    while (x20_1 != x21_2)
    
    x0_2 = arg6

arg7 = x20_1
operator delete(x0_2)

if ((zx.d(arg4) & 1) == 0)
    goto label_de7b70

goto label_de7c14
