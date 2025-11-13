// 函数: sub_fa3a2c
// 地址: 0xfa3a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
v9.d = fconvert.s(0.5f)
int64_t v8
v8.d = *PI
float cosp_1
float sinp_1
sincosf(&sinp_1, &cosp_1, v8.d f* v9.d)
float cosp_2 = cosp_1
*R2R = sinp_1
*(R2R + 4) = cosp_2
float cosp
float sinp
int64_t result = sincosf(&sinp, &cosp, v8.d f* fconvert.s(3f) f* v9.d)
float cosp_3 = cosp
*R2L = sinp
*(R2L + 4) = cosp_3
return result
