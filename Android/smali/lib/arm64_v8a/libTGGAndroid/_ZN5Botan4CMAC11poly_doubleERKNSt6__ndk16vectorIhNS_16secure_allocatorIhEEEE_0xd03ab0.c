// 函数: _ZN5Botan4CMAC11poly_doubleERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd03ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x1 = *arg1
int64_t x8 = *(arg1 + 8)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x22 = x8 - x1
uint8_t* x21
void* x23

if (x8 == x1)
    x23 = nullptr
    x21 = nullptr
else
    if ((x22 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_1 = *entry_x8
        
        if (x8_1 != 0)
            int64_t x9_1 = entry_x8[2]
            entry_x8[1] = x8_1
            Botan::deallocate_memory(x8_1, x9_1 - x8_1, 1)
        
        sub_1101e04(x0_5)
        noreturn
    
    uint8_t* x0_1 = Botan::allocate_memory(x22, 1)
    x23 = &x0_1[x22]
    x21 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = x23
    memset(x0_1, 0, x22)
    entry_x8[1] = x23
    x1 = *arg1

return Botan::poly_double_n(x21, x1, x23 - x21)
