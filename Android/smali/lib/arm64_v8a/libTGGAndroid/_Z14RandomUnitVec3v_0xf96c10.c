// 函数: _Z14RandomUnitVec3v
// 地址: 0xf96c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
v10.d = fconvert.s(1f)
int64_t result
float v1_1
float v2_1
float v3_1

do
    float v0_1 = RandomUnit(gRNG)
    float v0_2 = RandomUnit(gRNG)
    float v0_3
    result, v0_3 = RandomUnit(gRNG)
    v1_1 = v0_1 + v0_1 - *V1
    v3_1 = v0_2 + v0_2 - *(V1 + 4)
    v2_1 = v0_3 + v0_3 - *(V1 + 8)
while (v1_1 * v1_1 + v3_1 * v3_1 + v2_1 * v2_1 f> v10.d)
return result
