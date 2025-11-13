// 函数: _Z14CalcTowerCardsR7DomGame9PlayerWho
// 地址: 0xbfed54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = 0
int64_t i_3 = -0x1a0
int32_t var_c8[0x1a]
int64_t i

do
    void* x11_1 = arg1 + i_3
    int32_t x10_1 = *(x11_1 + 0x173c)
    
    if (x10_1 != 0 && *(x11_1 + 0x1744) == 0)
        bool cond:0_1 = x21 != 0x19
        var_c8[sx.q(x21)] = x10_1
        x21 += 1
        
        if (not(cond:0_1))
            break
    
    i = i_3
    i_3 += 0x10
while (i != -0x10)
void var_d50
int32_t x0_1 = CardsOwnedScoring(arg1, arg2, &var_d50)
int32_t var_d0 = x0_1
int32_t x20

if (x0_1 == 0)
    x20 = 0
else if (x21 s<= 0)
    void* x23_1 = &var_d50
    int64_t i_5 = sx.q(x0_1) << 2
    int64_t i_1
    
    do
        uint64_t fp_1 = zx.q(*x23_1)
        
        if (fp_1.d u>= 0x320)
            void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_14 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
            *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_15 = *(x8_14 - 0x90)
            *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        void* x25_2 = arg1 + fp_1 * 0x68
        
        if ((CardIsFast(arg1, zx.q(*(x25_2 + 0x1a70)), 8) & 1) == 0)
            if (fp_1.d u>= 0x320)
                void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_18 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
                *(*(x8_18 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_19 = *(x8_18 - 0x90)
                *(x8_19 + 0x1a2c) = *(x8_19 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            PileSource(arg1, zx.q(*(x25_2 + 0x1a70)))
        
        i_1 = i_5
        i_5 -= 4
        x23_1 += 4
    while (i_1 != 4)
    x20 = 0
else
    int32_t x27_1 = var_c8[0]
    x20 = 0
    uint64_t x26_1 = zx.q(x21)
    void* x28_1 = &var_d50
    
    while (true)
        uint64_t x24_1 = zx.q(*x28_1)
        
        if (x24_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_3 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_4 = *(x8_3 - 0x90)
            *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        void* x22_1 = arg1 + x24_1 * 0x68
        
        if ((CardIsFast(arg1, zx.q(*(x22_1 + 0x1a70)), 8) & 1) == 0)
            if (x24_1.d u>= 0x320)
                void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_7 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_8 = *(x8_7 - 0x90)
                *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t i_4 = *(x22_1 + 0x1a70)
            int32_t x0_9 = PileSource(arg1, zx.q(i_4))
            int64_t x9_5 = -0x410
            int32_t x8
            
            while (true)
                void* x10_2 = arg1 + x9_5
                int32_t i_2 = *(x10_2 + 0x19ac)
                
                if (i_2 == i_4)
                    i_2 = i_4
                    
                    if (x27_1 == i_2)
                        x8 = 1
                        break
                else
                    if (i_2 != x0_9 && *(x10_2 + 0x19b0) != i_4)
                        int64_t temp2_1 = x9_5
                        x9_5 += 0x10
                        
                        if (temp2_1 != -0x10)
                            continue
                        else
                            i_2 = 0
                    
                    if (x27_1 == i_2)
                        x8 = 1
                        break
                
                int64_t x10_4 = 1
                int64_t x9_6
                
                do
                    x9_6 = x10_4
                    
                    if (x26_1 == x10_4)
                        break
                    
                    x10_4 = x9_6 + 1
                while (var_c8[x9_6] != i_2)
                
                x8 = x9_6 u< x26_1 ? 1 : 0
                break
            
            x20 += x8
        
        x28_1 += 4
        
        if (x28_1 == &var_d50 + (sx.q(x0_1) << 2))
            break

return zx.q(x20)
