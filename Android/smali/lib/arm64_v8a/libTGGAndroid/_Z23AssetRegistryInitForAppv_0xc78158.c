// 函数: _Z23AssetRegistryInitForAppv
// 地址: 0xc78158
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = XCalloc(0x850)
bool cond:0 = *gAssetInfoTableItemCount s< 1
*gAssetInfo = result

if (not(cond:0))
    int64_t x21_1 = 1
    int64_t (* x22_1)() = gAssetInfoTableItem + 0x30
    
    while (true)
        uint64_t x8_1 = zx.q(*(x22_1 - 0x30))
        int32_t* x24_1 = result + x8_1 * 0x38
        *x24_1 = x8_1.d
        *(x24_1 + 0x30) = *x22_1
        *(x24_1 + 8) = *(x22_1 - 0x28)
        *(x24_1 + 0x10) = *(x22_1 - 0x20)
        *(x24_1 + 0x18) = *(x22_1 - 0x18)
        *(x24_1 + 0x20) = *(x22_1 - 0x10)
        result = DefinitionTypeCalculateHash(*x22_1)
        x24_1[0xa] = result.d
        x24_1[0xb] = *(x22_1 - 8)
        
        if (x21_1 s>= sx.q(*gAssetInfoTableItemCount))
            break
        
        result = *gAssetInfo
        x22_1 += 0x38
        x21_1 += 1

return result
