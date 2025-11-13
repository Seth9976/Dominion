// 函数: _Z18KingdomSupplyPilesR10DomKingdomP11DomCardEnum
// 地址: 0xbfa8dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *arg1
*arg2 = x21
*(arg2 + 4) = *(arg1 + 4)
*(arg2 + 8) = *(arg1 + 8)
*(arg2 + 0xc) = *(arg1 + 0xc)
*(arg2 + 0x10) = *(arg1 + 0x10)
*(arg2 + 0x14) = *(arg1 + 0x14)
*(arg2 + 0x18) = *(arg1 + 0x18)
*(arg2 + 0x1c) = *(arg1 + 0x1c)
*(arg2 + 0x20) = *(arg1 + 0x20)
*(arg2 + 0x24) = *(arg1 + 0x24)
int32_t x8_9 = *(arg1 + 0x118)
int32_t x10
int32_t x8_10

if (x8_9 == 0)
    x10 = 0xa
    x8_10 = *(arg1 + 0x170)
    
    if (x8_10 != 0)
        *(arg2 + (zx.q(x10) << 2)) = x8_10
        x10 += 1
else
    x10 = 0xb
    *(arg2 + 0x28) = x8_9
    x8_10 = *(arg1 + 0x170)
    
    if (x8_10 != 0)
        *(arg2 + (zx.q(x10) << 2)) = x8_10
        x10 += 1
int64_t x24 = 0

while (true)
    int32_t x22_1 = *gPregameContext
    int32_t x8_12 = (x21 + (x22_1 << 0x10)) s% 0x3e5
    int32_t* x9_6 = *(&data_1838a20 + (sx.q(x8_12) << 3))
    
    if (x9_6 != 0)
        while (*x9_6 != x21 || x9_6[1] != x22_1)
            x9_6 = *(x9_6 + 0x10)
            
            if (x9_6 == 0)
                goto label_bfa9cc
        
        if ((zx.d(*(*(x9_6 + 8) + 0xc9)) & 0x10) != 0)
            goto label_bfaa54
    else
    label_bfa9cc:
        DomDefGetSlow(zx.q(x21), zx.q(x22_1))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_13 = sx.q(x8_12) << 3
        int64_t x9_7 = *(&data_1838a20 + x8_13)
        *x0_1 = x21
        x0_1[1] = x22_1
        *(&data_1838a20 + x8_13) = x0_1
        *(x0_1 + 0x10) = x9_7
        void* x0_3 = DomDefGetSlow(zx.q(x21), zx.q(x22_1))
        *(x0_1 + 8) = x0_3
        
        if ((zx.d(*(x0_3 + 0xc9)) & 0x10) != 0)
        label_bfaa54:
            *(arg2 + (zx.q(x10) << 2)) = 0x923
            break
    
    x24 += 1
    
    if (x24 == zx.q(x10))
        return zx.q(x10)
    
    x21 = *(arg2 + (x24 << 2))

return zx.q(x10 + 1)
