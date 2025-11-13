// 函数: botan_mceies_decrypt
// 地址: 0xd75578
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_mceies_decrypt::$_184, std::__ndk1::allocator<botan_mceies_decrypt::$_184>, int32_t ()>::VTable
    ** x0 = operator new(0x48)
x0[2] = arg3
x0[3] = arg4
x0[4] = arg5
x0[5] = arg6
x0[6] = arg2
x0[7] = arg7
x0[8] = arg8
*x0 = &_vtable_for_std::__ndk1::__function::__func<botan_mceies_decrypt::$_184, std::__ndk1::allocator<botan_mceies_decrypt::$_184>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
x0[1] = arg1
void var_90
int32_t x0_1 = Botan_FFI::ffi_guard_thunk("botan_mceies_decrypt", &var_90)
int64_t* x0_2 = x0

if (&var_90 == x0_2)
    (*(*x0_2 + 0x20))()
else if (x0_2 != 0)
    (*(*x0_2 + 0x28))()

if (*(x27 + 0x28) == x8)
    return zx.q(x0_1)

__stack_chk_fail()
noreturn
