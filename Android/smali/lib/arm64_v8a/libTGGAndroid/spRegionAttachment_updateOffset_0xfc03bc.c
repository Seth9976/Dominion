// 函数: spRegionAttachment_updateOffset
// 地址: 0xfc03bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v6 = *(arg1 + 0x44)
float v0 = *(arg1 + 0x48)
float v3 = *(arg1 + 0x38)
float v4 = *(arg1 + 0x3c)
float v5 = fconvert.s(0.5f)
float v16 = v6 * v5 * v3
v5 = v0 * v5 * v4
float v1 = v3 * v6 / float.s(*(arg1 + 0x78))
v0 = v4 * v0 / float.s(*(arg1 + 0x7c))
int64_t v8
v8.d = v1 * float.s(*(arg1 + 0x68)) - v16
int64_t v9
v9.d = v0 * float.s(*(arg1 + 0x6c)) - v5
int64_t v11
v11.d = v9.d f+ v0 * float.s(*(arg1 + 0x74))
int64_t v10
v10.d = v8.d f+ v1 * float.s(*(arg1 + 0x70))
float cosp
float sinp
int64_t result = sincosf(&sinp, &cosp, *(arg1 + 0x40) * float.s(0x3c8efa35))
float cosp_1 = cosp
float sinp_1 = sinp
float v2_1 = *(arg1 + 0x30)
float v3_1 = *(arg1 + 0x34)
float v5_1 = v8.d f* sinp_1
float v7_1 = v9.d f* sinp_1
float v17 = v10.d f* sinp_1
sinp_1 = v11.d f* sinp_1
float v4_1 = v2_1 + v8.d f* cosp_1
float v6_1 = v3_1 + v9.d f* cosp_1
v2_1 = v2_1 + v10.d f* cosp_1
cosp_1 = v3_1 + v11.d f* cosp_1
*(arg1 + 0x80) = v4_1 - v7_1
*(arg1 + 0x84) = v5_1 + v6_1
*(arg1 + 0x88) = v4_1 - sinp_1
*(arg1 + 0x8c) = v5_1 + cosp_1
*(arg1 + 0x90) = v2_1 - sinp_1
*(arg1 + 0x94) = v17 + cosp_1
*(arg1 + 0x98) = v2_1 - v7_1
*(arg1 + 0x9c) = v17 + v6_1
return result
