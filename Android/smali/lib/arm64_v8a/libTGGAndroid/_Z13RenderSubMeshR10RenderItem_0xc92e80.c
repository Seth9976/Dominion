// 函数: _Z13RenderSubMeshR10RenderItem
// 地址: 0xc92e80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefSubMesh* x19 = *(arg1 + 8)
int32_t x23 = *(ShaderGetDef(*MaterialCacheGet(MaterialCacheGetId(*(arg1 + 0x50)))) + 0x50)
int32_t x8_1
void* x9_1
int32_t x20_1
int32_t x21
int32_t x25
void* x26

if (x23 != 1)
    int64_t* x0_9 = *gGraphicsInterface
    x21 = *(x19 + 0x10)
    x20_1 = *(x19 + 0x14)
    x25 = *(x19 + 0x28)
    x26 = x19 + 0x38
    
    if (((*(*x0_9 + 0x58))(x0_9, zx.q(*x26)) & 1) == 0)
        int64_t* x0_11 = *gGraphicsInterface
        *(x19 + 0x38) =
            (*(*x0_11 + 0x50))(x0_11, *(x19 + 0x20), zx.q(*(x19 + 0x18)), zx.q(*(x19 + 0x10)), 0)
    
    if (*(x19 + 0x2c) s>= 1)
        int64_t* x0_13 = *gGraphicsInterface
        
        if (((*(*x0_13 + 0x70))(x0_13, zx.q(*(x19 + 0x3c))) & 1) == 0)
            int32_t x0_16 = MeshUsesDefIndex16(x19)
            int64_t* x8_9 = *gGraphicsInterface
            *(x19 + 0x3c) = (*(*x8_9 + 0x68))(x8_9, *(x19 + 0x30), zx.q(*(x19 + 0x2c)), 
                zx.q(not.d(x0_16)) & 1, 0, zx.q(*(x19 + 0x38)))
    
    x8_1 = *(gDraw3DData + "center_landscape_col_2")
    x9_1 = x19 + 0x3c
else
    int64_t* x0_7 = MaterialCacheGet(MaterialCacheGetId(*(arg1 + 0x50)))
    BindInstanceBuffersMesh(*(arg1 + 8), *x0_7)
    x8_1 = *(gDraw3DData + "center_landscape_col_2")
    x26 = x19 + 0x40
    x9_1 = x19 + 0x44
    x20_1 = *(x19 + 0x14) * x8_1
    x25 = *(x19 + 0x28) * x8_1
    x21 = 0xc

int64_t* x0_19 = *gGraphicsInterface
int32_t x3_3 = *x9_1
int32_t x8_10

x8_10 = x23 == 2 ? x8_1 : 0

int32_t x10_3

x10_3 = x3_3 == 0 ? x20_1 : x25

int64_t result = (*(*x0_19 + 0x80))(x0_19, 4, zx.q(*x26), x3_3, zx.q(x21), zx.q(x10_3 s/ 3), 
    zx.q(x20_1), 0, x8_10)
int32_t x9_6 = *(gDraw3DData + "center_landscape_col_2")
uint64_t x8_11 = *gpRenderAppData
int32_t x9_7

x9_7 = x9_6 s> 1 ? x9_6 : 1

int32_t x10_7 = *(x8_11 + 0x1c) + 1
*(x8_11 + 0x18) += x9_7
*(x8_11 + 0x1c) = x10_7
return result
