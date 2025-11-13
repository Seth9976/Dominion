// 函数: _Z8LoadSomev
// 地址: 0x9c7a6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_18 = TimerStart()
int64_t result

while (true)
    if (*(gLoadingScreen + 0x10) != 0)
        result = TextureAsychronousGetNumberInProgress()
        
        if (result.d s<= 9)
            void* x0_1 = *gLoadingScreen
            void* x8_2 = *(x0_1 + 8)
            *gLoadingScreen = x8_2
            int64_t (* x8_3)()
            
            if (x8_2 == 0)
                x8_3 = gLoadingScreen + 8
            else
                x8_3 = x8_2 + 0x10
            
            *x8_3 = 0
            XAsset* x19_1 = *x0_1
            *(gLoadingScreen + 0x10) -= 1
            XPooledFree(x0_1, 0x18)
            AssetPreload(x19_1)
            result = TimerStop(&var_18)
            
            if (result.d s< 0xb)
                continue
        
        if (*(gLoadingScreen + 0x10) != 0)
            break
    
    result = TextureAsychronousGetNumberInProgress()
    
    if (result.d != 0)
        break
    
    *(gLoadingScreen + 0x1c) = 3
    return GameDlgTitle()

return result
