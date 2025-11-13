// 函数: _Z19RemoveTargetOngoingR7DomGame9PlayerWho14DomOngoingType
// 地址: 0xbe4b0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x19c0)
int32_t x21

if (x8 s< 1)
    x21 = 0
else
    int32_t x19_1 = arg3
    int32_t x22_1 = arg2
    x21 = 0
    int32_t x23_1 = 0
    
    do
        void* fp_1 = arg1 + muls.dp.d(x23_1, 0xb8)
        
        if (*(fp_1 + 0x3c254) == 3)
            int64_t x10_2 = sx.q(x23_1)
            
            if (*(arg1 + x10_2 * 0xb8 + 0x3c258) == x19_1
                    && *(arg1 + x10_2 * 0xb8 + 0x3c220) == x22_1)
                int32_t x10_5 = *(arg1 + 0x150c)
                int128_t v0
                int128_t v1
                int128_t v2
                int128_t v3
                
                if (x10_5 - 3 u>= 4)
                    int64_t var_68_1 = 0
                    int32_t var_70_1 = 0
                    int32_t var_78_1 = 0
                    int32_t var_80_1 = 0
                    v0, v1, v2, v3 = DomNotifyEffect(zx.q(x10_5 == 2 ? 1 : 0), 0x1c, zx.q(x22_1), 
                        zx.q(x19_1), zx.q(*(arg1 + x10_2 * 0xb8 + 0x3c25c)), 0, 0, 0)
                    x8 = *(arg1 + 0x19c0)
                
                *(arg1 + 0x19c0) = x8 - 1
                v1 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c238)
                v2 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c208)
                v3 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c218)
                x23_1 -= 1
                *(fp_1 + 0x3c228) = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c228)
                *(fp_1 + 0x3c238) = v1
                *(fp_1 + 0x3c208) = v2
                *(fp_1 + 0x3c218) = v3
                v0 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c278)
                v3 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c248)
                v2 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c258)
                x21 += 1
                *(fp_1 + 0x3c268) = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c268)
                *(fp_1 + 0x3c278) = v0
                *(fp_1 + 0x3c248) = v3
                *(fp_1 + 0x3c258) = v2
                v1 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c298)
                v0 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c2a8)
                v2 = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c288)
                *(fp_1 + 0x3c2b8) = *(arg1 + (sx.q(x8) - 1) * 0xb8 + 0x3c2b8)
                *(fp_1 + 0x3c298) = v1
                *(fp_1 + 0x3c2a8) = v0
                *(fp_1 + 0x3c288) = v2
                x8 = *(arg1 + 0x19c0)
        
        x23_1 += 1
    while (x23_1 s< x8)

return zx.q(x21)
