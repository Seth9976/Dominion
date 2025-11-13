// 函数: _ZNSt6__ndk16vectorIN5Botan6BigIntENS_9allocatorIS2_EEEC2Em
// 地址: 0xd2f470
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)
int64_t entry_x1

if (entry_x1 == 0)
    return 

uint64_t x19_1 = arg1

if (entry_x1 u>= 0x666666666666667)
    int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x21 = *x19_1
    
    if (x21 != 0)
        int64_t* x8_3 = *(x19_1 + 8)
        void* x0_3 = x21
        
        if (x8_3 != x21)
            int64_t* x22_1 = x8_3
            
            do
                x22_1 = &x22_1[-5]
                void* x0_4 = *x22_1
                
                if (x0_4 != 0)
                    int64_t x9_1 = x8_3[-3]
                    x8_3[-4] = x0_4
                    Botan::deallocate_memory(x0_4, (x9_1 - x0_4) s>> 2, 4)
                
                x8_3 = x22_1
            while (x21 != x22_1)
            
            x0_3 = *x19_1
        
        *(x19_1 + 8) = x21
        operator delete(x0_3)
    
    sub_1101e04(x0_2)
    noreturn

arg1 = operator new(entry_x1 * 0x28)
int64_t x8_2 = arg1 + entry_x1 * 0x28
*x19_1 = arg1
*(x19_1 + 8) = arg1
*(x19_1 + 0x10) = x8_2

do
    __builtin_memset(arg1, 0, 0x20)
    *(arg1 + 0x18) = -1
    *(arg1 + 0x20) = 0
    *(arg1 + 0x20) = 1
    arg1 += 0x28
while (arg1 != x8_2)

*(x19_1 + 8) = x8_2
