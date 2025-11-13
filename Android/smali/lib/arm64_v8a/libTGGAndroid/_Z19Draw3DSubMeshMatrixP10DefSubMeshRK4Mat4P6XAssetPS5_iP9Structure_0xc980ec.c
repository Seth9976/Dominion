// 函数: _Z19Draw3DSubMeshMatrixP10DefSubMeshRK4Mat4P6XAssetPS5_iP9Structure
// 地址: 0xc980ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x14) == 0)
    return 

XAsset* x21_1 = arg3
DefSubMesh* x20_1 = arg1

if (arg3 == 0)
    if (arg6 == 0)
        x21_1 = data_23e4f88
    else
        x21_1 = data_23e4f90
else if ((zx.d(*(*gpGameData + 0x39)) & 0x10) != 0)
    x21_1 = data_23e4f88

int64_t x24_1 = sx.q(*(gDraw3DData + 0x1a0590))
int128_t v0
v0.q = 0
v0:8.q = 0
void* x8_3 = gDraw3DData + x24_1 * 0x1a0
*(gDraw3DData + 0x1a0590) = x24_1.d + 1
__builtin_memset(x8_3 + 0x590, 0, 0x1a0)
*(x8_3 + 0x620) = *(gDraw3DData + 0x4cc)
*(x8_3 + 0x630) = *(gDraw3DData + 0x4bc)
*(x8_3 + 0x640) = *(gDraw3DData + 0x4dc)
*(x8_3 + 0x728) = *(gDraw3DData + "}")
*(x8_3 + 0x718) = *(gDraw3DData + 0x4a8)
v0.d = *(gDraw3DData + 0x4ec)
*(x8_3 + 0x6c0) = v0.d
*(x8_3 + 0x6c4) = *(gDraw3DData + 0x564)
*(x8_3 + 0x6d4) = *(gDraw3DData + 0x574)
v0 = *(gDraw3DData + 0x488)
*(x8_3 + 0x618) = *(gDraw3DData + 0x498)
*(x8_3 + 0x608) = v0
int128_t v1 = *(gDraw3DData + 0x540)
int128_t v2 = *(gDraw3DData + 0x530)
*(x8_3 + 0x6b0) = *(gDraw3DData + 0x550)
*(x8_3 + 0x6a0) = v1
*(x8_3 + 0x690) = v2
v1 = *(gDraw3DData + 0x510)
v2 = *(gDraw3DData + 0x500)
int128_t v3 = *(gDraw3DData + 0x4f0)
*(x8_3 + 0x680) = *(gDraw3DData + 0x520)
*(x8_3 + 0x670) = v1
*(x8_3 + 0x660) = v2
*(x8_3 + 0x650) = v3
*(x8_3 + 0x710) = *(gDraw3DData + 0x584)
v0.d = *(gDraw3DData + 0x588)
*(x8_3 + 0x590) = 0
*(x8_3 + 0x714) = v0.d
*(x8_3 + 0x598) = x20_1
v0 = *(arg2 + 0x20)
v1 = *(arg2 + 0x30)
v2 = *arg2
v3 = *(arg2 + 0x10)
*(x8_3 + 0x5e0) = x21_1
*(x8_3 + 0x5d0) = v1
*(x8_3 + 0x5c0) = v0
*(x8_3 + 0x5b0) = v3
*(x8_3 + 0x5a0) = v2

if (arg5 s>= 1)
    uint64_t x8_4 = zx.q(arg5)
    uint64_t x9_9
    int64_t x10_7
    
    if (arg5 u>= 4)
        x10_7 = x24_1 * 0x1a0
        x9_9 = x8_4 << 3
    
    int64_t i_4
    
    if (arg5 u>= 4 && (x10_7 + gDraw3DData + 0x5e8 u>= &arg4[x8_4]
            || x10_7 + x9_9 + gDraw3DData + 0x5e8 u<= arg4))
        i_4 = x8_4 & 0xfffffffc
        void* x10_9 = &arg4[2]
        void* x11_9 = gDraw3DData + x24_1 * 0x1a0 + 0x5f8
        int64_t i_3 = i_4
        int64_t i
        
        do
            v0 = *(x10_9 - 0x10)
            v1 = *x10_9
            x10_9 += 0x20
            i = i_3
            i_3 -= 4
            *(x11_9 - 0x10) = v0
            *x11_9 = v1
            x11_9 += 0x20
        while (i != 4)
        
        if (i_4 != x8_4)
            goto label_c98314
    else
        i_4 = 0
    label_c98314:
        void* x10_8 = &arg4[i_4]
        void* x11_7 = (i_4 << 3) + x24_1 * 0x1a0 + gDraw3DData + 0x5e8
        int64_t i_2 = x8_4 - i_4
        int64_t i_1
        
        do
            int64_t x9_13 = *x10_8
            x10_8 += 8
            i_1 = i_2
            i_2 -= 1
            *x11_7 = x9_13
            x11_7 += 8
        while (i_1 != 1)

