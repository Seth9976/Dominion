// 函数: _ZNK5Botan10Public_Key18subject_public_keyEv
// 地址: 0xdf8334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t* result_1 = nullptr
int64_t var_80 = (zx.o(0)).q
int128_t var_70
__builtin_memset(&var_70, 0, 0x20)
int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_f0 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t var_e8 = entry_x8
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_d0 = &var_f0
uint8_t var_b0[0x20]
sub_f2410c(&var_f0, &var_b0)

if (&var_f0 == var_d0)
    (*var_d0)->vFunc_4()
else if (var_d0 != 0)
    (*var_d0)->j_operator delete()

Botan::DER_Encoder::start_cons(&var_b0, 0x10)
int64_t* entry_x0
(*(*entry_x0 + 0x38))(entry_x0)
var_f0->vFunc_0(&var_f0, &var_b0)
(*(*entry_x0 + 0x40))(entry_x0)
uint64_t var_108
int64_t var_100
Botan::DER_Encoder::encode(&var_b0, var_108, var_100 - var_108, 3, 3)
Botan::DER_Encoder::end_cons()

if (var_108 != 0)
    uint64_t var_100_1 = var_108
    operator delete(var_108)

var_f0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* var_c8

if (var_c8 != 0)
    void* var_c0_1 = var_c8
    operator delete(var_c8)

void* __offset(vtable_for_Botan::OID, 0x10) var_e8_1 = _vtable_for_Botan::OID + 0x10
void* var_e0

if (var_e0 != 0)
    void* var_d8_1 = var_e0
    operator delete(var_e0)

void* x22 = var_70:8.q

if (x22 != 0)
    int128_t var_60
    void* x19_1 = var_60.q
    void* x0_11
    
    if (x19_1 == x22)
        x0_11 = x22
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_60:8, x19_1)
        while (x22 != x19_1)
        
        x0_11 = var_70:8.q
    
    var_60.q = x22
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
