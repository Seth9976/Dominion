// 函数: _ZN5Botan8DL_GroupC1ERKNS_6BigIntES3_S3_
// 地址: 0xd18968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
void** x0 = operator new(0x188)
x0[2] = 0
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
    + 0x10
x0[1] = 0
int64_t entry_x3
int64_t result = Botan::DL_Group_Data::DL_Group_Data(&x0[3], arg2, arg3, entry_x3)
int64_t* x20_1 = *(arg1 + 8)
*arg1 = &x0[3]
*(arg1 + 8) = x0

if (x20_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20_1[1])
        i = __stlxr(x9_1 - 1, &x20_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
