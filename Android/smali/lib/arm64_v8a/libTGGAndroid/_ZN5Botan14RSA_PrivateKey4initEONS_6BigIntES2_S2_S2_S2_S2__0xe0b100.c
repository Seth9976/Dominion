// 函数: _ZN5Botan14RSA_PrivateKey4initEONS_6BigIntES2_S2_S2_S2_S2_
// 地址: 0xe0b100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x1e8)
x0[2] = 0
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Private_Data, std::__ndk1::allocator<Botan::RSA_Private_Data> >
    + 0x10
x0[1] = 0
int64_t result = Botan::RSA_Private_Data::RSA_Private_Data(&x0[3], arg2, arg3, arg4, arg5, arg6)
int64_t* __saved_x6 = *(arg1 + 0x28)
*(arg1 + 0x20) = &x0[3]
*(arg1 + 0x28) = x0

if (__saved_x6 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&__saved_x6[1])
        i = __stlxr(x9_1 - 1, &__saved_x6[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*__saved_x6 + 0x10))(__saved_x6)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
