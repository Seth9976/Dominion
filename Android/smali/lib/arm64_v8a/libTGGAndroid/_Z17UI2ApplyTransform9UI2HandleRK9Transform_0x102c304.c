// 函数: _Z17UI2ApplyTransform9UI2HandleRK9Transform
// 地址: 0x102c304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v4 = *(arg2 + 0xc)
float v3 = *(arg2 + 0x10)
float v0 = *arg2
float v2 = *(arg2 + 4)
float v1 = *(arg2 + 8)
float v6 = v3 * v3
float v7 = v2 * v2
float v18 = v2 * v1
float v19 = v3 * v4
float v20 = v3 * v1
float v21 = v2 * v4
float v22 = v1 * v4
float v23 = v3 * v2
void* i = *gUI2 + mulu.dp.d(arg1.d & 0xffff, 0x19a8)
float v16 = v1 * v1
float v24 = v6 + v7
float v25 = v18 - v19
float v26 = v20 + v21
v18 = v18 + v19
v6 = v6 - v7
v7 = v22 - v23
v19 = v21 - v20
v20 = v23 + v22
v22 = *(i + 0x16cc)
v21 = v24 - v16
v23 = v6 + v16
v6 = v6 - v16
v16 = *(i + 0x16c0)
v24 = *(i + 0x16b4)
float v27 = *(i + 0x16b8)
float v28 = *(i + 0x16bc)
float v17 = v4 * v4
v6 = (v6 + v17) * v22
v22 = v22 + v22
v21 = v21 - v17
v23 = v23 - v17
v17 = v3 * v16
float v29 = v2 * v24
float v30 = v1 * v27
float v31 = v4 * v28
int64_t v8
v8.d = v3 * v24
int64_t v9
v9.d = v2 * v16
int64_t v10
v10.d = v1 * v28
int64_t v11
v11.d = v4 * v27
int64_t v12
v12.d = v3 * v27
v3 = v3 * v28
v28 = v2 * v28
v2 = v2 * v27
v27 = v1 * v16
v16 = v4 * v16
v4 = v4 * v24
v1 = v1 * v24
v24 = *(i + 0x16c4)
v26 = v26 * v22
v7 = v7 * v22
v22 = *(i + 0x16c8)
v21 = v24 * v21
v24 = v24 + v24
v18 = v24 * v18
v23 = v22 * v23
v22 = v22 + v22
v19 = v24 * v19
v24 = v25 * v22
float v5 = *(arg2 + 0x14)
v17 = v17 - v29
v3 = v16 + v3
v16 = *(arg2 + 0x18)
v29 = *(arg2 + 0x1c)
v25 = v0 * *(i + 0x16b0)
*(i + 0x16bc) = v2 + v3 - v1
*(i + 0x16b0) = v25
*(i + 0x16b4) = v9.d f+ v8.d f+ v10.d f- v11.d
*(i + 0x16b8) = v4 + v27 f+ v12.d - v28
*(i + 0x16c0) = v17 - v30 - v31
*(i + 0x16c4) = v5 + v0 * (v21 + v24 + v26)
*(i + 0x16c8) = v16 + v0 * (v18 + v23 + v7)
*(i + 0x16cc) = v29 + v0 * (v6 + v19 + v20 * v22)

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)
