// 函数: _ZNK5Botan14Cert_Extension17Basic_Constraints12encode_innerEv
// 地址: 0xeaffc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* result_1 = nullptr
int64_t var_80 = (zx.o(0)).q
int128_t var_70
__builtin_memset(&var_70, 0, 0x20)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_110 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t var_108 = entry_x8
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_f0 = &var_110
void var_b0
sub_f2410c(&var_110, &var_b0)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* x0_1 = var_f0

if (&var_110 == x0_1)
    (*x0_1)->vFunc_4()
else if (x0_1 != 0)
    (*x0_1)->j_operator delete()

Botan::DER_Encoder::start_cons(&var_b0, 0x10)
void* entry_x0
uint32_t x23 = zx.d(*(entry_x0 + 8))
int128_t var_d0
__builtin_memset(&var_d0, 0, 0x20)
__builtin_memset(&var_f0, 0, 0x18)
char x8_4

x8_4 = x23 != 0 ? -1 : 0

__builtin_memset(&var_110, 0, 0x20)
char var_114 = x8_4
Botan::DER_Encoder::add_object(&var_110, 1, nullptr, &var_114)

if (*(entry_x0 + 0x10) != 0xfffffff0)
    Botan::DER_Encoder::encode(&var_110)

Botan::DER_Encoder::encode_if(&var_b0, zx.q(x23 != 0 ? 1 : 0))
Botan::DER_Encoder::end_cons()
void* x23_1 = var_d0:8.q

if (x23_1 != 0)
    int128_t var_c0
    void* x19_1 = var_c0.q
    void* x0_7
    
    if (x19_1 == x23_1)
        x0_7 = x23_1
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_c0:8, x19_1)
        while (x23_1 != x19_1)
        
        x0_7 = var_d0:8.q
    
    var_c0.q = x23_1
    operator delete(x0_7)

void* var_e0
void* x0_8 = var_e0

if (x0_8 != 0)
    var_e0 = x0_8
    Botan::deallocate_memory(x0_8, var_d0.q - x0_8, 1)

struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* x0_9 = var_f0

if (&var_110 == x0_9)
    (*x0_9)->vFunc_4()
else if (x0_9 != 0)
    (*x0_9)->j_operator delete()

void* x23_2 = var_70:8.q

if (x23_2 != 0)
    int128_t var_60
    void* x19_2 = var_60.q
    void* x0_11
    
    if (x19_2 == x23_2)
        x0_11 = x23_2
    else
        do
            x19_2 -= 0x38
            sub_f230d4(&var_60:8, x19_2)
        while (x23_2 != x19_2)
        
        x0_11 = var_70:8.q
    
    var_60.q = x23_2
    operator delete(x0_11)

int64_t x0_12 = var_80

if (x0_12 != 0)
    var_80 = x0_12
    Botan::deallocate_memory(x0_12, var_70.q - x0_12, 1)

int64_t* result = result_1

if (&var_b0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
