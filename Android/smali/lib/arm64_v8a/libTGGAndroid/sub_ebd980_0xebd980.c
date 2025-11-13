// 函数: sub_ebd980
// 地址: 0xebd980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if (arg4 != 0)
    char* x8 = arg5
    char* x0_1 = arg4
    
    if (x8 != arg4)
        char* x21_1 = x8
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8 - 8))
            
            x8 = x21_1
        while (arg4 != x21_1)
        
        x0_1 = arg4
    
    arg5 = arg4
    operator delete(x0_1)

sub_1101e04(arg1)
noreturn
