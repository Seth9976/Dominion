// 函数: _Z11GetRefCardsRK10DomCardDefRK14DomKingdomDataP11DomCardEnum
// 地址: 0x9e9ec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24
int32_t x0 = HasRandomExtraPileSetup(arg1, &var_24, nullptr, nullptr)
int32_t x8 = x0

if (x0 != 0)
    if (x8 s< 1)
        goto label_9e9f7c
    
    goto label_9e9f00

x8 = HasGenerateExtraPileSetup(arg1, &var_24, nullptr, nullptr)
uint64_t result

if (x8 s>= 1)
label_9e9f00:
    int64_t x9_1 = sx.q(var_24)
    result = 0
    
    while (true)
        int32_t x12_1 = *(arg2 + (x9_1 << 2) + 0x118 + (result << 2))
        
        if (x12_1 == 0)
            break
        
        uint64_t result_1 = result + 1
        *(arg3 + (result << 2)) = x12_1
        result = result_1
        
        if (x9_1 + result_1 s>= sx.q(x9_1.d + x8))
            result = zx.q(result_1.d)
            break
    
    if (*(arg1 + 0xc0) == 0x121c)
        goto label_9e9f90
else
label_9e9f7c:
    result = 0
    
    if (*(arg1 + 0xc0) == 0x121c)
    label_9e9f90:
        int32_t x9_2 = *(arg2 + 0x15c)
        
        if (x9_2 != 0)
            uint64_t x8_5 = zx.q(result.d)
            *(arg3 + (x8_5 << 2)) = x9_2
            int32_t x10_3 = *(arg2 + 0x160)
            int64_t x9_3 = x8_5 + 1
            
            if (x10_3 != 0)
                *(arg3 + (x9_3 << 2)) = x10_3
                int32_t x10_4 = *(arg2 + 0x164)
                x9_3 = x8_5 + 2
                
                if (x10_4 != 0)
                    *(arg3 + (x9_3 << 2)) = x10_4
                    int32_t x10_5 = *(arg2 + 0x168)
                    x9_3 = x8_5 + 3
                    
                    if (x10_5 != 0)
                        *(arg3 + (x9_3 << 2)) = x10_5
                        int32_t x9_4 = *(arg2 + 0x16c)
                        
                        if (x9_4 == 0)
                            return zx.q((x8_5 + 4).d)
                        
                        *(arg3 + ((x8_5 + 4) << 2)) = x9_4
                        return zx.q(result.d + 5)
            
            return zx.q(x9_3.d)

return result
