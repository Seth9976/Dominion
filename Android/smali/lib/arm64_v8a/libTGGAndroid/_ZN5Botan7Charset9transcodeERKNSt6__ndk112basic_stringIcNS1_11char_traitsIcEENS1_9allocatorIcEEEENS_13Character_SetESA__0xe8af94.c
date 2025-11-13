// 函数: _ZN5Botan7Charset9transcodeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_13Character_SetESA_
// 地址: 0xe8af94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

x21 = arg2 == 0 ? 3 : arg2

int32_t x9

x9 = arg3 == 0 ? 3 : arg3

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

if (x21 == x9)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        entry_x8) __tailcall

if (x21 == 2 && x9 == 3)
    int64_t x22 = 0
    __builtin_memset(entry_x8, 0, 0x18)
    
    while (true)
        uint64_t x8_1 = zx.q(*arg1)
        
        if ((x8_1.d & 1) != 0)
            if (x22 == *(arg1 + 8))
                break
            
            if ((sx.d(*(*(arg1 + 0x10) + x22)) & 0x80000000) == 0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    entry_x8.b)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    entry_x8.b)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    entry_x8.b)
        else
            if (x22 == x8_1 u>> 1)
                break
            
            if ((sx.d(*(arg1 + 1 + x22)) & 0x80000000) == 0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    entry_x8.b)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    entry_x8.b)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    entry_x8.b)
        
        x22 += 1
    
    return 

if (x21 == 3 && x9 == 2)
    return Botan::utf8_to_latin1(arg1) __tailcall

if (x21 != 3 || x9 != 1)
    void** x0_12 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(x9)
    void var_a8
    int128_t* x0_15
    int128_t v0_3
    x0_15, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_a8, nullptr)
    int64_t var_80 = x0_15[1].q
    int128_t var_90 = *x0_15
    __builtin_memset(x0_15, 0, 0x18)
    int128_t* x0_17
    int128_t v0_4
    x0_17, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_90)
    int64_t var_60 = x0_17[1].q
    int128_t var_70 = *x0_17
    __builtin_memset(x0_17, 0, 0x18)
    std::__ndk1::to_string(x21)
    char var_c0
    uint64_t x1_9
    uint64_t var_b0
    
    if ((zx.d(var_c0) & 1) == 0)
        x1_9 = &var_c0 | 1
    else
        x1_9 = var_b0
    int128_t* x0_20
    int128_t v0_5
    x0_20, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_70, x1_9)
    int64_t var_40_1 = x0_20[1].q
    int128_t var_50_1 = *x0_20
    __builtin_memset(x0_20, 0, 0x18)
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    *x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x8_7 = zx.q(*arg1)
int32_t x9_4

if ((x8_7.d & 1) == 0)
    x9_4 = (x8_7 u>> 1).d
else
    x9_4 = (*(arg1 + 8)).d

if ((x9_4 & 1) != 0)
    void** x0_23 = __cxa_allocate_exception(0x20)
    int64_t x0_24
    int128_t v0_6
    x0_24, v0_6 = operator new(0x30)
    v0_6 = data_71c500
    int64_t var_40_2 = x0_24
    __builtin_strncpy(x0_24, "UCS-2 string has an odd number of bytes", 0x28)
    int128_t var_50_2 = v0_6
    *x0_23 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_23[1])
    *x0_23 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_23, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x21_2 = 0
uint32_t x8_8 = x8_7.d & 0xff
__builtin_memset(entry_x8, 0, 0x18)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x8_10

if ((x8_8 & 1) != 0)
    do
        if (x21_2 == *(arg1 + 8))
            return 
        
        x8_10 = *(arg1 + 0x10)
    label_e8b108:
        
        if (zx.d(*(x8_10 + x21_2)) != 0)
            void** x0_8 = __cxa_allocate_exception(0x20)
            int64_t x0_9
            int128_t v0_2
            x0_9, v0_2 = operator new(0x20)
            int64_t var_40 = x0_9
            int128_t var_50 = data_71b7d0
            __builtin_strncpy(x0_9, "UCS-2 has non-Latin1 characters", 0x20)
            *x0_8 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_8[1])
            *x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        *(x8_10 + x21_2 + 1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        x8_8 = zx.d(*arg1)
        x21_2 += 2
    while ((x8_8 & 1) != 0)

x8_10 = arg1 + 1

if (x21_2 != (zx.q(x8_8 u>> 1) & 0x7f))
    goto label_e8b108
