// 函数: _ZN5Botan9HMAC_DRBG6updateEPKhm
// 地址: 0xd8b520
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1 = *(arg1 + 0x60)
int64_t x8 = *(arg1 + 0x68)
uint64_t result_1
__builtin_memset(&result_1, 0, 0x18)
uint64_t x22 = x8 - x1
uint64_t var_40_1

if (x8 != x1)
    if ((x22 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint64_t result_3 = Botan::allocate_memory(x22, 1)
    uint64_t x23_1 = result_3 + x22
    result_1 = result_3
    var_40_1 = x23_1
    memset(result_3, 0, x22)
    uint64_t var_48_1 = x23_1

(*(**(arg1 + 0x58) + 0x18))()
int64_t* x0_2 = *(arg1 + 0x58)
char var_34 = 0
(*(*x0_2 + 0x18))(x0_2, &var_34, 1)
int64_t* x0_3 = *(arg1 + 0x58)
int64_t entry_x2
(*(*x0_3 + 0x18))(x0_3, arg2, entry_x2)
int64_t* x0_4 = *(arg1 + 0x58)
(*(*x0_4 + 0x20))(x0_4, result_1)
Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x58) + 8, result_1)
int64_t* x0_6 = *(arg1 + 0x58)
int64_t x1_5 = *(arg1 + 0x60)
(*(*x0_6 + 0x18))(x0_6, x1_5, *(arg1 + 0x68) - x1_5)
int64_t* x0_7 = *(arg1 + 0x58)
(*(*x0_7 + 0x20))(x0_7, *(arg1 + 0x60))

if (entry_x2 != 0)
    int64_t* x0_8 = *(arg1 + 0x58)
    int64_t x1_7 = *(arg1 + 0x60)
    (*(*x0_8 + 0x18))(x0_8, x1_7, *(arg1 + 0x68) - x1_7)
    int64_t* x0_9 = *(arg1 + 0x58)
    var_34 = 1
    (*(*x0_9 + 0x18))(x0_9, &var_34, 1)
    int64_t* x0_10 = *(arg1 + 0x58)
    (*(*x0_10 + 0x18))(x0_10, arg2, entry_x2)
    int64_t* x0_11 = *(arg1 + 0x58)
    (*(*x0_11 + 0x20))(x0_11, result_1)
    Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x58) + 8, result_1)
    int64_t* x0_13 = *(arg1 + 0x58)
    int64_t x1_12 = *(arg1 + 0x60)
    (*(*x0_13 + 0x18))(x0_13, x1_12, *(arg1 + 0x68) - x1_12)
    int64_t* x0_14 = *(arg1 + 0x58)
    (*(*x0_14 + 0x20))(x0_14, *(arg1 + 0x60))

uint64_t result = result_1

if (result == 0)
    return result

uint64_t result_2 = result
return Botan::deallocate_memory(result, var_40_1 - result, 1)
