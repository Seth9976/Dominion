// 函数: _ZNK5Botan13GOST_28147_895cloneEv
// 地址: 0xee007c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = operator new(0x38)
result[2] = 0
result[3] = 0
*result = _vtable_for_Botan::GOST_28147_89 + 0x10
result[1] = 0
void* entry_x0
int64_t x22 = *(entry_x0 + 8)
int64_t x8_1 = *(entry_x0 + 0x10)
uint64_t x21_1 = x8_1 - x22

if (x8_1 != x22)
    if ((x21_1 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_6 = *x21_1
        
        if (x8_6 != 0)
            int64_t x9_1 = result[6]
            result[5] = x8_6
            Botan::deallocate_memory(x8_6, (x9_1 - x8_6) s>> 2, 4)
        
        void* x0_7 = result[1]
        
        if (x0_7 != 0)
            result[2] = x0_7
            operator delete(x0_7)
        
        operator delete(result)
        sub_1101e04(x0_5)
        noreturn
    
    int64_t x0_1 = operator new(x21_1)
    result[1] = x0_1
    result[2] = x0_1
    result[3] = x0_1 + (x21_1 s>> 2 << 2)
    memcpy(x0_1, x22, x21_1)
    result[2] = x0_1 + x21_1

__builtin_memset(&result[4], 0, 0x18)
int64_t x0_2 = Botan::allocate_memory(8, 4)
result[5] = x0_2 + 0x20
result[6] = x0_2 + 0x20
__builtin_memset(x0_2, 0, 0x20)
result[4] = x0_2
return result
