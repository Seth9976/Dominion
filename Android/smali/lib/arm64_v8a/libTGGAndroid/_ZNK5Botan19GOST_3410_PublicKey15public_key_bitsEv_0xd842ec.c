// 函数: _ZNK5Botan19GOST_3410_PublicKey15public_key_bitsEv
// 地址: 0xd842ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t* entry_x0
*(*entry_x0 - 0x88)
Botan::PointGFp::get_affine_x()
*(*entry_x0 - 0x88)
Botan::PointGFp::get_affine_y()
int64_t x0_2 = Botan::BigInt::bits()
int64_t x0_3 = Botan::BigInt::bits()
int64_t x8_9

if ((x0_3 & 7) == 0)
    x8_9 = 0
else
    x8_9 = 8 - (x0_3 & 7)

int64_t x9_1

if ((x0_2 & 7) == 0)
    x9_1 = 0
else
    x9_1 = 8 - (x0_2 & 7)

uint64_t x9_3 = (x9_1 + x0_2) u>> 3
uint64_t x8_11 = (x8_9 + x0_3) u>> 3
uint64_t x25

x25 = x9_3 u< x8_11 ? x8_11 : x9_3

uint64_t x21 = x25 << 1
char* x19_2

if (x25 == 0)
    x19_2 = nullptr
else
    char* x0_5 = operator new(x21)
    x19_2 = x0_5
    memset(x0_5, 0, x21)

int64_t x0_6 = Botan::BigInt::bits()
int64_t x0_7 = Botan::BigInt::bits()
int64_t x8_14

if ((x0_7 & 7) == 0)
    x8_14 = 0
else
    x8_14 = 8 - (x0_7 & 7)

int64_t x12 = x8_14 + x0_7
int64_t x8_15

if ((x0_6 & 7) == 0)
    x8_15 = 0
else
    x8_15 = 8 - (x0_6 & 7)

uint64_t x9_5 = x12 u>> 5
uint64_t x10_2 = (x8_15 + x0_6) u>> 3
uint64_t x8_17 = x12 u>> 3 & 3
void* result_1
int64_t var_110

if (x9_5 != 0)
    int64_t x11_1 = 0
    int32_t* x14_2 = &x19_2[x25 + (x12 u>> 3) - x10_2] - 4
    
    do
        int32_t x15_2
        
        if ((var_110 - result_1) s>> 2 u> x11_1)
            x15_2 = *(result_1 + (x11_1 << 2))
        else
            x15_2 = 0
        
        x11_1 += 1
        *x14_2 = _byteswap(x15_2)
        x14_2 = &x14_2[-1]
    while (x9_5 != x11_1)

if (x8_17 != 0)
    int32_t x9_6
    
    if (x9_5 u>= (var_110 - result_1) s>> 2)
        x9_6 = 0
    else
        x9_6 = *(result_1 + (x9_5 << 2))
    
    int64_t i = x8_17 - 1
    int32_t x11_3 = 0x18
    
    do
        x19_2[x25 - x10_2 + i] = (x9_6 u>> (not.d(x11_3) & 0x18)).b
        i -= 1
        x11_3 -= 8
    while (i != -1)

int64_t x0_8 = Botan::BigInt::bits()
int64_t x0_9 = Botan::BigInt::bits()
int64_t x8_20

if ((x0_9 & 7) == 0)
    x8_20 = 0
else
    x8_20 = 8 - (x0_9 & 7)

int64_t x12_7 = x8_20 + x0_9
int64_t x8_21

if ((x0_8 & 7) == 0)
    x8_21 = 0
else
    x8_21 = 8 - (x0_8 & 7)

uint64_t x9_8 = x12_7 u>> 5
uint64_t x10_6 = (x8_21 + x0_8) u>> 3
uint64_t x8_23 = x12_7 u>> 3 & 3
void* var_140
int64_t var_138

if (x9_8 != 0)
    int64_t x11_4 = 0
    int32_t* x14_4 = &x19_2[(x12_7 u>> 3) + x21 - x10_6] - 4
    
    do
        int32_t x15_5
        
        if ((var_138 - var_140) s>> 2 u> x11_4)
            x15_5 = *(var_140 + (x11_4 << 2))
        else
            x15_5 = 0
        
        x11_4 += 1
        *x14_4 = _byteswap(x15_5)
        x14_4 = &x14_4[-1]
    while (x9_8 != x11_4)

if (x8_23 != 0)
    int32_t x9_9
    
    if (x9_8 u>= (var_138 - var_140) s>> 2)
        x9_9 = 0
    else
        x9_9 = *(var_140 + (x9_8 << 2))
    
    int64_t i_1 = x8_23 - 1
    int32_t x11_6 = 0x18
    
    do
        x19_2[x21 - x10_6 + i_1] = (x9_9 u>> (not.d(x11_6) & 0x18)).b
        i_1 -= 1
        x11_6 -= 8
    while (i_1 != -1)

uint64_t i_2 = x25 u>> 1

if (i_2 != 0)
    void* x9_10 = x19_2 - 1
    char* x10_9 = x19_2
    
    do
        char x12_14 = *x10_9
        i_2 -= 1
        *x10_9 = *(x9_10 + x25)
        *(x9_10 + x25) = x12_14
        char x12_15 = x10_9[x25]
        x10_9[x25] = *(x9_10 + x21)
        *(x9_10 + x21) = x12_15
        x10_9 = &x10_9[1]
        x9_10 -= 1
    while (i_2 != 0)

int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* var_d0 = nullptr
int64_t var_c0 = (zx.o(0)).q
int128_t var_b0
__builtin_memset(&var_b0, 0, 0x20)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t var_88 = entry_x8
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_70 = &var_90
void var_f0
sub_f2410c(&var_90, &var_f0)

if (&var_90 == var_70)
    (*var_70)->vFunc_4()
else if (var_70 != 0)
    (*var_70)->j_operator delete()

Botan::DER_Encoder::add_object(&var_f0, 4, nullptr, x19_2)
void* x22_2 = var_b0:8.q

if (x22_2 != 0)
    int128_t var_a0
    void* x20_1 = var_a0.q
    void* x0_14
    
    if (x20_1 == x22_2)
        x0_14 = x22_2
    else
        do
            x20_1 -= 0x38
            sub_f230d4(&var_a0:8, x20_1)
        while (x22_2 != x20_1)
        
        x0_14 = var_b0:8.q
    
    var_a0.q = x22_2
    operator delete(x0_14)

int64_t x0_15 = var_c0

if (x0_15 != 0)
    var_c0 = x0_15
    Botan::deallocate_memory(x0_15, var_b0.q - x0_15, 1)

if (&var_f0 == var_d0)
    (*(*var_d0 + 0x20))()
else if (var_d0 != 0)
    (*(*var_d0 + 0x28))()

if (x19_2 != 0)
    operator delete(x19_2)

if (var_140 != 0)
    void* var_138_1 = var_140
    int64_t var_130
    Botan::deallocate_memory(var_140, (var_130 - var_140) s>> 2, 4)

void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_108
    result = Botan::deallocate_memory(result, (var_108 - result) s>> 2, 4)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
