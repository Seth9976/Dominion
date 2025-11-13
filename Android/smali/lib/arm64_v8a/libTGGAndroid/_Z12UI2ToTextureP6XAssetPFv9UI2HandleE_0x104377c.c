// 函数: _Z12UI2ToTextureP6XAssetPFv9UI2HandleE
// 地址: 0x104377c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = UI2SubBoundary(arg1)
int64_t v8
v8.d = v2 f- v0
int64_t v9
v9.d = v3 f- v1
uint32_t temp0 = vcvts_s32_f32(v8.d)
uint32_t temp0_1 = vcvts_s32_f32(v9.d)
int32_t var_48 = v8.d
int32_t var_44 = v9.d
XAsset* result = TextureCreateForRendering(temp0, temp0_1, 1, 3, nullptr)
int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t v1_1 = *(*x8 + 0x10)
uint64_t var_58 = *V20
int64_t var_50 = v1_1
int32_t var_5c
UI2Begin("render_target", &var_5c, arg1, &var_58, &var_58, 0, 0, true)
UI2UpdateRoot(zx.q(var_5c), false, *gSecondsPerUpdate)
UI2Begin("render_target", &var_5c, arg1, &var_58, &var_58, 0, 0, true)
int32_t x20_1 = var_5c

if (arg2 != 0)
    arg2(zx.q(x20_1))

UI2UpdateRoot(zx.q(x20_1), false, *gSecondsPerUpdate)
Draw3DRenderItemSubmissionBegin()
float v0_5
int128_t v1_3
int128_t v3_1
int128_t v4
v0_5, v1_3, v3_1, v4 = tanf(*PI / fconvert.s(12f))
v3_1 = *TI
v4 = *(TI + 0xc)
v1_3.d = v9.d f/ v8.d
data_24b4884 = v0_5
data_24b4888 = v1_3.d
v1_3.q = *VZ
float v5 = *(VZ + 8)
data_24b488c = 0x404000003dcccccd
float v2_1 = *(VY + 4)
int32_t v6 = *(VY + 8)
float v7 = *VY
double v0_6 = vneg_f32(v1_3)
data_24b4894 = v3_1
v3_1.d = v5 * v2_1
double var_68 = v0_6
v0_6.d = v6 f* v1_3:4.d
data_24b4894:0xc.o = v4
v0_6.d = v3_1.d f- v0_6.d
v3_1.d = v6 f* v1_3.d
v4.d = v2_1 f* v1_3.d
v1_3.d = v7 f* v1_3:4.d
v2_1 = v3_1.d f- v5 * v7
v1_3.d = v1_3.d f- v4.d
v3_1.d = v0_6.d f* v0_6.d
v4.d = v2_1 * v2_1
data_24b48b8 = 0x40400000
data_24b48b0 = 0x40400000
v3_1.d = v3_1.d f+ v4.d
v4.d = v1_3.d f* v1_3.d
v3_1.d = v4.d f+ v3_1.d
v3_1.d = sqrt(v3_1.d)
v4.d = float.s(0x3727c5ac)
data_24b48b4 = 0
float var_60 = fneg(v5)

if (v3_1.d f>= v4.d)
    v4.d = fconvert.s(1f)
    v3_1.d = v3_1.d f+ float.s(0x3727c5ac)
    v3_1.d = v4.d f/ v3_1.d
    v0_6.d = v0_6.d f* v3_1.d
    v2_1 = v2_1 f* v3_1.d
    v3_1.d = v1_3.d f* v3_1.d
    v1_3.d = v0_6.d f* v0_6.d
    v1_3.d = v1_3.d f+ v2_1 * v2_1
    v1_3.d = v3_1.d f* v3_1.d f+ v1_3.d
    v1_3.d = sqrt(v1_3.d)
    v4.d = v4.d f/ v1_3.d
    v0_6.d = v0_6.d f* v4.d
    v1_3.d = v2_1 f* v4.d
    v2_1 = v3_1.d f* v4.d
else
    v0_6.d = *V0
    v1_3.d = *(V0 + 4)
    v2_1 = *(V0 + 8)

int32_t var_90 = v0_6.d
int32_t var_8c = v1_3.d
float var_88 = v2_1
int32_t v0_7
int32_t v1_4
int32_t v2_2
int32_t v3_2
v0_7, v1_4, v2_2, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &var_68, &var_90)
data_24b4894:4.d = v0_7
data_24b4894:8.d = v1_4
data_24b4894:0xc.d = v2_2
data_24b48a4 = v3_2
Draw3DSetCamera(&data_24b4884)
var_90.o = data_71ad00
Draw3DOverlayColor(&var_90)
Draw3DSetSortOverride(1)
Draw3DSetRenderTargetClearColor(zx.q(*gRgbaIBlack))
UIProjectRTTransform(&var_48)
UIProjectInto3DTransformVR(&var_90)

if (x20_1 != 0)
    UI2DrawInt(*gUI2 + zx.q(x20_1.w) * 0x19a8)

UIProjectScreenRestore()
Draw3DRenderItemSubmissionEnd()
RendererPushRT(result, nullptr)
RenderUseSubmittedCamera()
RenderItemListSort()
RenderItemListDraw(2)
RenderClearRenderItems()
RendererPopRT()
return result
