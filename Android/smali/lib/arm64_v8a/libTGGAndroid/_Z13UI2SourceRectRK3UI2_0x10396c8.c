// 函数: _Z13UI2SourceRectRK3UI2
// 地址: 0x10396c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = GameGetTimeSimulation()
int128_t v0_1 = UI2PropDynamic<float>::Eval(v0)
int128_t v0_3 = UI2PropDynamic<float>::Eval(v0)
int32_t v0_5 = UI2PropDynamic<float>::Eval(v0)
int64_t result
int32_t v0_7
int128_t v2
int128_t v3
result, v0_7, v2, v3 = UI2PropDynamic<float>::Eval(v0)
v2.d = v0_1.d f+ v0_5
v3.d = v0_3.d f+ v0_7
return result
