// 函数: _ZNK5Botan9SP800_56C3kdfEPhmPKhmS3_mS3_m
// 地址: 0xe38a58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_58
__builtin_memset(&var_58, 0, 0x18)
Botan::SymmetricAlgorithm::set_key(*(arg1 + 8) + 8, arg6)
int64_t* x0_1 = *(arg1 + 8)
(*(*x0_1 + 0x18))(x0_1, arg4, arg5)
int64_t* x23_1 = *(arg1 + 8)
void* x1_2 = (**x23_1)(x23_1)

if (x1_2 != 0)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_58)
    x1_2 = var_58

(*(*x23_1 + 0x20))(x23_1, x1_2)
int64_t* x0_6 = *(arg1 + 0x10)
void* x3 = var_58
int64_t var_50
int64_t arg_0
int64_t result = (*(*x0_6 + 0x18))(x0_6, arg2, arg3, x3, var_50 - x3, 0, 0, arg8, arg_0)
void* x0_7 = var_58

if (x0_7 != 0)
    void* var_50_1 = x0_7
    int64_t var_48
    Botan::deallocate_memory(x0_7, var_48 - x0_7, 1)

return result
