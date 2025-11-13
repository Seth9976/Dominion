// 函数: _Z19UI2UpdateComponentsR3UI2RK16UI2InheritedDatabb
// 地址: 0x1022778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg4.d & 1) == 0)
    return 

void* x24_1 = arg1 + sx.q(*(arg1 + 0x1354)) * 0x88
UI2& x20_1 = arg1
int128_t v8_1 = GameGetTimeSimulation()
int128_t v0_1
v0_1.d = *(arg2 + 0xc)
float v1_1 = *arg2
float v2_1 = *(arg2 + 4)
float var_ec_1 = v0_1.d
float var_e8_1 = *(arg2 + 8)
float v3_1 = *(arg2 + 0x10)
v0_1.d = *(arg2 + 0x14)
float var_dc_1 = v0_1.d
v0_1.d = *(arg2 + 0x18)
float var_e4_1 = v0_1.d
v0_1.d = *(arg2 + 0x1c)
int32_t v0_3 = UI2PropDynamic<float>::Eval(v8_1.d)
int128_t v0_5 = UI2PropDynamic<float>::Eval(v8_1.d)
int32_t v0_7 = UI2PropDynamic<float>::Eval(v8_1.d)
int32_t var_d4_1 = v8_1.d
int128_t v0_9
int128_t v1_2
v0_9, v1_2 = UI2PropDynamic<float>::Eval(v8_1.d)
v1_2.d = v0_3 f+ v0_7
v0_9.d = v0_5.d f+ v0_9.d
int32_t var_d0 = v0_3
int32_t var_cc_1 = v0_5.d
int32_t var_c8_1 = v1_2.d
int32_t var_c4_1 = v0_9.d
float var_104_1 = v0_9.d
v0_9 = *(x24_1 + 0x1138)
int128_t var_c0 = *(x24_1 + 0x1128)
int128_t var_b0_1 = v0_9
int128_t v0_10
int128_t v1_3
int128_t v2_2
int128_t v3_2
v0_10, v1_3, v2_2, v3_2 = UINewRectAligned(&var_d0, &var_c0, arg2 + 0x20)
float v9_2 = v0_10.d
float v10_2 = v1_3.d
v0_10 = *(x24_1 + 0x1158)
var_c0 = *(x24_1 + 0x1148)
int128_t var_b0_2 = v0_10
float v0_11
float v1_4
float v2_3
float v3_3
v0_11, v1_4, v2_3, v3_3 = UINewRectAligned(&var_d0, &var_c0, arg2 + 0x20)
float v4_1 = *(x24_1 + 0x1168)
int128_t v15
v15.d = *(arg2 + 0x9c)
int32_t v5_1 = *(arg2 + 0xa0)
v9_2 = v9_2 + (v0_11 - v9_2) * v4_1
int128_t v11_1
v11_1.d = *(arg2 + 0xac)
v0_11 = *(arg2 + 0xb0)
int32_t x23_1 = *(x24_1 + 0x118c)
int32_t x24_2 = *(x24_1 + 0x1190)
int32_t x25_1 = *(x24_1 + 0x1194)
int32_t x26_2 = *(x24_1 + 0x1198)
v8_1.d = *V20
int128_t v12
v12.d = *(V20 + 4)
int128_t v13_1
v13_1.d = v2_2.d f+ (v2_3 f- v2_2.d) * v4_1
int128_t v14_1
v14_1.d = v3_2.d f+ (v3_3 f- v3_2.d) * v4_1
int64_t x2_2
int64_t x3
int64_t x4_1
int128_t v4_2
x2_2, x3, x4_1, v4_2 = XString::operator char const*()
v4_2.d = fconvert.s(1f)
int64_t x2_3
int64_t x3_1
int64_t x4_2
float v0_13
float v1_6
int128_t v3_5
int128_t v4_3
int128_t v6_2
x2_3, x3_1, x4_2, v0_13, v1_6, v3_5, v4_3, v6_2 =
    GroupAlignment(zx.q(x23_1), zx.q(x25_1), x2_2, x3, x4_1, v9_2)
v6_2.d = v0_11
v3_5.d = v5_1
float v9_3 = v0_13
float v13_2 = v1_6
v4_3.d = fconvert.s(1f)
int128_t v0_15
int128_t v1_8
int128_t v2_6
v0_15, v1_8, v2_6 =
    GroupAlignment(zx.q(x24_2), zx.q(x26_2), x2_3, x3_1, x4_2, v10_2 + (v1_4 - v10_2) * v4_1)

if (not(v9_3 > v13_2))
    v10_2 = v0_15.d

if (v9_3 > v13_2 || not(v0_15.d f<= v1_8.d))
    v9_3 = *RECT0
    v10_2 = *(RECT0 + 4)
    v13_2 = *(RECT0 + 8)
    v1_8.d = *(RECT0 + 0xc)

