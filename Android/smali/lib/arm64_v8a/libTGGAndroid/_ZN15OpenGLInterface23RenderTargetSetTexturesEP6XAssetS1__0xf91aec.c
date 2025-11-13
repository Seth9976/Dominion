// 函数: _ZN15OpenGLInterface23RenderTargetSetTexturesEP6XAssetS1_
// 地址: 0xf91aec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x4274) = 1
int64_t* x8 = *arg2
int64_t v0
int128_t v2

if (x8 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v2 = AssetCatalogLoadAsset(arg2, false, true)
    x8 = *arg2

int64_t* x8_3 = **x8
v0.d = *(x8_3 + 0xc)
v2.q = *x8_3
v0.d = v0.d f* x8_3[1].d
double v2_1 = vcvt_f32_u32(v2)
float v1 = fconvert.s(0.5f)
v0.d = v2_1.d f* v0.d
v0:4.d = v2_1:4.d f* v0.d
*(arg1 + 0x18) = v0
v2_1.d = v0.d f+ v1
v0.d = v0:4.d
v0.d = v0.d f+ v1
uint64_t var_28 = zx.q(vcvtms_s32_f32(v2_1.d)) | zx.q(vcvtms_s32_f32(v0.d)) << 0x20
int64_t x0_4
int64_t x1_2
x0_4, x1_2 = RectISet(V2I0, &var_28)
(*(*arg1 + 0xb8))(arg1, x0_4, x1_2, x1_2)
uint32_t x9_1 = zx.d(TextureBindGraphicsBuffers(arg2))
glBindFramebuffer(0x8d40, zx.q(*(*(*gOpenGLInterface + 0x4248) + mulu.dp.d(x9_1, 0x158) + 0xe4)))
XAsset* entry_x2
char x8_13

if (entry_x2 == 0)
    x8_13 = 0
else
    int16_t x0_9 = TextureBindGraphicsBuffers(entry_x2)
    void* x19_1 = *(*gOpenGLInterface + 0x4248) + mulu.dp.d(zx.d(x0_9), 0x158)
    glBindRenderbuffer(0x8d41, zx.q(*(x19_1 + 0xe8)))
    glFramebufferRenderbuffer(0x8d40, 0x8d00, 0x8d41, zx.q(*(x19_1 + 0xe8)))
    x8_13 = 1

*(arg1 + 0x4275) = x8_13
return glCheckFramebufferStatus(0x8d40)
