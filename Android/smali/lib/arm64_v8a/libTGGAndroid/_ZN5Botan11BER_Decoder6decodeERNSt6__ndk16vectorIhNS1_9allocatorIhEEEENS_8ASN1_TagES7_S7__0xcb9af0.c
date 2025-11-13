// 函数: _ZN5Botan11BER_Decoder6decodeERNSt6__ndk16vectorIhNS1_9allocatorIhEEEENS_8ASN1_TagES7_S7_
// 地址: 0xcb9af0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_a0

if (arg3 - 3 u>= 2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_12 = __cxa_allocate_exception(0x20)
    int64_t x0_13
    int128_t v0
    x0_13, v0 = operator new(0x20)
    int64_t var_90_2 = x0_13
    var_a0 = data_71c370
    __builtin_strncpy(x0_13, "Bad tag for {BIT,OCTET} STRING", 0x1f)
    Botan::BER_Bad_Tag::BER_Bad_Tag(x0_12, &var_a0)
    __cxa_throw(x0_12, _typeinfo_for_Botan::BER_Bad_Tag, Botan::Exception::~Exception)
    noreturn

uint8_t* x20 = arg2
Botan::BER_Decoder::get_next_object()
char var_68 = 0xc
int32_t var_67
__builtin_strncpy(&var_67, "object", 7)
int32_t entry_x4
Botan::BER_Object::assert_is_a(&var_a0, zx.q(arg4), zx.q(entry_x4))
void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

int64_t var_88

if (arg3 != 4)
    char* x9_1 = var_a0:8.q
    int64_t var_90
    char var_80
    
    if (var_90 == x9_1)
        void** x0_16 = __cxa_allocate_exception(0x20)
        __builtin_strncpy(&var_80, "$Invalid BIT STRING", 0x14)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_80)
        *x0_16 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_16[1])
        *x0_16 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_68) & 1) != 0)
            operator delete(var_58)
        
        *x0_16 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_16, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int128_t var_7f
    
    if (zx.d(*x9_1) u>= 8)
        void** x0_21 = __cxa_allocate_exception(0x20)
        int64_t x0_22
        int128_t v0_1
        x0_22, v0_1 = operator new(0x30)
        var_7f:0xf.q = x0_22
        var_80.o = data_71c500
        __builtin_strncpy(x0_22, "Bad number of unused bits in BIT STRING", 0x28)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_80)
        *x0_21 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_21[1])
        *x0_21 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_68) & 1) != 0)
            operator delete(var_58)
        
        *x0_21 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_21, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* x21_1 = *x20
    void* x0_3 = *(x20 + 8)
    void* x22_1 = x0_3 - x21_1
    void* x23_1 = var_90 - x9_1 - 1 - x22_1
    
    if (var_90 - x9_1 - 1 u<= x22_1)
        if (var_90 - x9_1 - 1 u< x22_1)
            *(x20 + 8) = x21_1 + var_90 - x9_1 - 1
        
        goto label_cb9c78
    
    int64_t x8_4 = *(x20 + 0x10)
    
    if (x8_4 - x0_3 u< x23_1)
        if (((var_90 - x9_1 - 1) & 0xffffffff80000000) != 0)
            goto label_cb9ee8
        
        void* x8_5 = x8_4 - x21_1
        int64_t x10_1 = x8_5 << 1
        int64_t x10_2
        
        if (x10_1 u< var_90 - x9_1 - 1)
            x10_2 = var_90 - x9_1 - 1
        else
            x10_2 = x10_1
        
        int64_t x25_1
        
        x25_1 = x8_5 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
        
        void* const x24_1
        
        if (x25_1 == 0)
            x24_1 = nullptr
        else
            x24_1 = operator new(x25_1)
        
        memset(x24_1 + x22_1, 0, x23_1)
        
        if (x22_1 s>= 1)
            memcpy(x24_1, x21_1, x22_1)
        
        *x20 = x24_1
        *(x20 + 8) = x24_1 + var_90 - x9_1 - 1
        *(x20 + 0x10) = x24_1 + x25_1
        
        if (x21_1 != 0)
            operator delete(x21_1)
        
        goto label_cb9c78
    
    if (x23_1 != 0)
        memset(x0_3, 0, x23_1)
        x0_3 += x23_1
    
    *(x20 + 8) = x0_3
label_cb9c78:
    int64_t x8_7 = var_a0:8.q
    int64_t x9_5 = var_90 - x8_7
    
    if (x9_5 u>= 2)
        int64_t x0_9 = *x20
        
        if (x0_9 == 0)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        label_cb9ee8:
            int64_t* x0_28 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::exception::~exception()
            
            if ((zx.d(var_68) & 1) != 0)
                operator delete(var_58)
            
            if ((zx.d(var_80) & 1) != 0)
                operator delete(var_7f:0xf.q)
            
            __cxa_free_exception(x20)
            void* x0_33 = var_a0:8.q
            
            if (x0_33 != 0)
                void* var_90_3 = x0_33
                Botan::deallocate_memory(x0_33, var_88 - x0_33, 1)
            
            sub_1101e04(x0_28)
            noreturn
        
        memmove(x0_9, x8_7 + 1, x9_5 - 1)
else
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t const*>(x20, 
        var_a0:8.q)

void* x0_10 = var_a0:8.q

if (x0_10 != 0)
    void* var_90_1 = x0_10
    Botan::deallocate_memory(x0_10, var_88 - x0_10, 1)

return arg1
