// 函数: _ZN5Botan10hex_decodeEPKcmb
// 地址: 0xd89518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = arg2 u>> 1
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (x8 + 1 s< 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    uint8_t* x0_1 = operator new(x8 + 1)
    void* x25_1 = &x0_1[x8 + 1]
    *entry_x8 = x0_1
    entry_x8[2] = x25_1
    memset(x0_1, 0, x8 + 1)
    entry_x8[1] = x25_1
    int64_t x0_3 = Botan::hex_decode(x0_1, arg1, arg2, arg3 & 1)
    void* x20_2 = *entry_x8
    int64_t result = entry_x8[1]
    size_t x21_2 = result - x20_2
    size_t x22_2 = x0_3 - x21_2
    
    if (x0_3 u<= x21_2)
        if (x0_3 u< x21_2)
            entry_x8[1] = x20_2 + x0_3
        
        return result
    
    int64_t x8_1 = entry_x8[2]
    
    if (x8_1 - result u>= x22_2)
        if (x22_2 != 0)
            memset(result, 0, x22_2)
            result += x22_2
        
        entry_x8[1] = result
        return result
    
    if ((x0_3 & 0xffffffff80000000) == 0)
        void* x8_2 = x8_1 - x20_2
        int64_t x10_1 = x8_2 << 1
        int64_t x10_2
        
        x10_2 = x10_1 u< x0_3 ? x0_3 : x10_1
        
        int64_t x25_2
        
        x25_2 = x8_2 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
        
        int64_t x24_2
        
        if (x25_2 == 0)
            x24_2 = 0
        else
            x24_2 = operator new(x25_2)
        
        result = memset(x24_2 + x21_2, 0, x22_2)
        
        if (x21_2 s>= 1)
            result = memcpy(x24_2, x20_2, x21_2)
        
        *entry_x8 = x24_2
        entry_x8[1] = x24_2 + x0_3
        entry_x8[2] = x24_2 + x25_2
        
        if (x20_2 != 0)
            return operator delete(x20_2) __tailcall
        
        return result

int64_t* x0_12 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_5 = *entry_x8

if (x8_5 != 0)
    entry_x8[1] = x8_5
    operator delete(x8_5)

sub_1101e04(x0_12)
noreturn
