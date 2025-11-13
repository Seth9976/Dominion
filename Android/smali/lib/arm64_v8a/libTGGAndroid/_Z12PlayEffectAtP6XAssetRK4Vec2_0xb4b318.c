// 函数: _Z12PlayEffectAtP6XAssetRK4Vec2
// 地址: 0xb4b318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *arg2
int128_t v1
v1.d = *(arg2 + 4)
int32_t v0_1
int32_t v1_1
int32_t v2
v0_1, v1_1, v2 = ScreenCoordToCameraCoord(arg1)
int32_t var_20 = v0_1
int32_t var_1c = v1_1
int32_t var_18 = v2
ParticleSystem* x0_1 = ParticleCreate(arg1, &var_20)
*(x0_1 + 0x54) = 0x3e4ccccd
int64_t result = ParticleGetID(x0_1)
int64_t x10 = sx.q(*(gDomClient + 0x20690))
*(gDomClient + 0x20690) = x10.d + 1
*(gDomClient + (x10 << 2) + 0x20650) = result.d
return result
