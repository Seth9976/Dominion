// 函数: botan_privkey_create_ecdsa
// 地址: 0xd739ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>::VTable
    ** x0 = operator new(0x28)
x0[3] = "ECDSA"
x0[4] = arg3
*x0 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
x0[1] = arg1
x0[2] = arg2
void var_70
int32_t x0_1 = Botan_FFI::ffi_guard_thunk("botan_privkey_create", &var_70)

if (&var_70 == x0)
    (*x0)->vFunc_4()
else if (x0 != 0)
    (*x0)->j_operator delete()

if (*(x22 + 0x28) == x8)
    return zx.q(x0_1)

__stack_chk_fail()
noreturn
