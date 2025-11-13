// 函数: mdct_backward
// 地址: 0x1087c38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
void* x8 = *(arg1 + 8)
int64_t x21 = (x9 & 0xfffffffe) << 0x20 s>> 0x21
int64_t x24 = (x9 & 0xfffffffc) << 0x20 s>> 0x22
int64_t x10_1 = zx.q(x9.d s>> 1) << 0x20 s>> 0x1e
int64_t x12 = zx.q(x9.d s>> 2) << 0x20 s>> 0x1e
int64_t x9_2 = arg2 + x10_1
void* x20 = arg3 + x10_1
int32_t* x10_2 = x9_2 - 0x1c
float* x23 = x20 + x12
int32_t* x11_2 = x8 + x12 + 8
void* x12_1 = &arg3[x24 + x21] - 8
float v0

do
    unimplemented  {fnmadd s0, s1, s3, s0}
    *(x12_1 - 8) = x10_2[2] f* x11_2[1]
    unimplemented  {fnmsub s0, s3, s0, s1}
    *(x12_1 - 4) = *x10_2
    unimplemented  {fnmadd s0, s1, s3, s0}
    *x12_1 = x10_2[6] f* x11_2[-1]
    x11_2[-2]
    x11_2[-1]
    x10_2[6]
    v0 = x10_2[4]
    x10_2 -= 0x20
    x11_2 = &x11_2[4]
    unimplemented  {fnmsub s0, s2, s0, s1}
    *(x12_1 + 4) = v0
    x12_1 -= 0x10
while (x10_2 u>= arg2)

void* x9_3 = x9_2 - 0x20
void* x8_2 = x8 + (x24 << 2) - 8
float* x10_3 = x23

do
    *x10_3 = vfma_f32(*(x8_2 + 4) * *(x9_3 + 0x10), *x8_2, *(x9_3 + 0x18))
    unimplemented  {fnmsub s0, s1, s3, s0}
    x10_3[1] = *(x8_2 + 4) * *(x9_3 + 0x18)
    x10_3[2] = vfma_f32(*(x8_2 - 4) * *x9_3, *(x8_2 - 8), *(x9_3 + 8))
    *(x9_3 + 8)
    *(x8_2 - 8)
    *(x8_2 - 4)
    v0 = *x9_3
    x9_3 -= 0x20
    x8_2 -= 0x10
    unimplemented  {fnmsub s0, s2, s0, s1}
    x10_3[3] = v0
    x10_3 = &x10_3[4]
while (x9_3 u>= arg2)

int64_t result = sub_108800c(arg1, x20, x21.d)
int64_t x11_3 = sx.q(*arg1)
int64_t x8_3 = *(arg1 + 8)
int64_t* x9_4 = *(arg1 + 0x10)
float v0_1 = fconvert.s(0.5f)
void* x12_2 = arg3
void* x10_5 = &arg3[sx.q(x11_3.d s>> 1)]
int32_t* x11_4 = x8_3 + (x11_3 << 2)
void* x13_1 = x10_5

