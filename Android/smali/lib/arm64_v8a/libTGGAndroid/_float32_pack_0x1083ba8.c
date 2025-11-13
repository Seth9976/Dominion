// 函数: _float32_pack
// 地址: 0x1083ba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8 = fconvert.d(fabs(arg1))
int64_t x19

x19 = arg1 < 0f ? -0x80000000 : 0

uint64_t x20 = vcvtmd_s64_f64(vfma_f64(0.001, log(v8), 1.4426950408889634))
return (0x60000000 + (x20 << 0x15)) | x19 | vcvtd_s64_f64(vrndx_f64(ldexp(0x14 - x20.d, v8)))
