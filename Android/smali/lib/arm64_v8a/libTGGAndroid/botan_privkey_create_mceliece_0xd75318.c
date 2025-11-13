// 函数: botan_privkey_create_mceliece
// 地址: 0xd75318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
std::__ndk1::to_string(arg3)
char var_a8[0x10]
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a8)
void* x8_1 = x0_2[1].q
int128_t var_70 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
std::__ndk1::to_string(arg4)
char var_c0
uint64_t var_b0
uint64_t x1_1

if ((zx.d(var_c0) & 1) == 0)
    x1_1 = &var_c0 | 1
else
    x1_1 = var_b0

int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70, x1_1)
void* x8_3 = x0_5[1].q
int128_t var_90 = *x0_5
__builtin_memset(x0_5, 0, 0x18)

if ((zx.d(var_c0) & 1) == 0)
    if ((zx.d(var_70.b) & 1) != 0)
        goto label_d75468
    
    goto label_d753d4

operator delete(var_b0)
void* var_98

if ((zx.d(var_70.b) & 1) == 0)
label_d753d4:
    
    if ((zx.d(var_a8[0]) & 1) != 0)
        operator delete(var_98)
else
label_d75468:
    operator delete(x8_1)
    
    if ((zx.d(var_a8[0]) & 1) != 0)
        operator delete(var_98)
uint32_t x23 = zx.d(var_90.b)
struct std::__ndk1::__function::__base<int32_t ()>::std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>::VTable
    ** x0_7 = operator new(0x28)
void* x8_8

if ((x23 & 1) == 0)
    x8_8 = &var_90 | 1
else
    x8_8 = x8_3

*x0_7 = &_vtable_for_std::__ndk1::__function::__func<botan_privkey_create::$_140, std::__ndk1::allocator<botan_privkey_create::$_140>, int32_t ()>{for `std::__ndk1::__function::__base<int32_t ()>'}
x0_7[1] = arg1
x0_7[2] = arg2
x0_7[3] = "McEliece"
x0_7[4] = x8_8
int32_t x0_8 = Botan_FFI::ffi_guard_thunk("botan_privkey_create", &var_70)

if (&var_70 == x0_7)
    (*x0_7)->vFunc_4()
else if (x0_7 != 0)
    (*x0_7)->j_operator delete()

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(x8_3)

if (*(x22 + 0x28) == x8)
    return zx.q(x0_8)

__stack_chk_fail()
noreturn
