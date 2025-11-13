// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
// 地址: 0x10e0dc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = arg1
uint64_t entry_x1

if (entry_x1 u>= -0x10)
    __cxa_begin_catch(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    return __cxa_end_catch() __tailcall

uint64_t x24 = zx.q(*x19)
int64_t x8
uint64_t x22

if ((x24.d & 1) != 0)
    x22 = *(x19 + 8)
    x8 = (*x19 & 0xfffffffffffffffe) - 1
else
    x22 = x24 u>> 1
    x8 = 0x16

uint64_t x9

x9 = x22 u> entry_x1 ? x22 : entry_x1

int64_t x23

if (x9 u> 0x16)
    x23 = ((x9 + 0x10) & 0xfffffffffffffff0) - 1
else
    x23 = 0x16

if (x23 == x8)
    return 

int32_t x25_1 = x23 == 0x16 ? 1 : 0
uint64_t x20_1
void* x21_1

if (x23 == 0x16)
    x21_1 = *(x19 + 0x10)
    x20_1 = x19 + 1
    
    if ((x24.d & 1) == 0)
        goto label_10e0e78
    
    goto label_10e0e8c

if (x23 u<= x8)
    arg1 = operator new(x23 + 1)
else
    arg1 = operator new(x23 + 1)

x20_1 = arg1

if ((x24.d & 1) != 0)
    x21_1 = *(x19 + 0x10)
label_10e0e8c:
    int64_t x8_4 = *(x19 + 8)
    x25_1 = 1
    
    if (x8_4 u< -1)
        memcpy(x20_1, x21_1, x8_4 + 1)
else
    x21_1 = x19 + 1
label_10e0e78:
    uint64_t x8_3 = x24 u>> 1 & 0x7fffffff
    
    if (x8_3 u< -1)
        memcpy(x20_1, x21_1, x8_3 + 1)

if (x25_1 != 0)
    operator delete(x21_1)
    
    if (x23 == 0x16)
        *x19 = (x22.d << 1).b
    else
    label_10e0ed8:
        *x19 = (x23 + 1) | 1
        *(x19 + 8) = x22
        *(x19 + 0x10) = x20_1
else
    if (x23 != 0x16)
        goto label_10e0ed8
    
    *x19 = (x22.d << 1).b
