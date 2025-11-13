// 函数: _Z27ShaderUnbindGraphicsBuffersP6XAsset
// 地址: 0xfa5804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x8

if (arg1 == 0)
    x19 = AssetPtrGetNull(4)
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
void* x20 = *x8
int32_t x2 = *(x20 + 0x10)

if (x2 != 0)
    int64_t* x0 = *gGraphicsInterface
    (*(*x0 + 0x98))(x0, 0, x2)
    *(x20 + 0x10) = 0

if (*(x20 + 0x18) != 0)
    void* x0_1 = *(x20 + 0x20)
    *(x20 + 0x18) = 0
    XFree(x0_1)

int32_t x2_1 = *(x20 + 0x38)

if (x2_1 != 0)
    int64_t* x0_2 = *gGraphicsInterface
    (*(*x0_2 + 0x98))(x0_2, 1, x2_1)
    *(x20 + 0x38) = 0

if (*(x20 + 0x40) != 0)
    void* x0_3 = *(x20 + 0x48)
    *(x20 + 0x40) = 0
    XFree(x0_3)

*(x19 + 0x24) -= 1