void* x22_1 = gDraw3DData + x24_1 * 0x1a0
*(x22_1 + 0x708) = arg6
*(x22_1 + 0x6ec) = GetSortLayerFromMaterial(x21_1)
*(x22_1 + 0x6f0) = GetSortTypeFromMaterial(x21_1)
int64_t x0_6 = MaterialCacheGet(MaterialCacheGetId(*(x8_3 + 0x5e0)))
int32_t x22_2 = *(x20_1 + 0x38)

if (*(ShaderGetDef(*MaterialCacheGet(MaterialCacheGetId(*(x8_3 + 0x5e0)))) + 0x50) == 1)
    x22_2 = *(x20_1 + 0x40)

int64_t* x0_12 = *gGraphicsInterface
int128_t v1_1
int128_t v2_1
int128_t v4_1
int128_t v6_1
int128_t v7_1
arg1, v1_1, v2_1, v4_1, v6_1, v7_1 = (*(*x0_12 + 0xe0))(x0_12, zx.q(x22_2), x0_6)
*(gDraw3DData + x24_1 * 0x1a0 + 0x700) = arg1
float v0_1 = 0f

if (*(gDraw3DData + 0x4b8) != 1)
    v1_1.d = *(x20_1 + 0x130)
    v2_1.q = *(x20_1 + 0x140)
    v7_1.q = *(x20_1 + 0x134)
    v4_1.d = 0x3f000000
    v4_1:4.d = 0x3f000000
    float v5_1 = *arg2
    v6_1.q = *(arg2 + 4)
    v0_1 = *(x20_1 + 0x13c) f+ v1_1.d
    int128_t v2_2 = vadd_f32(v2_1, v7_1)
    int32_t v16_1 = *(arg2 + 0xc)
    float v17_1 = *(arg2 + 0x10)
    v1_1.q = *(arg2 + 0x14)
    v0_1 = v0_1 * fconvert.s(0.5f)
    float v3_1 = *(arg2 + 0x1c)
    v7_1.d = *(arg2 + 0x20)
    int128_t v2_3 = vmul_f32(v2_2, v4_1, 0)
    v4_1.q = *(arg2 + 0x24)
    double v6_2 = vmul_f32(v2_3, v6_1, 0)
    double v1_2 = vmul_f32(v2_3, v1_1, 0)
    double v2_4 = vmul_f32(v2_3, v4_1, 0)
    v4_1.d = v0_1 * v5_1 f+ v6_2.d
    v4_1.d = v4_1.d f+ v6_2:4.d
    v5_1 = v0_1 * v17_1 f+ v1_2.d
    v1_2.d = v1_2:4.d
    v0_1 = v0_1 f* v7_1.d f+ v2_4.d
    v2_4.d = v2_4:4.d
    v1_2.d = v5_1 f+ v1_2.d
    v0_1 = v0_1 f+ v2_4.d
    v2_4.d = v16_1 f+ v4_1.d
    v4_1.d = *(gDraw3DData + 0xb8)
    v6_2.d = *(gDraw3DData + 0xbc)
    v1_2.d = v3_1 f+ v1_2.d
    v2_4.d = v4_1.d f- v2_4.d
    v1_2.d = v6_2.d f- v1_2.d
    v0_1 = *(gDraw3DData + 0xc0) - (*(arg2 + 0x2c) + v0_1)
    v2_4.d = v2_4.d f* v2_4.d
    v1_2.d = v1_2.d f* v1_2.d
    v1_2.d = v2_4.d f+ v1_2.d
    v0_1 = v1_2.d f+ v0_1 * v0_1

*(gDraw3DData + x24_1 * 0x1a0 + 0x6f4) = v0_1
