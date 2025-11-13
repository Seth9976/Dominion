// 函数: sub_ed2dd0
// 地址: 0xed2dd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg2

if (x21 != 0)
    int64_t* x8_1 = arg2[1]
    void* x0 = x21
    
    if (x8_1 != x21)
        int64_t* x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-3]
            void* x0_1 = *x22_1
            
            if (x0_1 != 0)
                int64_t x9_1 = x8_1[-1]
                x8_1[-2] = x0_1
                Botan::deallocate_memory(x0_1, x9_1 - x0_1, 1)
            
            x8_1 = x22_1
        while (x21 != x22_1)
        
        x0 = *arg2
    
    arg2[1] = x21
    operator delete(x0)

sub_1101e04(arg1)
noreturn
