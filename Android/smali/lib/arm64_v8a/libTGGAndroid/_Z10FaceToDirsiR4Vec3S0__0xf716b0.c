// 函数: _Z10FaceToDirsiR4Vec3S0_
// 地址: 0xf716b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 u> 5)
    pthread_kill(pthread_self(), 6)
    XAsset* x0_1
    XAsset** x1
    int32_t x2
    int64_t x3
    x0_1, x1, x2, x3 = XNoReturn()
    return DrawCubemap(x0_1, x1, x2, x3) __tailcall

int64_t (* const x8_1)()
int64_t (* const x8_2)()
int64_t (* const x8_4)()
int128_t v0
float v1

switch (arg1)
    case 0
        x8_1 = VX
    label_f7178c:
        v0.q = *x8_1
        v1 = *(x8_1 + 8)
        x8_4 = VY
        goto label_f717a4
    case 1
        x8_2 = VX
    label_f71758:
        int64_t x8_5 = *x8_2
        *(arg2 + 8) = *(x8_2 + 8)
        *arg2 = x8_5
        int64_t x9_2 = *VY
        *(arg3 + 8) = *(VY + 8)
        *arg3 = x9_2
        return 
    case 2
        int64_t x8_3 = *VY
        *(arg2 + 8) = *(VY + 8)
        *arg2 = x8_3
        v0.q = *VZ
        v1 = *(VZ + 8)
        *arg3 = vneg_f32(v0)
        *(arg3 + 8) = fneg(v1)
        return 
    case 3
        v0.q = *VY
        v1 = *(VY + 8)
        x8_4 = VZ
    label_f717a4:
        *arg2 = vneg_f32(v0)
        *(arg2 + 8) = fneg(v1)
        int64_t x8_7 = *x8_4
        *(arg3 + 8) = *(x8_4 + 8)
        *arg3 = x8_7
        return 
    case 4
        x8_2 = VZ
        goto label_f71758
    case 5
        x8_1 = VZ
        goto label_f7178c
