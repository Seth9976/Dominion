// 函数: _ZN5Botan3OFBC1EPNS_11BlockCipherE
// 地址: 0xde0dd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::OFB + 0x10
int64_t* entry_x1
*(arg1 + 8) = entry_x1
uint64_t result = (*(*entry_x1 + 0x30))(entry_x1)
__builtin_memset(arg1 + 0x10, 0, 0x18)

if (result != 0)
    if ((result & 0xffffffff80000000) != 0)
        int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        int64_t* x0_5 = *(arg1 + 8)
        *(arg1 + 8) = 0
        
        if (x0_5 != 0)
            (*(*x0_5 + 8))()
        
        sub_1101e04(x0_4)
        noreturn
    
    int64_t x0_2 = Botan::allocate_memory(result, 1)
    int64_t x21_2 = x0_2 + result
    *(arg1 + 0x10) = x0_2
    *(arg1 + 0x20) = x21_2
    result = memset(x0_2, 0, result)
    *(arg1 + 0x18) = x21_2

*(arg1 + 0x28) = 0
return result
