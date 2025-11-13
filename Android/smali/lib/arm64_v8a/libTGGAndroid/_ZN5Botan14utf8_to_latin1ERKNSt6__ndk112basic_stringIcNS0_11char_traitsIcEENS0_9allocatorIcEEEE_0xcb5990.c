// 函数: _ZN5Botan14utf8_to_latin1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xcb5990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x8
char x19 = entry_x8.b
int64_t x22 = 0
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x21 = arg1 + 1
__builtin_memset(entry_x8, 0, 0x18)

while (true)
    uint64_t x8 = zx.q(*arg1)
    int32_t x1_1
    int64_t x23_1
    
    if ((x8.d & 1) != 0)
        if (x22 == *(arg1 + 8))
            return 
        
        x1_1 = sx.d(*(*(arg1 + 0x10) + x22))
        x23_1 = x22 + 1
        
        if ((x1_1 & 0x80000000) == 0)
        label_cb59c0:
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                x19)
            x22 = x23_1
            continue
    else
        if (x22 == x8 u>> 1)
            return 
        
        x1_1 = sx.d(*(x21 + x22))
        x23_1 = x22 + 1
        
        if ((x1_1 & 0x80000000) == 0)
            goto label_cb59c0
    
    if ((x1_1 & 0xfffffff8) != 0xffffffc0)
        void** x0_2 = __cxa_allocate_exception(0x20)
        int64_t x0_3
        int128_t v0
        x0_3, v0 = operator new(0x30)
        v0 = data_71c500
        int64_t var_40 = x0_3
        __builtin_strncpy(x0_3, "UTF-8: Unicode chars not in Latin1 used", 0x28)
        int128_t var_50 = v0
        *x0_2 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_2[1])
        *x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x8_2
    
    if ((x8.d & 1) != 0)
        if (x23_1 == *(arg1 + 8))
        label_cb5b8c:
            void** x0_12 = __cxa_allocate_exception(0x20)
            int64_t x0_13
            int128_t v0_2
            x0_13, v0_2 = operator new(0x20)
            int64_t var_40_2 = x0_13
            int128_t var_50_2 = data_71aa40
            __builtin_strncpy(x0_13, "UTF-8: sequence truncated", 0x1a)
            *x0_12 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_12[1])
            *x0_12 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_12, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        x8_2 = *(arg1 + 0x10)
    else
        x8_2 = x21
        
        if (x23_1 == (x8 u>> 1 & 0x7fffffff))
            goto label_cb5b8c
    
    if ((x1_1 << 6 & 0x80) == 0)
        break
    
    x22 += 2
    *(x8_2 + x23_1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
        x19)

void** x0_7 = __cxa_allocate_exception(0x20)
int64_t x0_8
int128_t v0_1
x0_8, v0_1 = operator new(0x30)
v0_1 = data_71d3f0
int64_t var_40_1 = x0_8
__builtin_strncpy(x0_8, "UTF-8: sequence longer than needed", 0x23)
int128_t var_50_1 = v0_1
*x0_7 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_7[1])
*x0_7 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_7, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
