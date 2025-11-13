// 函数: _Z19ZoomAssociatedIconsR6DomGfxPPS_iS2_Rii
// 地址: 0xaf3ed0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg5 = 0
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* i

if (x9.d != 0)
    i = *(gDomClient + 0x205e0)
    int64_t x9_1 = i + x9 * 0x21d8
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x9_1)
            goto label_af40b8

int32_t x24

if (x9.d == 0 || i == 0xffffffff)
label_af40b8:
    x24 = 0
else
    x24 = 0
    
    do
        if ((IsPodIcon(i) & 1) != 0 && *(i + 0x2c) != 7)
            int64_t x0_3
            int32_t x1
            x0_3, x1 = CalcPodIconWhere(i)
            int32_t x8_3 = x0_3.d
            uint64_t x0_4 = x0_3 u>> 0x20
            
            if (x8_3 == 3)
                if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x5c) == x0_4.d
                    && ((IsBoardPile(x0_4) & 1) != 0 || *(arg1 + 0x58) == x1))
                label_af4020:
                    int32_t x0_7
                    int32_t x0_9
                    
                    if (*(i + 0x2c) == 0)
                        x0_7 = CardIs(gDomClient + 0x20728, zx.q(*(i + 0x98)), 0x4000000)
                        
                        if ((x0_7 & 1) == 0)
                            x0_9 = CardIs(gDomClient + 0x20728, zx.q(*(i + 0x98)), 0x40000000)
                    
                    if (*(i + 0x2c) != 0 || ((x0_7 & 1) == 0 && (x0_9 & 1) == 0))
                        arg2[sx.q(x24)] = i
                        x24 += 1
                    else
                        int64_t x8_14 = sx.q(*arg5)
                        *arg5 = x8_14.d + 1
                        arg4[x8_14] = i
            else if (x8_3 == 2)
                int32_t x8_4 = *(arg1 + 0x2c)
                int32_t x8_5
                
                if (x8_4 == 3)
                    int32_t x8_9 = *(arg1 + 0x70)
                    
                    if (x8_9 != 0)
                        x8_5 = *(*(gDomClient + 0x205e0) + zx.q(x8_9.w) * 0x21d8 + 0x98)
                    label_af4014:
                        
                        if (x8_5 == x0_4.d)
                            goto label_af4020
                else if (x8_4 == 0)
                    x8_5 = *(arg1 + 0x98)
                    goto label_af4014
        
        i += 0x21d8
        int64_t x8_17 = *(gDomClient + 0x205e0) + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
        
        if (x8_17 u<= i)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x8_17)
                return zx.q(x24)
    while (i != 0xffffffff)

return zx.q(x24)
