// 函数: _Z15UI2SetToTextureP9UI2HandleiRK4Vec2PFvPvES4_
// 地址: 0x1043c28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return nullptr

UI2Handle* x22_1 = arg1
XAsset* result =
    TextureCreateForRendering(vcvts_s32_f32(*arg3), vcvts_s32_f32(*(arg3 + 4)), 1, 3, nullptr)
Draw3DRenderItemSubmissionBegin()
float v0_2
int128_t v2_1
int128_t v3_1
int128_t v4_1
v0_2, v2_1, v3_1, v4_1 = tanf(*PI / fconvert.s(12f))
v2_1 = *TI
v3_1 = *(TI + 0xc)
v4_1.q = *VZ
float v5_1 = *(VZ + 8)
data_24b4c58 = v0_2
data_24b4c88 = 0
data_24b4c8c = 0x40400000
float v7_1 = *(VY + 4)
float v6_1 = *(VY + 8)
int32_t v16_1 = *VY
data_24b4c60 = 0x404000003dcccccd
double v0_3 = vneg_f32(v4_1)
int32_t v18_1 = *arg3
int32_t v17_1 = *(arg3 + 4)
double var_50 = v0_3
v0_3.d = v6_1 f* v4_1:4.d
data_24b4c68 = v2_1
v0_3.d = v5_1 * v7_1 f- v0_3.d
float v1_2 = v6_1 f* v4_1.d
v2_1.d = v5_1 f* v16_1
data_24b4c68:0xc.o = v3_1
v3_1.d = v7_1 f* v4_1.d
v4_1.d = v16_1 f* v4_1:4.d
v2_1.d = v1_2 f- v2_1.d
v1_2 = v4_1.d f- v3_1.d
v3_1.d = v0_3.d f* v0_3.d
v4_1.d = v2_1.d f* v2_1.d
v3_1.d = v3_1.d f+ v4_1.d
v4_1.d = v1_2 * v1_2
v3_1.d = v4_1.d f+ v3_1.d
v4_1.d = v17_1 f/ v18_1
data_24b4c5c = v4_1.d
v4_1.d = float.s(0x3727c5ac)
v3_1.d = sqrt(v3_1.d)
data_24b4c84 = 0x40400000
float var_48_1 = fneg(v5_1)

if (v3_1.d f>= v4_1.d)
    v4_1.d = fconvert.s(1f)
    v3_1.d = v3_1.d f+ float.s(0x3727c5ac)
    v3_1.d = v4_1.d f/ v3_1.d
    v0_3.d = v0_3.d f* v3_1.d
    v2_1.d = v2_1.d f* v3_1.d
    v3_1.d = v1_2 f* v3_1.d
    v4_1.d = v4_1.d f/ sqrt(v3_1.d f* v3_1.d + v0_3.d f* v0_3.d + v2_1.d f* v2_1.d)
    v0_3.d = v0_3.d f* v4_1.d
    v1_2 = v2_1.d f* v4_1.d
    v2_1.d = v3_1.d f* v4_1.d
else
    v0_3.d = *V0
    v1_2 = *(V0 + 4)
    v2_1.d = *(V0 + 8)

int32_t var_70 = v0_3.d
float var_6c_1 = v1_2
int32_t var_68_1 = v2_1.d
int32_t v0_4
int32_t v1_3
int32_t v2_2
int32_t v3_2
v0_4, v1_3, v2_2, v3_2 = QuatFromBasisChange(VFWD, VRIGHT, &var_50, &var_70)
data_24b4c68:4.d = v0_4
data_24b4c68:8.d = v1_3
data_24b4c68:0xc.d = v2_2
data_24b4c78 = v3_2
Draw3DSetCamera(&data_24b4c58)
var_70.o = data_71ad00
Draw3DOverlayColor(&var_70)
Draw3DSetSortOverride(1)
Draw3DSetRenderTargetClearColor(0xffffff)
int64_t* x0_4 = *gGraphicsInterface
(*(*x0_4 + 0x120))(x0_4, 0xffffff, 0)
UIProjectRTTransform(arg3)
UIProjectInto3DTransformVR(&var_70)

if ((zx.d(data_24b4960) & 1) == 0 && __cxa_guard_acquire(&data_24b4960) != 0)
    data_24b4958 = AssetPtrFromPath("sys/SpineTintRT.material", 5)
    __cxa_guard_release(&data_24b4960)

SpriteSetDefault3dMaterial(data_24b4958)

if (arg2 s>= 1)
    uint64_t i_1 = zx.q(arg2)
    int32_t i
    
    do
        int32_t x8_4 = *x22_1
        
        if (x8_4 != 0)
            UI2DrawInt(*gUI2 + zx.q(x8_4.w) * 0x19a8)
        
        i = i_1
        i_1 -= 1
        x22_1 += 4
    while (i != 1)

if (arg4 != 0)
    arg4(arg5)

UIProjectScreenRestore()
Draw3DRenderItemSubmissionEnd()
RendererPushRT(result, nullptr)
RenderUseSubmittedCamera()
RenderItemListSort()
RenderItemListDraw(2)
RenderClearRenderItems()
RendererPopRT()
return result