v2_6.d = v0_5.d
v0_15.d = v0_3
v1_8.d = v1_8.d f- v10_2
*(x20_1 + 0x1754) = v9_3
*(x20_1 + 0x1744) = v0_15.d
v0_15.d = v1_2.d f- v0_15.d
*(x20_1 + 0x1748) = v2_6.d
*(x20_1 + 0x1758) = v10_2
*(x20_1 + 0x174c) = v0_15.d
v2_6.d = var_104_1 f- v2_6.d
*(x20_1 + 0x1750) = v2_6.d
*(x20_1 + 0x175c) = v13_2 - v9_3
*(x20_1 + 0x1760) = v1_8.d
v1_8 = *(arg2 + 0x30)
v0_15 = *(arg2 + 0x40)
v2_6 = *(arg2 + 0x20)
*(x20_1 + 0x1700) = *(arg2 + 0x50)
*(x20_1 + 0x16f0) = v0_15
*(x20_1 + 0x16e0) = v1_8
*(x20_1 + 0x16d0) = v2_6
v11_1.d = var_d4_1
v8_1.d = *TI
float cosp
float sinp
sincosf(&sinp, &cosp, UI2PropDynamic<float>::Eval(v11_1.d) * fconvert.s(0.5f))
float cosp_1 = cosp
float sinp_1 = sinp
float v4_4 = v3_1 * v3_1
float v5_4 = v2_1 * v2_1
float v7_1 = v2_1 * var_e8_1
float v16_1 = var_ec_1 * v3_1
float v17_1 = var_e8_1 * v3_1
float v18_1 = v2_1 * var_ec_1
float v19_1 = var_e8_1 * var_ec_1
float v20_1 = v2_1 * v3_1
float v22_1 = *VZ
float v23_1 = *(VZ + 4)
float v24_1 = v7_1 - v16_1
v7_1 = v7_1 + v16_1
v16_1 = v5_4 + v4_4
v4_4 = v4_4 - v5_4
v5_4 = v18_1 + v17_1
v17_1 = v18_1 - v17_1
v18_1 = v19_1 - v20_1
v19_1 = v19_1 + v20_1
v20_1 = *(VZ + 8)
float v3_7 = var_e8_1 * var_e8_1
float v6_3 = v10_2 + v10_2
float v2_7 = var_ec_1 * var_ec_1
*(x20_1 + 0x16b0) = v1_1 f* v8_1.d
float v21_1 = v9_3 + v9_3
v16_1 = v16_1 - v3_7
v24_1 = v24_1 * v6_3
v6_3 = v19_1 * v6_3
v19_1 = v3_7 + v4_4
v3_7 = v4_4 - v3_7
v7_1 = v7_1 * v21_1
v17_1 = v17_1 * v21_1
v21_1 = 0f
v4_4 = v16_1 - v2_7
v16_1 = v19_1 - v2_7
v5_4 = v5_4 * v21_1
v18_1 = v18_1 * v21_1
v2_7 = (v2_7 + v3_7) * v21_1
v21_1 = v22_1 * sinp_1
v22_1 = sinp_1 * v23_1
sinp_1 = sinp_1 * v20_1
*(x20_1 + 0x16cc) = v0_1.d + v1_1 * (v2_7 + v17_1 + v6_3)
*(x20_1 + 0x16bc) = v2_1 * v22_1 + var_ec_1 * cosp_1 + v3_1 * sinp_1 - var_e8_1 * v21_1
*(x20_1 + 0x16c4) = var_dc_1 + v1_1 * (v5_4 + v4_4 * v9_3 + v24_1)
*(x20_1 + 0x16c8) = var_e4_1 + v1_1 * (v18_1 + v7_1 + v16_1 * v10_2)
*(x20_1 + 0x16b4) = v2_1 * cosp_1 + v3_1 * v21_1 + var_e8_1 * sinp_1 - var_ec_1 * v22_1
*(x20_1 + 0x16b8) = var_ec_1 * v21_1 + var_e8_1 * cosp_1 + v3_1 * v22_1 - v2_1 * sinp_1
*(x20_1 + 0x16c0) = v3_1 * cosp_1 - v2_1 * v21_1 - var_e8_1 * v22_1 - var_ec_1 * sinp_1
int128_t v0_19 = UI2PropDynamic<float>::Eval(v11_1.d)
*(x20_1 + 0x1704) = *(arg2 + 0x54)
*(x20_1 + 0x1708) = *(arg2 + 0x58)
*(x20_1 + 0x170c) = *(arg2 + 0x5c)
v0_19.d = v0_19.d f* *(arg2 + 0x60)
*(x20_1 + 0x1710) = v0_19.d
*(x20_1 + 0x1714) = *(arg2 + 0x64)

if (zx.d(*(x20_1 + 0x15)) != 0 && (arg3.d & 1) != 0)
    *(x20_1 + 0x1710) = 0

int32_t x0_13 = UI2PropDynamic<int32_t>::Eval(v11_1.d)
arg1 = UI2PropDynamic<int32_t>::Eval(v11_1.d)
int32_t x8_4

if (x0_13 == 0)
    x8_4 = *(arg2 + 0x74) + arg1.d
else if ((x0_13 & 0x80000000) != 0)
    x8_4 = arg1.d + x0_13 + *(arg2 + 0x74)
else
    x8_4 = arg1.d + x0_13

*(x20_1 + 0x1724) = x8_4
*(x20_1 + 0x1728) = *(arg2 + 0x78)
*(x20_1 + 0x1790) = ((zx.d(*(x20_1 + 0x1678)) | zx.d(*(arg2 + 0xe0))) != 0 ? 1 : 0).b
