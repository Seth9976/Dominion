// 函数: _Z17Draw3DMeshAsQuadsP10DefSubMeshRK4Mat4P6XAssetS5_
// 地址: 0xc97b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v4
int128_t v7
int128_t v16
int128_t v17
int128_t v21
int128_t v22
int128_t v23
int128_t v26
v4, v7, v16, v17, v21, v22, v23, v26 = MeshUsesDefIndex16(arg1)
int64_t x8 = sx.q(*(arg1 + 0x28))
v4.d = *(arg1 + 0x130)
float v5 = *(arg1 + 0x140)
v7.d = *(arg1 + 0x134)
v17.d = *(arg1 + 0x144)
float v18 = *(arg1 + 0x138)
float v6 = *arg2
v16.d = *(arg2 + 4)
float v19 = *(arg2 + 8)
float v0 = *(arg2 + 0xc)
float v20 = *(arg2 + 0x10)
v21.d = *(arg2 + 0x14)
v22.d = *(arg2 + 0x18)
float v1 = *(arg2 + 0x1c)
float v25 = *(arg2 + 0x20)
float v24 = *(arg2 + 0x24)
v23.d = *(arg2 + 0x28)
float v2 = *(arg2 + 0x2c)
int64_t x10 = sx.q(*(gDraw3DData + 0x1a0590))
v26.q = 0
v26:8.q = 0
float v3 = *(arg1 + 0x13c) f+ v4.d
void* x23 = gDraw3DData + x10 * 0x1a0
*(gDraw3DData + 0x1a0590) = x10.d + 1
__builtin_memset(x23 + 0x590, 0, 0x1a0)
v5 = v5 f+ v7.d
*(x23 + 0x620) = *(gDraw3DData + 0x4cc)
v7.d = v17.d f+ v18
*(x23 + 0x630) = *(gDraw3DData + 0x4bc)
*(x23 + 0x640) = *(gDraw3DData + 0x4dc)
*(x23 + 0x728) = *(gDraw3DData + "}")
*(x23 + 0x718) = *(gDraw3DData + 0x4a8)
v4.d = fconvert.s(0.5f)
v3 = v3 f* v4.d
v5 = v5 f* v4.d
v4.d = v7.d f* v4.d
v7.d = *(gDraw3DData + 0x4ec)
v17.d = v4.d f* v19
v18 = v3 * v20
*(x23 + 0x6c0) = v7.d
v19 = v5 f* v21.d
v20 = v4.d f* v22.d
*(x23 + 0x6c4) = *(gDraw3DData + 0x564)
v4.d = v4.d f* v23.d
*(x23 + 0x6d4) = *(gDraw3DData + 0x574)
v7 = *(gDraw3DData + 0x488)
v6 = v3 * v6
v16.d = v5 f* v16.d
*(x23 + 0x618) = *(gDraw3DData + 0x498)
*(x23 + 0x608) = v7
v21 = *(gDraw3DData + 0x540)
v22 = *(gDraw3DData + 0x530)
*(x23 + 0x6b0) = *(gDraw3DData + 0x550)
*(x23 + 0x6a0) = v21
*(x23 + 0x690) = v22
v21 = *(gDraw3DData + 0x510)
v22 = *(gDraw3DData + 0x500)
v23 = *(gDraw3DData + 0x4f0)
*(x23 + 0x680) = *(gDraw3DData + 0x520)
*(x23 + 0x670) = v21
*(x23 + 0x660) = v22
*(x23 + 0x650) = v23
v7.d = v18 + v19
*(x23 + 0x710) = *(gDraw3DData + 0x584)
v3 = v3 * v25 + v5 * v24
v5 = v6 f+ v16.d f+ v17.d
v6 = v7.d f+ v20
v7.d = *(gDraw3DData + 0x588)
v16 = *(M4I + 0x20)
v17 = *(M4I + 0x30)
v3 = v3 f+ v4.d
*(x23 + 0x714) = v7.d
v4 = *M4I
v7 = *(M4I + 0x10)
int64_t x8_1 = x8 * 0x55555556
*(x23 + 0x590) = 1
*(x23 + 0x5e8) = arg4
*(x23 + 0x5d0) = v17
*(x23 + 0x5c0) = v16
*(x23 + 0x5b0) = v7
*(x23 + 0x5e0) = arg3
*(x23 + 0x5a0) = v4
int32_t x9_11 = *(gDraw3DData + "2")
*(x23 + 0x6e8) = (x8_1 u>> 0x20).d + (x8_1 u>> 0x3f).d
*(x23 + 0x6e4) = x9_11
v4.d = *(gDraw3DData + 0xb8)
v0 = v4.d f- (v0 + v5)
v1 = *(gDraw3DData + 0xbc) - (v1 + v6)
v2 = *(gDraw3DData + 0xc0) - (v2 + v3)
*(x23 + 0x6f4) = v0 * v0 + v1 * v1 + v2 * v2
*(x23 + 0x6ec) = GetSortLayerFromMaterial(arg3)
int64_t result = GetSortTypeFromMaterial(arg3)
*(x23 + 0x6f0) = result.d
*(x23 + 0x700) = 0
int32_t fp

