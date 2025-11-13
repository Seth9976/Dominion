// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
// 地址: 0x10e141c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
char* x20 = arg1
void* x20_1
uint64_t x21
uint64_t x1

if ((x8.d & 1) != 0)
    x21 = *(x20 + 8)
    x1 = (*x20 & 0xfffffffffffffffe) - 1
    
    if (x21 == x1)
        goto label_10e1484
    
label_10e14a0:
    void* x8_6 = *(x20 + 0x10)
    *(x20 + 8) = x21 + 1
    x20_1 = x8_6
else
    x21 = x8 u>> 1
    
    if (x21.d != 0x16)
        *x20 = (x21.d << 1).b + 2
        x20_1 = &x20[1]
    else
        x21 = 0x16
        x1 = 0x16
    label_10e1484:
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
            x20, x1, 1, x1, x1, 0)
        
        if ((zx.d(*x20) & 1) != 0)
            goto label_10e14a0
        
        *x20 = (x21.d << 1).b + 2
        x20_1 = &x20[1]
void* x8_7 = x20_1 + x21
char entry_x1
*x8_7 = entry_x1
*(x8_7 + 1) = 0
