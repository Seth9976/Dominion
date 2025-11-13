// 函数: _ZN5Botan23RFC6979_Nonce_GeneratorC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_6BigIntESC_
// 地址: 0xe01678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = arg3
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 8) = 0
*(arg1 + 0x20) = -1
*(arg1 + 0x28) = 1
int64_t x0_1 = Botan::BigInt::bits()
uint64_t x8 = x0_1 u>> 3
*(arg1 + 0x40) = zx.o(0)
uint64_t x8_1

if ((x0_1 & 7) != 0)
    x8_1 = x8 + 1
else
    x8_1 = x8

*(arg1 + 0x30) = x0_1
*(arg1 + 0x38) = x8_1
*(arg1 + 0x50) = zx.o(0)

if (x8_1 == 0)
    __builtin_memset(arg1 + 0x60, 0, 0x18)
else
    uint64_t x21_1 = x8_1 << 1
    int64_t x0_3 = Botan::allocate_memory(x21_1, 1)
    int64_t x26_1 = x0_3 + x21_1
    *(arg1 + 0x48) = x0_3
    *(arg1 + 0x58) = x26_1
    memset(x0_3, 0, x21_1)
    *(arg1 + 0x60) = 0
    uint64_t x23_1 = *(arg1 + 0x38)
    *(arg1 + 0x50) = x26_1
    *(arg1 + 0x68) = 0
    *(arg1 + 0x70) = 0
    
    if (x23_1 != 0)
        if ((x23_1 & 0xffffffff80000000) != 0)
            sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
            noreturn
        
        int64_t x0_5 = Botan::allocate_memory(x23_1, 1)
        int64_t x21_4 = x0_5 + x23_1
        *(arg1 + 0x60) = x0_5
        *(arg1 + 0x70) = x21_4
        memset(x0_5, 0, x23_1)
        *(arg1 + 0x68) = x21_4

int64_t x0_6 = operator new(0x88)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "HMAC(", arg2)
char var_88[0x10]
int128_t* x0_8
int128_t v0
x0_8, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_88)
void* x8_2 = x0_8[1].q
int128_t var_70 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
int16_t var_a0 = 0
Botan::MessageAuthenticationCode::create(&var_70, &var_a0)
Botan::HMAC_DRBG::HMAC_DRBG(x0_6)
void** x22_1 = *(arg1 + 0x40)
*(arg1 + 0x40) = x0_6

if (x22_1 != 0)
    void* x0_11 = x22_1[0xc]
    *x22_1 = _vtable_for_Botan::HMAC_DRBG + 0x10
    
    if (x0_11 != 0)
        int64_t x8_4 = x22_1[0xe]
        x22_1[0xd] = x0_11
        Botan::deallocate_memory(x0_11, x8_4 - x0_11, 1)
    
    int64_t* x0_12 = x22_1[0xb]
    x22_1[0xb] = 0
    
    if (x0_12 != 0)
        (*(*x0_12 + 0x10))()
    
    *x22_1 = _vtable_for_Botan::Stateful_RNG + 0x10
    std::__ndk1::recursive_mutex::~recursive_mutex()
    operator delete(x22_1)

int64_t var_48_1 = 0
int64_t* var_48

if (var_48 != 0)
    (*(*var_48 + 0x10))()

if ((zx.d(var_a0.b) & 1) == 0)
    if ((zx.d(var_70.b) & 1) != 0)
        goto label_e018b0
    
    goto label_e01864

void* var_90
operator delete(var_90)
void* var_78

if ((zx.d(var_70.b) & 1) == 0)
label_e01864:
    
    if ((zx.d(var_88[0]) & 1) != 0)
        operator delete(var_78)
else
label_e018b0:
    operator delete(x8_2)
    
    if ((zx.d(var_88[0]) & 1) != 0)
        operator delete(var_78)
Botan::BigInt* entry_x3
return Botan::BigInt::encode_1363(*(arg1 + 0x48), *(arg1 + 0x38), entry_x3)
