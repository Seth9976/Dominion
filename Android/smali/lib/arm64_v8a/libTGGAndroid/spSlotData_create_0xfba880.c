// 函数: spSlotData_create
// 地址: 0xfba880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = _spCalloc(1, 0x40, "..\..\ExternalCode\spine-c\src\spine\SlotData.c", 0x22)
*result = arg1
int64_t x0_3 = _spMalloc(strlen(arg2) + 1, "..\..\ExternalCode\spine-c\src\spine\SlotData.c", 0x24)
*(result + 8) = x0_3
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = strcpy(x0_3, arg2)
v0.d = fconvert.s(1f)
v1.d = fconvert.s(1f)
v2.d = fconvert.s(1f)
v3.d = fconvert.s(1f)
*(result + 0x10) = arg3
spColor_setFromFloats(&result[8], v0, v1, v2, v3)
return result
