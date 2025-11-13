// 函数: ov_bitrate_instant
// 地址: 0x107b728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if (*(arg1 + 8) == 0)
    x8 = 0
else
    x8 = sx.q(*(arg1 + 0x90))

if (*(arg1 + 0x80) s< 2)
    return -0x83

double v0 = *(arg1 + 0xa0)

if (not(v0 != 0.0))
    return -1

int64_t v2 = *(*(arg1 + 0x68) + x8 * 0x38 + 8)
v0 = *(arg1 + 0x98) / v0
*(arg1 + 0x98) = 0
*(arg1 + 0xa0) = 0
return vcvtd_s64_f64(vfma_f64(fconvert.d(0.5), v0, float.d(v2)))
