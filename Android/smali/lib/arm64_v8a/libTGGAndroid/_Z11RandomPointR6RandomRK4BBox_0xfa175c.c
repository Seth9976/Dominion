// 函数: _Z11RandomPointR6RandomRK4BBox
// 地址: 0xfa175c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8
v8.d = *arg2
int128_t v9
v9.d = *(arg2 + 0xc)
int32_t x8 = 0x3f800000 | (RandomNext(arg1) & 0x7fffff)
int64_t v10
v10.d = fconvert.s(-1f)
int64_t v11
v11.d = *(arg2 + 4)
int64_t v12
v12.d = *(arg2 + 0x10)
v8.d = v8.d f+ (v9.d f- v8.d) * (float.s(x8) f+ v10.d)
int32_t x8_1 = 0x3f800000 | (RandomNext(arg1) & 0x7fffff)
int64_t v13
v13.d = *(arg2 + 8)
int64_t v14
v14.d = *(arg2 + 0x14)
v9.d = v11.d f+ (v12.d f- v11.d) * (float.s(x8_1) f+ v10.d)
int64_t result
int128_t v2
result, v2 = RandomNext(arg1)
v2.d = v13.d f+ (v14.d f- v13.d) * (float.s(0x3f800000 | (result.d & 0x7fffff)) f+ v10.d)
return result
