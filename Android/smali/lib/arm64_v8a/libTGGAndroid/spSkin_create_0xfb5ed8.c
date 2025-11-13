// 函数: spSkin_create
// 地址: 0xfb5ed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = _spCalloc(1, 0x350, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x42)
int64_t x0_3 = _spMalloc(strlen(arg1) + 1, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x43)
*result = x0_3
strcpy(x0_3, arg1)
int64_t* x0_4 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x22)
*x0_4 = 0x400000000
x0_4[1] = _spCalloc(4, 8, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x22)
result[1] = x0_4
int64_t* x0_6 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x23)
*x0_6 = 0x400000000
x0_6[1] = _spCalloc(4, 8, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x23)
result[2] = x0_6
int64_t* x0_8 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x24)
*x0_8 = 0x400000000
x0_8[1] = _spCalloc(4, 8, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x24)
result[3] = x0_8
int64_t* x0_10 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x25)
*x0_10 = 0x400000000
x0_10[1] = _spCalloc(4, 8, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x25)
result[4] = x0_10
return result
