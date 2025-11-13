// 函数: _Z19MeshAsQuadsCopyVertP10DefSubMeshRK4Mat4R10RenderQuadii
// 地址: 0xc974b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
result, v0 = MeshUsesDefIndex16(arg1)
int32_t x12 = *(arg1 + 0x10)
int64_t x9 = *(arg1 + 0x30)
int64_t x10 = sx.q(arg4)
int64_t x8 = sx.q(arg5)
void* x11 = arg3 + muls.dp.d(arg5, 0x30)
float v1
float v2
float v3
float v4
float v5
float v6
float v7
float v16
float v17
float v18
float v19
float v20
float v21
float v22
float v23
float v24

if (x12 == 9)
    float* x12_3 = *(arg1 + 0x20) + zx.q(*(x9 + (x10 << 1))) * 0x1c
    v21 = *x12_3
    v23 = x12_3[1]
    v0.d = *(arg2 + 0xc)
    v5 = float.s(0x437f0000)
    v1 = *arg2 * v21
    v6 = v21 * *(arg2 + 0x10)
    v17 = v21 * *(arg2 + 0x20)
    v21 = x12_3[2]
    uint64_t x10_2 = zx.q(x12_3[6])
    v24 = *(arg2 + 4) * v23
    v7 = v23 * *(arg2 + 0x14)
    v18 = v23 * *(arg2 + 0x24)
    v23 = *(gDraw3DData + 0x4c0)
    v3 = *(arg2 + 8) * v21
    v16 = v21 * *(arg2 + 0x18)
    v19 = v21 * *(arg2 + 0x28)
    v2 = *(gDraw3DData + 0x4c4)
    v21 = v1 + v24
    v1 = *(gDraw3DData + 0x4c8)
    void* x9_2 = arg3 + x8 * 0x30
    v0.d = v0.d f+ v21 + v3
    v4 = *(arg2 + 0x1c) + v6 + v7 + v16
    v16 = *(arg2 + 0x2c) + v17 + v18 + v19
    v6 = *(gDraw3DData + 0x4bc) * float.s(x10_2.d u>> 0x10 & 0xff) / v5
    *x11 = v0.d
    *(x9_2 + 4) = v4
    *(x9_2 + 8) = v16
    v3 = v23 * float.s(x10_2.d u>> 8 & 0xff) / v5
    v0.d = *arg2
    v7 = x12_3[3]
    v16 = x12_3[4]
    v18 = x12_3[5]
    v0.d = v0.d f* v7
    v19 = v7 * *(arg2 + 0x10)
    v20 = v16 * *(arg2 + 0x14)
    v21 = v18 * *(arg2 + 0x18)
    v22 = v0.d f+ *(arg2 + 4) * v16
    v0.d = float.s(x10_2.d & 0xff)
    v0.d = v0.d f/ v5
    v7 = v7 * *(arg2 + 0x20) + v16 * *(arg2 + 0x24) + v18 * *(arg2 + 0x28)
    *(x9_2 + 0xc) = v22 + *(arg2 + 8) * v18
    *(x9_2 + 0x10) = v19 + v20 + v21
    *(x9_2 + 0x14) = v7
    uint32_t x9_3
    
    if (not(v6 <= float.s(0x3f7fbe77)))
        x9_3 = 0xff
    else if (v6 >= float.s(0x3a83126f))
        x9_3 = vcvts_s32_f32(v6 * float.s(0x437f0000) + fconvert.s(0.5f))
    else
        x9_3 = 0
    
    v2 = v2 f* v0.d
    uint32_t x10_4
    
    if (v3 <= float.s(0x3f7fbe77))
        v0.d = float.s(0x3a83126f)
        
        if (v3 f>= v0.d)
            v0.d = float.s(0x437f0000)
            v0.d = v3 f* v0.d
            v0.d = v0.d f+ fconvert.s(0.5f)
            x10_4 = (zx.q(vcvts_s32_f32(v0.d)) << 8).d
        else
            x10_4 = 0
    else
        x10_4 = 0xff00
    
    v0.d = float.s(0x3f7fbe77)
    bool cond:5 = v2 f<= v0.d
    v0.d = v1 * float.s((x10_2 u>> 0x18).d) / v5
    uint32_t x11_5
    
    if (not(cond:5))
        x11_5 = 0xff0000
    else if (v2 >= float.s(0x3a83126f))
        x11_5 = (zx.q(vcvts_s32_f32(v2 * float.s(0x437f0000) + fconvert.s(0.5f))) << 0x10).d
    else
        x11_5 = 0
    
    uint32_t x13_7
    
    if (not(v0.d f<= float.s(0x3f7fbe77)))
        x13_7 = -0x1000000
    else if (v0.d f>= float.s(0x3a83126f))
        v0.d = v0.d f* float.s(0x437f0000)
        v0.d = v0.d f+ fconvert.s(0.5f)
        x13_7 = (zx.q(vcvts_s32_f32(v0.d)) << 0x18).d
    else
        x13_7 = 0
    
    uint32_t x9_8 = x13_7 | x10_4 | x9_3 | x11_5
    void* x8_2 = arg3 + x8 * 0x30
    *(x8_2 + 0x18) = (x9_8 & 0xff00ff00) | x11_5 u>> 0x10 | (x9_8 & 0xff) << 0x10
    *(x8_2 + 0x1c) = 0
    *(x8_2 + 0x20) = 0x3f0000003f000000
    return result

