// 函数: _Z10FlanimLoadPKcPv
// 地址: 0xf63fdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* result = GameExists()

if ((result.d & 1) != 0)
    result = AssetPtrFromPath(arg1, 0x18)
    XAsset* result_1 = result
    void* x23_1 = nullptr
    int64_t* x22_1 = *(*gpGameData + 0x18)
    
    while (true)
        void* x8_2
        
        if (x23_1 == 0)
            x8_2 = *x22_1
            x23_1 = x8_2
        else
            x8_2 = *x22_1
            x23_1 += 0xa8
        
        int64_t x8_3 = x8_2 + zx.q(x22_1[1].d) * 0xa8
        
        if (x23_1 u>= x8_3)
            break
        
        while (zx.d(*(x23_1 + 0xa2)) == 0)
            x23_1 += 0xa8
            
            if (x23_1 u>= x8_3)
                return result
        
        if (*x23_1 == result_1)
            int32_t x9_3 = *(x23_1 + 0x78)
            
            if (x9_3 s>= 1 && x9_3 != *(arg2 + 0x28))
                void* x8_6 = *(x23_1 + 0x70)
                XAsset* result_3 = result_1
                
                if (x8_6 != 0)
                    XPooledFree(x8_6, x9_3 * 0x70)
                    result_3 = *x23_1
                    *(x23_1 + 0x70) = 0
                
                result = FlanimGetDef(result_3)
                int32_t x8_7 = *(result + 0x28)
                *(x23_1 + 0x78) = x8_7
                
                if (*(result + 0x28) s>= 1)
                    XAsset* result_2 = result
                    result = XPooledCalloc(x8_7 * 0x70)
                    *(x23_1 + 0x70) = result
                    
                    if (*(result_2 + 0x28) s>= 1)
                        *(result + 0x64) = *gRgbaIWhite
                        
                        if (*(result_2 + 0x28) s>= 2)
                            int64_t x8_11 = 0xd4
                            int64_t i = 1
                            
                            do
                                i += 1
                                *(*(x23_1 + 0x70) + x8_11) = *gRgbaIWhite
                                x8_11 += 0x70
                            while (i s< sx.q(*(result_2 + 0x28)))
                
                int32_t x8_12 = *(x23_1 + 0x78)
                
                if (*(x23_1 + 0x84) s>= x8_12)
                    *(x23_1 + 0x84) = x8_12 - 1
            
            int32_t x10_3 = *(x23_1 + 0x10)
            int32_t x9_6 = *(arg2 + 0x58)
            
            if (x9_6 s<= x10_3)
                *(x23_1 + 0x10) = x9_6 - 1
                *(x23_1 + 0x14) = 1
            else if (*(x23_1 + 0x14) + x10_3 s>= x9_6)
                *(x23_1 + 0x14) = x9_6 - x10_3

return result
