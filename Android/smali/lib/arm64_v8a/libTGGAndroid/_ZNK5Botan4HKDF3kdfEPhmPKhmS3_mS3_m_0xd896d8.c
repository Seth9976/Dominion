// 函数: _ZNK5Botan4HKDF3kdfEPhmPKhmS3_mS3_m
// 地址: 0xd896d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = (*(**(arg1 + 8) + 0x48))()
void* __offset(vtable_for_Botan::HKDF_Extract, 0x10) var_70 = _vtable_for_Botan::HKDF_Extract + 0x10
int64_t* var_68 = x0_1
int64_t* x0_3 = (*(**(arg1 + 8) + 0x48))()
void* __offset(vtable_for_Botan::HKDF_Expand, 0x10) var_80 = _vtable_for_Botan::HKDF_Expand + 0x10
int64_t* var_78 = x0_3
size_t x0_5
uint64_t x7
x0_5, x7 = (***(arg1 + 8))()
uint64_t var_98_1
__builtin_memset(&var_98_1, 0, 0x18)
int64_t var_90_1
int64_t var_88_1
int64_t x21
uint64_t fp

if (x0_5 == 0)
    x21 = 0
    fp = 0
else
    if ((x0_5 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint64_t x0_7 = Botan::allocate_memory(x0_5, 1)
    x21 = x0_7 + x0_5
    fp = x0_7
    var_98_1 = x0_7
    var_88_1 = x21
    x7 = memset(x0_7, 0, x0_5)
    var_90_1 = x21

Botan::HKDF_Extract::kdf(&var_70, fp, x21 - fp, arg4, arg5, arg6, arg7, x7)
uint64_t x3_1 = var_98_1
int64_t arg_0
int64_t var_b0 = arg_0
int64_t result =
    Botan::HKDF_Expand::kdf(&var_80, arg2, arg3, x3_1, var_90_1 - x3_1, 0, nullptr, arg8)
uint64_t x0_10 = var_98_1

if (x0_10 != 0)
    uint64_t var_90_2 = x0_10
    Botan::deallocate_memory(x0_10, var_88_1 - x0_10, 1)

if (x0_3 != 0)
    (*(*x0_3 + 0x10))(x0_3)

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

return result
