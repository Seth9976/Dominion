// 函数: _ZNK5Botan16X509_Certificate21raw_subject_dn_sha256Ev
// 地址: 0xcf7484
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::X509_Certificate::data()
int128_t var_60
char var_48
void* var_38

if (*(x0 + 0x310) == *(x0 + 0x318))
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0
    x0_4, v0 = operator new(0x50)
    var_60 = data_71b0d0
    int64_t var_50_1 = x0_4
    __builtin_strncpy(x0_4, 
        "X509_Certificate::raw_subject_dn_sha256 called but SHA-256 disabled in build", 0x4d)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_60)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_48) & 1) != 0)
        operator delete(var_38)
    
    *x0_3 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

void* result = Botan::X509_Certificate::data()
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x8_1 = *(result + 0x318)
int64_t x9_1 = *(result + 0x310)
uint64_t x22 = x8_1 - x9_1

if (x8_1 != x9_1)
    if ((x22 & 0xffffffff80000000) != 0)
        int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::exception::~exception()
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        void* var_50
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
        __cxa_free_exception(entry_x8)
        sub_1101e04(x0_10)
        noreturn
    
    void* result_1 = result
    result = operator new(x22)
    *entry_x8 = result
    entry_x8[1] = result
    entry_x8[2] = result + x22
    int64_t x1_1 = *(result_1 + 0x310)
    void* __saved_x0_1 = result
    size_t x21_1 = *(result_1 + 0x318) - x1_1
    
    if (x21_1 s>= 1)
        result = memcpy(__saved_x0_1, x1_1, x21_1)
        __saved_x0_1 += x21_1
    
    entry_x8[1] = __saved_x0_1

return result
