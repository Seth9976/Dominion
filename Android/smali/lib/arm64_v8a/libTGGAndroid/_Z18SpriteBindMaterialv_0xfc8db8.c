// 函数: _Z18SpriteBindMaterialv
// 地址: 0xfc8db8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpSpriteAppData

if (zx.d(*(x8 + 0x1c)) != 0)
    return 

*(x8 + 0x1c) = 1
XAsset* x0 = AssetPtrFromPath("sys\Sprite.material", 5)
int64_t* x0_1 = XPooledCalloc(0x1a28)
*x0_1 = x0
MaterialSimpleStateBind(&x0_1[1], x0)
uint64_t x19_1 = *gpSpriteAppData
int64_t* x0_3 = XPooledCalloc(0x18)
*x0_3 = x0_1
x0_3[1] = 0
x0_3[2] = *(x19_1 + 0x50)
void* x8_2 = *(x19_1 + 0x50)
int64_t** x8_3

if (x8_2 == 0)
    x8_3 = x19_1 + 0x48
else
    x8_3 = x8_2 + 8

*x8_3 = x0_3
int32_t x8_4 = *(x19_1 + 0x58)
*(x19_1 + 0x50) = x0_3
*(x19_1 + 0x58) = x8_4 + 1
