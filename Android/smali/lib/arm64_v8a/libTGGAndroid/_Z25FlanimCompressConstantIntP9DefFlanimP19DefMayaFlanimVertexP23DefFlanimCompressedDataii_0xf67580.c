// 函数: _Z25FlanimCompressConstantIntP9DefFlanimP19DefMayaFlanimVertexP23DefFlanimCompressedDataii
// 地址: 0xf67580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg3 + 8) = arg5
int64_t result = XCallocAllowingZeroSize(arg5)
*arg3 = result
*(arg3 + 0xc) = 4
int32_t x9 = *(arg2 + 8)

if (x9 s>= 1)
    int64_t x8_4 = result + (sx.q(arg5 s/ 6) << 2)
    
    if (arg4 == 4)
        int64_t i = 0
        int32_t x13_2 = 0
        int32_t x11_2 = 0
        int64_t x12_2 = 0x20
        
        do
            int32_t x14_4 = *(*arg2 + x12_2)
            
            if (i == 0 || x13_2 != x14_4)
                *(x8_4 + (sx.q(x11_2) << 1)) = (i.d).w
                *(result + (sx.q(x11_2) << 2)) = x14_4
                x9 = *(arg2 + 8)
                x11_2 += 1
                x13_2 = x14_4
            
            i += 1
            x12_2 += 0x38
        while (i s< sx.q(x9))
    else if (arg4 != 5)
        int64_t i_1 = 0
        int32_t x12_3 = 0
        int32_t x10_2 = 0
        
        do
            int64_t x13_5 = *arg2
            uint64_t x13_3
            
            if (arg4 == 7)
                x13_3 = zx.q(*(x13_5 + i_1 * 0x38 + 0x30))
                
                if (i_1 == 0 || x12_3 != x13_3.d)
                label_f676a4:
                    *(x8_4 + (sx.q(x10_2) << 1)) = (i_1.d).w
                    *(result + (sx.q(x10_2) << 2)) = x13_3.d
                    x10_2 += 1
                    x12_3 = x13_3.d
            else
                if (arg4 != 6)
                    pthread_kill(pthread_self(), 6)
                    DefFlanim* x0_2
                    DefMayaFlanimVertex* x1
                    int32_t x2
                    x0_2, x1, x2 = XNoReturn()
                    return FlanimCompressGetSizeConstantInt(x0_2, x1, x2) __tailcall
                
                x13_3 = zx.q(*(arg1 + 0x48))
                int64_t j = *(x13_5 + i_1 * 0x38 + 0x28)
                int64_t x15_1 = *(arg1 + 0x40)
                
                if (x13_3.d s< 1)
                label_f67714:
                    *(x15_1 + (sx.q(x13_3.d) << 3)) = j
                    *(arg1 + 0x48) += 1
                    
                    if (i_1 == 0 || x12_3 != x13_3.d)
                        goto label_f676a4
                else
                    int64_t x16_1 = 0
                    
                    while (*(x15_1 + (x16_1 << 3)) != j)
                        x16_1 += 1
                        
                        if (x13_3 == x16_1)
                            goto label_f67714
                    
                    x13_3 = zx.q(x16_1.d)
                    
                    if (i_1 == 0 || x12_3 != x13_3.d)
                        goto label_f676a4
            i_1 += 1
        while (i_1 s< sx.q(*(arg2 + 8)))
    else
        int64_t i_2 = 0
        int32_t x13_1 = 0
        int32_t x11_1 = 0
        int64_t x12_1 = 0x24
        
        do
            int32_t x14_2 = *(*arg2 + x12_1)
            
            if (i_2 == 0 || x13_1 != x14_2)
                *(x8_4 + (sx.q(x11_1) << 1)) = (i_2.d).w
                *(result + (sx.q(x11_1) << 2)) = x14_2
                x9 = *(arg2 + 8)
                x11_1 += 1
                x13_1 = x14_2
            
            i_2 += 1
            x12_1 += 0x38
        while (i_2 s< sx.q(x9))

return result