if (x12 != 4)
    pthread_kill(pthread_self(), 6)
    DefSubMesh* x0_1
    Mat4* x1
    XAsset* x2
    XAsset* x3
    x0_1, x1, x2, x3 = XNoReturn()
    return Draw3DMeshAsQuads(x0_1, x1, x2, x3) __tailcall

uint64_t x9_1 = zx.q(*(x9 + (x10 << 1)))
int64_t x10_1 = *(arg1 + 0x20)
int32_t* x14 = x10_1 + x9_1 * 0x2c
v21 = *x14
v23 = x14[1]
v0.d = *(arg2 + 0xc)
v5 = float.s(0x437f0000)
v1 = *arg2 * v21
v6 = v21 * *(arg2 + 0x10)
v17 = v21 * *(arg2 + 0x20)
v21 = x14[2]
uint64_t x13 = zx.q(x14[6])
v24 = *(arg2 + 4) * v23
v7 = v23 * *(arg2 + 0x14)
v18 = v23 * *(arg2 + 0x24)
v23 = *(gDraw3DData + 0x4c0)
v3 = *(arg2 + 8) * v21
v16 = v21 * *(arg2 + 0x18)
v19 = v21 * *(arg2 + 0x28)
v2 = *(gDraw3DData + 0x4c4)
v21 = v1 + v24
v1 = *(gDraw3DData + 0x4c8)
void* x12_1 = arg3 + x8 * 0x30
v0.d = v0.d f+ v21 + v3
v4 = *(arg2 + 0x1c) + v6 + v7 + v16
v16 = *(arg2 + 0x2c) + v17 + v18 + v19
v6 = *(gDraw3DData + 0x4bc) * float.s(x13.d u>> 0x10 & 0xff) / v5
*x11 = v0.d
*(x12_1 + 4) = v4
*(x12_1 + 8) = v16
v3 = v23 * float.s(x13.d u>> 8 & 0xff) / v5
v0.d = *arg2
v7 = x14[3]
v16 = x14[4]
v18 = x14[5]
v0.d = v0.d f* v7
v19 = v7 * *(arg2 + 0x10)
v20 = v16 * *(arg2 + 0x14)
v21 = v18 * *(arg2 + 0x18)
v22 = v0.d f+ *(arg2 + 4) * v16
v0.d = float.s(x13.d & 0xff)
v0.d = v0.d f/ v5
v7 = v7 * *(arg2 + 0x20) + v16 * *(arg2 + 0x24) + v18 * *(arg2 + 0x28)
*(x12_1 + 0xc) = v22 + *(arg2 + 8) * v18
*(x12_1 + 0x10) = v19 + v20 + v21
*(x12_1 + 0x14) = v7
uint32_t x11_2

if (not(v6 <= float.s(0x3f7fbe77)))
    x11_2 = 0xff
else if (v6 >= float.s(0x3a83126f))
    x11_2 = vcvts_s32_f32(v6 * float.s(0x437f0000) + fconvert.s(0.5f))
else
    x11_2 = 0

v2 = v2 f* v0.d
uint32_t x12_4

if (v3 <= float.s(0x3f7fbe77))
    v0.d = float.s(0x3a83126f)
    
    if (v3 f>= v0.d)
        v0.d = float.s(0x437f0000)
        v0.d = v3 f* v0.d
        v0.d = v0.d f+ fconvert.s(0.5f)
        x12_4 = (zx.q(vcvts_s32_f32(v0.d)) << 8).d
    else
        x12_4 = 0
else
    x12_4 = 0xff00

v0.d = float.s(0x3f7fbe77)
bool cond:6 = v2 f<= v0.d
v0.d = v1 * float.s((x13 u>> 0x18).d) / v5
uint32_t x13_4

if (not(cond:6))
    x13_4 = 0xff0000
else if (v2 >= float.s(0x3a83126f))
    x13_4 = (zx.q(vcvts_s32_f32(v2 * float.s(0x437f0000) + fconvert.s(0.5f))) << 0x10).d
else
    x13_4 = 0

uint32_t x15_1

if (not(v0.d f<= float.s(0x3f7fbe77)))
    x15_1 = -0x1000000
else if (v0.d f>= float.s(0x3a83126f))
    v0.d = v0.d f* float.s(0x437f0000)
    v0.d = v0.d f+ fconvert.s(0.5f)
    x15_1 = (zx.q(vcvts_s32_f32(v0.d)) << 0x18).d
else
    x15_1 = 0

uint32_t x11_10 = x15_1 | x12_4 | x11_2 | x13_4
void* x8_1 = arg3 + x8 * 0x30
*(x8_1 + 0x18) = (x11_10 & 0xff00ff00) | x13_4 u>> 0x10 | (x11_10 & 0xff) << 0x10
*(x8_1 + 0x1c) = 0
*(x8_1 + 0x20) = *(x10_1 + x9_1 * 0x2c + 0x1c)
return result
