// 函数: _ZN20SoLoudSoundInterface32SoundInterfaceSetCurrentPositionEP13SoundInstancei
// 地址: 0x106cc68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x10)
void* x0_1
double v0
x0_1, v0 = SoundGetDef(*arg2)
v0.d = **(x0_1 + 0x38)
v0.d = float.s(v0.d)
int32_t entry_x2
v0.d = float.s(entry_x2) f/ v0.d
return SoLoud::Soloud::seek((*(arg1 + 8)).d, fconvert.d(v0.d)) __tailcall
