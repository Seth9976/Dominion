// 函数: _Z15ComputeBuyablesR7DomGame9PlayerWhoRK7CardIDs7BuyFlagP11BuyableCard
// 地址: 0xbe85dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = arg1 + muls.dp.d(arg2.d, 0x5a30)
int32_t x24 = *(x22 + 0x1819c)
int32_t x21 = arg4
int32_t x19 = arg2.d
int32_t x0 = CountOngoing(arg1, arg2, 0x31, 0, 0)
int32_t x25 = *(x22 + 0x18198)
int32_t var_eb0
int32_t x0_2
int32_t x6
int32_t x16
int32_t x24_1

if (x0 s< 1)
    int32_t x0_4
    int32_t x6_1
    int32_t x16_1
    x0_4, x6_1, x16_1 = CountOngoing(arg1, zx.q(x19), 0x12, 0, 0)
    
    if (x0_4 s<= 0)
        uint64_t x9_2 = zx.q(*(arg1 + 0x19ac))
        int32_t x8_2
        
        x8_2 = x19 == 0xffffffff ? 6 : 0x3f1
        
        int32_t x11_2
        
        if (x9_2.d s< 1)
            x11_2 = 0
        else
            int64_t i_14
            
            if (x9_2.d u>= 3)
                i_14 = x9_2 & 0xfffffffe
                int32_t x11_5 = 0
                int32_t x12_4 = 0
                void* __offset(DomGame, 0x15f88) x13_2 = arg1 + 0x15f88
                int64_t i_11 = i_14
                int64_t i
                
                do
                    int32_t x15_10 = *(x13_2 - 0x18)
                    
                    if (x15_10 == x8_2)
                        x16_1 = *(x13_2 - 0x1c)
                    
                    int32_t x17_6 = *(x13_2 + 8)
                    
                    if (x17_6 == x8_2)
                        x0_4 = *(x13_2 + 4)
                    
                    int32_t x3_5 = x16_1 == x19 ? 1 : 0
                    int32_t x1_9 = x3_5 & (x15_10 == x8_2 ? 1 : 0)
                    
                    if (x1_9 == 1)
                        x3_5 = *(x13_2 - 0x20)
                    
                    int32_t x2_7 = (x0_4 == x19 ? 1 : 0) & (x17_6 == x8_2 ? 1 : 0)
                    
                    if (x2_7 != 0)
                        x6_1 = *x13_2
                    
                    int32_t x4_3 = x3_5 != 0xe00 ? 1 : 0
                    int32_t x5_3 = x6_1 == 0xe00 ? 1 : 0
                    
                    if (((x4_3 | (x1_9 ^ 1)) & 1) == 0)
                        x4_3 = *(x13_2 - 0xc)
                    
                    if ((x5_3 & x2_7) != 0)
                        x5_3 = *(x13_2 + 0x14)
                    
                    int32_t x0_6 = x2_7 & (x6_1 != 0xe00 ? 1 : 0)
                    x6_1 = x15_10 == x8_2 ? 1 : 0
                    x16_1 = (x6_1 & (x16_1 != x19 ? 1 : 0)) | (x1_9 & (x3_5 != 0xe00 ? 1 : 0))
                    x0_4 = ((x17_6 == x8_2 ? 1 : 0) & (x0_4 != x19 ? 1 : 0)) | x0_6
                    int32_t x15_8
                    
                    if ((x16_1 | (x15_10 != x8_2 ? 1 : 0)) != 0)
                        x15_8 = 0
                    else
                        x15_8 = x4_3
                    
                    x11_5 += x15_8
                    int32_t x15_9
                    
                    if ((x0_4 | (x17_6 != x8_2 ? 1 : 0)) != 0)
                        x15_9 = 0
                    else
                        x15_9 = x5_3
                    
                    i = i_11
                    i_11 -= 2
                    x12_4 += x15_9
                    x13_2 += 0x40
                while (i != 2)
                x11_2 = x12_4 + x11_5
                
                if (i_14 != x9_2)
                    goto label_be8cf8
            else
                i_14 = 0
                x11_2 = 0
            label_be8cf8:
                void* x12_10 = arg1 + (i_14 << 5) + 0x15f68
                int64_t i_9 = x9_2 - i_14
                int64_t i_1
                
                do
                    if (*(x12_10 + 8) == x8_2 && *(x12_10 + 4) == x19 && *x12_10 == 0xe00)
                        x11_2 += *(x12_10 + 0x14)
                    
                    i_1 = i_9
                    i_9 -= 1
                    x12_10 += 0x20
                while (i_1 != 1)
        
        x25 += x11_2
    
    CollectOngoing(arg1, zx.q(x19), 0x34, 0)
    x0_2, x6, x16 = SumOngoingParam(arg1, &var_eb0)
    int32_t x8_3
    
    x8_3 = x0_2 s< x25 ? x0_2 : x25
    
    x24_1 = x8_3 + x24
