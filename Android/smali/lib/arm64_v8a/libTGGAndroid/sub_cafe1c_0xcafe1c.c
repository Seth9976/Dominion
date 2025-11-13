// 函数: sub_cafe1c
// 地址: 0xcafe1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg3, 0, 0x18)
uint64_t x8 = zx.q(*arg1)
uint64_t x21
size_t x22
void* x23_1

if ((x8.d & 1) != 0)
    x21 = *(arg1 + 8)
    size_t x0_3 = strlen(arg2)
    x23_1 = *(arg1 + 0x10)
    x22 = x0_3
else
    x21 = x8 u>> 1
    x22 = strlen(arg2)
    x23_1 = &arg1[1]

int64_t x8_1 = x21 + x22

if (x8_1 u>= -0x10)
    int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(*(arg3 + 0x10))
    
    sub_1101e04(x0_10)
    noreturn

void* x24_1

if (x8_1 u> 0x16)
    uint64_t x25_1 = (x8_1 + 0x10) & 0xfffffffffffffff0
    void* x0_8 = operator new(x25_1)
    x24_1 = x0_8
    *(arg3 + 8) = x21
    *(arg3 + 0x10) = x0_8
    *arg3 = x25_1 | 1
    
    if (x21 != 0)
        memcpy(x24_1, x23_1, x21)
else
    *arg3 = (x21.d << 1).b
    x24_1 = &arg3[1]
    
    if (x21 != 0)
        memcpy(x24_1, x23_1, x21)

*(x24_1 + x21) = 0
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    arg3, arg2)
