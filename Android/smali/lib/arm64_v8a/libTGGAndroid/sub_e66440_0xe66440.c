// 函数: sub_e66440
// 地址: 0xe66440
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
        sub_1101e04(arg1)
        noreturn
else if ((zx.d(arg4) & 1) == 0)
    sub_1101e04(arg1)
    noreturn

operator delete(arg5)
sub_1101e04(arg1)
noreturn
