// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0xf159d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_14 = 0x5d2e

if (arg3 - arg2 s>= 2 && arg3 - 1 != arg2)
    char const* i = arg2
    
    do
        if (zx.d(*i) == 0x2e)
            int64_t x10_2 = 1
            
            while (true)
                if (x10_2 == 2)
                    if (i == arg3)
                        break
                    
                    std::__ndk1::regex_traits<char>::__lookup_collatename<char const*>(arg1, arg2, 
                        i.b)
                    char* entry_x3
                    
                    if ((zx.d(*entry_x3) & 1) != 0)
                        operator delete(*(entry_x3 + 0x10))
                    
                    int128_t var_38
                    *entry_x3 = var_38
                    uint64_t x9_1 = zx.q(*entry_x3)
                    uint64_t x10_3 = *(entry_x3 + 8)
                    int64_t var_28
                    *(entry_x3 + 0x10) = var_28
                    uint64_t x9_2
                    
                    if ((x9_1.d & 1) == 0)
                        x9_2 = x9_1 u>> 1
                    else
                        x9_2 = x10_3
                    
                    if (x9_2 - 1 u< 2)
                        return &i[2]
                    
                    sub_f1634c()
                    noreturn
                
                uint32_t x11_1 = zx.d(i[x10_2])
                uint32_t x12_1 = zx.d(*(&var_14 + x10_2))
                x10_2 += 1
                
                if (x11_1 != x12_1)
                    goto label_f15a0c
            
            break
        
    label_f15a0c:
        i = &i[1]
    while (i != arg3 - 1)

sub_f15264()
noreturn
