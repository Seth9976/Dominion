// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE17find_first_not_ofEPKwmm
// 地址: 0x10e28a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x8_1
void* x21

if ((x8.d & 1) != 0)
    x8_1 = *(arg1 + 8)
    x21 = *(arg1 + 0x10)
    
    if (x8_1 u> arg3)
    label_10e28ec:
        uint64_t x9_1 = arg3 << 2
        void* x22_1 = x21 + x9_1
        uint64_t x23_1 = (x8_1 << 2) - x9_1
        void* x24_1 = x22_1
        
        while (true)
            size_t entry_n
            
            if (entry_n != 0)
                if (wmemchr(arg2, *x24_1, entry_n) == 0)
                    x22_1 = x24_1
                else
                    uint64_t temp0_1 = x23_1
                    x23_1 -= 4
                    x24_1 += 4
                    
                    if (temp0_1 == 4)
                        break
                    
                    continue
            
            return (x22_1 - x21) s>> 2
else
    x21 = &arg1[1]
    x8_1 = x8 u>> 1
    
    if (x8_1 u> arg3)
        goto label_10e28ec
return -1