if (*(arg1 + 0x28) s< 1)
    fp = 0
else
    fp = 0
    int32_t i = 0
    
    do
        int64_t x28_1 = sx.q(*(gDraw3DData + "2"))
        int64_t i_2 = sx.q(i)
        *(gDraw3DData + "2") = x28_1.d + 1
        uint64_t x25_1
        uint64_t x26_1
        
        if ((i_2 + 5).d s>= *(arg1 + 0x28))
            x26_1 = zx.q(i + 2)
            x25_1 = zx.q(i + 1)
        label_c97e14:
            MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x26_1.d, 0)
            MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x25_1.d, 1)
            int128_t v0_1
            result, v0_1 =
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, i, 2)
            void* x8_5 = gDraw3DData + x28_1 * 0xc0
            *(x8_5 + 0x1a0624) = *(x8_5 + 0x1a05f4)
            *(x8_5 + 0x1a0634) = *(x8_5 + 0x1a0604)
            *(x8_5 + 0x1a0644) = *(x8_5 + 0x1a0614)
        else
            int64_t x8_9 = *(arg1 + 0x30)
            x25_1 = i_2 + 1
            x26_1 = i_2 + 2
            uint32_t x10_5 = zx.d(*(x8_9 + (x25_1 << 1)))
            uint32_t x9_14 = zx.d(*(x8_9 + (i_2 << 1) + 8))
            DefSubMesh* x0_8
            Mat4 const& x1_5
            RenderQuad* x2_5
            int32_t i_1
            uint32_t x11_1
            
            if (x10_5 != x9_14)
                x11_1 = zx.d(*(x8_9 + (i_2 << 1)))
            label_c97f64:
                uint32_t x12_2 = zx.d(*(x8_9 + ((i_2 + 3) << 1)))
                
                if (x11_1 == x9_14 && x10_5 == x12_2)
                    MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x26_1.d, 
                        0)
                    MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x25_1.d, 
                        1)
                    x0_8 = arg1
                    x1_5 = arg2
                    x2_5 = gDraw3DData + x28_1 * 0xc0 + 0x1a0594
                    i_1 = i
                    goto label_c97fbc
                
                if (x11_1 != x12_2 || zx.d(*(x8_9 + (x26_1 << 1))) != x9_14)
                    goto label_c97e14
                
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x25_1.d, 0)
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, i, 1)
                x0_8 = arg1
                x1_5 = arg2
                x2_5 = gDraw3DData + x28_1 * 0xc0 + 0x1a0594
                i_1 = x26_1.d
                goto label_c97fbc
            
            if (zx.d(*(x8_9 + (x26_1 << 1))) != zx.d(*(x8_9 + ((i_2 + 3) << 1))))
                x11_1 = zx.d(*(x8_9 + (i_2 << 1)))
                
                if (x11_1 != zx.d(*(x8_9 + ((i_2 + 5) << 1))))
                    goto label_c97f64
                
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x26_1.d, 0)
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x25_1.d, 1)
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, i, 2)
                result = MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, 
                    (i_2 + 3).d, 3)
                i = (i_2 + 3).d
            else
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, i, 0)
                MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, x26_1.d, 1)
                x0_8 = arg1
                x1_5 = arg2
                x2_5 = gDraw3DData + x28_1 * 0xc0 + 0x1a0594
                i_1 = x25_1.d
            label_c97fbc:
                MeshAsQuadsCopyVert(x0_8, x1_5, x2_5, i_1, 2)
                result = MeshAsQuadsCopyVert(arg1, arg2, gDraw3DData + x28_1 * 0xc0 + 0x1a0594, 
                    (i_2 + 5).d, 3)
                i = (i_2 + 3).d
        i += 3
        fp += 1
    while (i s< *(arg1 + 0x28))

*(x23 + 0x6e8) = fp
return result
