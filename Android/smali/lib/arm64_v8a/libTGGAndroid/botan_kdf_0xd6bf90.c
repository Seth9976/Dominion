// 函数: botan_kdf
// 地址: 0xd6bf90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_kdf::$_70, std::__ndk1::allocator<botan_kdf::$_70>, int32_t ()>::VTable
    ** x0 = operator new(0x50)
x0[2] = arg2
x0[3] = arg3
x0[4] = arg4
x0[5] = arg5
x0[6] = arg6
x0[7] = arg7
x0[8] = arg8
x0[9] = arg9
*x0 = &_vtable_for_std::__ndk1::__function::__func<botan_kdf::$_70, std::__ndk1::allocator<botan_kdf::$_70>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
x0[1] = arg1
void var_a0
int32_t x0_1 = Botan_FFI::ffi_guard_thunk("botan_kdf", &var_a0)
int64_t* x0_2 = x0

if (&var_a0 == x0_2)
    (*(*x0_2 + 0x20))()
else if (x0_2 != 0)
    (*(*x0_2 + 0x28))()

if (*(x27 + 0x28) == x8)
    return zx.q(x0_1)

__stack_chk_fail()
noreturn
