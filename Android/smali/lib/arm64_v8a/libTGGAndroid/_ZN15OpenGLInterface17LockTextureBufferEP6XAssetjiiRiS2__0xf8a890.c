// 函数: _ZN15OpenGLInterface17LockTextureBufferEP6XAssetjiiRiS2_
// 地址: 0xf8a890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = arg2
int64_t* x8

if (arg2 == 0)
    x19 = AssetPtrGetNull(3)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
void* x24_1 = *(arg1 + 0x4248) + mulu.dp.d(zx.d(arg3.w), 0x158)
int32_t x9_3 = *(x24_1 + 0x14c)
int32_t* x23_1 = **x8
int32_t* entry_x6
*entry_x6 = x9_3
int32_t x8_4 = (*x23_1 u/ x9_3) u>> arg4
uint32_t x9_5 = (x23_1[1] u/ x9_3) u>> arg4
int32_t x0

x0 = x8_4 != 0 ? x8_4 : 1

uint32_t x1

x1 = x9_5 != 0 ? x9_5 : 1

*(x24_1 + 0xd8) = XMalloc(TextureFormatLinearImageSize(x0, x1, zx.q(x23_1[6])))
int32_t x0_5

if ((TextureFormatIsCompressed(zx.q(x23_1[6])) & 1) == 0)
    uint32_t x8_6 = *x23_1 u>> arg4
    uint32_t x0_6
    
    x0_6 = x8_6 != 0 ? x8_6 : 1
    
    x0_5 = TextureFormatPitch(x0_6, zx.q(x23_1[6]))
else
    x0_5 = 0

*arg6 = x0_5
int64_t result = *(x24_1 + 0xd8)
*(x19 + 0x24) -= 1
return result