else
    x24_1 = x25 + x24
    x0_2, x6, x16 = CountOngoing(arg1, zx.q(x19), 0x12, 0, 0)
    
    if (x0_2 s<= 0)
        uint64_t x9_1 = zx.q(*(arg1 + 0x19ac))
        int32_t x8_1
        
        x8_1 = x19 == 0xffffffff ? 6 : 0x3f1
        
        if (x9_1.d s>= 1)
            int32_t x11_1
            int64_t i_13
            
            if (x9_1.d u>= 3)
                i_13 = x9_1 & 0xfffffffe
                int32_t x11_4 = 0
                int32_t x12_1 = 0
                void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
                int64_t i_10 = i_13
                int64_t i_2
                
                do
                    int32_t x15_5 = *(x13_1 - 0x18)
                    
                    if (x15_5 == x8_1)
                        x16 = *(x13_1 - 0x1c)
                    
                    int32_t x17_3 = *(x13_1 + 8)
                    
                    if (x17_3 == x8_1)
                        x0_2 = *(x13_1 + 4)
                    
                    int32_t x3_2 = x16 == x19 ? 1 : 0
                    int32_t x1_5 = x3_2 & (x15_5 == x8_1 ? 1 : 0)
                    
                    if (x1_5 == 1)
                        x3_2 = *(x13_1 - 0x20)
                    
                    int32_t x2_3 = (x0_2 == x19 ? 1 : 0) & (x17_3 == x8_1 ? 1 : 0)
                    
                    if (x2_3 != 0)
                        x6 = *x13_1
                    
                    int32_t x4_1 = x3_2 != 0xe00 ? 1 : 0
                    int32_t x5_1 = x6 == 0xe00 ? 1 : 0
                    
                    if (((x4_1 | (x1_5 ^ 1)) & 1) == 0)
                        x4_1 = *(x13_1 - 0xc)
                    
                    if ((x5_1 & x2_3) != 0)
                        x5_1 = *(x13_1 + 0x14)
                    
                    int32_t x0_5 = x2_3 & (x6 != 0xe00 ? 1 : 0)
                    x6 = x15_5 == x8_1 ? 1 : 0
                    x16 = (x6 & (x16 != x19 ? 1 : 0)) | (x1_5 & (x3_2 != 0xe00 ? 1 : 0))
                    x0_2 = ((x17_3 == x8_1 ? 1 : 0) & (x0_2 != x19 ? 1 : 0)) | x0_5
                    int32_t x15_3
                    
                    if ((x16 | (x15_5 != x8_1 ? 1 : 0)) != 0)
                        x15_3 = 0
                    else
                        x15_3 = x4_1
                    
                    x11_4 += x15_3
                    int32_t x15_4
                    
                    if ((x0_2 | (x17_3 != x8_1 ? 1 : 0)) != 0)
                        x15_4 = 0
                    else
                        x15_4 = x5_1
                    
                    i_2 = i_10
                    i_10 -= 2
                    x12_1 += x15_4
                    x13_1 += 0x40
                while (i_2 != 2)
                x11_1 = x12_1 + x11_4
                
                if (i_13 != x9_1)
                    goto label_be883c
            else
                i_13 = 0
                x11_1 = 0
            label_be883c:
                void* x12_3 = arg1 + (i_13 << 5) + 0x15f68
                int64_t i_7 = x9_1 - i_13
                int64_t i_3
                
                do
                    if (*(x12_3 + 8) == x8_1 && *(x12_3 + 4) == x19 && *x12_3 == 0xe00)
                        x11_1 += *(x12_3 + 0x14)
                    
                    i_3 = i_7
                    i_7 -= 1
                    x12_3 += 0x20
                while (i_3 != 1)
            x24_1 += x11_1

int32_t x24_2

