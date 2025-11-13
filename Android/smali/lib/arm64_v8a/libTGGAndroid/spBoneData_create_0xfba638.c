// 函数: spBoneData_create
// 地址: 0xfba638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = _spCalloc(1, 0x40, "..\..\ExternalCode\spine-c\src\spine\BoneData.c", 0x22)
*result = arg1
int64_t x0_3 = _spMalloc(strlen(arg2) + 1, "..\..\ExternalCode\spine-c\src\spine\BoneData.c", 0x24)
*(result + 8) = x0_3
strcpy(x0_3, arg2)
*(result + 0x10) = arg3
int64_t v0
v0.d = fconvert.s(1f)
v0:4.d = fconvert.s(1f)
*(result + 0x28) = v0
result[0xe] = 0
return result
