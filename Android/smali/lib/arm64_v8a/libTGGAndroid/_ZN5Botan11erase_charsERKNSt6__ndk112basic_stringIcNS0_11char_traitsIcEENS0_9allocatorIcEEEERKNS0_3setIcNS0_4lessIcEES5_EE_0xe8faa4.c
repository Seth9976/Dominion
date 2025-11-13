// 函数: _ZN5Botan11erase_charsERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKNS0_3setIcNS0_4lessIcEES5_EE
// 地址: 0xe8faa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x8 = zx.q(*arg1)
int32_t temp0 = x8.d & 1
uint64_t x8_1

if (temp0 == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = *(arg1 + 8)

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x21

if (temp0 != 0)
    x21 = *(arg1 + 0x10)
else
    x21 = arg1 + 1

if (x8_1 == 0)
    return 

void* x22_1 = x21 + x8_1

do
    void* x8_2 = *(arg2 + 8)
    uint32_t x1 = zx.d(*x21)
    
    if (x8_2 != 0)
        while (true)
            uint32_t x9_1 = zx.d(*(x8_2 + 0x19))
            
            if (x1 u>= x9_1)
                if (x9_1 u>= x1)
                    break
                
                x8_2 += 8
            
            x8_2 = *x8_2
            
            if (x8_2 == 0)
                goto label_e8fae8
    else
    label_e8fae8:
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
    
    x21 += 1
while (x21 != x22_1)
