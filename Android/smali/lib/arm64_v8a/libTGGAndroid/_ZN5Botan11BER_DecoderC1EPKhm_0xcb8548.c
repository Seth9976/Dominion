// 函数: _ZN5Botan11BER_DecoderC1EPKhm
// 地址: 0xcb8548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
__builtin_memset(&arg1[0xc], 0, 0x1c)
*(arg1 + 8) = 0xff00
*(arg1 + 0x30) = 0
int64_t* result = operator new(0x28)
int64_t* result_1 = result
result[2] = 0
result[3] = 0
*result = _vtable_for_Botan::DataSource_Memory + 0x10
result[1] = 0
uint64_t entry_x2

if (entry_x2 == 0)
    result_1[4] = 0
    *(arg1 + 0x30) = result_1
else
    if ((entry_x2 & 0xffffffff80000000) != 0)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        *(arg1 + 0x30) = 0
        void* x0_4 = *(arg1 + 0x10)
        
        if (x0_4 != 0)
            int64_t x8_3 = *(arg1 + 0x20)
            *(arg1 + 0x18) = x0_4
            Botan::deallocate_memory(x0_4, x8_3 - x0_4, 1)
        
        sub_1101e04(x0_3)
        noreturn
    
    int64_t x0_1 = Botan::allocate_memory(entry_x2, 1)
    int64_t x23_2 = x0_1 + entry_x2
    result_1[1] = x0_1
    result_1[3] = x23_2
    memcpy(x0_1, arg2, entry_x2)
    result_1[2] = x23_2
    result = *(arg1 + 0x30)
    result_1[4] = 0
    *(arg1 + 0x30) = result_1
    
    if (result != 0)
        result = (*(*result + 0x38))()
        result_1 = *(arg1 + 0x30)

*(arg1 + 0x28) = result_1
return result
