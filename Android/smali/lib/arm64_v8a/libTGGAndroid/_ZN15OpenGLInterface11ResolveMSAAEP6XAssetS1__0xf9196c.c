// 函数: _ZN15OpenGLInterface11ResolveMSAAEP6XAssetS1_
// 地址: 0xf9196c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t x0_1 = TextureBindGraphicsBuffers(arg2)
XAsset* entry_x2
int16_t x0_3 = TextureBindGraphicsBuffers(entry_x2)
int64_t x24 = *(*gOpenGLInterface + 0x4248)
int32_t var_34
glGetIntegerv(0x8ca6, &var_34)
int64_t* x9 = *arg2
int64_t* x8_1
int64_t* x22_1

if (x9 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg2, false, true)
    x8_1 = *entry_x2
    x22_1 = **arg2
    
    if (x8_1 == 0)
        goto label_f91a20
else
    x8_1 = *entry_x2
    x22_1 = *x9
    
    if (x8_1 == 0)
    label_f91a20:
        
        if (*(entry_x2 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(entry_x2, false, true)
        x8_1 = *entry_x2

int32_t* x10 = *x22_1
int32_t* x8_5 = **x8_1
int32_t x19_1 = *x10
int32_t x21_1 = x10[1]
int32_t x22_2 = *x8_5
int32_t x23 = x8_5[1]
glBindFramebuffer(0x8ca8, zx.q(*(x24 + mulu.dp.d(zx.d(x0_1), 0x158) + 0xe4)))
glBindFramebuffer(0x8ca9, zx.q(*(x24 + mulu.dp.d(zx.d(x0_3), 0x158) + 0xe4)))
int64_t lr
glBlitFramebuffer(0, 0, zx.q(x19_1), zx.q(x21_1), 0, 0, zx.q(x22_2), zx.q(x23), 0x4000, 0x2600, lr)
return glBindFramebuffer(0x8d40, zx.q(var_34))
