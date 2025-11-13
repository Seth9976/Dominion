// 函数: sub_e9377c
// 地址: 0xe9377c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[1] = arg3
void* x21 = *arg2

if (x21 != 0)
    char* x8_1 = arg2[1]
    void* x0 = x21
    
    if (x8_1 != x21)
        char* x22 = x8_1
        
        do
            x22 = &x22[-0x18]
            
            if ((zx.d(*x22) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x22
        while (x21 != x22)
        
        x0 = *arg2
    
    arg2[1] = x21
    operator delete(x0)

sub_1101e04(arg1)
noreturn
