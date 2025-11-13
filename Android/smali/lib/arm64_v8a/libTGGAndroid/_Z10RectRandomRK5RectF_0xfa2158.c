// 函数: _Z10RectRandomRK5RectF
// 地址: 0xfa2158
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8
v8.d = *arg1
int64_t v9
v9.d = *(arg1 + 8)
int32_t x8 = 0x3f800000 | (RandomNext(gRNG) & 0x7fffff)
int64_t v10
v10.d = fconvert.s(-1f)
int64_t v11
v11.d = *(arg1 + 4)
int64_t v12
v12.d = *(arg1 + 0xc)
v8.d = v8.d f+ (v9.d f- v8.d) * (float.s(x8) f+ v10.d)
return RandomNext(gRNG)
