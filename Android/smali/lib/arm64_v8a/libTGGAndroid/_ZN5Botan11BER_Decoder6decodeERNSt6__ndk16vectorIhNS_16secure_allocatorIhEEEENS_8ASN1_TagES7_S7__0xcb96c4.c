// 函数: _ZN5Botan11BER_Decoder6decodeERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEENS_8ASN1_TagES7_S7_
// 地址: 0xcb96c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80

if (arg3 - 3 u>= 2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v0
    x0_8, v0 = operator new(0x20)
    int64_t var_70_2 = x0_8
    var_80 = data_71c370
    __builtin_strncpy(x0_8, "Bad tag for {BIT,OCTET} STRING", 0x1f)
    Botan::BER_Bad_Tag::BER_Bad_Tag(x0_7, &var_80)
    __cxa_throw(x0_7, _typeinfo_for_Botan::BER_Bad_Tag, Botan::Exception::~Exception)
    noreturn

uint8_t* x20 = arg2
Botan::BER_Decoder::get_next_object()
char var_48 = 0xc
int32_t var_47
__builtin_strncpy(&var_47, "object", 7)
int32_t entry_x4
Botan::BER_Object::assert_is_a(&var_80, zx.q(arg4), zx.q(entry_x4))
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

int64_t var_68

if (arg3 != 4)
    char* x8_2 = var_80:8.q
    int64_t var_70
    void* x9_2 = var_70 - x8_2
    char var_60
    
    if (var_70 == x8_2)
        void** x0_11 = __cxa_allocate_exception(0x20)
        __builtin_strncpy(&var_60, "$Invalid BIT STRING", 0x14)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_60)
        *x0_11 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_11[1])
        *x0_11 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        *x0_11 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_11, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int128_t var_5f
    
    if (zx.d(*x8_2) u>= 8)
        void** x0_16 = __cxa_allocate_exception(0x20)
        int64_t x0_17
        int128_t v0_1
        x0_17, v0_1 = operator new(0x30)
        var_5f:0xf.q = x0_17
        var_60.o = data_71c500
        __builtin_strncpy(x0_17, "Bad number of unused bits in BIT STRING", 0x28)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_60)
        *x0_16 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_16[1])
        *x0_16 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        *x0_16 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_16, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* x10_2 = *x20
    void* x12_2 = *(x20 + 8) - x10_2
    
    if (x9_2 - 1 u> x12_2)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x20)
        x8_2 = var_80:8.q
        x9_2 = var_70 - x8_2
    else if (x9_2 - 1 u< x12_2)
        *(x20 + 8) = x10_2 + x9_2 - 1
    
    if (x9_2 u>= 2)
        int64_t x0_4 = *x20
        
        if (x0_4 == 0)
            int64_t* x0_22 = Botan::assertion_failure(
                "n > 0 implies in != nullptr && out != nullptr", "If n > 0 then args are not null", 
                "copy_mem", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            std::exception::~exception()
            
            if ((zx.d(var_48) & 1) != 0)
                operator delete(var_38)
            
            if ((zx.d(var_60) & 1) != 0)
                operator delete(var_5f:0xf.q)
            
            __cxa_free_exception(x20)
            void* x0_27 = var_80:8.q
            
            if (x0_27 != 0)
                void* var_70_3 = x0_27
                Botan::deallocate_memory(x0_27, var_68 - x0_27, 1)
            
            sub_1101e04(x0_22)
            noreturn
        
        memmove(x0_4, &x8_2[1], x9_2 - 1)
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(x20, 
        var_80:8.q)

void* x0_5 = var_80:8.q

if (x0_5 != 0)
    void* var_70_1 = x0_5
    Botan::deallocate_memory(x0_5, var_68 - x0_5, 1)

return arg1
