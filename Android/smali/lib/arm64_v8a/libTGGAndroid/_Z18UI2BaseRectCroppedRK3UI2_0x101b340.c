// 函数: _Z18UI2BaseRectCroppedRK3UI2
// 地址: 0x101b340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
float128 v0
int128_t v1
float128 v2
result, v0, v1, v2 = GameGetTimeSimulation()
v1.d = *(arg1 + 0x674)
v2.d = *(arg1 + 0x664)
v1.d = v0.d f- v1.d
v2.d = v2.d f+ *(arg1 + 0x660)

if (v1.d f< v2.d || *(arg1 + 0x654) s> 1)
    v2.d = *(arg1 + 0x670)
    v0.d = v0.d f- v2.d
    int32_t v3
    result, v0, v1, v2, v3 =
        PropEval<RectF>(arg1 + 0x558, arg1 + 0x5dc, arg1 + 0x660, v0.d, v1.d, v1.d)
    v0:4.d = v1.d
    v0:8.d = v2.d
    v0:0xc.d = v3
else
    v0 = *(arg1 + 0x5dc)

v1.q = *(arg1 + 0x175c)
v2.q = *V20
float128 v1_1
v1_1:8.q = vsub_f32(v1, v2).q
v2:8.q = v2.q
float128 v0_2 = vaddq_f32(v2, vmulq_f32(v0, v1_1, 0))
v1_1.d = v0_2:4.d
v2.d = v0_2:8.d
return result
