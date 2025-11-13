// 函数: _ZN5Botan14XMSS_PublicKeyC2ERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xecd13c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = entry_x1[1]
Botan::XMSS_PublicKey::deserialize_xmss_oid(sub_ed178c(arg1 + 8))
Botan::XMSS_Parameters::XMSS_Parameters(arg1 + 0x20)
*(arg1 + 0x24)
int128_t* result
int128_t v0
result, v0 = Botan::XMSS_WOTS_Parameters::XMSS_WOTS_Parameters(arg1 + 0x80)
v0.q = 0
v0:8.q = 0
__builtin_memset(arg1 + 0xf0, 0, 0x30)
uint64_t x22 = *(arg1 + 0x58)
int128_t var_80

if (*(arg1 + 0x10) - *(arg1 + 8) u< (x22 << 1) + 4)
    void** x0_12 = __cxa_allocate_exception(0x20, v0)
    int64_t x0_13
    int128_t v0_1
    x0_13, v0_1 = operator new(0x30)
    v0_1 = data_71b5a0
    int64_t var_70 = x0_13
    __builtin_strncpy(x0_13, "Invalid XMSS public key size detected", 0x26)
    var_80 = v0_1
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    *x0_12 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

*(arg1 + 0xf8) = 0

if (x22 != 0)
    result = Botan::allocate_memory(x22, 1)
    void* x21_1 = *(arg1 + 0xf0)
    int128_t* result_1 = result
    void* x24_1 = result + x22
    size_t x2_1 = *(arg1 + 0xf8) - x21_1
    void* x22_1 = result - x2_1
    
    if (x2_1 s>= 1)
        result = memcpy(x22_1, x21_1, x2_1)
    
    int64_t x8_5 = *(arg1 + 0x100)
    *(arg1 + 0xf0) = x22_1
    *(arg1 + 0xf8) = result_1
    *(arg1 + 0x100) = x24_1
    
    if (x21_1 != 0)
        result = Botan::deallocate_memory(x21_1, x8_5 - x21_1, 1)

void* i_4 = *(arg1 + 0x58)
void* x28 = *(arg1 + 8)
var_80.q = arg1 + 0xf0
uint64_t i_2

if (i_4 == 0)
    i_2 = 0
else
    char* x21_2 = x28 + 4
    void* i_3 = i_4
    void* i
    
    do
        result = &var_80
        sub_f4a08c(result, x21_2)
        i = i_3
        i_3 -= 1
        x21_2 = &x21_2[1]
    while (i != 1)
    i_2 = *(arg1 + 0x58)

int64_t x8_6 = *(arg1 + 0x108)
int64_t x9_4 = *(arg1 + 0x118)
*(arg1 + 0x110) = x8_6

if (x9_4 - x8_6 u>= i_2)
    var_80.q = arg1 + 0x108
    
    if (i_2 != 0)
    label_ecd2e8:
        void* x22_3 = i_4 + x28 + 4
        uint64_t i_1
        
        do
            result = &var_80
            sub_f4a08c(result, x22_3)
            i_1 = i_2
            i_2 -= 1
            x22_3 += 1
        while (i_1 != 1)
    
    return result

int64_t x0_9 = Botan::allocate_memory(i_2, 1)
void* x22_2 = *(arg1 + 0x108)
size_t x2_2 = *(arg1 + 0x110) - x22_2
int64_t x24_2 = x0_9 - x2_2

if (x2_2 s>= 1)
    memcpy(x24_2, x22_2, x2_2)

int64_t x8_8 = *(arg1 + 0x118)
*(arg1 + 0x108) = x24_2
*(arg1 + 0x110) = x0_9
*(arg1 + 0x118) = x0_9 + i_2

if (x22_2 != 0)
    Botan::deallocate_memory(x22_2, x8_8 - x22_2, 1)

var_80.q = arg1 + 0x108
goto label_ecd2e8
