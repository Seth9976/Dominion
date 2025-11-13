// 函数: _Z18GroupAlignmentRect5RectF17UI2GroupTransform15UIRectAlignmentPKc
// 地址: 0x10226bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg2
void* x20 = arg1
int128_t v2
v2.d = *arg1
int128_t v3
v3.d = *(arg1 + 8)
int128_t v4
v4.d = *(arg1 + 0x20)
int128_t v5
v5.d = *(arg1 + 0x10)
int128_t v6
v6.d = *(arg1 + 0x18)
int64_t x2
int64_t x3
int64_t entry_x4
int64_t x4
float entry_v0
int128_t v0
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
int128_t v5_1
int128_t v6_1
x2, x3, x4, v0, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1 =
    GroupAlignment(zx.q(*arg2), zx.q(*(arg2 + 8)), arg3, arg4, entry_x4, entry_v0)
v2_1.d = *(x20 + 4)
v3_1.d = *(x20 + 0xc)
v5_1.d = *(x20 + 0x14)
v6_1.d = *(x20 + 0x1c)
v4_1.d = *(x20 + 0x20)
int64_t result
int128_t v0_2
float entry_v1
int128_t v1_3
int128_t v2_2
int128_t v3_2
result, v0_2, v1_3, v2_2, v3_2 =
    GroupAlignment(zx.q(*(x19 + 4)), zx.q(*(x19 + 0xc)), x2, x3, x4, entry_v1)

if (v0.d f> v1_1.d || not(v0_2.d f<= v1_3.d))
    int128_t v8
    v8.d = *RECT0
    v2_2.d = *(RECT0 + 4)
    int128_t v9
    v9.d = *(RECT0 + 8)
    v3_2.d = *(RECT0 + 0xc)

return result
