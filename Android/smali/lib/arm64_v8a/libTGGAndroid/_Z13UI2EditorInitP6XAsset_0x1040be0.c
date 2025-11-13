// 函数: _Z13UI2EditorInitP6XAsset
// 地址: 0x1040be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
int128_t v3

if (*(gUI2Editor + 0x88064) s>= 1)
    int64_t i = 0
    int64_t (* x23_1)() = gUI2Editor + 0x8078
    
    do
        v0, v1, v3 = DefinitionDelete(*x23_1)
        i += 1
        x23_1 += 0x1020
    while (i s< sx.q(*(gUI2Editor + 0x88064)))

v0.q = 0
v0:8.q = 0
*(gUI2Editor + 0x88060) = 0
*(gUI2Editor + 0x704c) = 0

if (*(gUI2Editor + 0x6010) != 0)
    *(gUI2Editor + 0x6008) = 0
    v0, v1, v3 = UI2Free(gUI2Editor + 0x6010)
    *(gUI2Editor + 0x6010) = 0

*(gUI2Editor + 0x6008) = arg1
*(gUI2Editor + 0x704c) = 0
*(gUI2Editor + 0x7054) = 0
*(gUI2Editor + 0x7056) = 0
*(gUI2Editor + 0x6048) = 0x3e8
*(gUI2Editor + 0x603c) = 0x3f000000

if (*arg1 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v1, v3 = AssetCatalogLoadAsset(arg1, false, true)

v3.d = 0xc2c80000
v3:4.d = 0xc2c80000
v1.q = *V20
v0.q = *V21
*(gUI2Editor + 0x7058) = -1
*(gUI2Editor + 0x6040) = vadd_f32(v1, vmul_f32(v0, v3, 0))
return UI2CreateUndoCheckpoint(false) __tailcall
