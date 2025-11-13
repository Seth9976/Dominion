// 函数: _Z20FlanimCompressAllIntP9DefFlanimP19DefMayaFlanimVertexP23DefFlanimCompressedDatai
// 地址: 0xf673dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = *(arg2 + 8) << 2
*(arg3 + 8) = x0
int32_t* result = XCallocAllowingZeroSize(x0)
*arg3 = result
*(arg3 + 0xc) = 2

if (*(arg2 + 8) s>= 1)
    if (arg4 == 4)
        *result = *(*arg2 + 0x20)
        
        if (*(arg2 + 8) s>= 2)
            int64_t i = 1
            int64_t x9_2 = 0x58
            
            do
                int32_t x10_5 = *(*arg2 + x9_2)
                x9_2 += 0x38
                *(*arg3 + (i << 2)) = x10_5
                i += 1
            while (i s< sx.q(*(arg2 + 8)))
    else
        if (arg4 != 5)
            int64_t x8_8 = 0
            int64_t x10_7 = *arg2
            uint64_t x10_8
            
            while (arg4 != 7)
                if (arg4 != 6)
                    pthread_kill(pthread_self(), 6)
                    DefFlanim* x0_2
                    DefMayaFlanimVertex* x1
                    DefFlanimCompressedData* x2
                    int32_t x3
                    int32_t x4
                    x0_2, x1, x2, x3, x4 = XNoReturn()
                    return FlanimCompressConstantInt(x0_2, x1, x2, x3, x4) __tailcall
                
                x10_8 = zx.q(*(arg1 + 0x48))
                int64_t j = *(x10_7 + x8_8 * 0x38 + 0x28)
                int64_t x12_1 = *(arg1 + 0x40)
                
                if (x10_8.d s< 1)
                label_f67524:
                    *(x12_1 + (sx.q(x10_8.d) << 3)) = j
                    *(arg1 + 0x48) += 1
                else
                    int64_t x13_1 = 0
                    
                    while (*(x12_1 + (x13_1 << 3)) != j)
                        x13_1 += 1
                        
                        if (x10_8 == x13_1)
                            goto label_f67524
                    
                    x10_8 = zx.q(x13_1.d)
                
            label_f67548:
                result[x8_8] = x10_8.d
                x8_8 += 1
                
                if (x8_8 s>= sx.q(*(arg2 + 8)))
                    return result
                
                result = *arg3
                x10_7 = *arg2
            
            x10_8 = zx.q(*(x10_7 + x8_8 * 0x38 + 0x30))
            goto label_f67548
        
        *result = *(*arg2 + 0x24)
        
        if (*(arg2 + 8) s>= 2)
            int64_t i_1 = 1
            int64_t x9_1 = 0x5c
            
            do
                int32_t x10_2 = *(*arg2 + x9_1)
                x9_1 += 0x38
                *(*arg3 + (i_1 << 2)) = x10_2
                i_1 += 1
            while (i_1 s< sx.q(*(arg2 + 8)))

return result
