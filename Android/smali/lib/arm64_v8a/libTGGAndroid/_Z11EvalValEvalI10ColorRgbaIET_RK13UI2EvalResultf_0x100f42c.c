// 函数: _Z11EvalValEvalI10ColorRgbaIET_RK13UI2EvalResultf
// 地址: 0x100f42c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 4) != 0)
    pthread_kill(pthread_self(), 6)
    UI2EvalResult* x0_4
    float v0
    x0_4, v0 = XNoReturn()
    return ResultAsInt(x0_4, v0) __tailcall

int32_t x8_1 = *arg1

if (x8_1 != 7)
    if (x8_1 != 8)
        return zx.q(*gRgbaIWhite)
    
    return zx.q(*(arg1 + 0x18))

float v1 = *(arg1 + 0x18)
float v4 = *(arg1 + 0x1c)
float v5 = float.s(0x437f0000)
arg2 = 0f
float temp0 = vmin_f32(v1, v5)

v1 = v1 < 0f ? arg2 : temp0

float v2 = fconvert.s(0.5f)
float v3 = fconvert.s(-0.5f)
float v6

v6 = v1 < 0f ? v3 : v2

v1 = v1 + v6
v6 = *(arg1 + 0x20)
int32_t v7 = *(arg1 + 0x24)
float temp0_1 = vmin_f32(v4, v5)

v4 = v4 < 0f ? arg2 : temp0_1

uint32_t temp0_2 = vcvts_s32_f32(v1)

v1 = v4 < 0f ? v3 : v2

v1 = v4 + v1
float temp0_3 = vmin_f32(v6, v5)

v4 = v6 < 0f ? arg2 : temp0_3

float temp0_4 = vmin_f32(v7, v5)
char temp0_5 = vcvts_s32_f32(v1)

v1 = v4 < 0f ? v3 : v2

if (not(v7 f< 0f))
    arg2 = temp0_4

char temp0_6 = vcvts_s32_f32(v4 + v1)

v1 = arg2 < 0f ? v3 : v2

return (0xffffff & ((0xff00ffff & ((0xffff00ff & zx.q(temp0_2)) | zx.q(zx.d(temp0_5) << 8)))
    | zx.q(zx.d(temp0_6) << 0x10))) | zx.q(zx.d(vcvts_s32_f32(arg2 + v1)) << 0x18)
