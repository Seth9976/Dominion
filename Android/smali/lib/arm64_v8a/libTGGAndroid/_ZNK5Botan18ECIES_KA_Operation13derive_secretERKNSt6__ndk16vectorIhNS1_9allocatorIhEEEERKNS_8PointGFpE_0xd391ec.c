// 函数: _ZNK5Botan18ECIES_KA_Operation13derive_secretERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEERKNS_8PointGFpE
// 地址: 0xd391ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x2
int64_t x9 = *(entry_x2 + 0x78)

if (x9 == -1)
    int64_t x8 = *(entry_x2 + 0x60)
    int64_t x11_1 = *(entry_x2 + 0x68)
    int64_t x10_1 = x11_1 - x8
    
    if (x11_1 == x8)
        x9 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x8 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x9 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x8 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x9 -= x11_3
        while (i != 1)
    
    *(entry_x2 + 0x78) = x9

int128_t var_d0

if (x9 == 0)
    void** x0_26 = __cxa_allocate_exception(0x20)
    int64_t x0_27
    int128_t v0
    x0_27, v0 = operator new(0x30)
    v0 = data_71b5a0
    int64_t var_c0_1 = x0_27
    __builtin_strncpy(x0_27, "ECIES: other public key point is zero", 0x26)
    var_d0 = v0
    *x0_26 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_26[1])
    *x0_26 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_26, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

var_d0.w = 0
Botan::KDF::create_or_throw(arg1 + 0x20, &var_d0)
void* var_c0

if ((zx.d(var_d0.b) & 1) != 0)
    operator delete(var_c0)

Botan::PointGFp::PointGFp(&var_d0)
int32_t x8_3 = *(arg1 + 0x44)

if ((x8_3 & 4) != 0)
    Botan::EC_Group::data()
    Botan::PointGFp::operator*=(&var_d0)
    x8_3 = *(arg1 + 0x44)

uint64_t var_e8
__builtin_memset(&var_e8, 0, 0x18)

if ((x8_3 & 1) == 0)
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, std::__ndk1::allocator<uint8_t> >(
        &var_e8, arg2)

*(arg1 + 0x40)
Botan::PointGFp::encode(&var_d0)
Botan::EC_Group::data()
int64_t x0_11 = Botan::BigInt::bits()
int64_t x8_6

if ((x0_11 & 7) == 0)
    x8_6 = 0
else
    x8_6 = 8 - (x0_11 & 7)

int16_t var_130 = 0
uint64_t var_100
int64_t var_f8
Botan::PK_Key_Agreement::derive_key(arg1, (x8_6 + x0_11) u>> 3, var_100, var_f8 - var_100, 
    &var_130 | 1)
void* var_120

if ((zx.d(var_130.b) & 1) != 0)
    operator delete(var_120)

uint8_t* var_118
uint8_t* var_e0
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t const*>(&var_e8, 
    var_e0, var_118)
uint8_t* x1_7 = *(arg1 + 0x38)
uint64_t x2_2 = var_e8
int16_t var_148 = 0
int16_t var_160 = 0
uint64_t result
Botan::KDF::derive_key(result, x1_7, x2_2, var_e0 - x2_2, &var_148 | 1, nullptr, &var_160 | 1)
void* x21_1 = var_130.q
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t var_128
void* x23 = var_128 - x21_1

if (var_128 != x21_1)
    if ((x23 & 0xffffffff80000000) != 0)
        int64_t* x0_32 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_d0.b) & 1) != 0)
            operator delete(var_c0)
        
        sub_1101e04(x0_32)
        noreturn
    
    void* x0_17 = Botan::allocate_memory(x23, 1)
    x21_1 = var_130.q
    void* x22_1 = x0_17
    *entry_x8 = x0_17
    entry_x8[1] = x0_17
    size_t x23_1 = var_128 - x21_1
    entry_x8[2] = x0_17 + x23
    
    if (x23_1 s>= 1)
        memcpy(x22_1, x21_1, x23_1)
        x22_1 += x23_1
    
    entry_x8[1] = x22_1

if (x21_1 != 0)
    void* var_128_1 = x21_1
    Botan::deallocate_memory(x21_1, var_120 - x21_1, 1)

if ((zx.d(var_160.b) & 1) == 0)
    if ((zx.d(var_148.b) & 1) != 0)
        goto label_d39450
    
    goto label_d39430

void* var_150
operator delete(var_150)
uint8_t* var_110_1
int64_t var_108

if ((zx.d(var_148.b) & 1) == 0)
label_d39430:
    
    if (var_118 != 0)
        var_110_1 = var_118
        Botan::deallocate_memory(var_118, var_108 - var_118, 1)
else
label_d39450:
    void* var_138
    operator delete(var_138)
    
    if (var_118 != 0)
        var_110_1 = var_118
        Botan::deallocate_memory(var_118, var_108 - var_118, 1)

if (var_100 != 0)
    operator delete(var_100)

uint64_t x0_24 = var_e8

if (x0_24 != 0)
    uint64_t var_e0_1 = x0_24
    int64_t var_d8
    Botan::deallocate_memory(x0_24, var_d8 - x0_24, 1)

Botan::PointGFp::~PointGFp()
int64_t var_38 = 0

if (result == 0)
    return result

return (*(*result + 8))()
