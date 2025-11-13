// 函数: _Z20KingdomHasReferencesR7DomGameP11DomCardEnumRi
// 地址: 0xb1baf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = 0

for (int32_t i = 0x27; i != 0x47; i += 1)
    int32_t* x0_1 = DomBoardPile(gDomClient + 0x20728, i)
    int32_t x8_1 = *x0_1
    
    if (x8_1 != 0)
        if (*(arg1 + 0xe7c) != x8_1)
            if (*(arg1 + 0xe80) == x8_1)
                goto label_b1bb90
            
            goto label_b1bb64
        
        int64_t x9_4 = sx.q(*arg3)
        *arg3 = x9_4.d + 1
        *(arg2 + (x9_4 << 2)) = x8_1
        x8_1 = *x0_1
        
        if (*(arg1 + 0xe80) != x8_1)
        label_b1bb64:
            
            if (*(arg1 + 0xec8) == x8_1)
            label_b1bbb0:
                int64_t x9_8 = sx.q(*arg3)
                *arg3 = x9_8.d + 1
                *(arg2 + (x9_8 << 2)) = x8_1
        else
        label_b1bb90:
            int64_t x9_6 = sx.q(*arg3)
            *arg3 = x9_6.d + 1
            *(arg2 + (x9_6 << 2)) = x8_1
            x8_1 = *x0_1
            
            if (*(arg1 + 0xec8) == x8_1)
                goto label_b1bbb0

return zx.q(*arg3 != 0 ? 1 : 0)
