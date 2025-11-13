// 函数: _Z23LoadingScreenCountFilesv
// 地址: 0x9c79d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** result = GameSpecific_GetAssetsToLoad(gLoadingScreen)

if ((result.d & 1) == 0)
    result = AssetCatalogGetFirstIter()
    void** i = result
    
    if (result != 0)
        do
            result = AssetCatalogGetNextIter(&i)
            
            if (result[1].d != 4)
                void** result_1 = result
                result = XPooledCalloc(0x18)
                *result = result_1
                result[1] = 0
                void* x8_4 = *(gLoadingScreen + 8)
                result[2] = x8_4
                void** x8_5
                
                if (x8_4 == 0)
                    x8_5 = gLoadingScreen
                else
                    x8_5 = x8_4 + 8
                
                *x8_5 = result
                int32_t x8_6 = *(gLoadingScreen + 0x10)
                *(gLoadingScreen + 8) = result
                *(gLoadingScreen + 0x10) = x8_6 + 1
        while (i != 0)

*(gLoadingScreen + 0x18) = *(gLoadingScreen + 0x10)
return result
