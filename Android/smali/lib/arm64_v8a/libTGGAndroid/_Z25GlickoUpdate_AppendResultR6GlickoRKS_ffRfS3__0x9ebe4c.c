// 函数: _Z25GlickoUpdate_AppendResultR6GlickoRKS_ffRfS3_
// 地址: 0x9ebe4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg4
arg4 = *(arg2 + 4)
float v3 = *PI
int64_t v10
v10.d = fconvert.s(1f)
int64_t v11
v11.d = v10.d f/ sqrt(arg4 * arg4 * fconvert.s(3f) / (v3 * v3) f+ v10.d)
int64_t result
float v0
v0, result = expf((*arg1 - *arg2) * fneg(v11.d))
v0 = v10.d f/ (v0 f+ v10.d)
*arg5 = *arg5 + v11.d f* v11.d * v0 * (v10.d f- v0)
*arg6 = *arg6 + v11.d f* v8 * (arg3 - v0)
return result
