// 函数: sub_e6e53c
// 地址: 0xe6e53c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[1] = arg3
void* x20 = *arg2

if (x20 != 0)
    int64_t* x8_1 = arg2[1]
    void* x0 = x20
    
    if (x8_1 != x20)
        int64_t* x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-3]
            void* x0_1 = *x22_1
            
            if (x0_1 != 0)
                x8_1[-2] = x0_1
                operator delete(x0_1)
            
            x8_1 = x22_1
        while (x20 != x22_1)
        
        x0 = *arg2
    
    arg2[1] = x20
    operator delete(x0)

sub_1101e04(arg1)
noreturn
