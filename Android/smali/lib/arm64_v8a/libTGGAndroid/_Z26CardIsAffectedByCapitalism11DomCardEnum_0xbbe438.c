// 函数: _Z26CardIsAffectedByCapitalism11DomCardEnum
// 地址: 0xbbe438
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3 = arg1

if (arg1 s> 0x1000)
    uint64_t x9_4 = zx.q(x8_3 - 0x1001)
    
    if ((x9_4.d u> 0x30 || (1 << x9_4 & 0x1205880119ca5) == 0)
            && (x8_3 - 0x1104 u> 0x1e || (1 << (x8_3 - 0x1104) & 0x42c00563) == 0))
        uint64_t x9_7 = zx.q(x8_3 - 0x1205)
        
        if (x9_7.d u> 0x38 || (1 << x9_7 & 0x10000000000a40b) == 0)
            goto label_bbe504
else if (x8_3 s<= 0x61e)
    if (x8_3 != 0x41c && x8_3 != 0x420 && x8_3 != 0x61c)
    label_bbe504:
        
        if (x8_3 s<= 0x8ff)
            int32_t x8_1
            int32_t x9_18
            
            if (x8_3 s> 0x502)
                if (x8_3 s<= 0x700)
                    if ((x8_3 - 0x603 u> 0x17 || (1 << (x8_3 - 0x603) & 0x83488d) == 0)
                            && x8_3 != 0x503)
                        return 0
                else if (x8_3 - 0x801 u> 0x14 || (1 << (x8_3 - 0x801) & 0x110b09) == 0)
                    if (x8_3 - 0x701 u> 0x11)
                        return 0
                    
                    x8_1 = 1 << (x8_3 - 0x701)
                    x9_18 = 0x204a9
                label_bbe694:
                    
                    if ((x8_1 & x9_18) == 0)
                        return 0
            else if ((x8_3 - 0x302 u> 0x1d || (1 << (x8_3 - 0x302) & 0x21015dd9) == 0)
                    && (x8_3 - 0x400 u> 0x18 || (1 << (x8_3 - 0x400) & 0x124e845) == 0))
                if (x8_3 - 0x204 u> 0x17)
                    return 0
                
                x8_1 = 1 << (x8_3 - 0x204)
                x9_18 = 0xc241c3
                goto label_bbe694
        else if (x8_3 s<= 0xc06)
            uint64_t x9_19 = zx.q(x8_3 - 0x900)
            
            if (x9_19.d u> 0x33 || (1 << x9_19 & 0x8201128844915) == 0)
                uint64_t x9_20 = zx.q(x8_3 - 0xb02)
                
                if ((x9_20.d u> 0x36 || (1 << x9_20 & 0x63000005048c19) == 0) && x8_3 != 0xa0b)
                    return 0
        else if (x8_3 s<= 0xe03)
            uint64_t x9_24 = zx.q(x8_3 - 0xc07)
            
            if ((x9_24.d u> 0x27 || (1 << x9_24 & 0x8000102b51) == 0)
                    && (x8_3 - 0xd05 u> 0x17 || (1 << (x8_3 - 0xd05) & 0xc004c1) == 0)
                    && x8_3 != 0xd4f)
                return 0
        else if ((x8_3 - 0xf05 u> 0x18 || (1 << (x8_3 - 0xf05) & 0x12b4831) == 0)
                && (x8_3 - 0xe04 u> 0x13 || (1 << (x8_3 - 0xe04) & 0x8018d) == 0)
                && x8_3 != 0x1300)
            return 0
else if ((x8_3 - 0x714 u> 9 || (1 << (x8_3 - 0x714) & 0x209) == 0)
        && (x8_3 - 0x81b u> 9 || (1 << (x8_3 - 0x81b) & 0x221) == 0) && x8_3 != 0x61f)
    goto label_bbe504

return 1
