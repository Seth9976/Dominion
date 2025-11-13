// 函数: _ZNSt6__ndk16vectorINS0_IhN5Botan16secure_allocatorIhEEEENS_9allocatorIS4_EEEC2Em
// 地址: 0xed302c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)
int64_t entry_x1

if (entry_x1 == 0)
    return 

if (entry_x1 u>= 0xaaaaaaaaaaaaaab)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x21_2 = *arg1
    
    if (x21_2 != 0)
        int64_t* x8_3 = *(arg1 + 8)
        void* x0_4 = x21_2
        
        if (x8_3 != x21_2)
            int64_t* x22_2 = x8_3
            
            do
                x22_2 = &x22_2[-3]
                void* x0_5 = *x22_2
                
                if (x0_5 != 0)
                    int64_t x9_4 = x8_3[-1]
                    x8_3[-2] = x0_5
                    Botan::deallocate_memory(x0_5, x9_4 - x0_5, 1)
                
                x8_3 = x22_2
            while (x21_2 != x22_2)
            
            x0_4 = *arg1
        
        *(arg1 + 8) = x21_2
        operator delete(x0_4)
    
    sub_1101e04(x0_3)
    noreturn

int64_t x22_1 = entry_x1 * 0x18
int64_t x0_1 = operator new(x22_1)
*arg1 = x0_1
*(arg1 + 0x10) = x0_1 + entry_x1 * 0x18
memset(x0_1, 0, 0x18 + (x22_1 - 0x18) u/ 0x18 * 0x18)
*(arg1 + 8) = x0_1 + 0x18 + (x22_1 - 0x18) u/ 0x18 * 0x18
