// 函数: _ZN5Botan10ChaCha_RNG6updateEPKhm
// 地址: 0xd038fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 0x58) + 0x18))()
*(arg1 + 0x58)
uint8_t* x20 = *(arg1 + 0x60)
Botan::Buffered_Computation::final()
uint64_t var_48
Botan::SymmetricAlgorithm::set_key(x20, var_48)

if (var_48 != 0)
    uint64_t var_40_1 = var_48
    int64_t var_38
    Botan::deallocate_memory(var_48, var_38 - var_48, 1)

uint64_t x0_5 = (***(arg1 + 0x58))()
uint64_t result_1
__builtin_memset(&result_1, 0, 0x18)
uint64_t var_38_1
uint64_t result_4
uint64_t x22

if (x0_5 == 0)
    x22 = 0
    result_4 = 0
else
    if ((x0_5 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint64_t result_3 = Botan::allocate_memory(x0_5, 1)
    x22 = result_3 + x0_5
    result_4 = result_3
    result_1 = result_3
    var_38_1 = x22
    memset(result_3, 0, x0_5)
    uint64_t var_40_2 = x22

int64_t* x0_7 = *(arg1 + 0x60)
(*(*x0_7 + 0x38))(x0_7, result_4, x22 - result_4)
Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x58) + 8, result_1)
uint64_t result = result_1

if (result == 0)
    return result

uint64_t result_2 = result
return Botan::deallocate_memory(result, var_38_1 - result, 1)
