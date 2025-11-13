// 函数: _Z24CameraCoordToScreenCoordRK4Vec3
// 地址: 0x101bb38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg1
int128_t v1
v1.d = fconvert.s(1f)
v1:4.d = fconvert.s(1f)
uint64_t x8 = *gAppInterface
int128_t v0_1 = vadd_f32(v0, v1)
v1.d = 0x3f000000
v1:4.d = 0x3f000000
int128_t v0_2 = vmul_f32(v0_1, v1, 0)
int128_t v2
v2.q = *(x8 + 0x28)
int128_t v1_1
v1_1.d = vmul_f32(v0_2, vcvt_f32_s32(v2), 0):4.d
