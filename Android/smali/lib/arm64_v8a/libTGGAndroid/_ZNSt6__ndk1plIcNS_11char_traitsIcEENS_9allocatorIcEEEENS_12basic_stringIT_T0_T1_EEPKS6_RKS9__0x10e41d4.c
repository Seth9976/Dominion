// 函数: _ZNSt6__ndk1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
// 地址: 0x10e41d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
size_t result = strlen(arg1)
uint64_t x8 = zx.q(*arg2)
int32_t x26 = x8.d & 1
uint64_t x20

if (x26 == 0)
    x20 = x8 u>> 1
else
    x20 = *(arg2 + 8)

int64_t x8_2 = x20 + result

if (x8_2 u>= -0x10)
    int64_t* x0_5 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(*entry_x8) & 1) != 0)
        operator delete(*(entry_x8 + 0x10))
    
    sub_1101e04(x0_5)
    noreturn

size_t result_1 = result
void* result_2

if (x8_2 u> 0x16)
    uint64_t x25_1 = (x8_2 + 0x10) & 0xfffffffffffffff0
    result = operator new(x25_1)
    result_2 = result
    *(entry_x8 + 8) = result_1
    *(entry_x8 + 0x10) = result
    *entry_x8 = x25_1 | 1
    
    if (result_1 != 0)
        result = memcpy(result_2, arg1, result_1)
        x26 = zx.d(*arg2) & 1
else
    *entry_x8 = (result_1.d << 1).b
    result_2 = &entry_x8[1]
    
    if (result_1 != 0)
        result = memcpy(result_2, arg1, result_1)
        x26 = zx.d(*arg2) & 1

*(result_2 + result_1) = 0
uint64_t x8_5 = zx.q(*entry_x8)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x7

if ((x26 & 0xff) != 0)
    x7 = *(arg2 + 0x10)
else
    x7 = arg2 + 1

uint64_t x1_1
uint64_t x21_1

if ((x8_5.d & 1) != 0)
    x21_1 = *(entry_x8 + 8)
    x1_1 = (*entry_x8 & 0xfffffffffffffffe) - 1
else
    x21_1 = x8_5 u>> 1
    x1_1 = 0x16

if (x1_1 - x21_1 u< x20)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        entry_x8, x1_1, x21_1 + x20 - x1_1, x21_1, x21_1, 0, x20)

if (x20 != 0)
    void* x22
    
    if ((x8_5.d & 1) != 0)
        x22 = *(entry_x8 + 0x10)
    else
        x22 = &entry_x8[1]
    
    result = memcpy(x22 + x21_1, x7, x20)
    uint64_t x8_9 = x21_1 + x20
    
    if ((zx.d(*entry_x8) & 1) != 0)
        *(entry_x8 + 8) = x8_9
    else
        *entry_x8 = (x8_9.d << 1).b
    
    *(x22 + x8_9) = 0

return result
