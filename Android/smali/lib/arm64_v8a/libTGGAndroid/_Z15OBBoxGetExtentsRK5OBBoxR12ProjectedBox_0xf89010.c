// 函数: _Z15OBBoxGetExtentsRK5OBBoxR12ProjectedBox
// 地址: 0xf89010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
float v0 = fconvert.s(0.5f)

do
    void* x11_1 = BASE_OBB_EXTENTS + i
    float v7 = *(arg1 + 0x18)
    float v18 = *(arg1 + 0xc)
    float v16 = *(arg1 + 0x10)
    float v17 = *(arg1 + 0x14)
    float v23 = v7 * v7
    float v24 = v18 * v18
    float v25 = v18 * v16
    float v27 = v7 * v16
    float v20 = v16 * v17
    float v21 = v23 + v24
    v23 = v23 - v24
    v16 = v16 * v16
    float v26 = v7 * v17
    v7 = v7 * v18
    v18 = v18 * v17
    v17 = v17 * v17
    float v3 = (*x11_1 - *V1 * v0) * *(arg1 + 0x1c)
    float v1 = (*(x11_1 + 4) - *(V1 + 4) * v0) * *(arg1 + 0x20)
    float v5 = v23 + v16
    float v2 = (*(x11_1 + 8) - *(V1 + 8) * v0) * *(arg1 + 0x24)
    float v6 = v23 - v16
    float v4 = v21 - v16 - v17
    v16 = v1 + v1
    v23 = v3 + v3
    v21 = v2 + v2
    int32_t* x11_2 = arg2 + i
    i += 0xc
    v1 = *(arg1 + 4) + v21 * (v20 - v7) + v23 * (v25 + v26) + v1 * (v5 - v17)
    v2 = *(arg1 + 8) + v2 * (v6 + v17) + v23 * (v18 - v27) + v16 * (v7 + v20)
    *x11_2 = *arg1 + v21 * (v27 + v18) + v3 * v4 + v16 * (v25 - v26)
    x11_2[1] = v1
    x11_2[2] = v2
while (i != 0x60)
