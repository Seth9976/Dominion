// 函数: _ZNK5Botan14Cert_Extension16Authority_Key_ID12encode_innerEv
// 地址: 0xeb1544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* result_1 = nullptr
int64_t var_a0 = (zx.o(0)).q
int128_t var_90
__builtin_memset(&var_90, 0, 0x20)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_70 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t var_68 = entry_x8
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_50 = &var_70
void var_d0
sub_f2410c(&var_70, &var_d0)

if (&var_70 == var_50)
    (*var_50)->vFunc_4()
else if (var_50 != 0)
    (*var_50)->j_operator delete()

Botan::DER_Encoder::start_cons(&var_d0, 0x10)
void* entry_x0
*(entry_x0 + 0x10)
Botan::DER_Encoder::add_object(&var_d0, 0, 0x80, *(entry_x0 + 8))
Botan::DER_Encoder::end_cons()
void* x22 = var_90:8.q

if (x22 != 0)
    int128_t var_80
    void* x19_1 = var_80.q
    void* x0_5
    
    if (x19_1 == x22)
        x0_5 = x22
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_80:8, x19_1)
        while (x22 != x19_1)
        
        x0_5 = var_90:8.q
    
    var_80.q = x22
    operator delete(x0_5)

int64_t x0_6 = var_a0

if (x0_6 != 0)
    var_a0 = x0_6
    Botan::deallocate_memory(x0_6, var_90.q - x0_6, 1)

int64_t* result = result_1

if (&var_d0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
