// 函数: _ZN5Botan19base58_check_decodeEPKcm
// 地址: 0xcd1918
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::base58_decode(arg1, arg2)
int64_t* entry_x8
int64_t x0 = *entry_x8
int64_t x8_1 = entry_x8[1] - x0

if (x8_1 u<= 3)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0_1
    x0_9, v0_1 = operator new(0x30)
    v0_1 = data_71b5a0
    int64_t var_50_1 = x0_9
    __builtin_strncpy(x0_9, "Invalid base58 too short for checksum", 0x26)
    int128_t var_60_1 = v0_1
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int32_t x0_1 = sub_cd1114(x0, x8_1 - 4)
void* x20 = *entry_x8
void* result = entry_x8[1]

if (_byteswap(*(result - 4)) != x0_1)
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0_2
    x0_14, v0_2 = operator new(0x20)
    int64_t var_50_2 = x0_14
    int128_t var_60_2 = data_71c520
    __builtin_strncpy(x0_14, "Invalid base58 checksum", 0x18)
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

void* x21 = result - x20

if (x21 u> 3)
    entry_x8[1] = result - 4
else
    int64_t x8_3 = entry_x8[2]
    
    if (x8_3 - result u< -4)
        if (((x21 - 4) & 0xffffffff80000000) != 0)
            int64_t* x0_18 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            char var_60
            void* var_50
            
            if ((zx.d(var_60) & 1) != 0)
                operator delete(var_50)
            void* x0_21 = *entry_x8
            
            if (x0_21 != 0)
                entry_x8[1] = x0_21
                operator delete(x0_21)
            
            sub_1101e04(x0_18)
            noreturn
        
        void* x8_4 = x8_3 - x20
        int64_t x10_2 = x8_4 << 1
        int64_t x10_3
        
        if (x10_2 u< x21 - 4)
            x10_3 = x21 - 4
        else
            x10_3 = x10_2
        
        int64_t x23
        
        x23 = x8_4 u< 0x3fffffffffffffff ? x10_3 : 0x7fffffffffffffff
        
        void* const x22
        
        if (x23 == 0)
            x22 = nullptr
        else
            x22 = operator new(x23)
        
        memset(x22 + x21, 0, -4)
        
        if (x21 s>= 1)
            memcpy(x22, x20, x21)
        
        *entry_x8 = x22
        entry_x8[1] = x22 + x21 - 4
        entry_x8[2] = x22 + x23
        return operator delete(x20) __tailcall
    
    void* x20_1 = result - 4
    result = memset(result, 0, -4)
    entry_x8[1] = x20_1

return result
