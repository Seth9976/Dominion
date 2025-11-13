// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc
// 地址: 0x10e1ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x19 = arg1
uint64_t x20
uint64_t x22
char* x23

if ((x8.d & 1) != 0)
    x22 = *(x19 + 8)
    x23 = *(x19 + 0x10)
    x20 = arg2 - x23
    
    if ((*x19 & 0xfffffffffffffffe) - 1 != x22)
    label_10e2078:
        
        if (x22 != x20)
            void* x1_1 = &x23[x20]
            memmove(x1_1 + 1, x1_1, x22 - x20)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
            x19, x22, 1, x22, x20, 0)
        x23 = *(x19 + 0x10)
else
    x23 = x19 + 1
    x22 = x8 u>> 1
    x20 = arg2 - x23
    
    if (x22.d != 0x16)
        goto label_10e2078
    
    x22 = 0x16
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
        x19, x22, 1, x22, x20, 0)
    x23 = *(x19 + 0x10)

char entry_x2
x23[x20] = entry_x2
x23[x22 + 1] = 0
uint32_t x8_4 = zx.d(*x19)
int64_t x8_6

if ((x8_4 & 1) != 0)
    *(x19 + 8) = x22 + 1
    
    if ((x8_4 & 1) != 0)
        x8_6 = *(x19 + 0x10)
    else
        x8_6 = x19 + 1
else
    int32_t x8_5 = (x22 + 1).d << 1
    *x19 = x8_5.b
    
    if ((x8_5 & 1) == 0)
        x8_6 = x19 + 1
    else
        x8_6 = *(x19 + 0x10)

return x8_6 + x20
