// 函数: _ZN20SoLoudSoundInterface32SoundInterfaceGetCurrentPositionEP13SoundInstance
// 地址: 0x106cc08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
entry_x1[2].d
double v0 = SoLoud::Soloud::getStreamPosition((*(arg1 + 8)).d)
void* x0_2
int64_t v0_1
x0_2, v0_1 = SoundGetDef(*entry_x1)
v0_1.d = **(x0_2 + 0x38)
v0_1.d = fconvert.s(v0 f* float.d(sx.q(sx.q(v0_1.d):4.d)))
float v1

if (v0_1.d f< 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

v0_1.d = v1 f+ v0_1.d
return zx.q(vcvts_s32_f32(v0_1.d))
