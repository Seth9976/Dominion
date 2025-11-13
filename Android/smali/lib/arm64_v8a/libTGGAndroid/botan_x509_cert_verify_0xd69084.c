// 函数: botan_x509_cert_verify
// 地址: 0xd69084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int64_t fp

fp = arg8 == 0 ? 0x6e : arg8

struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_x509_cert_verify::$_34, std::__ndk1::allocator<botan_x509_cert_verify::$_34>, int32_t ()>::VTable
    ** x0 = operator new(0x58)
x0[2] = arg10
x0[3] = arg2
x0[4] = arg4
x0[5] = arg3
x0[6] = arg7
x0[7] = arg6
x0[8] = arg5
x0[9] = fp
x0[0xa] = arg1
*x0 = &_vtable_for_std::__ndk1::__function::__func<botan_x509_cert_verify::$_34, std::__ndk1::allocator<botan_x509_cert_verify::$_34>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
x0[1] = arg9
int64_t* var_80 = x0
void var_a0
int32_t x0_1 = Botan_FFI::ffi_guard_thunk("botan_x509_cert_verify", &var_a0)

if (&var_a0 == var_80)
    (*(*var_80 + 0x20))()
else if (var_80 != 0)
    (*(*var_80 + 0x28))()

if (*(x26 + 0x28) == x8)
    return zx.q(x0_1)

__stack_chk_fail()
noreturn
