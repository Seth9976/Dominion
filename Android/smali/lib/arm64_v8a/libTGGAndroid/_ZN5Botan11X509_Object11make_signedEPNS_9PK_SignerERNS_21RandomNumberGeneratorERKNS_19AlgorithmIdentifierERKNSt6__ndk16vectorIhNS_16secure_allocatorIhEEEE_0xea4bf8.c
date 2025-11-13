// 函数: _ZN5Botan11X509_Object11make_signedEPNS_9PK_SignerERNS_21RandomNumberGeneratorERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xea4bf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t* x0 = *arg1
int64_t x1 = *arg4
(**x0)(x0, x1, *(arg4 + 8) - x1)
Botan::PK_Signer::signature(arg1)
int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* var_c0 = nullptr
int128_t var_b0
__builtin_memset(&var_b0, 0, 0x30)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t var_78 = entry_x8
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_60 = &var_80
uint8_t var_e0[0x20]
sub_f2410c(&var_80, &var_e0)

if (&var_80 == var_60)
    (*var_60)->vFunc_4()
else if (var_60 != 0)
    (*var_60)->j_operator delete()

Botan::DER_Encoder::start_cons(&var_e0, 0x10)
int128_t var_90
int64_t x9_1 = var_90.q
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * x1_2 = *arg4
void* x2_2 = *(arg4 + 8) - x1_2
int128_t var_a0

if (x9_1 != var_a0:8.q)
    Botan::DER_Encoder::DER_Sequence::add_bytes(x9_1 - 0x38, x1_2)
else if (var_c0 == 0)
    var_80 = x1_2
    void* var_78_1 = x2_2
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_b0, &var_80)
else
    var_80 = x1_2
    void* var_e8 = x2_2
    (*(*var_c0 + 0x30))(var_c0, &var_80, &var_e8)

(**arg3)(arg3, &var_e0)
uint64_t result_1
int64_t var_f8
Botan::DER_Encoder::encode(&var_e0, result_1, var_f8 - result_1, 3, 3)
Botan::DER_Encoder::end_cons()
void* x21_1 = var_a0:8.q

if (x21_1 != 0)
    void* x19_1 = var_90.q
    void* x0_11
    
    if (x19_1 == x21_1)
        x0_11 = x21_1
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_90:8, x19_1)
        while (x21_1 != x19_1)
        
        x0_11 = var_a0:8.q
    
    var_90.q = x21_1
    operator delete(x0_11)

void* x0_12 = var_b0.q

if (x0_12 != 0)
    var_b0:8.q = x0_12
    Botan::deallocate_memory(x0_12, var_a0.q - x0_12, 1)

if (&var_e0 == var_c0)
    (*(*var_c0 + 0x20))()
else if (var_c0 != 0)
    (*(*var_c0 + 0x28))()

uint64_t result = result_1

if (result != 0)
    uint64_t result_2 = result
    result = operator delete(result)

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
