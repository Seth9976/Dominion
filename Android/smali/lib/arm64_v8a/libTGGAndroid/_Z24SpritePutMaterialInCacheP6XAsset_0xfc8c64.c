// 函数: _Z24SpritePutMaterialInCacheP6XAsset
// 地址: 0xfc8c64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset** x0 = XPooledCalloc(0x1a28)
*x0 = arg1
MaterialSimpleStateBind(&x0[1], arg1)
void* x19_1 = *gpSpriteAppData
XAsset*** x0_2 = XPooledCalloc(0x18)
*x0_2 = x0
x0_2[1] = 0
x0_2[2] = *(x19_1 + 0x50)
void* x8_1 = *(x19_1 + 0x50)
void* x8_2

if (x8_1 == 0)
    x8_2 = x19_1 + 0x48
else
    x8_2 = x8_1 + 8

*x8_2 = x0_2
int32_t x8_3 = *(x19_1 + 0x58)
*(x19_1 + 0x50) = x0_2
*(x19_1 + 0x58) = x8_3 + 1
return &x0[1]
