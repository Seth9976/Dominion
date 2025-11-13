// 函数: _Z21stbiw__linear_to_rgbePhPf
// 地址: 0xfdcc10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = arg2[1]
float v1 = arg2[2]
float v2 = *arg2

if (not(v0 > v1))
    v0 = v1

int64_t v8

if (v2 > v0)
    v8.d = v2
else
    v8.d = v0

uint8_t* x19 = arg1
char x8
char x9

if (v8.d f>= float.s(0xa4fb11f))
    int32_t eptr
    float v0_2
    v0_2, arg1 = frexpf(&eptr, v8.d)
    v0_2 = v0_2 * float.s(0x43800000) f/ v8.d
    *x19 = vcvts_s32_f32(*arg2 * v0_2)
    x19[1] = vcvts_s32_f32(v0_2 * arg2[1])
    char x9_1 = eptr.b
    x8 = vcvts_s32_f32(v0_2 * arg2[2])
    x9 = x9_1 ^ 0x80
else
    x9 = 0
    x8 = 0
    *x19 = 0

x19[3] = x9
x19[2] = x8
