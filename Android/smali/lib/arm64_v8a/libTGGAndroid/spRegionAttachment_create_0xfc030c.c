// 函数: spRegionAttachment_create
// 地址: 0xfc030c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
int64_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 =
    _spCalloc(1, 0xc0, "..\..\ExternalCode\spine-c\src\spine\RegionAttachment.c", 0x45)
v0.d = fconvert.s(1f)
v0:4.d = fconvert.s(1f)
*(result + 0x38) = v0
v0.d = fconvert.s(1f)
v1.d = fconvert.s(1f)
v2.d = fconvert.s(1f)
v3.d = fconvert.s(1f)
spColor_setFromFloats(result + 0x4c, v0, v1, v2, v3)
_spAttachment_init(result, arg1, 0, _spRegionAttachment_dispose, _spRegionAttachment_copy)
return result
