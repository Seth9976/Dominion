// 函数: sub_cb6718
// 地址: 0xcb6718
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)

if (arg8 != 0)
    char* x8_3 = arg9
    char* x0_3 = arg8
    
    if (x8_3 != arg8)
        char* x20_1 = x8_3
        
        do
            x20_1 = &x20_1[-0x18]
            
            if ((zx.d(*x20_1) & 1) != 0)
                operator delete(*(x8_3 - 8))
            
            x8_3 = x20_1
        while (arg8 != x20_1)
        
        x0_3 = arg8
    
    arg9 = arg8
    operator delete(x0_3)

sub_1101e04(arg1)
noreturn
