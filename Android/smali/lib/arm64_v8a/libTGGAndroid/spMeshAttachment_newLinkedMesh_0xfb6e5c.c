// 函数: spMeshAttachment_newLinkedMesh
// 地址: 0xfb6e5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *arg1
void* result = _spCalloc(1, 0xf8, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x73)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = _spVertexAttachment_init()
v0.d = fconvert.s(1f)
v1.d = fconvert.s(1f)
v2.d = fconvert.s(1f)
v3.d = fconvert.s(1f)
spColor_setFromFloats(result + 0xc0, v0, v1, v2, v3)
_spAttachment_init(result, x23, 2, _spMeshAttachment_dispose, _spMeshAttachment_copy)
*(result + 0x60) = arg1[0xc]
*(result + 0x80) = arg1[0x10].d
*(result + 0x84) = *(arg1 + 0x84)
*(result + 0x88) = arg1[0x11].d
*(result + 0x8c) = *(arg1 + 0x8c)
*(result + 0x90) = arg1[0x12].d
*(result + 0x94) = *(arg1 + 0x94)
*(result + 0x68) = arg1[0xd].d
*(result + 0x6c) = *(arg1 + 0x6c)
*(result + 0x70) = arg1[0xe].d
*(result + 0x74) = *(arg1 + 0x74)
*(result + 0x78) = arg1[0xf].d
*(result + 0x7c) = *(arg1 + 0x7c)
int64_t x0_5 =
    _spMalloc(strlen(arg1[0x13]) + 1, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x6a)
*(result + 0x98) = x0_5
strcpy(x0_5, arg1[0x13])
spColor_setFromColor(result + 0xc0, &arg1[0x18])
*(result + 0x50) = arg1[0xa]
int64_t* x8_10 = arg1[0x1b]
int64_t* x8_11

x8_11 = x8_10 == 0 ? arg1 : x8_10

*(result + 0xd8) = x8_11

if (x8_11 != 0)
    *(result + 0x30) = x8_11[6]
    *(result + 0x28) = x8_11[5].d
    *(result + 0x40) = x8_11[8]
    *(result + 0x38) = x8_11[7].d
    *(result + 0xa0) = x8_11[0x14]
    *(result + 0xb8) = x8_11[0x17]
    *(result + 0xb0) = x8_11[0x16].d
    *(result + 0xd0) = x8_11[0x1a].d
    *(result + 0x48) = x8_11[9].d
    *(result + 0xe8) = x8_11[0x1d]
    *(result + 0xe0) = x8_11[0x1c].d
    *(result + 0xf0) = x8_11[0x1e].d
    *(result + 0xf4) = *(x8_11 + 0xf4)

spMeshAttachment_updateUVs(result)
return result
