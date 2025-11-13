// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13find_first_ofEPKcmm
// 地址: 0x10e0b34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x9 = zx.q(*arg1)
int64_t entry_x3
void* x8
uint64_t x10

if ((x9.d & 1) != 0)
    x10 = *(arg1 + 8)
    x8 = *(arg1 + 0x10)
    
    if (entry_x3 != 0)
    label_10e0b60:
        
        if (x10 u> arg3)
            void* x9_1 = x8 + arg3
            void* x10_1 = x8 + x10
            
            while (true)
                int64_t x12_1 = entry_x3
                uint64_t x13_1 = arg2
                
                while (true)
                    uint32_t x14_1 = zx.d(*x13_1)
                    x13_1 += 1
                    
                    if (zx.d(*x9_1) != x14_1)
                        int64_t temp0_1 = x12_1
                        x12_1 -= 1
                        
                        if (temp0_1 != 1)
                            continue
                        else
                            x9_1 += 1
                            
                            if (x9_1 != x10_1)
                                break
                            
                            x9_1 = x10_1
                    
                    if (x9_1 != x10_1)
                        return x9_1 - x8
                    
                    return -ffffffffffffffff
else
    x8 = &arg1[1]
    x10 = x9 u>> 1
    
    if (entry_x3 != 0)
        goto label_10e0b60
return -1
