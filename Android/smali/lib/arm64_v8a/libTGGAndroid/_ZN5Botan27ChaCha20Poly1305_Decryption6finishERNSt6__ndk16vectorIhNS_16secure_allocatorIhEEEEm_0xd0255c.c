// 函数: _ZN5Botan27ChaCha20Poly1305_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xd0255c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
void* x8_1 = *arg2
void* x24 = *(arg2 + 8) - x8_1
int64_t entry_x2
void* x9_1 = x24 - entry_x2
char var_60

if (x24 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x5529)
    Botan::assertion_failure("sz >= tag_size()", "Have the tag as part of final input", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x552d)
else if (x9_1 u<= 0xf)
    Botan::assertion_failure("sz >= tag_size()", "Have the tag as part of final input", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x552d)
else
    void* x21_1 = x8_1 + entry_x2
    
    if (x9_1 != 0x10)
        int64_t* x0 = *(arg1 + 0x10)
        (*(*x0 + 0x18))(x0, x21_1, x9_1 - 0x10)
        int64_t* x0_1 = *(arg1 + 8)
        (*(*x0_1 + 0x30))(x0_1, x21_1, x21_1, x9_1 - 0x10)
        *(arg1 + 0x38) += x9_1 - 0x10
    
    int64_t x8_8 = *(arg1 + 0x30)
    
    if (x8_8 == 0x18 || x8_8 == 0xc)
        int64_t x8_10 = *(arg1 + 0x38) & 0xf
        
        if (x8_10 != 0)
            var_60.q = 0
            int64_t var_58_1 = 0
            int64_t* x0_2 = *(arg1 + 0x10)
            (*(*x0_2 + 0x18))(x0_2, &var_60, 0x10 - x8_10)
        
        var_60.q = *(arg1 + 0x20) - *(arg1 + 0x18)
        int64_t* x0_3 = *(arg1 + 0x10)
        (*(*x0_3 + 0x18))(x0_3, &var_60, 8)
    
    var_60.q = *(arg1 + 0x38)
    int64_t* x0_4 = *(arg1 + 0x10)
    (*(*x0_4 + 0x18))(x0_4, &var_60, 8)
    int64_t* x0_5 = *(arg1 + 0x10)
    char var_70
    int64_t result = (*(*x0_5 + 0x20))(x0_5, &var_70)
    char* x8_20 = x21_1 + x9_1 - 0x10
    *(arg1 + 0x30) = 0
    *(arg1 + 0x38) = 0
    var_60 = 0
    var_60 |= *x8_20 ^ var_70
    char var_6f
    var_60 |= x8_20[1] ^ var_6f
    char var_6e
    var_60 |= x8_20[2] ^ var_6e
    char var_6d
    var_60 |= x8_20[3] ^ var_6d
    char var_6c
    var_60 |= x8_20[4] ^ var_6c
    char var_6b
    var_60 |= x8_20[5] ^ var_6b
    char var_6a
    var_60 |= x8_20[6] ^ var_6a
    char var_69
    var_60 |= x8_20[7] ^ var_69
    char var_68
    var_60 |= x8_20[8] ^ var_68
    char var_67
    var_60 |= x8_20[9] ^ var_67
    char var_66
    var_60 |= x8_20[0xa] ^ var_66
    char var_65
    var_60 |= x8_20[0xb] ^ var_65
    char var_64
    var_60 |= x8_20[0xc] ^ var_64
    char var_63
    var_60 |= x8_20[0xd] ^ var_63
    char var_62
    var_60 |= x8_20[0xe] ^ var_62
    char var_61
    var_60 |= x8_20[0xf] ^ var_61
    uint32_t x8_24 = zx.d(var_60)
    
    if (((x8_24 - 1) & not.d(x8_24) & 0x80) != 0)
        void* x8_26 = *arg2
        void* x10_18 = *(arg2 + 8) - x8_26
        
        if (x24 - 0x10 u> x10_18)
            result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
        else if (x24 - 0x10 u< x10_18)
            *(arg2 + 8) = x8_26 + x24 - 0x10
        
        if (*(x23 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

void** x0_7 = __cxa_allocate_exception(0x20)
int64_t x0_8
int128_t v0
x0_8, v0 = operator new(0x30)
int64_t var_80 = x0_8
int128_t var_90 = data_71c510
__builtin_strncpy(x0_8, "ChaCha20Poly1305 tag check failed", 0x22)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid authentication tag: ", &var_90)
*x0_7 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_7[1])
void* var_50

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)
*x0_7 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
__cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_Authentication_Tag, Botan::Exception::~Exception)
noreturn
