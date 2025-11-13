// 函数: _Z5ErodeR7MeshMapRfR7MapData
// 地址: 0xc16970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float var_10030[0x4000]
int64_t result
float128 v0
float128 v1
float128 v2
int128_t v3
int128_t v4
result, v0, v1, v2, v3, v4 = ErosionRate(arg1, &var_10030, arg3)
int64_t x8_2

if (arg2 + 1 u<= arg1 + 8 || arg1 + 0x30000 u<= arg2)
    float temp0_1 = *arg2
    v0.d = temp0_1
    v0:4.d = temp0_1
    v0:8.d = temp0_1
    v0:0xc.d = temp0_1
    void* __offset(MeshMap, 0x20) x9_1 = arg1 + 0x20
    int64_t i_2 = -0xfff0
    x8_2 = 0x3ffc
    int64_t i
    
    do
        v2.d = *(x9_1 - 0x18)
        v3.d = *(x9_1 - 0x14)
        v4.d = *(x9_1 - 0x10)
        v2:4.d = *(x9_1 - 0xc)
        v3:4.d = *(x9_1 - 8)
        v4:4.d = *(x9_1 - 4)
        v2:8.d = *x9_1
        v3:8.d = *(x9_1 + 4)
        v4:8.d = *(x9_1 + 8)
        v2:0xc.d = *(x9_1 + 0xc)
        v3:0xc.d = *(x9_1 + 0x10)
        v4:0xc.d = *(x9_1 + 0x14)
        void* __offset(MeshMap, 0x2c) x11_2 = x9_1 + 0xc
        v1 = vsubq_f32(v2, vmulq_f32(v0, *(&var_10030 + i_2 + 0xfff0), 0))
        i = i_2
        i_2 += 0x10
        *(x9_1 - 0x18) = v1.d
        *(x9_1 - 0xc) = v1:4.d
        *x9_1 = v1:8.d
        x9_1 += 0x30
        *x11_2 = v1:0xc.d
    while (i != -0x10)
else
    x8_2 = 0

int64_t i_1 = x8_2 << 2
int32_t* x8_4 = arg1 + x8_2 * 0xc + 8

do
    v0.d = *arg2
    v1.d = *(&var_10030 + i_1)
    v2.d = *x8_4
    i_1 += 4
    v0.d = v0.d f* v1.d
    v0.d = v2.d f- v0.d
    *x8_4 = v0.d
    x8_4 = &x8_4[3]
while (i_1 != 0x10000)

return result
