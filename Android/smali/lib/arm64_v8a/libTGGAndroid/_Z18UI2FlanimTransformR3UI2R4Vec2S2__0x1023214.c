// 函数: _Z18UI2FlanimTransformR3UI2R4Vec2S2_
// 地址: 0x1023214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = GameGetTimeSimulation()
float v0_1
float v1
float v2
float v3
v0_1, v1, v2, v3 = FlanimGetExtents(*(arg1 + 0x14d0))
float v0_3 = UI2PropDynamic<float>::Eval(v0)
int32_t v0_5 = UI2PropDynamic<float>::Eval(v0)
float v0_7 = UI2PropDynamic<float>::Eval(v0)
int64_t result
int64_t v0_9
result, v0_9 = UI2PropDynamic<float>::Eval(v0)
float v4 = *(arg1 + 0x16b0)
v0_9.d = v0_5 f+ v0_9.d
v0_9.d = v0_9.d f- v0_5
v0_9.d = v0_9.d f/ (v3 - v1)
v0_9.d = v4 f* v0_9.d
*arg2 = v4 * (v0_3 + v0_7 - v0_3) / (v2 - v0_1)
*(arg2 + 4) = v0_9.d
*arg3 = *(arg1 + 0x16c4)
return result
