// 函数: _Z16UINewRectAlignedRK5RectF15UIRectAlignmentRK8UISquish
// 地址: 0x102227c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v10
v10.d = *(arg3 + 0x14)
int128_t v0
v0.d = *(arg3 + 0x18)
int128_t v3
v3.d = *(arg3 + 4)
int128_t v1
v1.d = *(arg3 + 8)
int128_t v11
v11.d = *(arg3 + 0x1c)
int128_t v9
v9.d = *(arg3 + 0x20)
int32_t* x19 = arg2
int32_t var_64 = v0.d
int128_t v4
v4.d = *(arg3 + 0xc)
v0.d = *(arg3 + 0x10)
int128_t v13
v13.d = v3.d f+ v10.d
int32_t var_70 = v1.d
int32_t var_6c = v0.d
v1.d = *(arg3 + 0x28)
v0.d = *(arg3 + 0x30)
int128_t v12
v12.d = v4.d f+ v11.d
int128_t v14
v14.d = *(arg3 + 0x24) f- v10.d
int32_t var_80 = v0.d
int32_t var_7c = v1.d
v0.d = *(arg1 + 8)
int128_t v7
v7.d = *(arg1 + 0xc)
v1.d = *arg1
int32_t v6 = *(arg1 + 4)
uint64_t x0 = zx.q(*(arg2 + 8))
uint64_t x1 = zx.q(*arg2)
int128_t v15
v15.d = *(arg3 + 0x2c) f- v11.d
int128_t v8
v8.d = v0.d f- v1.d
int32_t var_74 = v7.d
int32_t var_68
int128_t v0_3
int128_t v3_2
int128_t v4_2
int128_t v7_2
int128_t v11_1

if (x0.d == 0)
    v7.d = v0.d f- v8.d
    int32_t var_90_2 = x19[4]
    int32_t v0_5
    int128_t v1_6
    int128_t v3_3
    int128_t v4_3
    int128_t v7_3
    v0_5, v1_6, v3_3, v4_3, v7_3 = DoAlignment(zx.q(x1.d), 0, v1, v10, v14, v3, v4, v13, v12, v7)
    v1_6.d = *(arg1 + 8)
    v3_3.d = *(arg3 + 4)
    v4_3.d = *(arg3 + 0xc)
    var_68 = v0_5
    v7_3.d = v8.d f+ v0_5
    int32_t var_90_3 = x19[6]
    v0_3, v3_2, v4_2, v7_2 =
        DoAlignment(zx.q(x19[2]), zx.q(*x19), v1_6, v11, v15, v3_3, v4_3, v13, v12, v7_3)
    v11_1 = v0_3
else
    v7.d = v1.d f+ v8.d
    int32_t var_90 = x19[6]
    int128_t v0_1
    int128_t v1_2
    int128_t v3_1
    int128_t v4_1
    int128_t v7_1
    v0_1, v1_2, v3_1, v4_1, v7_1 = DoAlignment(x0, x1, v0, v11, v15, v3, v4, v13, v12, v7)
    v1_2.d = *arg1
    v3_1.d = *(arg3 + 4)
    v4_1.d = *(arg3 + 0xc)
    v11_1 = v0_1
    v7_1.d = v0_1.d f- v8.d
    int32_t var_90_1 = x19[4]
    v0_3, v3_2, v4_2, v7_2 =
        DoAlignment(zx.q(*x19), zx.q(x19[2]), v1_2, v10, v14, v3_1, v4_1, v13, v12, v7_1)
    var_68 = v0_3.d

v8.d = var_64
v0_3.d = var_70
uint64_t x0_4 = zx.q(x19[3])
v12.d = v0_3.d f+ v8.d
v0_3.d = var_6c
v13.d = v0_3.d f+ v9.d
v0_3.d = var_7c
v14.d = v0_3.d f- v8.d
v0_3.d = var_80
v10.d = var_74 f- v6
v15.d = v0_3.d f- v9.d
int64_t result
int128_t v0_9
int128_t v8_1

if (x0_4.d == 0)
    v0_3.d = *(arg1 + 4)
    v3_2.d = *(arg3 + 8)
    v4_2.d = *(arg3 + 0x10)
    v7_2.d = var_74 f- v10.d
    int32_t var_90_6 = x19[5]
    int128_t v0_10
    int128_t v1_12
    int128_t v3_5
    int128_t v4_5
    int128_t v7_5
    v0_10, v1_12, v3_5, v4_5, v7_5 =
        DoAlignment(zx.q(x19[1]), 0, v0_3, v8, v14, v3_2, v4_2, v12, v13, v7_2)
    v1_12.d = *(arg1 + 0xc)
    v3_5.d = *(arg3 + 8)
    v4_5.d = *(arg3 + 0x10)
    v7_5.d = v10.d f+ v0_10.d
    int32_t var_90_7 = x19[7]
    result, v0_9 =
        DoAlignment(zx.q(x19[3]), zx.q(x19[1]), v1_12, v9, v15, v3_5, v4_5, v12, v13, v7_5)
    int128_t v9_1 = v0_9
    v0_9.d = var_68
    
    if (v0_9.d f> v11_1.d || not(v0_10.d f<= v9_1.d))
    label_1022504:
        v0_9.d = *RECT0
        v8_1.d = *(RECT0 + 4)
        v11_1.d = *(RECT0 + 8)
        v9_1.d = *(RECT0 + 0xc)
else
    v0_3.d = *(arg1 + 0xc)
    v3_2.d = *(arg3 + 8)
    v4_2.d = *(arg3 + 0x10)
    v7_2.d = v6 f+ v10.d
    int32_t var_90_4 = x19[7]
    int128_t v0_7
    int128_t v1_9
    int128_t v3_4
    int128_t v4_4
    int128_t v7_4
    v0_7, v1_9, v3_4, v4_4, v7_4 =
        DoAlignment(x0_4, zx.q(x19[1]), v0_3, v9, v15, v3_2, v4_2, v12, v13, v7_2)
    v1_9.d = *(arg1 + 4)
    v3_4.d = *(arg3 + 8)
    v4_4.d = *(arg3 + 0x10)
    v7_4.d = v0_7.d f- v10.d
    int32_t var_90_5 = x19[5]
    result, v0_9 =
        DoAlignment(zx.q(x19[1]), zx.q(x19[3]), v1_9, v8, v14, v3_4, v4_4, v12, v13, v7_4)
    v8_1 = v0_9
    v0_9.d = var_68
    
    if (not(v0_9.d f<= v11_1.d) || not(v8_1.d f<= v0_7.d))
        goto label_1022504
return result
