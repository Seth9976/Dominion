// 函数: _Z17RendererDrawFramev
// 地址: 0xfa3638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *gGraphicsInterface

if (result != 0)
    result = (*(*result + 0xb0))()
    
    if ((result.d & 1) != 0)
        result = AppHasDrawing()
        
        if ((result.d & 1) != 0)
            int32_t x0 = GetGameSystemTime()
            int64_t x8_3 = sx.q(data_2421e58)
            *((x8_3 << 2) + 0x2421e90) = x0
            int32_t x10_2 = data_2421e5c
            int32_t x11_2 = x8_3.d - x10_2 + ((x8_3.d s< x10_2 ? 1 : 0) << 7)
            int32_t x13_1
            
            x13_1 = x11_2 s< 3 ? x11_2 : 3
            
            while (*((sx.q(x10_2) << 2) + 0x2421e90) s< x0 - 0xc8)
                int32_t x10_3
                
                if (x10_2 + 1 s< 0)
                    x10_3 = x10_2 + 0x80
                else
                    x10_3 = x10_2 + 1
                
                bool cond:0_1 = x11_2 s> 3
                x10_2 = x10_2 + 1 - (x10_3 & 0xffffff80)
                x11_2 -= 1
                data_2421e5c = x10_2
                
                if (not(cond:0_1))
                    x11_2 = x13_1 - 1
                    break
            
            float v0_1
            
            if (x11_2 == 0)
                v0_1 = 0f
            else
                v0_1 = float.s(x11_2) / float.s(x0 - *((sx.q(x10_2) << 2) + 0x2421e90))
                    * float.s(0x447a0000)
            
            int32_t x8_4
            
            if (x8_3.d + 1 s< 0)
                x8_4 = x8_3.d + 0x80
            else
                x8_4 = x8_3.d + 1
            
            *(*gpGameData + 0x4c) = v0_1
            data_2421e58 = x8_3.d + 1 - (x8_4 & 0xffffff80)
            int32_t x0_1
            int128_t v0_2
            x0_1, v0_2 = VRGetAppType()
            int32_t x0_2
            
            if (x0_1 != 0)
                x0_2, v0_2 = VRBindHMD()
            
            int32_t x22_1
            
            if (x0_1 == 0 || (x0_2 & 1) == 0)
                x22_1 = 0
            else
                VRUpdatePose()
                x22_1 = 1
            
            v0_2.q = 0
            v0_2:8.q = 0
            __builtin_memset(*gpRenderAppData + 4, 0, 0x30)
            int128_t v0_3
            int128_t v1_2
            int128_t v2_1
            v0_3, v1_2, v2_1 = (*(**gAppInterface + 0x80))(v0_2)
            uint64_t x8_10 = *gAppInterface
            
            if (zx.d(*(x8_10 + 0x3c)) != 0 || zx.d(*(x8_10 + 0x3d)) != 0)
                v1_2 = *(DEFAULT_IBL_CONFIG + 0x10)
                int32_t var_40_1 = 1
                int128_t var_60 = *DEFAULT_IBL_CONFIG
                int128_t var_50_1 = v1_2
                v0_3, v1_2, v2_1 = HDRMakeBRDFLUT(&var_60, "sys/pbr/brdf_lut")
                x8_10 = *gAppInterface
            
            uint64_t x9_7 = *gpRenderAppData
            v1_2 = *(x9_7 + 0x14)
            v2_1 = *(x9_7 + 0x24)
            *(x9_7 + 0x34) = *(x9_7 + 4)
            *(x9_7 + 0x44) = v1_2
            *(x9_7 + 0x54) = v2_1
            
            if (zx.d(*(x8_10 + 0x3f)) == 0)
                Draw3DRenderItemSubmissionBegin()
                (*(**gAppInterface + 0x60))()
                
                if (VRGetAppType() != 0)
                    VRStatOverlayDraw()
                
                Draw3DRenderItemSubmissionEnd()
                RenderItemListSort()
                
                if (x22_1 != 0)
                    goto label_fa380c
                
                goto label_fa3848
            
            if (x22_1 == 0)
            label_fa3848:
                
                if (x0_1 u<= 5)
                label_fa385c:
                    
                    if ((1 << x0_1 & 0x29) != 0)
                        MonitorDraw()
            else
            label_fa380c:
                VRDraw()
                
                if (x0_1 u<= 5)
                    goto label_fa385c
            
            RenderClearRenderItems()
            int128_t v0_4
            int128_t v1_3
            int128_t v2_2
            result, v0_4, v1_3, v2_2 = GameIsDebugDrawFlagSet(0x40)
            
            if ((result.d & 1) != 0)
                uint64_t x8_15 = *gpRenderAppData
                v1_3 = *(x8_15 + 0x14)
                v2_2 = *(x8_15 + 0x24)
                *(x8_15 + 0x64) = *(x8_15 + 4)
                *(x8_15 + 0x74) = v1_3
                *(x8_15 + 0x84) = v2_2
            
            uint64_t x8_16 = *gpGameData
            *(x8_16 + 0x38) &= 0xfffffeff

return result
