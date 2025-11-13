// 函数: _Z11GetRefCardsRK10DomCardDefRK19DomKingdomSetupDataP11DomCardEnum
// 地址: 0x9e9d38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24
int32_t x0 = HasRandomExtraPileSetup(arg1, &var_24, nullptr, nullptr)
int32_t x8 = x0

if (x0 != 0)
    if (x8 s< 1)
        goto label_9e9dfc
    
    goto label_9e9d70

x8 = HasGenerateExtraPileSetup(arg1, &var_24, nullptr, nullptr)
uint64_t result

if (x8 s>= 1)
label_9e9d70:
    int64_t x9_1 = sx.q(var_24)
    result = 0
    int64_t x8_2 = sx.q(x9_1.d + x8)
    void* x10_2 = arg2 + (x9_1 << 4) + 0x1c4
    
    do
        int32_t x11_2 = *(x10_2 - 4)
        
        if (x11_2 == 1)
            *(arg3 + (sx.q(result.d) << 2)) = *x10_2
            result = zx.q(result.d + 1)
        else if (x11_2 == 0)
            break
        
        x9_1 += 1
        x10_2 += 0x10
    while (x9_1 s< x8_2)
    
    if (*(arg1 + 0xc0) == 0x121c)
        goto label_9e9e10
else
label_9e9dfc:
    result = 0
    
    if (*(arg1 + 0xc0) == 0x121c)
    label_9e9e10:
        int32_t x8_5 = *(arg2 + 0x2d0)
        
        if (x8_5 != 0)
            if (x8_5 == 1)
                *(arg3 + (sx.q(result.d) << 2)) = *(arg2 + 0x2d4)
                result = zx.q(result.d + 1)
            
            int32_t x8_7 = *(arg2 + 0x2e0)
            int32_t x8_8
            
            if (x8_7 == 1)
                *(arg3 + (sx.q(result.d) << 2)) = *(arg2 + 0x2e4)
                result = zx.q(result.d + 1)
                x8_8 = *(arg2 + 0x2f0)
                
                if (x8_8 != 0)
                label_9e9e68:
                    
                    if (x8_8 == 1)
                        *(arg3 + (sx.q(result.d) << 2)) = *(arg2 + 0x2f4)
                        result = zx.q(result.d + 1)
                    
                    int32_t x8_11 = *(arg2 + 0x300)
                    
                    if (x8_11 != 0)
                        if (x8_11 == 1)
                            *(arg3 + (sx.q(result.d) << 2)) = *(arg2 + 0x304)
                            result = zx.q(result.d + 1)
                        
                        if (*(arg2 + 0x310) == 1)
                            *(arg3 + (sx.q(result.d) << 2)) = *(arg2 + 0x314)
                            return zx.q(result.d + 1)
            else if (x8_7 != 0)
                x8_8 = *(arg2 + 0x2f0)
                
                if (x8_8 != 0)
                    goto label_9e9e68

return result
