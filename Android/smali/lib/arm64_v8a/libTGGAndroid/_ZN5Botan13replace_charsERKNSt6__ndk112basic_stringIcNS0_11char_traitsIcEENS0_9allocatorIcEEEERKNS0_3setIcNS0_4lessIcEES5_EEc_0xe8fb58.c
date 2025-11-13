// 函数: _ZN5Botan13replace_charsERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKNS0_3setIcNS0_4lessIcEES5_EEc
// 地址: 0xe8fb58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    entry_x8)
int64_t x8 = 0

while (true)
    uint64_t x10_1 = zx.q(*entry_x8)
    void* i
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x12_1
    
    if ((x10_1.d & 1) != 0)
        if (x8 == *(entry_x8 + 8))
            return result
        
        x12_1 = *(entry_x8 + 0x10)
        i = *(arg2 + 8)
        
        if (i != 0)
        label_e8fbc0:
            uint32_t x12_2 = zx.d(*(x12_1 + x8))
            
            do
                uint32_t x13_1 = zx.d(*(i + 0x19))
                
                if (x12_2 u>= x13_1)
                    if (x13_1 u>= x12_2)
                        char* x10_2
                        
                        if ((x10_1.d & 1) == 0)
                            x10_2 = entry_x8 + 1
                        else
                            x10_2 = *(entry_x8 + 0x10)
                        
                        x10_2[x8] = arg3
                        break
                    
                    i += 8
                
                i = *i
            while (i != 0)
    else
        x12_1 = entry_x8 + 1
        
        if (x8 == x10_1 u>> 1)
            return result
        
        i = *(arg2 + 8)
        
        if (i != 0)
            goto label_e8fbc0
    x8 += 1
