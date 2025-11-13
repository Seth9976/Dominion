// 函数: sub_f54288
// 地址: 0xf54288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg2)
uint64_t x8 = *(arg2 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 != 6)
    goto label_f542e0

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg2, 0, -ffffffffffffffff, "RFC822") != 0)
    uint64_t x10_2 = zx.q(*arg2)
    x8 = *(arg2 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_f542e0:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8
    
    if (x11_1 != 3)
        goto label_f54320
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg2, 0, -ffffffffffffffff, &data_76182a) != 0)
        uint64_t x10_3 = zx.q(*arg2)
        x8 = *(arg2 + 8)
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_f54320:
        uint64_t x11_2
        
        if ((x9 & 0xff) == 0)
            x11_2 = x10_1
        else
            x11_2 = x8
        
        if (x11_2 != 3)
            goto label_f54360
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg2, 0, -ffffffffffffffff, &data_78618f) != 0)
            uint64_t x10_4 = zx.q(*arg2)
            x8 = *(arg2 + 8)
            x9 = x10_4.d & 1
            x10_1 = x10_4 u>> 1
        label_f54360:
            uint64_t x8_1
            
            if ((x9 & 0xff) == 0)
                x8_1 = x10_1
            else
                x8_1 = x8
            
            if (x8_1 != 2)
                return 0
            
            return zx.q(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg2, 0, -ffffffffffffffff, &data_735823) == 0 ? 1 : 0)

return 1
