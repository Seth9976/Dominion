// 函数: sub_e9a28c
// 地址: 0xe9a28c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if (arg4 != 0)
    char* x8_1 = arg5
    char* x0_1 = arg4
    
    if (x8_1 != arg4)
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (arg4 != x21_1)
        
        x0_1 = arg4
    
    arg5 = arg4
    operator delete(x0_1)

sub_1101e04(arg1)
noreturn
