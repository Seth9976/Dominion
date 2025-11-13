// 函数: _ZN5Botan8clean_wsERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xe9046c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9_4 = zx.q(*arg1)
int32_t temp0 = x9_4.d & 1
uint64_t x9

if (temp0 == 0)
    x9 = x9_4 u>> 1
else
    x9 = *(arg1 + 8)

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x11_1

if (temp0 != 0)
    x11_1 = *(arg1 + 0x10)
else
    x11_1 = arg1 + 1

uint64_t x2_1

if (x9 == 0)
label_e904c0:
    x2_1 = -1
else
    x2_1 = 0
    
    while (true)
        uint64_t x13_1 = zx.q(*(x11_1 + x2_1))
        
        if (x13_1 u> 0x3f)
            break
        
        if ((1 << x13_1 & 0x100000600) == 0)
            break
        
        x2_1 += 1
        
        if (x9 == x2_1)
            goto label_e904c0

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

while (true)
    if (x9 != 0)
        uint64_t x13_4 = zx.q(*(x11_1 - 1 + x9))
        x9 -= 1
        
        if (x13_4 u<= 0x3f && (1 << x13_4 & 0x100000600) != 0)
            continue
        
        if (x2_1 != -1)
            if (x9 != -1)
                return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    entry_x8, arg1, x2_1, x2_1 + x9 + 1) __tailcall
            
            break
    else if (x2_1 != -1)
        break
    
    *entry_x8 = 0
    return 

return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    entry_x8, arg1, x2_1, -ffffffffffffffff) __tailcall
