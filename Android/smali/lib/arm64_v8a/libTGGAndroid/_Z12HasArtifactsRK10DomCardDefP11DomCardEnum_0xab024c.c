// 函数: _Z12HasArtifactsRK10DomCardDefP11DomCardEnum
// 地址: 0xab024c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + 0xe0))

if (result.d != 0)
    int32_t x9_2
    
    if (result.d == 0x10)
        result = 1
        *arg2 = *(arg1 + 0xf8)
        x9_2 = *(arg1 + 0x1a0)
        
        if (x9_2 == 0x10)
            goto label_ab02a0
        
        goto label_ab0278
    
    result = 0
    x9_2 = *(arg1 + 0x1a0)
    int32_t x9_3
    
    if (x9_2 != 0x10)
    label_ab0278:
        
        if (x9_2 != 0)
            x9_3 = *(arg1 + 0x260)
            
            if (x9_3 != 0)
                goto label_ab02b4
    else
    label_ab02a0:
        *(arg2 + (zx.q(result.d) << 2)) = *(arg1 + 0x1b8)
        result = zx.q(result.d + 1)
        x9_3 = *(arg1 + 0x260)
        
        if (x9_3 != 0)
        label_ab02b4:
            
            if (x9_3 == 0x10)
                *(arg2 + (zx.q(result.d) << 2)) = *(arg1 + 0x278)
                result = zx.q(result.d + 1)
            
            int32_t x9_6 = *(arg1 + 0x320)
            
            if (x9_6 != 0)
                if (x9_6 == 0x10)
                    *(arg2 + (zx.q(result.d) << 2)) = *(arg1 + 0x338)
                    result = zx.q(result.d + 1)
                
                int32_t x9_8 = *(arg1 + 0x3e0)
                
                if (x9_8 != 0)
                    if (x9_8 == 0x10)
                        *(arg2 + (zx.q(result.d) << 2)) = *(arg1 + 0x3f8)
                        result = zx.q(result.d + 1)
                    
                    int32_t x9_10 = *(arg1 + 0x4a0)
                    
                    if (x9_10 != 0)
                        if (x9_10 == 0x10)
                            *(arg2 + (zx.q(result.d) << 2)) = *(arg1 + 0x4b8)
                            result = zx.q(result.d + 1)
                        
                        int32_t x9_12 = *(arg1 + 0x560)
                        
                        if (x9_12 != 0)
                            if (x9_12 == 0x10)
                                *(arg2 + (zx.q(result.d) << 2)) = *(arg1 + 0x578)
                                result = zx.q(result.d + 1)
                            
                            if (*(arg1 + 0x620) == 0x10)
                                *(arg2 + (zx.q(result.d) << 2)) = *(arg1 + 0x638)
                                return zx.q(result.d + 1)

return result
