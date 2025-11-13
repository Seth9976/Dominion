// 函数: _Z16UI2AttribMapSyncR3UI2P6XAsset
// 地址: 0x101a39c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg2
UI2& x20 = arg1

if (x8 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg2, false, true)
    x8 = *arg2

int64_t* x21 = *x8
void var_440
memset(&var_440, 0, 0x400)
void var_840
memset(&var_840, 0, 0x400)
void var_1038
uint64_t result = memset(&var_1038, 0, 0x7f8)
UI2& var_1040 = x20

if (x21[1].d s>= 1)
    int64_t x8_3 = 0
    int64_t x15_1 = 0
    int64_t x10_1 = *gUI2
    
    while (true)
        int64_t x16_1 = (x15_1 & 0xffffffff) << 0x20 s>> 0x1e
        int32_t x0_6 = *(&var_440 + x16_1)
        int32_t x1_1 = *(&var_840 + x16_1)
        *(&var_440 + x16_1) = x0_6 - 1
        uint64_t i_3 = zx.q(*(x20 + 0x1970))
        uint64_t x1_3
        
        if (i_3.d == 0)
        label_101a538:
            x1_3 = 0
        else
            int32_t x0_7 = x1_1 - x0_6
            
            if (i_3.d s> x0_7)
                x1_3 = zx.q(*(x20 + (sx.q(x0_7) << 2) + 0x1870))
            
            if (i_3.d s> x0_7 && *(x10_1 + (x1_3 & 0xffff) * 0x19a8 + 0x1658) == x0_7)
            label_101a4f4:
                
                if (x1_3.d == 0)
                label_101a4f8:
                    
                    if (i_3.d s< 1)
                    label_101a538_1:
                        x1_3 = 0
                    else
                        x1_3 = zx.q(*(x20 + 0x1870))
                        
                        if (*(x10_1 + x1_3 * 0x19a8 + 0x1658) != 0)
                            int64_t x17_2 = i_3 - 1
                            void* __offset(UI2, 0x1874) x0_10 = x20 + 0x1874
                            
                            do
                                if (x17_2 == 0)
                                    goto label_101a538_2
                                
                                x1_3 = zx.q(*x0_10)
                                x0_10 += 4
                                x17_2 -= 1
                            while (*(x10_1 + x1_3 * 0x19a8 + 0x1658) != 0)
            else
                if (i_3.d s>= 1)
                    void* __offset(UI2, 0x1870) x1_4 = x20 + 0x1870
                    uint64_t i_2 = i_3
                    uint64_t i
                    
                    do
                        int32_t x3_1 = *x1_4
                        
                        if (*(x10_1 + zx.q(x3_1.w) * 0x19a8 + 0x1658) == x0_7)
                            x1_3 = zx.q(x3_1)
                            goto label_101a4f4
                        
                        i = i_2
                        i_2 -= 1
                        x1_4 += 4
                    while (i != 1)
                    goto label_101a4f8
                
            label_101a538_2:
                x1_3 = 0
        
        void* x17_4 = x10_1 + mulu.dp.d(x1_3.d & 0xffff, 0x19a8)
        result = zx.q(x15_1.d + 1)
        void* x15_2 = *x21 + x8_3 * 0x18
        *(x17_4 + 0x1688) = arg2
        *(x17_4 + 0x1690) = x8_3.d
        int32_t x15_3 = *(x15_2 + 0x10)
        int64_t x16_3 = sx.q(result.d)
        int64_t x1_5 = (result & 0xffffffff) << 0x20 s>> 0x1e
        *(&var_440 + x1_5) = x15_3
        *(&var_840 + x1_5) = x15_3
        (&var_1040)[sx.q(result.d)] = x17_4
        
        if (result.d s< 1)
            x15_1 = x16_3
            x8_3 += 1
            
            if (x8_3 s>= sx.q(x21[1].d))
                break
        else if (x15_3 != 0)
            x15_1 = x16_3
            x8_3 += 1
            
            if (x8_3 s>= sx.q(x21[1].d))
                break
        else
            int32_t i_1
            
            do
                x15_1 = x16_3 - 1
                
                if (x16_3 s< 2)
                    break
                
                void var_444
                i_1 = *(&var_444 + (x16_3 << 2))
                x16_3 = x15_1
            while (i_1 == 0)
            x8_3 += 1
            
            if (x8_3 s>= sx.q(x21[1].d))
                break
        
        x20 = *(&var_1040 + ((x15_1 & 0xffffffff) << 0x20 s>> 0x1d))

return result
