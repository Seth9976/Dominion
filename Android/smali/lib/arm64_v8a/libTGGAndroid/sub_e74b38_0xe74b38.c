// 函数: sub_e74b38
// 地址: 0xe74b38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    char* x8_1 = arg3
    char* x0_1 = arg2
    
    if (x8_1 != arg2)
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (arg2 != x21_1)
        
        x0_1 = arg2
    
    arg3 = arg2
    operator delete(x0_1)
    
    if ((zx.d(arg4) & 1) == 0)
        goto label_e74b4c
    
    goto label_e74b28

char* x20

if ((zx.d(arg4) & 1) != 0)
label_e74b28:
    operator delete(arg5)
    x20 = arg6
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_e74b4c:
    x20 = arg6
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

char* x8_3 = arg7
char* x0_3 = x20

if (x8_3 != x20)
    char* x21_2 = x8_3
    
    do
        x21_2 = &x21_2[-0x18]
        
        if ((zx.d(*x21_2) & 1) != 0)
            operator delete(*(x8_3 - 8))
        
        x8_3 = x21_2
    while (x20 != x21_2)
    
    x0_3 = arg6

arg7 = x20
operator delete(x0_3)
sub_1101e04(arg1)
noreturn
