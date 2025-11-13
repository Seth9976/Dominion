// 函数: _Z18MaterialCacheGetIdP6XAsset
// 地址: 0xf7faa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset** x20 = nullptr
XAsset** x8 = *gMaterialCache
uint64_t x9 = zx.q(*(gMaterialCache + 8))
int64_t x11 = x8 + x9 * 0x1a38

do
    if (x20 == 0)
        x20 = x8
    else
        x20 = &x20[0x347]
    
    if (x20 u>= x11)
    label_f7fb0c:
        uint64_t x22_1 = zx.q(*(gMaterialCache + 0x10))
        int32_t x10_1
        
        if (x22_1.d != x9.d)
            x10_1 = *(x8 + x22_1 * 0x1a38 + 0x1a30)
            x9 = x22_1
        else
            x10_1 = x9.d + 1
            *(gMaterialCache + 8) = x10_1
        
        *(gMaterialCache + 0x10) = x10_1
        x20 = x8 + x9 * 0x1a38
        memset(x20, 0, 0x1a30)
        x20[0x346].d = x22_1.d | *(gMaterialCache + 0x18) << 0x10
        int32_t x8_3 = *(gMaterialCache + 0x18)
        int32_t x8_4
        
        if (x8_3 == 0xffff)
            x8_4 = 1
        else
            x8_4 = x8_3 + 1
        
        *(gMaterialCache + 0x14) += 1
        *(gMaterialCache + 0x18) = x8_4
        *x20 = arg1
        break
    
    while (zx.d(*(x20 + 0x1a32)) == 0)
        x20 = &x20[0x347]
        
        if (x20 u>= x11)
            goto label_f7fb0c
while (*x20 != arg1)

return zx.q(x20[0x346].d)
