// 函数: _Z13GfxPlayEffectR6DomGfxP6XAsset
// 地址: 0xb4b298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0
float v1
float v2
float v3
v0, v1, v2, v3 = UI2GetRect(zx.q(*(arg1 + 0x2148)), "itemCard", 0)
float v5 = fconvert.s(0.5f)
int64_t v8
v8.d = (v2 - v0) / float.s(0x43480000)
float var_28 = (v0 + v2) * v5
float var_24 = (v1 + v3) * v5
ParticleSystem* x0_2 = ParticleCreate(arg2, &var_28)
*(x0_2 + 0x54) = v8.d
int64_t result = ParticleGetID(x0_2)
*(arg1 + 0x2184) = result.d
return result
