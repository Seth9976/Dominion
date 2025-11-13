// 函数: _ZN5Botan11DER_EncoderC1ERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xcb9fdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x19 + 0x28)
*(arg1 + 0x20) = 0
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x50) = zx.o(0)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1>, void (uint8_t const*, uint64_t)>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t x1
int64_t var_58 = x1
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1>, void (uint8_t const*, uint64_t)>::VTable
    * const* result_1 = &var_60
sub_f2410c(&var_60, arg1)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >&)::$_1>, void (uint8_t const*, uint64_t)>::VTable
    * const* result = result_1

if (&var_60 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

if (*(x19 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
