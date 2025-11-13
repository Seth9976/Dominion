// 函数: sub_e404c0
// 地址: 0xe404c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20

if (arg2 != 0)
    void** x20_1 = arg3
    void** x0_1 = arg2
    
    if (x20_1 != arg2)
        do
            x20_1 -= 0x38
            void arg_10
            sub_f276a8(&arg_10, x20_1)
        while (arg2 != x20_1)
        
        x0_1 = arg2
    
    arg3 = arg2
    operator delete(x0_1)
    x20 = arg4
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x20 = arg4
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

char* x8 = arg5
char* x0_3 = x20

if (x8 != x20)
    char* x21_1 = x8
    
    do
        x21_1 = &x21_1[-0x18]
        
        if ((zx.d(*x21_1) & 1) != 0)
            operator delete(*(x8 - 8))
        
        x8 = x21_1
    while (x20 != x21_1)
    
    x0_3 = arg4

arg5 = x20
operator delete(x0_3)
sub_1101e04(arg1)
noreturn
