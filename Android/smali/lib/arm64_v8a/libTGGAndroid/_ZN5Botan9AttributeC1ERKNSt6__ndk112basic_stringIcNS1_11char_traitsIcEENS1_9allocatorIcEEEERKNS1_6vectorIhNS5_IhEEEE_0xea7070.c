// 函数: _ZN5Botan9AttributeC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIhNS5_IhEEEE
// 地址: 0xea7070
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Attribute + 0x10
int64_t result = Botan::OID::from_string(arg2)
__builtin_memset(arg1 + 0x28, 0, 0x18)
int64_t* entry_x2
int64_t x9_1 = *entry_x2
int64_t x8_2 = entry_x2[1]
uint64_t x23 = x8_2 - x9_1

if (x8_2 != x9_1)
    if ((x23 & 0xffffffff80000000) != 0)
        int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_5 = *(arg1 + 0x28)
        
        if (x8_5 != 0)
            *(arg1 + 0x30) = x8_5
            operator delete(x8_5)
        
        void* x0_6 = *(arg1 + 0x10)
        *(arg1 + 8) = _vtable_for_Botan::OID + 0x10
        
        if (x0_6 != 0)
            *(arg1 + 0x18) = x0_6
            operator delete(x0_6)
        
        sub_1101e04(x0_4)
        noreturn
    
    result = operator new(x23)
    *(arg1 + 0x28) = result
    *(arg1 + 0x30) = result
    *(arg1 + 0x38) = result + x23
    int64_t x1 = *entry_x2
    int64_t result_1 = result
    size_t x20_1 = entry_x2[1] - x1
    
    if (x20_1 s>= 1)
        result = memcpy(result_1, x1, x20_1)
        result_1 += x20_1
    
    *(arg1 + 0x30) = result_1

return result
