// 函数: _Z34StructureGetAnimatedVertexPositionP26DefVertexPosNormColTexBoneP4Mat4
// 地址: 0xfd5d8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x2c))
int32_t x9 = *(arg1 + 0x30)
float v3 = float.s(0x437f0000)
float v0 = *arg1
float v1 = *(arg1 + 4)
void* x10_1 = arg2 + ((x8 & 0xff) << 6)
void* x11_4 = arg2 + ((x8 u>> 8 & 0xff) << 6)
float v27 = float.s(x9 & 0xff) / v3
int64_t v10
v10.d = *(x11_4 + 0x18)
void* x9_3 = arg2 + ((x8 u>> 0x10 & 0xff) << 6)
int64_t v8
v8.d = *(x11_4 + 0x10)
int64_t v9
v9.d = *(x11_4 + 0x14)
float v6 = float.s(x9 u>> 8 & 0xff) / v3
int64_t v12
v12.d = *(x11_4 + 0x20)
int64_t v13
v13.d = *(x11_4 + 0x24)
int64_t v14
v14.d = *x9_3
int64_t v15
v15.d = *(x9_3 + 4)
v8.d = v0 f* v8.d
v9.d = v1 f* v9.d
void* x8_3 = arg2 + (x8 u>> 0x12 & 0x3fc0)
v12.d = v0 f* v12.d
v13.d = v1 f* v13.d
v14.d = v0 f* v14.d
v15.d = v1 f* v15.d
float var_68 = v8.d f+ v9.d
v8.d = *x8_3
v9.d = *(x8_3 + 4)
float v4 = v12.d f+ v13.d
v3 = v14.d f+ v15.d
v14.d = *(x8_3 + 0x10)
v15.d = *(x8_3 + 0x14)
v12.d = v0 * *(x9_3 + 0x20) + v1 * *(x9_3 + 0x24)
float v2 = *(arg1 + 8)
v13.d = v0 * *(x9_3 + 0x10) + v1 * *(x9_3 + 0x14)
v8.d = v0 f* v8.d
v9.d = v1 f* v9.d
v14.d = v0 f* v14.d
v15.d = v1 f* v15.d
*(x8_3 + 0x20)
*(x8_3 + 0x24)
int64_t v11
v11.d = *(x8_3 + 0xc)
*(x8_3 + 8)
v10.d = v2 f* v10.d
*(x8_3 + 0x18)
v10.d = v4
*(x8_3 + 0x28)
*(x9_3 + 0x1c) + v13.d f+ v2 * *(x9_3 + 0x18)
float v24 = v10.d f+ v2 * *(x11_4 + 0x28)
v10.d = v3
*(x9_3 + 0x2c) + v12.d f+ v2 * *(x9_3 + 0x28)
v8.d = v8.d f+ v9.d
*(x9_3 + 0xc) + v10.d f+ v2 * *(x9_3 + 8)
v9.d = v14.d f+ v15.d
*(x10_1 + 0x1c) + v0 * *(x10_1 + 0x10) + v1 * *(x10_1 + 0x14) + v2 * *(x10_1 + 0x18)
*(x11_4 + 0x1c)
*(x8_3 + 0x1c)
*(x8_3 + 0x2c)
*V0 + v27 * (*(x10_1 + 0xc) + v0 * *x10_1 + v1 * *(x10_1 + 4) + v2 * *(x10_1 + 8))
    + v6 * (*(x11_4 + 0xc) + v0 * *x11_4 + v1 * *(x11_4 + 4) + v2 * *(x11_4 + 8))
*(V0 + 4)
*(V0 + 8)
    + v27 * (*(x10_1 + 0x2c) + v0 * *(x10_1 + 0x20) + v1 * *(x10_1 + 0x24) + v2 * *(x10_1 + 0x28))
    + v6 * (*(x11_4 + 0x2c) + v24)
