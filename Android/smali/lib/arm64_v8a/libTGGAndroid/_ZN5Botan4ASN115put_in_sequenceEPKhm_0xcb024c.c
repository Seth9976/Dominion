// 函数: _ZN5Botan4ASN115put_in_sequenceEPKhm
// 地址: 0xcb024c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* result_1 = nullptr
int128_t var_b0
__builtin_memset(&var_b0, 0, 0x30)
uint8_t const* var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t var_78 = entry_x8
uint8_t const** var_60 = &var_80
void var_e0
sub_f2410c(&var_80, &var_e0)

if (&var_80 == var_60)
    (*(*var_60 + 0x20))()
else if (var_60 != 0)
    (*(*var_60 + 0x28))()

Botan::DER_Encoder::start_cons(&var_e0, 0x10)
int128_t var_90
int64_t x9 = var_90.q
int128_t var_a0

if (x9 != var_a0:8.q)
    Botan::DER_Encoder::DER_Sequence::add_bytes(x9 - 0x38, arg1)
else if (result_1 == 0)
    var_80 = arg1
    uint64_t var_78_1 = arg2
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_b0, &var_80)
else
    var_80 = arg1
    uint64_t var_e8 = arg2
    (*(*result_1 + 0x30))(result_1, &var_80, &var_e8)

Botan::DER_Encoder::end_cons()
void* x21_1 = var_a0:8.q

if (x21_1 != 0)
    void* x19_1 = var_90.q
    void* x0_7
    
    if (x19_1 == x21_1)
        x0_7 = x21_1
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_90:8, x19_1)
        while (x21_1 != x19_1)
        
        x0_7 = var_a0:8.q
    
    var_90.q = x21_1
    operator delete(x0_7)

void* x0_8 = var_b0.q

if (x0_8 != 0)
    var_b0:8.q = x0_8
    Botan::deallocate_memory(x0_8, var_a0.q - x0_8, 1)

int64_t* result = result_1

if (&var_e0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
