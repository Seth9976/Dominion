// 函数: _Z20KingdomHasLandscapesR7DomGameP11DomCardEnumRi
// 地址: 0xb1b850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = 0
int32_t x8 = *DomBoardPile(arg1, 0x22)

if (x8 != 0)
    int64_t x9_1 = sx.q(*arg3)
    *arg3 = x9_1.d + 1
    *(arg2 + (x9_1 << 2)) = x8
    int32_t x8_1 = *DomBoardPile(arg1, 0x23)
    
    if (x8_1 != 0)
        int64_t x9_2 = sx.q(*arg3)
        *arg3 = x9_2.d + 1
        *(arg2 + (x9_2 << 2)) = x8_1
        int32_t x8_2 = *DomBoardPile(arg1, 0x24)
        
        if (x8_2 != 0)
            int64_t x9_3 = sx.q(*arg3)
            *arg3 = x9_3.d + 1
            *(arg2 + (x9_3 << 2)) = x8_2
            int32_t x8_3 = *DomBoardPile(arg1, 0x25)
            
            if (x8_3 != 0)
                int64_t x9_4 = sx.q(*arg3)
                *arg3 = x9_4.d + 1
                *(arg2 + (x9_4 << 2)) = x8_3
                int32_t x8_4 = *DomBoardPile(arg1, 0x26)
                
                if (x8_4 != 0)
                    int64_t x9_5 = sx.q(*arg3)
                    *arg3 = x9_5.d + 1
                    *(arg2 + (x9_5 << 2)) = x8_4

return zx.q(*arg3 != 0 ? 1 : 0)
