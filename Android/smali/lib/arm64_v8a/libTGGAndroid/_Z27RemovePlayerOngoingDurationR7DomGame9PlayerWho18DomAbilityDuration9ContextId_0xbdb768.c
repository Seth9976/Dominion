// 函数: _Z27RemovePlayerOngoingDurationR7DomGame9PlayerWho18DomAbilityDuration9ContextId
// 地址: 0xbdb768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x19c0)
int32_t x22

if (x8 s< 1)
    x22 = 0
else
    int64_t x19_1 = arg4
    int32_t x23_1 = arg2
    x22 = 0
    int32_t x25_1 = 0
    
    do
        void* x9_2 = arg1 + muls.dp.d(x25_1, 0xb8)
        
        if (*(x9_2 + 0x3c21c) == x23_1 && *(x9_2 + 0x3c208) == arg3)
            int64_t fp_1 = sx.q(x25_1)
            
            if (x19_1 == -1 || *(arg1 + fp_1 * 0xb8 + 0x3c210) == x19_1)
                int128_t v0
                int128_t v1
                int128_t v2
                int128_t v3
                
                if (*(arg1 + fp_1 * 0xb8 + 0x3c254) == 3)
                    int32_t x8_7 = *(arg1 + 0x150c)
                    
                    if (x8_7 - 3 u>= 4)
                        void* x9_7 = arg1 + fp_1 * 0xb8
                        int32_t x10_2 = *(x9_7 + 0x3c220)
                        uint64_t x2
                        
                        if (x10_2 == 0xffffffff)
                            x2 = zx.q(x23_1)
                        else
                            x2 = zx.q(x10_2)
                        
                        int64_t var_68_1 = 0
                        int32_t var_70_1 = 0
                        int32_t var_78_1 = 0
                        int32_t var_80_1 = 0
                        v0, v1, v2, v3 = DomNotifyEffect(zx.q(x8_7 == 2 ? 1 : 0), 0x1c, x2, 
                            zx.q(*(x9_7 + 0x3c258)), zx.q(*(x9_7 + 0x3c25c)), 0, 0, 0)
                
                uint64_t x4_2 = zx.q(*(arg1 + fp_1 * 0xb8 + 0x3c294))
                
                if (x4_2.d != 0)
                    int32_t x8_9 = *(arg1 + 0x150c)
                    
                    if (x8_9 - 3 u>= 4)
                        void* x9_10 = arg1 + fp_1 * 0xb8
                        int64_t var_68_2 = 0
                        int32_t var_70_2 = 0
                        int32_t var_78_2 = 0
                        int32_t var_80_2 = 0
                        v0, v1, v2, v3 = DomNotifyEffect(zx.q(x8_9 == 2 ? 1 : 0), 0x1c, 
                            zx.q(*(x9_10 + 0x3c220)), 0x14, x4_2, zx.q(*(x9_10 + 0x3c298)), 0, 0)
                
                if (*(arg1 + fp_1 * 0xb8 + 0x3c254) == 2 && *(arg1 + fp_1 * 0xb8 + 0x3c270) != 0)
                    DomPushAbilityContext(arg1, zx.q(x23_1), 
                        zx.q(*(arg1 + fp_1 * 0xb8 + 0x3c234) << 0x12))
                    (*(arg1 + fp_1 * 0xb8 + 0x3c270))()
                    void* x0_4
                    x0_4, v0, v1, v2, v3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    *(x0_4 + 0x13000) -= 1
                
                x25_1 -= 1
                x22 += 1
                int64_t x8_2 = sx.q(*(arg1 + 0x19c0)) - 1
                *(arg1 + 0x19c0) = x8_2.d
                v0 = *(arg1 + x8_2 * 0xb8 + 0x3c238)
                v3 = *(arg1 + x8_2 * 0xb8 + 0x3c208)
                v2 = *(arg1 + x8_2 * 0xb8 + 0x3c218)
                *(x9_2 + 0x3c228) = *(arg1 + x8_2 * 0xb8 + 0x3c228)
                *(x9_2 + 0x3c238) = v0
                *(x9_2 + 0x3c208) = v3
                *(x9_2 + 0x3c218) = v2
                v0 = *(arg1 + x8_2 * 0xb8 + 0x3c278)
                v3 = *(arg1 + x8_2 * 0xb8 + 0x3c248)
                v2 = *(arg1 + x8_2 * 0xb8 + 0x3c258)
                *(x9_2 + 0x3c268) = *(arg1 + x8_2 * 0xb8 + 0x3c268)
                *(x9_2 + 0x3c278) = v0
                *(x9_2 + 0x3c248) = v3
                *(x9_2 + 0x3c258) = v2
                v1 = *(arg1 + x8_2 * 0xb8 + 0x3c298)
                v0 = *(arg1 + x8_2 * 0xb8 + 0x3c2a8)
                v2 = *(arg1 + x8_2 * 0xb8 + 0x3c288)
                *(x9_2 + 0x3c2b8) = *(arg1 + x8_2 * 0xb8 + 0x3c2b8)
                *(x9_2 + 0x3c298) = v1
                *(x9_2 + 0x3c2a8) = v0
                *(x9_2 + 0x3c288) = v2
                x8 = *(arg1 + 0x19c0)
        
        x25_1 += 1
    while (x25_1 s< x8)

return zx.q(x22)
