// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw
// 地址: 0x10e3688
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
        goto label_10e36f0
    
label_10e370c:
    void* x8_6 = *(x20 + 0x10)
    *(x20 + 8) = x21 + 1
    x20_1 = x8_6
else
    x21 = x8 u>> 1
    
    if (x21.d != 4)
        *x20 = (x21.d << 1).b + 2
        x20_1 = &x20[4]
    else
        x21 = 4
        x1 = 4
    label_10e36f0:
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            x20, x1, 1, x1, x1, 0)
        
        if ((zx.d(*x20) & 1) != 0)
            goto label_10e370c
        
        *x20 = (x21.d << 1).b + 2
        x20_1 = &x20[4]
void* x8_7 = x20_1 + (x21 << 2)
int32_t entry_x1
*x8_7 = entry_x1
*(x8_7 + 4) = 0
