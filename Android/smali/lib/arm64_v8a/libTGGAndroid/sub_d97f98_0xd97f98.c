// 函数: sub_d97f98
// 地址: 0xd97f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[1] = arg4
(*(*arg3 + 0x10))(arg3)
void* x21 = *arg2

if (x21 != 0)
    char* x8_2 = arg2[1]
    void* x0_1 = x21
    
    if (x8_2 != x21)
        char* x22 = x8_2
        
        do
            x22 = &x22[-0x18]
            
            if ((zx.d(*x22) & 1) != 0)
                operator delete(*(x8_2 - 8))
            
            x8_2 = x22
        while (x21 != x22)
        
        x0_1 = *arg2
    
    arg2[1] = x21
    operator delete(x0_1)

sub_1101e04(arg1)
noreturn
