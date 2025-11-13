// 函数: _Z11InputHandleR9InputData
// 地址: 0xf74978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((GameExists() & 1) != 0)
    if (*arg1 == 1)
        int32_t x9_1 = *(arg1 + 4)
        int32_t x8_2 = *(arg1 + 8)
        uint64_t x20_1 = *gpGameData
        int32_t x10_1 = x8_2 & 7
        int32_t x22_1
        
        if (x8_2 != 4 || x9_1 != 0x42)
            x22_1 = x10_1 != 0 ? 1 : 0
            
            if (x9_1 != 0xf705 || (x22_1 & 1) != 0)
                if (x8_2 == 4 && x9_1 == 0xf707)
                    XAppClose()
                    return 1
                
                if (x9_1 == 0x43)
                    int32_t x9_5 = x8_2 & 0xa
                    
                    if (x9_5 != 0 && (x8_2 & 1) != 0 && zx.d(*(*gAppInterface + 0x3c)) != 0)
                        VRRecenterTilt()
                    else if (x9_5 != 0 && zx.d(*(*gAppInterface + 0x3c)) != 0)
                        VRRecenter()
            else if (zx.d(*(*gAppInterface + 0x3c)) != 0)
                *(x20_1 + 0x38) ^= 0x200
                return 1
        else
            uint64_t x8_3 = *gAppInterface
            
            if (zx.d(*(x8_3 + 0x39)) == 0)
                *(x8_3 + 0x36) ^= 1
                (*(**gGraphicsInterface + 0x168))()
                return 1
            
            x22_1 = x10_1 != 0 ? 1 : 0
        
        int32_t x8_14 = *(arg1 + 4)
        int32_t* x8_20
        
        if (x8_14 == 0xbe)
            if ((not.d(*(arg1 + 8)) & 6) == 0)
                x8_20 = *gpRenderAppData
                *x8_20 += 1
                return 1
        else if (x8_14 == 0xbc)
            int32_t x8_21 = *(arg1 + 8)
            
            if ((not.d(x8_21) & 6) == 0)
                int32_t* x9_11 = *gpRenderAppData
                
                if ((x8_21 & 1) != 0)
                    *x9_11 = 0
                    return 1
                
                *x9_11 -= 1
                x8_20 = *gpRenderAppData
                int32_t x9_12 = *x8_20
                int32_t x9_13
                
                x9_13 = x9_12 s< 0x2710 ? x9_12 : 0x2710
                
                *x8_20 = x9_13 & not.d(x9_13 s>> 0x1f)
                return 1
        else if (x8_14 != 0x44)
            if (((x22_1 | (x8_14 != 0xf707 ? 1 : 0)) & 1) == 0)
                if (zx.d(*(*gpGameData + 0x3c)) != 0)
                    *(x20_1 + 0x38) ^= 0x40
                    return 1
            else if ((((x22_1 | (x8_14 != 0xf706 ? 1 : 0)) & 1) == 0
                    || (x8_14 == 0x46 && (zx.d(*(arg1 + 8)) & 0xa) != 0))
                    && zx.d(*(*gpGameData + 0x3c)) != 0)
                *(x20_1 + 0x38) ^= 0x20
                return 1
        else if ((not.d(*(arg1 + 8)) & 6) == 0)
            uint64_t x8_17 = *gpGameData
            *(x8_17 + 0x3c) ^= 1
            return 1
    
    if ((ProfilerInputHandle(arg1) & 1) != 0)
        return 1
    
    int64_t* x0_5 = *gAppInterface
    
    if (((*(*x0_5 + 0x50))(x0_5, arg1) & 1) != 0)
        return 1
    
    ControllersHandleInput(arg1)

return 0
