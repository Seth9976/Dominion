// 函数: _ZN5Botan11DER_Encoder21get_contents_unlockedEv
// 地址: 0xcba864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x50) != *(entry_x0 + 0x48))
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0_2
    x0_2, v0_2 = operator new(0x30)
    (*"been marked done")[0].o
    int64_t var_40_1 = x0_2
    v0_2 = data_71ce10
    __builtin_strncpy(x0_2, "DER_Encoder: Sequence hasn\'t been marked done", 0x2e)
    int128_t var_50_1 = v0_2
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void* x20 = entry_x0

if (*(entry_x0 + 0x20) != 0)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v1_2
    x0_7, v1_2 = operator new(0x40)
    v1_2 = data_71b7e0
    int64_t var_40_2 = x0_7
    __builtin_strncpy(x0_7, "DER_Encoder Cannot get contents when using output vector", 0x39)
    int128_t var_50_2 = v1_2
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

char* x22 = *(x20 + 0x30)
void* x23 = *(x20 + 0x38)
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* x21 = x23 - x22

if (x23 != x22)
    if ((x21 & 0xffffffff80000000) != 0)
        int64_t* x0_12 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        char var_50
        void* var_40
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(var_40)
        sub_1101e04(x0_12)
        noreturn
    
    int128_t v0_1
    int128_t v1_1
    entry_x0, v0_1, v1_1 = operator new(x21)
    *entry_x8 = entry_x0
    entry_x8[1] = entry_x0
    entry_x8[2] = entry_x0 + x21
    void* x9_1
    
    if (x22 == x23)
        x9_1 = entry_x0
    else
        char* x8_2
        
        if (x21 u>= 0x20)
            if (entry_x0 u< x23)
                x8_2 = x22
            
            if (entry_x0 u< x23 && x22 u< x23 + entry_x0 - x22)
                goto label_cba934
            
            void* i_2 = x21 & 0xffffffffffffffe0
            void* x11_1 = &x22[0x10]
            x9_1 = entry_x0 + i_2
            x8_2 = x22 + i_2
            void* x12_1 = entry_x0 + 0x10
            void* i_1 = i_2
            void* i
            
            do
                v0_1 = *(x11_1 - 0x10)
                v1_1 = *x11_1
                x11_1 += 0x20
                i = i_1
                i_1 -= 0x20
                *(x12_1 - 0x10) = v0_1
                *x12_1 = v1_1
                x12_1 += 0x20
            while (i != 0x20)
            entry_x0 = x9_1
            
            if (x21 != i_2)
                goto label_cba934
        else
            x8_2 = x22
        label_cba934:
            x9_1 = entry_x0
            
            do
                char x10_1 = *x8_2
                x8_2 = &x8_2[1]
                *x9_1 = x10_1
                x9_1 += 1
            while (x23 != x8_2)
    
    entry_x8[1] = x9_1

*(x20 + 0x38) = x22
