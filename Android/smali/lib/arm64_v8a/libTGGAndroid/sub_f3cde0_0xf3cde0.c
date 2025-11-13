// 函数: sub_f3cde0
// 地址: 0xf3cde0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[2]
*arg1 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_load_rsa_pkcs1::$_158, std::__ndk1::allocator<botan_privkey_load_rsa_pkcs1::$_158>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}

if (x0 != 0)
    int64_t x8_1 = arg1[4]
    arg1[3] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

return operator delete(arg1) __tailcall
