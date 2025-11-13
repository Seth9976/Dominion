// 函数: _Z19ProfilerInputHandleRK9InputData
// 地址: 0xfa0b24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = *gProfilerGlobals

if (x9 != 0)
    int32_t x10_1 = *arg1
    
    if (x10_1 == 0)
        if (zx.d(*(x9 + 0xbc6618)) != 0 && zx.d(*(*gpGameData + 0x3c)) != 0)
            int32_t x9_7 = *(arg1 + 4)
            
            if (x9_7 == 0x5d)
                int32_t x9_14 = *(x9 + 0xbc661c)
                
                if (x9_14 s> 0x27)
                    return 1
                
                *(x9 + 0xbc661c) = x9_14 + 1
                return 1
            
            if (x9_7 == 0x5b)
                int32_t x9_8 = *(x9 + 0xbc661c)
                
                if (x9_8 s< 1)
                    return 1
                
                *(x9 + 0xbc661c) = x9_8 - 1
                return 1
    else if (x10_1 == 1)
        int32_t x10_2 = *(arg1 + 4)
        uint64_t x11_2
        
        if (x10_2 == 0x50 && (zx.d(*(arg1 + 8)) & 0xa) != 0)
            x11_2 = *gpGameData
        
        if (x10_2 == 0x50 && (zx.d(*(arg1 + 8)) & 0xa) != 0 && zx.d(*(x11_2 + 0x3c)) != 0)
            int32_t x9_1 = *(x11_2 + 0x38)
            *(x11_2 + 0x38) = x9_1 ^ 0x80
            uint32_t x10_4 = zx.d(*(x9 + 0xbc6610))
            *(x9 + 0xbc6618) = (not.d(x9_1) u>> 7).b & 1
            
            if (x10_4 != 0)
                return 1
            
            *(x9 + 0xbc6612) = 1
            return 1
        
        if (zx.d(*(x9 + 0xbc6618)) != 0 && zx.d(*(*gpGameData + 0x3c)) != 0)
            int64_t result = 0
            
            if (x10_2 s<= 0x6e)
                if (x10_2 == 0x43)
                    *(x9 + 0xbc6612) = 1
                    return 1
                
                if (x10_2 == 0x48)
                    *(x9 + 0xbc6611) ^= 1
                    return 1
                
                if (x10_2 != 0x53)
                    return result
                
                *(x9 + 0xbc6614) = (*(x9 + 0xbc6614) + 1) s% 5
                return 1
            
            uint64_t x11_6 = zx.q(x10_2 - 0xf700)
            
            if (x11_6.d u> 0x29)
                if (x10_2 != 0x6f)
                    return result
                
                *(x9 + 0xbc6634) = 0
                *(x9 + 0xbc6620) = 0
                *(x9 + 0xbc662c) = 0
                return 1
            
            switch (x11_6)
                case 0
                    int32_t x9_10 = *(x9 + 0xbc6620)
                    
                    if ((x9_10 & 0x80000000) == 0)
                        *(x9 + 0xbc6620) = x9_10 - 1
                        
                        if (x9_10 != 0 && x9_10 s<= *(x9 + 0xbc662c))
                            *(x9 + 0xbc662c) = x9_10 - 1
                    
                    return 1
                case 1
                    int32_t x9_17 = *(x9 + 0xbc6620)
                    
                    if (x9_17 s< *(x9 + 0xbc6630) - 1)
                        int32_t x10_12 = *(x9 + 0xbc6628)
                        int32_t x11_9 = *(x9 + 0xbc662c)
                        *(x9 + 0xbc6620) = x9_17 + 1
                        int32_t x9_18 = x9_17 + 1 - x10_12
                        
                        if (x9_18 s>= x11_9)
                            *(x9 + 0xbc662c) = x9_18 + 1
                    
                    return 1
                case 2
                    ProfilerSelectParent(*(x9 + 0xbc6638))
                    return 1
                case 3
                    uint64_t x10_13 = zx.q(*(x9 + 0xbc6620))
                    
                    if ((x10_13.d & 0x80000000) != 0)
                        return 1
                    
                    int32_t x9_21 = *(x9 + (x10_13 << 2) + 0xbc2788)
                    *(x9 + 0xbc6620) = 0
                    *(x9 + 0xbc662c) = 0
                    *(x9 + 0xbc6634) = 1
                    *(x9 + 0xbc6638) = x9_21
                    return 1
                case 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 
                        0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28
                    return result
                case 0x29
                    uint64_t x10_14 = zx.q(*(x9 + 0xbc6620))
                    
                    if ((x10_14.d & 0x80000000) == 0)
                        int32_t x9_23 = *(x9 + (x10_14 << 2) + 0xbc2788)
                        *(x9 + 0xbc6620) = 0
                        *(x9 + 0xbc662c) = 0
                        *(x9 + 0xbc6634) = 2
                        *(x9 + 0xbc6638) = x9_23
                    
                    return 1

return 0
