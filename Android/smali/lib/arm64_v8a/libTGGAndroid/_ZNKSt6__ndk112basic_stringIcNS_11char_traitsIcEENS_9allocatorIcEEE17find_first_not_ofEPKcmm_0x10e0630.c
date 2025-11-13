// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE17find_first_not_ofEPKcmm
// 地址: 0x10e0630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
void* x21
uint64_t x23

if ((x8.d & 1) != 0)
    int64_t x8_2 = *(arg1 + 8)
    x21 = *(arg1 + 0x10)
    x23 = x8_2 - arg3
    
    if (x8_2 u> arg3)
    label_10e0678:
        void* x22_1 = x21 + arg3
        void* x24_1 = x22_1
        
        while (true)
            size_t entry_x3
            
            if (entry_x3 != 0)
                if (memchr(arg2, zx.d(*x24_1), entry_x3) == 0)
                    x22_1 = x24_1
                else
                    uint64_t temp0_1 = x23
                    x23 -= 1
                    x24_1 += 1
                    
                    if (temp0_1 == 1)
                        break
                    
                    continue
            
            return x22_1 - x21
else
    x21 = &arg1[1]
    uint64_t x8_1 = x8 u>> 1
    x23 = x8_1 - arg3
    
    if (x8_1 u> arg3)
        goto label_10e0678
return -ffffffffffffffff
