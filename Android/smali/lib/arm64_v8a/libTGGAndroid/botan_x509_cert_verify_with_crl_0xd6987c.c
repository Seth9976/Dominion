// 函数: botan_x509_cert_verify_with_crl
// 地址: 0xd6987c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
int64_t x20

x20 = arg10 == 0 ? 0x6e : arg10

int64_t* x0 = operator new(0x68)
x0[2] = arg12
x0[3] = arg2
x0[8] = arg5
x0[9] = arg8
x0[4] = arg4
x0[5] = arg3
x0[6] = arg9
x0[7] = arg6
x0[0xc] = arg1
x0[0xa] = arg7
x0[0xb] = x20
*x0 = &_vtable_for_std::__ndk1::__function::__func<botan_x509_cert_verify_with_crl::$_38, std::__ndk1::allocator<botan_x509_cert_verify_with_crl::$_38>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
x0[1] = arg11
void var_a0
int32_t x0_1 = Botan_FFI::ffi_guard_thunk("botan_x509_cert_verify_with_crl", &var_a0)

if (&var_a0 == x0)
    (*(*x0 + 0x20))()
else if (x0 != 0)
    (*(*x0 + 0x28))()

if (*(x27 + 0x28) == x8)
    return zx.q(x0_1)

__stack_chk_fail()
noreturn
