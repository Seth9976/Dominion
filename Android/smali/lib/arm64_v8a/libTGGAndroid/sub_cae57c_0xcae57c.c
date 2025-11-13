// 函数: sub_cae57c
// 地址: 0xcae57c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 != 0)
    int64_t* x8_1 = arg5
    int64_t* x0 = arg4
    
    if (x8_1 != arg4)
        int64_t* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-3]
            void* x0_1 = *x21_1
            
            if (x0_1 != 0)
                int64_t x9_1 = x8_1[-1]
                x8_1[-2] = x0_1
                Botan::deallocate_memory(x0_1, x9_1 - x0_1, 1)
            
            x8_1 = x21_1
        while (arg4 != x21_1)
        
        x0 = arg4
    
    arg5 = arg4
    operator delete(x0)

if (arg2 != 0)
    void* arg_18 = arg2
    Botan::deallocate_memory(arg2, arg3 - arg2, 1)

sub_1101e04(arg1)
noreturn
