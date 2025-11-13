// 函数: _Z23MaterialSimpleStateBindP13MaterialStateP6XAsset
// 地址: 0xf7cf3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg2
void** x8

if (arg2 == 0)
    x19 = AssetPtrGetNull(5)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
void* x21 = *(*(*x8 + 8) + 8)
MaterialParams* var_28 = x21 + 8
int64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = MaterialStateBind(arg1, &var_28, 1)
v0 = *(x21 + 0x48)
v2 = *(x21 + 0x28)
v3 = *(x21 + 0x18)
*(arg1 + 0x197c) = *(x21 + 0x38)
*(arg1 + 0x198c) = v0
*(arg1 + 0x195c) = v3
*(arg1 + 0x196c) = v2
v0 = *(x21 + 0x88)
v2 = *(x21 + 0x68)
v3 = *(x21 + 0x58)
*(arg1 + 0x19bc) = *(x21 + 0x78)
*(arg1 + 0x19cc) = v0
*(arg1 + 0x199c) = v3
*(arg1 + 0x19ac) = v2
v0 = *(x21 + 0xc8)
v2 = *(x21 + 0xa8)
v3 = *(x21 + 0x98)
*(arg1 + 0x19fc) = *(x21 + 0xb8)
*(arg1 + 0x1a0c) = v0
*(arg1 + 0x19dc) = v3
*(arg1 + 0x19ec) = v2
*(x19 + 0x24) -= 1
return result
