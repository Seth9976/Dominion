// 函数: _ZN5Botan22create_hex_fingerprintEPKhmRKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xdf812c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_48 = 0
Botan::HashFunction::create_or_throw(arg3, &var_48)
void* var_38

if ((zx.d(var_48.b) & 1) != 0)
    operator delete(var_38)

int64_t* result
(*(*result + 0x18))(result, arg1, arg2)
Botan::Buffered_Computation::final()
uint8_t* var_60
int64_t var_58
Botan::hex_encode(var_60, var_58 - var_60, true)

if (var_60 != 0)
    uint8_t* var_58_1 = var_60
    int64_t var_50
    Botan::deallocate_memory(var_60, var_50 - var_60, 1)

int64_t x20_1 = 0
void* x21_1 = &var_48 | 1
int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x8_5 = zx.q(var_48.b)

if ((x8_5.d & 1) != 0)
    goto label_df81f8

while (true)
    if (x20_1 == x8_5 u>> 1)
    label_df8270:
        int64_t var_28 = 0
        
        if (result == 0)
            return result
        
        return (*(*result + 0x10))()
    
    void* x8_6 = x21_1
    
    if (x20_1 == 0)
        break
    
    while (true)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        void* x8_9
        
        if ((zx.d(var_48.b) & 1) == 0)
            x8_9 = x21_1
        else
            x8_9 = var_38
        
        x8_6 = x8_9 + x20_1
    label_df822c:
        *x8_6
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        void* x8_11
        
        if ((zx.d(var_48.b) & 1) == 0)
            x8_11 = x21_1
        else
            x8_11 = var_38
        
        *(x8_11 + x20_1 + 1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
        x20_1 += 2
        x8_5 = zx.q(var_48.b)
        
        if ((x8_5.d & 1) == 0)
            break
        
    label_df81f8:
        int64_t var_40
        
        if (x20_1 == var_40)
            operator delete(var_38)
            goto label_df8270
        
        if (x20_1 == 0)
            x8_6 = var_38
            goto label_df822c

goto label_df822c
