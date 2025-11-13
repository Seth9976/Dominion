// 函数: _Z32AnimationUpdateSkinningMatriciesP13StructureAnim
// 地址: 0xc7a0c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *arg1
StructureAnim* x19 = arg1
int64_t* x8

if (x20 == 0)
    x20 = AssetPtrGetNull(2)
    x8 = *x20
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20
else
    x8 = *x20
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8 = *x20

*(x20 + 0x24) += 1
void* x21 = **x8
uint64_t x8_2 = zx.q(*(x21 + 0x10))

if (x8_2.d s>= 1)
    void* x23_1 = *(x19 + 0x20)
    int64_t i = 0
    int64_t x25_1 = 0x80
    
    do
        void* x26_1 = *(x19 + 0xb0)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        arg1, v0_1, v1_1, v2_1, v3_1 = Mat4Multiply(x23_1 + i, *(x21 + 0x18) + x25_1)
        int128_t* x8_4 = x26_1 + i
        i += 0x40
        x25_1 += 0xd8
        int128_t var_70
        x8_4[2] = var_70
        int128_t var_60
        x8_4[3] = var_60
        int128_t var_90
        *x8_4 = var_90
        int128_t var_80
        x8_4[1] = var_80
    while (x8_2 << 6 != i)

if (x8_2.d s< 1 || x20 != 0)
    *(x20 + 0x24) -= 1
