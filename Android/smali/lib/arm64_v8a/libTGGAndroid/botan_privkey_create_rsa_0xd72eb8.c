// 函数: botan_privkey_create_rsa
// 地址: 0xd72eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int32_t x19

if (arg3 - 0x400 u<= 0x3c00)
    std::__ndk1::to_string(arg3)
    char var_98
    uint32_t x24_1 = zx.d(var_98)
    struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>::VTable
        ** x0_1 = operator new(0x28)
    void* var_88
    void* x8_2
    
    if ((x24_1 & 1) == 0)
        x8_2 = &var_98 | 1
    else
        x8_2 = var_88
    
    *x0_1 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
    x0_1[1] = arg1
    x0_1[2] = arg2
    x0_1[3] = &data_76da56
    x0_1[4] = x8_2
    void var_80
    x19 = Botan_FFI::ffi_guard_thunk("botan_privkey_create", &var_80)
    
    if (&var_80 == x0_1)
        (*x0_1)->vFunc_4()
    else if (x0_1 != 0)
        (*x0_1)->j_operator delete()
    
    if ((zx.d(var_98) & 1) != 0)
        operator delete(var_88)
else
    x19 = -0x20

if (*(x21 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
