// 函数: _spMeshAttachment_copy
// 地址: 0xfb6c40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1[0x1b] != 0)
    return spMeshAttachment_newLinkedMesh(arg1) __tailcall

int64_t x23 = *arg1
void* result = _spCalloc(1, 0xf8, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x73)
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
v0_1, v1_1, v2_1, v3_1 = _spVertexAttachment_init()
v0_1.d = fconvert.s(1f)
v1_1.d = fconvert.s(1f)
v2_1.d = fconvert.s(1f)
v3_1.d = fconvert.s(1f)
spColor_setFromFloats(result + 0xc0, v0_1, v1_1, v2_1, v3_1)
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
int64_t x0_7 =
    _spMalloc(strlen(arg1[0x13]) + 1, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x43)
*(result + 0x98) = x0_7
strcpy(x0_7, arg1[0x13])
spColor_setFromColor(result + 0xc0, &arg1[0x18])
spVertexAttachment_copyTo(arg1, result)
int64_t x0_11 =
    _spMalloc(sx.q(arg1[9].d) << 2, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x47)
*(result + 0xa0) = x0_11
memcpy(x0_11, arg1[0x14], sx.q(arg1[9].d) << 2)
int64_t x0_13 =
    _spMalloc(sx.q(arg1[9].d) << 2, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x49)
*(result + 0xa8) = x0_13
memcpy(x0_13, arg1[0x15], sx.q(arg1[9].d) << 2)
*(result + 0xb0) = arg1[0x16].d
int64_t x0_15 = _spMalloc(sx.q(arg1[0x16].d) << 1, 
    "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x4c)
*(result + 0xb8) = x0_15
memcpy(x0_15, arg1[0x17], sx.q(arg1[0x16].d) << 1)
*(result + 0xd0) = arg1[0x1a].d
int32_t x8_19 = arg1[0x1c].d

if (x8_19 s>= 1)
    *(result + 0xe0) = x8_19
    int64_t x0_17 = _spMalloc(sx.q(arg1[0x1c].d) << 2, 
        "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x51)
    *(result + 0xe8) = x0_17
    memcpy(x0_17, arg1[0x1d], sx.q(arg1[0x1c].d) << 2)

*(result + 0xf0) = arg1[0x1e].d
*(result + 0xf4) = *(arg1 + 0xf4)
return result
