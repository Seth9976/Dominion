// 函数: _Z15SpriteDrawBeginv
// 地址: 0xfcae98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(*gpSpriteAppData + 0x1d) = 1
int64_t x0 = SpriteBindGraphics()
uint64_t x8_1 = *gpSpriteAppData

if (zx.d(*(x8_1 + 0x1c)) != 0)
    return x0

*(x8_1 + 0x1c) = 1
XAsset* x0_1 = AssetPtrFromPath("sys\Sprite.material", 5)
int64_t* x0_2 = XPooledCalloc(0x1a28)
*x0_2 = x0_1
MaterialSimpleStateBind(&x0_2[1], x0_1)
uint64_t x19_1 = *gpSpriteAppData
int64_t* x0_4 = XPooledCalloc(0x18)
*x0_4 = x0_2
x0_4[1] = 0
x0_4[2] = *(x19_1 + 0x50)
void* x8_3 = *(x19_1 + 0x50)
int64_t** x8_4

if (x8_3 == 0)
    x8_4 = x19_1 + 0x48
else
    x8_4 = x8_3 + 8

*x8_4 = x0_4
int32_t x8_5 = *(x19_1 + 0x58)
*(x19_1 + 0x50) = x0_4
*(x19_1 + 0x58) = x8_5 + 1
return x0_4
