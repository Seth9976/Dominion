// 函数: _Z12FabImageDrawRK5FabElRK8FabState
// 地址: 0xf5e244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = *(arg1 + 0x40)

if (x19 == 0)
    return 

ElBox(arg1, arg2)
float var_78
CalcTransform(arg2 + 0xc, &var_78)
float v0_1 = *(arg1 + 0x50)
float v1_1 = *(arg1 + 0x54)
uint32_t x8_1

if (not(v0_1 <= float.s(0x3f7fbe77)))
    x8_1 = 0xff
else if (v0_1 >= float.s(0x3a83126f))
    x8_1 = vcvts_s32_f32(v0_1 * float.s(0x437f0000) + fconvert.s(0.5f))
else
    x8_1 = 0

v0_1 = *(arg1 + 0x58)
uint32_t x9_1

if (not(v1_1 <= float.s(0x3f7fbe77)))
    x9_1 = 0xff00
else if (v1_1 >= float.s(0x3a83126f))
    x9_1 = vcvts_s32_f32(v1_1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 8
else
    x9_1 = 0

v1_1 = *(arg1 + 0x5c)
uint32_t x10_1

if (not(v0_1 <= float.s(0x3f7fbe77)))
    x10_1 = 0xff0000
else if (v0_1 >= float.s(0x3a83126f))
    x10_1 = vcvts_s32_f32(v0_1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 0x10
else
    x10_1 = 0

uint32_t x11_1

if (not(v1_1 <= float.s(0x3f7fbe77)))
    x11_1 = -0x1000000
else if (v1_1 >= float.s(0x3a83126f))
    x11_1 = vcvts_s32_f32(v1_1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 0x18
else
    x11_1 = 0

uint32_t var_24 = x9_1 | x8_1 | x10_1 | x11_1
void var_50
UIProjectInto3DTransform(&var_50)

if ((zx.d(data_23ee370) & 1) == 0 && __cxa_guard_acquire(&data_23ee370) != 0)
    data_23ee368 = AssetPtrFromPath("sys/sprite_3d_no_zread.material", 5)
    __cxa_guard_release(&data_23ee370)

SpriteSetDefault3dMaterial(data_23ee368)
float v0_2
float v2_2
v0_2, v2_2 = ElSize(arg1, arg2)
float v1_2 = fconvert.s(0.5f)
v0_2 = v0_2 * v1_2
v1_2 = v2_2 * v1_2
float v3_1 = *V20
float v4_1 = *(V20 + 4)
var_78 = v3_1 - v0_2
float var_74_1 = v4_1 - v1_2
float var_70_1 = v0_2 + v3_1
float var_6c_1 = v1_2 + v4_1
int64_t var_80 = SpriteColorNormal(&var_24)
DrawImageParams(x19, &var_78, RECT1, &var_80, nullptr)
SpriteSetDefault3dMaterial(nullptr)
UIProjectiveMatrixRestore()
