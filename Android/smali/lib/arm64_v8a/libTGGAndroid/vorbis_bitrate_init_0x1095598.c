// 函数: vorbis_bitrate_init
// 地址: 0x1095598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x30)
int64_t result
uint128_t v0
uint128_t v1
uint128_t v2
result, v0, v1, v2 = memset(arg2, 0, 0x50)
int64_t x8 = x21[0x2ab]

if (x8 s>= 1)
    int64_t x10_1 = *x21
    int64_t x11_1 = x21[1]
    int64_t x9_1 = *(arg1 + 8)
    *arg2 = 1
    *(arg2 + 0x30) = x11_1 s/ x10_1
    v2 = *(x21 + 0x1540)
    uint32_t x10_2 = (x10_1 u>> 1).d
    v1.d = x10_2
    v1:4.d = x10_2
    v1.q = sx.q(v1.d)
    v1:8.q = sx.q(v1:4.d)
    v0.q = x9_1
    v0:8.q = x9_1
    float128 v1_1 = vcvtq_f64_s64(v1)
    float128 v2_1 = vcvtq_f64_s64(v2)
    float128 v0_1 = vcvtq_f64_s64(v0)
    *(arg2 + 0x18) = vcvtq_s64_f64(vrndxq_f64(vdivq_f64(vmulq_f64(v1_1, v2_1, 0), v0_1)))
    uint128_t v0_4
    v0_4.q = x21[0x2aa]
    v2_1.q = float.d(sx.q(x10_2))
    float128 v1_2
    v1_2.q = float.d(x9_1)
    v0_4.q = float.d(v0_4.q)
    v0_4.q = v0_4.q f* v2_1.q
    v0_4.q = v0_4.q f/ v1_2.q
    v0_4.q = vrndx_f64(v0_4.q)
    uint64_t x9_2 = vcvtd_s64_f64(v0_4.q)
    *(arg2 + 0x38) = 0x401c000000000000
    *(arg2 + 0x28) = x9_2
    v0_4.q = x21[0x2ac]
    v1_2.q = float.d(x8)
    v0_4.q = v0_4.q f* v1_2.q
    uint64_t x8_1 = vcvtd_s64_f64(v0_4.q)
    *(arg2 + 8) = x8_1
    *(arg2 + 0x10) = x8_1

return result
