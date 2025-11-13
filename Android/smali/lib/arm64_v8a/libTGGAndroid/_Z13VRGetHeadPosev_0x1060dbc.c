// 函数: _Z13VRGetHeadPosev
// 地址: 0x1060dbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* entry_x8
int128_t v0

if (*(gVR + 0xf4) == 0)
    int64_t x9 = *V0
    v0 = *QI
    *(entry_x8 + 0x18) = *(V0 + 8)
    entry_x8[1].q = x9
    *entry_x8 = v0
    return 

v0.q = *(gVR + 0xf8)
int128_t v4
v4.q = *(gVR + 0x104)
int128_t v6 = *(gVR + 0x110)
int128_t v3
v3.d = 0x3f000000
v3:4.d = 0x3f000000
float v1 = *(gVR + 0x100) + *(gVR + 0x10c)
double v0_2 = vmul_f32(vadd_f32(v0, v4), v3, 0)
*(entry_x8 + 0x18) = v1 * fconvert.s(0.5f)
entry_x8[1].q = v0_2
*entry_x8 = v6
