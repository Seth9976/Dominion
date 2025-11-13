// 函数: spMeshAttachment_create
// 地址: 0xfb7008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = _spCalloc(1, 0xf8, "..\..\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x73)
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
_spAttachment_init(result, arg1, 2, _spMeshAttachment_dispose, _spMeshAttachment_copy)
return result
