// 函数: _Z28GameSpecific_GetAssetsToLoadR5XListIP6XAssetE
// 地址: 0xba39a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = AssetCatalogGetFirstIter()
int64_t var_58 = x0

if (x0 != 0)
    while (true)
        void* x0_2 = AssetCatalogGetNextIter(&var_58)
        int32_t x8_1 = *(x0_2 + 8)
        
        if (x8_1 - 0x17 u< 0x10)
        label_ba3a3c:
            void** x0_3 = XPooledCalloc(0x18)
            *x0_3 = x0_2
            x0_3[1] = 0
            x0_3[2] = *(arg1 + 8)
            void* x8_4 = *(arg1 + 8)
            XList<XAsset*>& x8_5
            
            if (x8_4 == 0)
                x8_5 = arg1
            else
                x8_5 = x8_4 + 8
            
            *x8_5 = x0_3
            int32_t x8_6 = *(arg1 + 0x10)
            *(arg1 + 8) = x0_3
            *(arg1 + 0x10) = x8_6 + 1
            goto label_ba3a74
        
        uint64_t x8_2 = zx.q(x8_1 - 2)
        
        if (x8_2.d u> 0x13)
        label_ba3b2c:
            pthread_kill(pthread_self(), 6)
            float v0
            float v1
            float v2
            v0, v1, v2 = XNoReturn()
            return clerp(v0, v1, v2) __tailcall
        
        switch (x8_2)
            case 0, 3, 8, 0x10
                goto label_ba3a3c
            case 1
                if (strstr(XString::operator char const*(), "card_gen") != 0)
                    goto label_ba3a74
                
                if (strstr(XString::operator char const*(), "non_atlas") != 0)
                    goto label_ba3a74
                
                if (strstr(XString::operator char const*(), "campaign") != 0)
                    goto label_ba3a74
                
                if (strstr(XString::operator char const*(), "box_art") != 0)
                    goto label_ba3a74
                
                goto label_ba3a3c
            case 2
            label_ba3a74:
                
                if (var_58 == 0)
                    break
                
                continue
            case 4, 5, 6, 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12
                goto label_ba3b2c
            case 0x13
                if (strstr(XString::operator char const*(), "sound_load_always") != 0)
                    goto label_ba3a3c
                
                if (strstr(XString::operator char const*(), "sound_load_game") != 0)
                    goto label_ba3a3c
                
                goto label_ba3a74

return 1
