// 函数: _Z17AssetPassesFilterPKc9AssetTypeRK12SearchFilter
// 地址: 0xc916d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg3
int32_t x0

if (x9 == 0)
    x0 = 1
else
    int32_t x8_1 = *(arg3 + 8)
    x0 = x8_1 s> 2 ? 1 : 0
    
    if (x9 s>= 1)
        int32_t x20_1 = arg2
        void* __offset(SearchFilter, 0x10) x22_1 = arg3 + 0x10
        int64_t x24_1 = 1
        
        if (x8_1 u> 8)
            goto label_c91820
        
        while (true)
            switch (x8_1)
                case 0
                    if ((x0 & 1) != 0)
                        goto label_c91818
                    
                    x0 = WildcardCompare(arg1, XString::operator char const*())
                label_c91820:
                    
                    if (x24_1 s>= sx.q(*arg3))
                        return zx.q(x0) & 1
                    
                    x8_1 = *(x22_1 + 8)
                    x22_1 += 0x10
                    x24_1 += 1
                    
                    if (x8_1 u> 8)
                        break
                    
                    continue
                case 1
                    if ((x0 & 1) != 0)
                        goto label_c91818
                    
                    x0 = WildcardCompare(AssetTypeGetName(zx.q(x20_1)), 
                        XString::operator char const*())
                    goto label_c91820
                case 2
                    goto label_c91820
                case 3
                    if ((x0 & 1) == 0)
                        return 0
                    
                    if ((WildcardCompare(arg1, XString::operator char const*()) & 1) == 0)
                        goto label_c91818
                    
                    return 0
                case 4
                    if ((x0 & 1) == 0)
                        return 0
                    
                    if ((WildcardCompare(AssetTypeGetName(zx.q(x20_1)), 
                            XString::operator char const*()) & 1) == 0)
                        goto label_c91818
                    
                    return 0
                case 5, 8
                    if ((x0 & 1) == 0)
                        return 0
                    
                label_c91818:
                    x0 = 1
                    goto label_c91820
                case 6
                    if ((x0 & 1) == 0)
                        return 0
                    
                    if ((WildcardCompare(arg1, XString::operator char const*()) & 1) != 0)
                        goto label_c91818
                    
                    return 0
                case 7
                    if ((x0 & 1) == 0)
                        return 0
                    
                    if ((WildcardCompare(AssetTypeGetName(zx.q(x20_1)), 
                            XString::operator char const*()) & 1) != 0)
                        goto label_c91818
                    
                    return 0

return zx.q(x0) & 1
