// 函数: sub_e05eb8
// 地址: 0xe05eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x23 = *arg2
int64_t** var_b8 = arg1
void* x9 = arg2[1] - x23
int128_t var_90
char var_78
void* var_68

if (x9 u<= 7)
    void** x0_25 = __cxa_allocate_exception(0x20)
    int64_t x0_26
    int128_t v0_4
    x0_26, v0_4 = operator new(0x30)
    int64_t var_80_3 = x0_26
    var_90 = data_71b5b0
    __builtin_strncpy(x0_26, "Map length is under minimum of 8 bytes", 0x27)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Roughtime ", &var_90)
    *x0_25 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_25[1])
    *x0_25 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_25 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
    __cxa_throw(x0_25, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
        Botan::Exception::~Exception)
    noreturn

uint64_t x8_1 = zx.q(*x23)
uint64_t x24 = x8_1 << 3

if (x9 u< x24)
    void** x0_31 = __cxa_allocate_exception(0x20)
    int64_t x0_32
    int128_t v0_5
    x0_32, v0_5 = operator new(0x30)
    int64_t var_80_4 = x0_32
    var_90 = data_71aa70
    __builtin_strncpy(x0_32, "Map length too small to contain all tags", 0x29)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Roughtime ", &var_90)
    *x0_31 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_31[1])
    *x0_31 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_31 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
    __cxa_throw(x0_31, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
        Botan::Exception::~Exception)
    noreturn

var_b8[1] = 0
var_b8[2] = 0
*var_b8 = &var_b8[1]

if (x8_1.d == 0)
    return 

uint64_t x26_1 = x8_1 << 2
int64_t x25_1 = 0
void* x28_1 = &x23[x26_1]
int32_t x21_1 = x24.d

while (true)
    uint64_t fp_1
    
    if (x26_1 - 4 != x25_1)
        fp_1 = zx.q(sub_f48448(&x23[x25_1 + 4], 3) + x24.d)
        
        if (arg2[1] - *arg2 u>= fp_1)
            goto label_e05f60
    else
        fp_1 = arg2[1] - *arg2
    label_e05f60:
        uint64_t x8_6 = zx.q(x21_1)
        
        if (fp_1 u< x8_6)
            void** x0_5 = __cxa_allocate_exception(0x20)
            int64_t x0_6
            int128_t v0
            x0_6, v0 = operator new(0x40)
            int64_t var_80 = x0_6
            var_90 = data_71b3f0
            __builtin_strncpy(x0_6, "Tag offset must be more than previous tag offset", 0x31)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_90)
            *x0_5 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_5[1])
            *x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
            
            *x0_5 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_5, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        void* x10_1 = x28_1 + x25_1
        void* x21_2 = &x23[x8_6]
        void* x8_7 = &x23[fp_1]
        char var_98_1 = *(x28_1 + x25_1)
        void* x22_1 = x8_7 - x21_2
        char var_97_1 = *(x10_1 + 1)
        char var_96_1 = *(x10_1 + 2)
        char x8_8 = *(x10_1 + 3)
        char var_94_1 = 0
        __builtin_memset(&var_78, 0, 0x18)
        char var_95_1 = x8_8
        
        if (x8_7 == x21_2)
            goto label_e05fe0
        
        if ((x22_1 & 0xffffffff80000000) != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else
            void* x0_3 = operator new(x22_1)
            void* x19_1 = x0_3 + x22_1
            var_78.q = x0_3
            void* var_70_1 = x0_3
            var_68 = x19_1
            memcpy(x0_3, x21_2, x22_1)
            void* var_70_2 = x19_1
        label_e05fe0:
            int32_t x1_1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::__emplace_unique_impl<char const (&)[0x5], std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >(
                var_b8)
            arg1 = var_78.q
            
            if (arg1 != 0)
                int64_t** var_70_3 = arg1
                operator delete(arg1)
            
            if ((x1_1 & 1) != 0)
                x25_1 += 4
                x21_1 = fp_1.d
                
                if (x26_1 == x25_1)
                    break
                
                continue
            
            void** x0_11 = __cxa_allocate_exception(0x20)
            int64_t x0_12
            int128_t v0_1
            x0_12, v0_1 = operator new(0x20)
            int64_t var_a0 = x0_12
            int128_t var_b0 = data_71af80
            __builtin_strncpy(x0_12, "Map has duplicated tag: ", 0x19)
            int128_t* x0_14
            int128_t v0_2
            x0_14, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_b0)
            int64_t var_80_1 = x0_14[1].q
            var_90 = *x0_14
            __builtin_memset(x0_14, 0, 0x18)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Roughtime ", &var_90)
            *x0_11 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_11[1])
            *x0_11 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
            
            *x0_11 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
            __cxa_throw(x0_11, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
                Botan::Exception::~Exception)
            noreturn
    void** x0_19 = __cxa_allocate_exception(0x20)
    int64_t x0_20
    int128_t v0_3
    x0_20, v0_3 = operator new(0x20)
    int64_t var_80_2 = x0_20
    var_90 = data_71abe0
    __builtin_strncpy(x0_20, "Tag end index out of bounds", 0x1c)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Roughtime ", &var_90)
    *x0_19 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_19[1])
    *x0_19 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_19 = _vtable_for_Botan::Roughtime::Roughtime_Error + 0x10
    __cxa_throw(x0_19, _typeinfo_for_Botan::Roughtime::Roughtime_Error, 
        Botan::Exception::~Exception)
    noreturn
