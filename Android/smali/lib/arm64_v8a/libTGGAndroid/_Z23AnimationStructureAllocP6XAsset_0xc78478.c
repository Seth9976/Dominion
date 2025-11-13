// 函数: _Z23AnimationStructureAllocP6XAsset
// 地址: 0xc78478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
void* x23 = *(*gpGameData + 8)
int64_t* x9

if (arg1 == 0)
    x19 = AssetPtrGetNull(2)
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19
else
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19

int32_t x8_2 = *(x19 + 0x24) + 1
*(x19 + 0x24) = x8_2
void* x9_2 = **x9
uint64_t x22_1

if (x9_2 != 0)
    x22_1 = zx.q(*(x9_2 + 0x10))

XAsset** result

if (x9_2 == 0 || x22_1.d == 0)
    result = nullptr
    *(x19 + 0x24) = x8_2 - 1
else
    result = *(x23 + 0x18)
    *(x23 + 0x2c) += 1
    
    if (result == 0)
        int64_t* x0_1 = XMalloc((*(x23 + 0x28) * 0x350) | 8)
        *x0_1 = *(x23 + 0x20)
        int32_t x8_8 = *(x23 + 0x28)
        result = *(x23 + 0x18)
        *(x23 + 0x20) = x0_1
        
        if (x8_8 s>= 1)
            int64_t i = 0
            XAsset*** result_1 = &x0_1[1]
            
            do
                *result_1 = result
                i += 1
                result = result_1
                result_1 = &result_1[0x6a]
            while (i s< sx.q(*(x23 + 0x28)))
            
            result = result_1 - 0x350
        
        *(x23 + 0x18) = result
    
    *(x23 + 0x18) = *result
    *result = arg1
    int32_t x21_1 = x22_1.d << 6
    __builtin_memset(&result[1], 0, 0x14)
    result[0x69].d = 0
    *(result + 0xe4) = 0
    __builtin_memset(&result[4], 0, 0xa4)
    int64_t x0_3 = XPooledCalloc(x21_1)
    result[4] = x0_3
    result[5].d = 0
    *(result + 0x2c) = x22_1.d
    
    if (x22_1.d s< 1)
        if ((x22_1.d & 0x80000000) != 0)
            result[5].d = x22_1.d
    else
        memset(x0_3, 0, x22_1 << 6)
        result[5].d += x22_1.d
    
    int64_t x0_7 = XPooledCalloc(x21_1)
    result[0x16] = x0_7
    result[0x17].d = 0
    *(result + 0xbc) = x22_1.d
    
    if (x22_1.d s>= 1)
        memset(x0_7, 0, x22_1 << 6)
        result[0x17].d += x22_1.d
    else if ((x22_1.d & 0x80000000) != 0)
        result[0x17].d = x22_1.d
    
    if (x19 != 0)
        *(x19 + 0x24) -= 1

return result
