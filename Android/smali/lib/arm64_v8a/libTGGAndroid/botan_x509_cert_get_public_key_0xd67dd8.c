// 函数: botan_x509_cert_get_public_key
// 地址: 0xd67dd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int32_t x19

if (arg2 == 0)
    x19 = -0x1f
else
    *arg2 = 0
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_x509_cert_get_public_key::$_19, std::__ndk1::allocator<botan_x509_cert_get_public_key::$_19>, int32_t ()>::VTable
        * const var_60 = &_vtable_for_std::__ndk1::__function::__func<botan_x509_cert_get_public_key::$_19, std::__ndk1::allocator<botan_x509_cert_get_public_key::$_19>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    int64_t var_58_1 = arg1
    int64_t* var_50_1 = arg2
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_x509_cert_get_public_key::$_19, std::__ndk1::allocator<botan_x509_cert_get_public_key::$_19>, int32_t ()>::VTable
        * const* var_40_1 = &var_60
    x19 = Botan_FFI::ffi_guard_thunk("botan_x509_cert_get_public_key", &var_60)
    
    if (&var_60 == var_40_1)
        (*var_40_1)->vFunc_4()
    else if (var_40_1 != 0)
        (*var_40_1)->j_operator delete()

if (*(x20 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
