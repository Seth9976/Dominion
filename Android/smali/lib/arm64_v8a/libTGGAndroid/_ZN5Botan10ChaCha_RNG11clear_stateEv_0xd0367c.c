// 函数: _ZN5Botan10ChaCha_RNG11clear_stateEv
// 地址: 0xd0367c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x0 = *(entry_x0 + 0x58)
uint64_t x0_1 = (**x0)(x0)
uint64_t result_1
__builtin_memset(&result_1, 0, 0x18)
uint64_t var_38_1
uint64_t result_5

if (x0_1 == 0)
    result_5 = 0
else
    if ((x0_1 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint64_t result_3 = operator new(x0_1)
    uint64_t x23 = result_3 + x0_1
    result_5 = result_3
    result_1 = result_3
    var_38_1 = x23
    memset(result_3, 0, x0_1)
    uint64_t var_40_1 = x23

Botan::SymmetricAlgorithm::set_key(&x0[1], result_5)
uint64_t result_4 = result_1

if (result_4 != 0)
    operator delete(result_4)

*(entry_x0 + 0x58)
uint8_t* x20_2 = *(entry_x0 + 0x60)
Botan::Buffered_Computation::final()
Botan::SymmetricAlgorithm::set_key(x20_2, result_1)
uint64_t result = result_1

if (result == 0)
    return result

uint64_t result_2 = result
return Botan::deallocate_memory(result, var_38_1 - result, 1)
