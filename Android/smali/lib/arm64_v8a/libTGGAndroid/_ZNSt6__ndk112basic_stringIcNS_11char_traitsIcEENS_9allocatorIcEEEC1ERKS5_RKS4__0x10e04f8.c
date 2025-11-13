// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_RKS4_
// 地址: 0x10e04f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*arg2) & 1) == 0)
    int128_t v0 = *arg2
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *arg1 = v0
    return 

int64_t x22_1 = *(arg2 + 8)
int64_t x20_1 = *(arg2 + 0x10)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x19_1

if (x22_1 u> 0x16)
    if (x22_1 u>= -0x10)
        char* x0_4
        uint64_t x1_1
        uint64_t x2_2
        x0_4, x1_1, x2_2 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find_last_not_of(
            x0_4, x1_1, x2_2) __tailcall
    
    uint64_t x21_1 = (x22_1 + 0x10) & 0xfffffffffffffff0
    void* x0_1 = operator new(x21_1)
    *(arg1 + 8) = x22_1
    *(arg1 + 0x10) = x0_1
    *arg1 = x21_1 | 1
    x19_1 = x0_1
else
    *arg1 = (x22_1.d << 1).b
    x19_1 = arg1 + 1

memcpy(x19_1, x20_1, x22_1 + 1)
