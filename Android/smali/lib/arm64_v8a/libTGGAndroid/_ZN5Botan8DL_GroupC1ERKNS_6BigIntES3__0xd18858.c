// 函数: _ZN5Botan8DL_GroupC1ERKNS_6BigIntES3_
// 地址: 0xd18858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
int32_t var_58 = 2
int32_t var_54 = 0
void** x0
int64_t x1
x0, x1 = operator new(0x188)
x0[2] = 0
Botan::BigInt const& var_50 = arg2
int32_t* var_48 = &var_54
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
    + 0x10
x0[1] = 0
int64_t x2
int64_t var_40 = x2
int32_t* var_38 = &var_58
int64_t result = std::__ndk1::__compressed_pair_elem<Botan::DL_Group_Data, 1, false>::__compressed_pair_elem<Botan::BigInt const&, int32_t&&, Botan::BigInt const&, Botan::DL_Group_Source&&, 0ul, 1ul, 2ul, 3ul>(
    &x0[3], x1, &var_50)
int64_t* x21_1 = *(arg1 + 8)
*arg1 = &x0[3]
*(arg1 + 8) = x0

if (x21_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x21_1[1])
        i = __stlxr(x9_1 - 1, &x21_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x21_1 + 0x10))(x21_1)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