do
    float v5_1 = *x11_4
    int32_t* x14_2 = x10_5 + (*x9_4 << 2)
    int32_t* x15_2 = x10_5 + (*(x9_4 + 4) << 2)
    float v1_1 = *x14_2
    float v2_1 = x14_2[1]
    float v4_1 = *x15_2
    float v3_1 = x15_2[1]
    float v7_1 = v2_1 - v3_1
    float v16_1 = v4_1 + v1_1
    v1_1 = v1_1 - v4_1
    v4_1 = v5_1 * v7_1
    v2_1 = (v3_1 + v2_1) * v0_1
    v1_1 = v1_1 * v0_1
    float temp0_3 = vfma_f32(v16_1 * v5_1, x11_4[1], v7_1)
    unimplemented  {fnmsub s4, s6, s16, s4}
    *x12_2 = temp0_3 + v2_1
    *(x13_1 - 8) = v2_1 - temp0_3
    *(x12_2 + 4) = v4_1 + v1_1
    *(x13_1 - 4) = v4_1 - v1_1
    int64_t x14_3 = x9_4[1].d
    int64_t x15_3 = *(x9_4 + 0xc)
    v5_1 = x11_4[2]
    int32_t v6_1 = x11_4[3]
    x9_4 = &x9_4[2]
    x11_4 = &x11_4[4]
    float* x14_4 = x10_5 + (x14_3 << 2)
    float* x15_4 = x10_5 + (x15_3 << 2)
    v1_1 = *x14_4
    v2_1 = x14_4[1]
    v4_1 = *x15_4
    v3_1 = x15_4[1]
    v7_1 = v2_1 - v3_1
    v16_1 = v4_1 + v1_1
    v1_1 = v1_1 - v4_1
    v4_1 = v5_1 * v7_1
    v2_1 = (v3_1 + v2_1) * v0_1
    v1_1 = v1_1 * v0_1
    float temp0_4 = vfma_f32(v16_1 * v5_1, v6_1, v7_1)
    unimplemented  {fnmsub s4, s6, s16, s4}
    *(x12_2 + 8) = temp0_4 + v2_1
    *(x13_1 - 0x10) = v2_1 - temp0_4
    *(x12_2 + 0xc) = v4_1 + v1_1
    *(x13_1 - 0xc) = v4_1 - v1_1
    x13_1 -= 0x10
    x12_2 += 0x10
while (x12_2 u< x13_1)

void* x8_5 = x8_3 + (x21 << 2) + 0x10
float* x11_5 = x23
float* x9_5 = x23
float* x10_6 = arg3

do
    unimplemented  {fnmsub s0, s3, s0, s1}
    x11_5[-1] = *x10_6
    unimplemented  {fnmadd s0, s3, s0, s1}
    *x9_5 = *x10_6
    unimplemented  {fnmsub s0, s3, s0, s1}
    x11_5[-2] = x10_6[2]
    unimplemented  {fnmadd s0, s3, s0, s1}
    x9_5[1] = x10_6[2]
    unimplemented  {fnmsub s0, s3, s0, s1}
    x11_5[-3] = x10_6[4]
    unimplemented  {fnmadd s0, s3, s0, s1}
    x9_5[2] = x10_6[4]
    unimplemented  {fnmsub s0, s3, s0, s1}
    x11_5[-4] = x10_6[6]
    v0_1 = x10_6[6]
    x10_6[7]
    *(x8_5 + 8)
    *(x8_5 + 0xc)
    x11_5 -= 0x10
    x10_6 = &x10_6[8]
    x8_5 += 0x20
    unimplemented  {fnmadd s0, s2, s0, s1}
    x9_5[3] = v0_1
    x9_5 = &x9_5[4]
while (x10_6 u< x11_5)

void* x8_6 = &arg3[x24]
void* x10_7 = x8_6 - 0x10
void* x11_6

do
    x11_6 = x10_7 + (x21 << 2)
    v0_1 = *(x11_6 + 0xc)
    *(x10_7 + 0xc) = v0_1
    *x8_6 = fneg(v0_1)
    v0_1 = *(x11_6 + 8)
    *(x10_7 + 8) = v0_1
    *(x8_6 + 4) = fneg(v0_1)
    v0_1 = *(x11_6 + 4)
    *(x10_7 + 4) = v0_1
    *(x8_6 + 8) = fneg(v0_1)
    v0_1 = *x11_6
    *x10_7 = v0_1
    x10_7 -= 0x10
    *(x8_6 + 0xc) = fneg(v0_1)
    x8_6 += 0x10
while (x8_6 u< x11_6)
void* x8_9 = &arg3[x24 + x21 + 2]

do
    x23 = &x23[-4]
    *x23 = *(x8_9 + 4)
    x23[1] = *x8_9
    x23[2] = *(x8_9 - 4)
    int32_t x9_10 = *(x8_9 - 8)
    x8_9 += 0x10
    x23[3] = x9_10
while (x23 u> x20)

return result
