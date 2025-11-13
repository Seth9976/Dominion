// 函数: _ZN5Botan11BER_DecoderC1ERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xcb877c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x24) = 0
*(arg1 + 8) = 0xff00
*(arg1 + 0x30) = 0
void** result = operator new(0x28)
int64_t* entry_x1
int64_t x21 = *entry_x1
int64_t x8 = entry_x1[1]
void** result_1 = result
uint64_t x23 = x8 - x21
*result = _vtable_for_Botan::DataSource_Memory + 0x10
result[1] = 0
__builtin_memset(&result[2], 0, 0x18)

if (x8 == x21)
    *(arg1 + 0x30) = result_1
else
    if ((x23 & 0xffffffff80000000) != 0)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        *(arg1 + 0x30) = 0
        void* x0_4 = *(arg1 + 0x10)
        
        if (x0_4 != 0)
            int64_t x8_3 = *(arg1 + 0x20)
            *(arg1 + 0x18) = x0_4
            Botan::deallocate_memory(x0_4, x8_3 - x0_4, 1)
        
        sub_1101e04(x0_3)
        noreturn
    
    int64_t x0_1 = Botan::allocate_memory(x23, 1)
    int64_t x22_3 = x0_1 + x23
    result_1[1] = x0_1
    result_1[2] = x0_1
    result_1[3] = x22_3
    memcpy(x0_1, x21, x23)
    result_1[2] = x22_3
    result = *(arg1 + 0x30)
    result_1[4] = 0
    *(arg1 + 0x30) = result_1
    
    if (result != 0)
        result = (*(*result + 0x38))()
        result_1 = *(arg1 + 0x30)

*(arg1 + 0x28) = result_1
return result
