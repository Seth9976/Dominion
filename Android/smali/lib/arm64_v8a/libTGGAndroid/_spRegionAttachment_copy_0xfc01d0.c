// 函数: _spRegionAttachment_copy
// 地址: 0xfc01d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *arg1
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
_spAttachment_init(result, x22, 0, _spRegionAttachment_dispose, _spRegionAttachment_copy)
*(result + 0x70) = arg1[0xe].d
*(result + 0x74) = *(arg1 + 0x74)
*(result + 0x68) = arg1[0xd].d
*(result + 0x6c) = *(arg1 + 0x6c)
*(result + 0x78) = arg1[0xf].d
*(result + 0x7c) = *(arg1 + 0x7c)
*(result + 0x60) = arg1[0xc]
int64_t x0_5 =
    _spMalloc(strlen(arg1[5]) + 1, "..\..\ExternalCode\spine-c\src\spine\RegionAttachment.c", 0x36)
*(result + 0x28) = x0_5
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = strcpy(x0_5, arg1[5])
v0_1.d = arg1[6].d
*(result + 0x30) = v0_1.d
v0_1.d = *(arg1 + 0x34)
*(result + 0x34) = v0_1.d
v0_1.d = arg1[7].d
*(result + 0x38) = v0_1.d
v0_1.d = *(arg1 + 0x3c)
*(result + 0x3c) = v0_1.d
v0_1.d = arg1[8].d
*(result + 0x40) = v0_1.d
v0_1.d = *(arg1 + 0x44)
*(result + 0x44) = v0_1.d
v0_1.d = arg1[9].d
*(result + 0x48) = v0_1.d
v0_1 = *(arg1 + 0xb0)
*(result + 0xa0) = *(arg1 + 0xa0)
*(result + 0xb0) = v0_1
v0_1 = *(arg1 + 0x90)
*(result + 0x80) = *(arg1 + 0x80)
*(result + 0x90) = v0_1
spColor_setFromColor(result + 0x4c, arg1 + 0x4c, v0_1)
return result