if ((x21 & 2) != 0 || x24_1 s>= 1)
    uint64_t x9_3 = zx.q(*(arg1 + 0x19ac))
    int32_t x8_4
    
    x8_4 = x19 == 0xffffffff ? 6 : 0x3f1
    
    if (x9_3.d s< 1)
    label_be8ba0:
        CalcCanBuyInfo(arg1, zx.q(x19), &var_eb0)
        
        if (*(arg3 + 0xc80) s< 1)
            x24_2 = 0
        else
            int64_t i_4 = 0
            x24_2 = 0
            
            do
                int32_t var_214
                int32_t var_ed0_1 = var_214
                int32_t var_218
                int32_t var_ed8_1 = var_218
                int32_t var_68
                int32_t var_ee0_1 = var_68
                void var_d0
                void* var_ee8_1 = &var_d0
                int32_t var_d4
                int32_t var_ef0_1 = var_d4
                void var_13c
                void* var_ef8_1 = &var_13c
                int32_t var_140
                int32_t var_f00_1 = var_140
                void var_210
                void* var_f10_1 = &var_210
                void var_1a8
                void* var_f08_1 = &var_1a8
                int32_t var_21c
                int32_t var_f18_1 = var_21c
                int32_t var_220
                int32_t var_f20_1 = var_220
                void var_ea0
                void* var_f28_1 = &var_ea0
                char var_ea3
                char var_f30_1 = var_ea3
                int32_t var_eac
                int32_t var_ea8
                char var_ea4
                bool var_64
                
                if ((CanBuy_Fast(arg1, zx.q(x19), zx.q(*(arg3 + (i_4 << 2))), &var_64, 
                        zx.q(var_eb0), zx.q(var_eac), zx.q(var_ea8), zx.q(var_ea4)) & 1) != 0)
                    uint32_t x8_8 = zx.d(var_64)
                    void* x9_6 = arg5 + (sx.q(x24_2) << 3)
                    x24_2 += 1
                    *x9_6 = *(arg3 + (i_4 << 2))
                    *(x9_6 + 4) = x8_8
                
                i_4 += 1
            while (i_4 s< sx.q(*(arg3 + 0xc80)))
        
        if ((x21 & 1) != 0)
            x24_2 += GetBuyableLandscapeCards(arg1, zx.q(x19), arg5 + (sx.q(x24_2) << 3), &var_eb0)
    else
        int32_t x11_6
        int64_t i_15
        
        if (x9_3.d u>= 3)
            i_15 = x9_3 & 0xfffffffe
            int32_t x11_7 = 0
            int32_t x12_5 = 0
            void* __offset(DomGame, 0x15f88) x13_3 = arg1 + 0x15f88
            int64_t i_12 = i_15
            int64_t i_5
            
            do
                int32_t x15_15 = *(x13_3 - 0x18)
                
                if (x15_15 == x8_4)
                    x16 = *(x13_3 - 0x1c)
                
                int32_t x17_9 = *(x13_3 + 8)
                
                if (x17_9 == x8_4)
                    x0_2 = *(x13_3 + 4)
                
                int32_t x3_8 = x16 == x19 ? 1 : 0
                int32_t x1_15 = x3_8 & (x15_15 == x8_4 ? 1 : 0)
                
                if (x1_15 == 1)
                    x3_8 = *(x13_3 - 0x20)
                
                int32_t x2_11 = (x0_2 == x19 ? 1 : 0) & (x17_9 == x8_4 ? 1 : 0)
                
                if (x2_11 != 0)
                    x6 = *x13_3
                
                int32_t x4_5 = x3_8 != 0xc00 ? 1 : 0
                int32_t x5_5 = x6 == 0xc00 ? 1 : 0
                
                if (((x4_5 | (x1_15 ^ 1)) & 1) == 0)
                    x4_5 = *(x13_3 - 0xc)
                
                if ((x5_5 & x2_11) != 0)
                    x5_5 = *(x13_3 + 0x14)
                
                int32_t x0_9 = x2_11 & (x6 != 0xc00 ? 1 : 0)
                x6 = x15_15 == x8_4 ? 1 : 0
                x16 = (x6 & (x16 != x19 ? 1 : 0)) | (x1_15 & (x3_8 != 0xc00 ? 1 : 0))
                x0_2 = ((x17_9 == x8_4 ? 1 : 0) & (x0_2 != x19 ? 1 : 0)) | x0_9
                int32_t x15_13
                
                if ((x16 | (x15_15 != x8_4 ? 1 : 0)) != 0)
                    x15_13 = 0
                else
                    x15_13 = x4_5
                
                x11_7 += x15_13
                int32_t x15_14
                
                if ((x0_2 | (x17_9 != x8_4 ? 1 : 0)) != 0)
                    x15_14 = 0
                else
                    x15_14 = x5_5
                
                i_5 = i_12
                i_12 -= 2
                x12_5 += x15_14
                x13_3 += 0x40
            while (i_5 != 2)
            x11_6 = x12_5 + x11_7
            
            if (i_15 != x9_3)
                goto label_be8c7c
        else
            i_15 = 0
            x11_6 = 0
        label_be8c7c:
            void* x12_8 = arg1 + (i_15 << 5) + 0x15f68
            int64_t i_8 = x9_3 - i_15
            int64_t i_6
            
            do
                if (*(x12_8 + 8) == x8_4 && *(x12_8 + 4) == x19 && *x12_8 == 0xc00)
                    x11_6 += *(x12_8 + 0x14)
                
                i_6 = i_8
                i_8 -= 1
                x12_8 += 0x20
            while (i_6 != 1)
        
        if (x11_6 == 0)
            goto label_be8ba0
        
        x24_2 = 0
else
    x24_2 = 0

return zx.q(x24_2)
