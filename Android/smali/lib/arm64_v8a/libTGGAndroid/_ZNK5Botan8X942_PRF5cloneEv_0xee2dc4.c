// 函数: _ZNK5Botan8X942_PRF5cloneEv
// 地址: 0xee2dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** result = operator new(0x28)
result[3] = 0
result[4] = 0
*result = _vtable_for_Botan::X942_PRF + 0x10
result[1] = _vtable_for_Botan::OID + 0x10
result[2] = 0
void* entry_x0
int64_t x22 = *(entry_x0 + 0x10)
int64_t x8_1 = *(entry_x0 + 0x18)
uint64_t x21_1 = x8_1 - x22

if (x8_1 != x22)
    if ((x21_1 & 0xffffffff80000000) != 0)
        int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_5 = result[2]
        
        if (x8_5 != 0)
            result[3] = x8_5
            operator delete(x8_5)
        
        operator delete(result)
        sub_1101e04(x0_4)
        noreturn
    
    int64_t x0_1 = operator new(x21_1)
    result[2] = x0_1
    result[3] = x0_1
    result[4] = x0_1 + (x21_1 s>> 2 << 2)
    memcpy(x0_1, x22, x21_1)
    result[3] = x0_1 + x21_1

return result
