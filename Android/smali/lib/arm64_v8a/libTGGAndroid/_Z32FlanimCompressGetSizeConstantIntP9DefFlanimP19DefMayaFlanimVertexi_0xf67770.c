// 函数: _Z32FlanimCompressGetSizeConstantIntP9DefFlanimP19DefMayaFlanimVertexi
// 地址: 0xf67770
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg2 + 8)

if (x9 s< 1)
    return 0

int64_t x10 = sx.q(x9)
int32_t x8

if (arg3 == 4)
    int64_t x9_2 = 0
    int32_t x11_1 = 0
    x8 = 0
    int32_t* x12_4 = *arg2 + 0x20
    
    do
        int32_t x13_2 = *x12_4
        x12_4 = &x12_4[0xe]
        int32_t x14_4 = x9_2 != 0 ? 1 : 0
        x9_2 += 1
        int32_t x14_5 = x14_4 & (x11_1 == x13_2 ? 1 : 0)
        
        if (x14_5 == 0)
            x11_1 = x13_2
        
        x8 += x14_5 ^ 1
    while (x9_2 s< x10)
else if (arg3 != 5)
    int64_t i = 0
    int32_t x11_2 = 0
    x8 = 0
    
    do
        int64_t x13_5 = *arg2
        uint64_t x13_4
        
        if (arg3 == 7)
            x13_4 = zx.q(*(x13_5 + i * 0x38 + 0x30))
        else
            if (arg3 != 6)
                pthread_kill(pthread_self(), 6)
                DefFlanim* x0_3
                DefMayaFlanimVertex* x1
                DefFlanimCompressedData* x2
                int32_t x3
                x0_3, x1, x2, x3 = XNoReturn()
                return FlanimCompressParamInt(x0_3, x1, x2, x3) __tailcall
            
            x13_4 = zx.q(*(arg1 + 0x48))
            int64_t j = *(x13_5 + i * 0x38 + 0x28)
            int64_t x15_4 = *(arg1 + 0x40)
            
            if (x13_4.d s< 1)
            label_f678dc:
                *(x15_4 + (sx.q(x13_4.d) << 3)) = j
                *(arg1 + 0x48) += 1
                x9 = *(arg2 + 8)
            else
                int64_t x16_1 = 0
                
                while (*(x15_4 + (x16_1 << 3)) != j)
                    x16_1 += 1
                    
                    if (x13_4 == x16_1)
                        goto label_f678dc
                
                x13_4 = zx.q(x16_1.d)
        
        int32_t x14_8 = (i != 0 ? 1 : 0) & (x11_2 == x13_4.d ? 1 : 0)
        i += 1
        
        if (x14_8 == 0)
            x11_2 = x13_4.d
        
        x8 += x14_8 ^ 1
    while (i s< sx.q(x9))
else
    int64_t x9_1 = 0
    int32_t x11 = 0
    x8 = 0
    int32_t* x12_2 = *arg2 + 0x24
    
    do
        int32_t x13_1 = *x12_2
        x12_2 = &x12_2[0xe]
        int32_t x14_1 = x9_1 != 0 ? 1 : 0
        x9_1 += 1
        int32_t x14_2 = x14_1 & (x11 == x13_1 ? 1 : 0)
        
        if (x14_2 == 0)
            x11 = x13_1
        
        x8 += x14_2 ^ 1
    while (x9_1 s< x10)

return zx.q(x8 * 6)
