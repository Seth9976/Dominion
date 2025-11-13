// 函数: _Z18Traits_SetupFilter11DomCardEnumS_
// 地址: 0xaa0e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

if ((PregameCardIs(zx.q(x19), 0x2000000000000) & 1) == 0
        && (PregameCardIs(zx.q(x19), 0x1000000000000) & 1) == 0)
    int32_t x0_5 = PregameCardIs(zx.q(x19), 4)
    int32_t x0_7
    
    if ((x0_5 & 1) == 0)
        x0_7 = PregameCardIs(zx.q(x19), 2)
    
    if ((x0_5 & 1) != 0 || (x0_7 & 1) != 0)
        uint64_t x8_1 = zx.q(arg1 - 0x1147)
        int64_t result = 1
        
        if (x8_1.d u> 6)
            return result
        
        switch (x8_1)
            case 0
                if (x19 - 0xc00 u>= 4 && x19 - 0x501 u>= 2)
                    return 1
            case 1, 4, 5
                return result
            case 2
                result = 1
                
                if (x19 s> 0xe02)
                    uint64_t x8_4 = zx.q(x19 - 0x1100)
                    
                    if ((x8_4.d u> 0x21 || (1 << x8_4 & 0x200008001) == 0) && x19 != 0xe05
                            && x19 != 0xe03)
                        return result
                else if (x19 != 0x21c && x19 != 0xb13 && x19 != 0xb1d)
                    return result
            case 3
                if (x19 != 0x1309)
                    return 1
            case 6
                if (x19 != 0x1103)
                    return 1

return 0
