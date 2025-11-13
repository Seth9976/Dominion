// 函数: _ZN5Botan14Cert_Extension9Key_Usage12decode_innerERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xeb0b18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_70
Botan::BER_Decoder::BER_Decoder(&var_70)
Botan::BER_Decoder::get_next_object()
char var_38
__builtin_strncpy(&var_38, " usage constraint", 0x12)
void var_90
Botan::BER_Object::assert_is_a(&var_90, 3, nullptr)
int128_t var_37

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_37:0xf.q)

char* var_88
int64_t var_80
void* x8_2 = var_80 - var_88
int128_t var_b0
int32_t x8_6

if (x8_2 != 2)
    if (x8_2 != 3)
        void** x0_12 = __cxa_allocate_exception(0x20)
        int64_t x0_13
        int128_t v0_1
        x0_13, v0_1 = operator new(0x30)
        int64_t var_a0_1 = x0_13
        var_b0 = data_71c1e0
        __builtin_strncpy(x0_13, "Bad size for BITSTRING in usage constraint", 0x2b)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_b0)
        *x0_12 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_12[1])
        *x0_12 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_38) & 1) != 0)
            operator delete(var_37:0xf.q)
        
        *x0_12 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_12, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    uint32_t x8_3 = zx.d(*var_88)
    
    if (x8_3 u>= 8)
        goto label_eb0c34
    
    x8_6 = (0xffff00ff & 0xff << x8_3 & zx.d(var_88[2])) | zx.d(var_88[1]) << 8
    goto label_eb0bdc

uint32_t x8_7 = zx.d(*var_88)

if (x8_7 u<= 7)
    x8_6 = (0xff << x8_7 & zx.d(var_88[1])) << 8
label_eb0bdc:
    *(arg1 + 8) = x8_6
    char* var_80_1 = var_88
    int64_t var_78
    Botan::deallocate_memory(var_88, var_78 - var_88, 1)
    int64_t* var_40
    
    if (var_40 != 0)
        (*(*var_40 + 0x38))()
    
    void* result
    
    if (result == 0)
        return result
    
    int64_t var_50
    return Botan::deallocate_memory(result, var_50 - result, 1)

label_eb0c34:
void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0
x0_7, v0 = operator new(0x30)
int64_t var_a0 = x0_7
var_b0 = data_71c500
__builtin_strncpy(x0_7, "Invalid unused bits in usage constraint", 0x28)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "BER: ", &var_b0)
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_37:0xf.q)

*x0_6 = _vtable_for_Botan::BER_Decoding_Error + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
noreturn
