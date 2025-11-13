// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE13find_first_ofEPKwmm
// 地址: 0x10e2df0
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
    label_10e2e1c:
        
        if (x10 u> arg3)
            void* x9_1 = x8 + (arg3 << 2)
            void* x10_1 = x8 + (x10 << 2)
            
            while (true)
                int64_t x13_1 = entry_x3 << 2
                uint64_t x14_1 = arg2
                
                while (true)
                    int32_t x15_1 = *x14_1
                    x14_1 += 4
                    
                    if (*x9_1 != x15_1)
                        int64_t temp0_1 = x13_1
                        x13_1 -= 4
                        
                        if (temp0_1 != 4)
                            continue
                        else
                            x9_1 += 4
                            
                            if (x9_1 != x10_1)
                                break
                            
                            x9_1 = x10_1
                    
                    if (x9_1 != x10_1)
                        return (x9_1 - x8) s>> 2
                    
                    return -1
else
    x8 = &arg1[1]
    x10 = x9 u>> 1
    
    if (entry_x3 != 0)
        goto label_10e2e1c
return -1
