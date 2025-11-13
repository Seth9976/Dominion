// 函数: sub_de1ab8
// 地址: 0xde1ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if (arg6 != 0)
    char* x8_1 = arg7
    char* x0_2 = arg6
    
    if (x8_1 != arg6)
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (arg6 != x21_1)
        
        x0_2 = arg6
    
    arg7 = arg6
    operator delete(x0_2)

sub_1101e04(arg1)
noreturn
