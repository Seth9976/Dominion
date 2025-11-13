// 函数: _Z24PregameHaveLandscapeCard11DomCardEnum11AbilityFlag
// 地址: 0xbf8b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg1
DomKingdomData* x8 = *(gPregameContext + 0x20)
int32_t x9 = *(x8 + 0x28)
int32_t x22

if (x9 == 0)
label_bf8ba4:
    int64_t x20_1 = 0
    x22 = 1
    
    if ((arg2 & 0x20000) != 0)
        while (*(x8 + (x20_1 << 2) + 0x118) == 0
                || (ExtraPileIsAfterDivineWind(x8, x20_1.d) & 1) == 0
                || *(*(gPregameContext + 0x20) + (x20_1 << 2) + 0x118) != i)
            x22 = x20_1 u< 0x1f ? 1 : 0
            
            if (x20_1 == 0x1f)
                break
            
            x8 = *(gPregameContext + 0x20)
            x20_1 += 1
    else
        if (*(x8 + 0x118) == 0)
            goto label_bf8be4
        
        do
            if ((ExtraPileIsAfterDivineWind(x8, x20_1.d) & 1) == 0
                    && *(*(gPregameContext + 0x20) + (x20_1 << 2) + 0x118) == i)
                return zx.q(x22) & 1
            
        label_bf8be4:
            x22 = x20_1 u< 0x1f ? 1 : 0
            
            if (x20_1 == 0x1f)
                return zx.q(x22) & 1
            
            x8 = *(gPregameContext + 0x20)
            x20_1 += 1
        while (*(x8 + (x20_1 << 2) + 0x118) != 0)
else if (x9 == i)
    x22 = 1
else
    int32_t x9_1 = *(x8 + 0x64)
    
    if (x9_1 == 0)
        goto label_bf8ba4
    
    if (x9_1 == i)
        x22 = 1
    else
        int32_t x9_2 = *(x8 + 0xa0)
        
        if (x9_2 == 0)
            goto label_bf8ba4
        
        if (x9_2 == i)
            x22 = 1
        else
            int32_t x9_3 = *(x8 + 0xdc)
            
            if (x9_3 == 0 || x9_3 != i)
                goto label_bf8ba4
            
            x22 = 1

return zx.q(x22) & 1
