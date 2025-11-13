// 函数: botan_x509_crl_load
// 地址: 0xd69624
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int32_t x19 = -0x1f

if (arg1 != 0 && arg2 != 0)
    int64_t x2
    int64_t var_50_1 = x2
    int64_t var_48_1 = arg1
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_x509_crl_load::$_36, std::__ndk1::allocator<botan_x509_crl_load::$_36>, int32_t ()>::VTable
        * const var_60 = &_vtable_for_std::__ndk1::__function::__func<botan_x509_crl_load::$_36, std::__ndk1::allocator<botan_x509_crl_load::$_36>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    int64_t var_58_1 = arg2
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_x509_crl_load::$_36, std::__ndk1::allocator<botan_x509_crl_load::$_36>, int32_t ()>::VTable
        * const* var_40_1 = &var_60
    x19 = Botan_FFI::ffi_guard_thunk("botan_x509_crl_load", &var_60)
    
    if (&var_60 == var_40_1)
        (*var_40_1)->vFunc_4()
    else if (var_40_1 != 0)
        (*var_40_1)->j_operator delete()

if (*(x20 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
