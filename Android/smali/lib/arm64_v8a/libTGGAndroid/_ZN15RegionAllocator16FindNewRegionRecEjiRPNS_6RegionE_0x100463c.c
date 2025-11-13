// 函数: _ZN15RegionAllocator16FindNewRegionRecEjiRPNS_6RegionE
// 地址: 0x100463c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    int64_t x23_1 = *(arg1 + 0x20)
    uint64_t x24_1 = zx.q(arg2) & 0xffff
    int32_t* x22_1 = x23_1 + mulu.dp.d(x24_1.d, 0x58)
    int32_t x8_1 = *x22_1
    int32_t x20_1 = arg3.d
    RectI* x21_1 = arg1
    bool cond:0_1
    
    if (x8_1 == 0)
        void* x25_1 = x23_1 + x24_1 * 0x58
        int128_t var_60
        *x22_1 = RegionAllocator::Partition(x21_1, x25_1 + 4, x25_1 + 4, &var_60)
        int32_t x26_1 = *(x25_1 + 0x30)
        int32_t x0_3 = RectIWidth(&var_60)
        int32_t x0_5
        int128_t v0_1
        
        if (x0_3 s>= *x21_1)
            x0_5, v0_1 = RectIHeight(&var_60)
        
        int32_t x8_8
        
        if (x0_3 s>= *x21_1 && x0_5 s>= *(x21_1 + 4))
            uint64_t x8_4 = zx.q(*(x21_1 + 0x30))
            int64_t x9_2
            int32_t x10_1
            
            if (x8_4.d != *(x21_1 + 0x28))
                x9_2 = *(x21_1 + 0x20)
                x10_1 = *(x9_2 + x8_4 * 0x58 + 0x50)
            else
                x9_2 = *(x21_1 + 0x20)
                x10_1 = x8_4.d + 1
                *(x21_1 + 0x28) = x10_1
            
            *(x21_1 + 0x30) = x10_1
            v0_1.q = 0
            v0_1:8.q = 0
            int32_t* x9_3 = x9_2 + x8_4 * 0x58
            __builtin_memset(x9_3, 0, 0x50)
            x9_3[0x14] = x8_4.d | *(x21_1 + 0x38) << 0x10
            int32_t x8_6 = *(x21_1 + 0x38)
            int32_t x8_7
            
            if (x8_6 == 0xffff)
                x8_7 = 1
            else
                x8_7 = x8_6 + 1
            
            *(x21_1 + 0x34) += 1
            *(x21_1 + 0x38) = x8_7
            v0_1 = var_60
            x8_8 = x9_3[0x14]
            x9_3[0xc] = x26_1
            *x9_3 = 0
            *(x9_3 + 4) = v0_1
        else
            x8_8 = 0
        
        *(x23_1 + x24_1 * 0x58 + 0x38) = x8_8
        int32_t x25_3 = *(x25_1 + 0x30)
        int128_t var_70
        int32_t x0_7 = RectIWidth(&var_70)
        int32_t x0_9
        int128_t v0_2
        
        if (x0_7 s>= *x21_1)
            x0_9, v0_2 = RectIHeight(&var_70)
        
        int32_t x8_15
        
        if (x0_7 s>= *x21_1 && x0_9 s>= *(x21_1 + 4))
            uint64_t x8_11 = zx.q(*(x21_1 + 0x30))
            int64_t x9_6
            int32_t x10_6
            
            if (x8_11.d != *(x21_1 + 0x28))
                x9_6 = *(x21_1 + 0x20)
                x10_6 = *(x9_6 + x8_11 * 0x58 + 0x50)
            else
                x9_6 = *(x21_1 + 0x20)
                x10_6 = x8_11.d + 1
                *(x21_1 + 0x28) = x10_6
            
            *(x21_1 + 0x30) = x10_6
            v0_2.q = 0
            v0_2:8.q = 0
            int32_t* x9_7 = x9_6 + x8_11 * 0x58
            __builtin_memset(x9_7, 0, 0x50)
            x9_7[0x14] = x8_11.d | *(x21_1 + 0x38) << 0x10
            int32_t x8_13 = *(x21_1 + 0x38)
            int32_t x8_14
            
            if (x8_13 == 0xffff)
                x8_14 = 1
            else
                x8_14 = x8_13 + 1
            
            *(x21_1 + 0x34) += 1
            *(x21_1 + 0x38) = x8_14
            v0_2 = var_70
            x8_15 = x9_7[0x14]
            x9_7[0xc] = x25_3
            *x9_7 = 0
            *(x9_7 + 4) = v0_2
        else
            x8_15 = 0
        
        *(x23_1 + x24_1 * 0x58 + 0x34) = x8_15
        int32_t x8_16 = *x22_1
        cond:0_1 = x8_16 != x20_1
        
        if (x8_16 s>= x20_1)
            goto label_1004848
    else
        cond:0_1 = x8_1 != x20_1
        
        if (x8_1 s>= x20_1)
        label_1004848:
            int32_t** entry_x3
            
            if (not(cond:0_1))
                if (*(x23_1 + x24_1 * 0x58 + 0x28) == 0)
                    *entry_x3 = x22_1
                    return 1
                
                int32_t* x8_19 = *entry_x3
                
                if (x8_19 == 0)
                    *entry_x3 = x22_1
                else if (x8_19[0xa] != 0
                        && (*(x23_1 + x24_1 * 0x58 + 0x2c) s< x8_19[0xb] || *x8_19 s> x20_1))
                    *entry_x3 = x22_1
            
            if ((RegionAllocator::FindNewRegionRec(x21_1.d, *(x23_1 + x24_1 * 0x58 + 0x38), 
                    zx.q(x20_1)) & 1) != 0)
                return 1
            
            if ((RegionAllocator::FindNewRegionRec(x21_1.d, *(x23_1 + x24_1 * 0x58 + 0x34), 
                    zx.q(x20_1)) & 1) != 0)
                return 1
            
            if (*x22_1 != x20_1)
                if (*(x23_1 + x24_1 * 0x58 + 0x28) == 2)
                    if ((RegionAllocator::FindNewRegionRec(x21_1.d, *(x23_1 + x24_1 * 0x58 + 0x3c), 
                            zx.q(x20_1)) & 1) != 0)
                        return 1
                    
                    if ((RegionAllocator::FindNewRegionRec(x21_1.d, *(x23_1 + x24_1 * 0x58 + 0x40), 
                            zx.q(x20_1)) & 1) != 0)
                        return 1
                    
                    if ((RegionAllocator::FindNewRegionRec(x21_1.d, *(x23_1 + x24_1 * 0x58 + 0x44), 
                            zx.q(x20_1)) & 1) != 0)
                        return 1
                    
                    if ((RegionAllocator::FindNewRegionRec(x21_1.d, *(x23_1 + x24_1 * 0x58 + 0x48), 
                            zx.q(x20_1)) & 1) != 0)
                        return 1
                
                int32_t* x8_29 = *entry_x3
                
                if (x8_29 == 0)
                label_10049e8:
                    *entry_x3 = x22_1
                    return 0
                
                int32_t x9_12 = x8_29[0xa]
                
                if (*(x23_1 + x24_1 * 0x58 + 0x28) == 0)
                    if (x9_12 != 0 || *(x23_1 + x24_1 * 0x58 + 0x2c) s< x8_29[0xb]
                            || *x22_1 s< *x8_29)
                        goto label_10049e8
                else if (x9_12 != 0
                        && (*(x23_1 + x24_1 * 0x58 + 0x2c) s< x8_29[0xb] || *x22_1 s< *x8_29))
                    goto label_10049e8

return 0
