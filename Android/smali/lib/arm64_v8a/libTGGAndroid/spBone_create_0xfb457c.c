// 函数: spBone_create
// 地址: 0xfb457c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = _spCalloc(1, 0x88, "..\..\ExternalCode\spine-c\src\spine\Bone.c", 0x2c)
*result = arg1
result[1] = arg2
result[2] = arg3
*(result + 0x64) = 0x3f800000
*(result + 0x74) = 0x3f800000
result[5].d = *(arg1 + 0x1c)
*(result + 0x2c) = *(arg1 + 0x20)
result[6].d = *(arg1 + 0x24)
*(result + 0x34) = *(arg1 + 0x28)
result[7].d = *(arg1 + 0x2c)
*(result + 0x3c) = *(arg1 + 0x30)
result[8].d = *(arg1 + 0x34)
return result
