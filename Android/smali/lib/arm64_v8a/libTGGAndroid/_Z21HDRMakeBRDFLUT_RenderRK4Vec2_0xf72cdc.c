// 函数: _Z21HDRMakeBRDFLUT_RenderRK4Vec2
// 地址: 0xf72cdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0_1
int128_t v1_1
int128_t v2
v0_1, v1_1, v2 = tanf(*PI * fconvert.s(0.25f))
float var_58 = v0_1
char var_28 = 0
int32_t var_4c = 0x42c80000
int32_t var_24 = 0x3f800000
int64_t var_54 = 0x3dcccccd3f800000
int128_t var_48 = *TI
int128_t var_38 = *(TI + 0x10)
Draw3DSetCamera(&var_58)
Draw3DSetRenderTargetClearColor(zx.q(*gRgbaIYellow))

if ((zx.d(data_241e090) & 1) == 0 && __cxa_guard_acquire(&data_241e090) != 0)
    data_241e088 = AssetPtrFromPath("sys/white_pixel.texture", 3)
    __cxa_guard_release(&data_241e090)

if ((zx.d(data_241e0a0) & 1) == 0 && __cxa_guard_acquire(&data_241e0a0) != 0)
    data_241e098 = AssetPtrFromPath("sys/pbr/ibl_brdf_lut.material", 5)
    __cxa_guard_release(&data_241e0a0)

UIProjectRTTransform(arg1)
void var_78
UIProjectInto3DTransformVR(&var_78)
XAsset* x0_4 = data_241e088
int64_t v1_2 = *arg1
XAsset* x4 = data_241e098
uint64_t var_88 = *V20
int64_t var_80 = v1_2
DrawImageParams(x0_4, &var_88, RECT1, gSpriteWhite, x4)
return UIProjectScreenRestore()
