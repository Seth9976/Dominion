// 函数: _Z12DomMapUpdate17CampaignMapHandle
// 地址: 0xc14dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int64_t result = GameDlgManagerDialogActive(1, 5)

if ((result.d & 1) == 0)
    result = GameDlgManagerDialogActive(0x15, 5)
    
    if ((result.d & 1) == 0)
        result = GameDlgManagerDialogActive(0x16, 5)
        
        if ((result.d & 1) == 0)
            result = MutexTryLock(gMapGlobals + 0x68)
            
            if ((result.d & 1) != 0)
                MutexLock(gMapGlobals + 0x40)
                void* x8_1 = *(gMapGlobals + 0x90)
                int32_t x9_1 = *(x8_1 + 4)
                int128_t var_5060
                
                if (x19 == 0 || x9_1 != 0)
                label_c14ecc:
                    
                    if (x9_1 == 2)
                        *(x8_1 + 4) = 0
                        int16_t* x0_3 = *(gMapGlobals + 0x90)
                        int32_t* x19_1 = *gMapGlobals
                        uint64_t x21_1 = zx.q(*x0_3)
                        void* x9_7 = x19_1 + x21_1 * 0x5118
                        XAsset* x8_6 = *(x9_7 + 0x5080)
                        
                        if (x8_6 != 0)
                            AssetCatalogFreeAsset(x8_6)
                            x0_3 = *(gMapGlobals + 0x90)
                        
                        int128_t v0_1
                        int128_t v1_1
                        int128_t v2_1
                        int128_t v3_1
                        v0_1, v1_1, v2_1, v3_1 = DomMapComplete(x0_3)
                        *(x9_7 + 0x5080) = var_5060
                        int128_t var_5030
                        *(x9_7 + 0x50b0) = var_5030
                        int128_t var_5020
                        *(x9_7 + 0x50c0) = var_5020
                        int128_t var_5050
                        *(x9_7 + 0x5090) = var_5050
                        int128_t var_5040
                        *(x9_7 + 0x50a0) = var_5040
                        int128_t var_4ff0
                        *(x9_7 + 0x50f0) = var_4ff0
                        int128_t var_4fe0
                        *(x9_7 + 0x5100) = var_4fe0
                        int128_t var_5010
                        *(x9_7 + 0x50d0) = var_5010
                        int128_t var_5000
                        *(x9_7 + 0x50e0) = var_5000
                        x19_1[x21_1 * 0x1446] = 2
                        *(gMapGlobals + 0x98) = 0
                else
                    int32_t* x8_2 = *gMapGlobals
                    uint64_t x9_2 = zx.q(x19) & 0xffff
                    void* x10_1 = x8_2 + mulu.dp.d(x9_2.d, 0x5118)
                    void* x11_1 = *(x10_1 + 0x5080)
                    
                    if (x11_1 == 0)
                    label_c14e80:
                        *(x10_1 + 0x5080) = 0
                        x8_2[x9_2 * 0x1446] = 0
                        int32_t* x0_2 = XPooledCalloc(0x18)
                        *x0_2 = x19
                        *(x0_2 + 8) = 0
                        *(x0_2 + 0x10) = *(gMapGlobals + 0x30)
                        void* x8_4 = *(gMapGlobals + 0x30)
                        int32_t** x8_5
                        
                        if (x8_4 == 0)
                            x8_5 = gMapGlobals + 0x28
                        else
                            x8_5 = x8_4 + 8
                        
                        *x8_5 = x0_2
                        int32_t x9_5 = *(gMapGlobals + 0x38)
                        x8_1 = *(gMapGlobals + 0x90)
                        *(gMapGlobals + 0x30) = x0_2
                        *(gMapGlobals + 0x38) = x9_5 + 1
                        x9_1 = *(x8_1 + 4)
                        goto label_c14ecc
                    
                    if (*(x11_1 + 0xc) != 3 && x11_1 != *TEXTURE_SYS_WHITE_PIXEL)
                        goto label_c14e80
                
                MutexUnlock(gMapGlobals + 0x40)
                MutexUnlock(gMapGlobals + 0x68)
                
                if (*(gMapGlobals + 0x14) u<= 1)
                    do
                        int64_t var_3c_1 = 0
                        int32_t var_40 = 1
                        var_3c_1:4.d = RandomNext(gRNG)
                        
                        if ((CampaignTryGenerate(&var_40, &var_5060) & 1) == 0)
                            break
                        
                        DomMapCreateAsync(&var_5060)
                    while (*(gMapGlobals + 0x14) u< 2)
                
                return DomMapProcessQueue()

return result
