// 函数: spAnimation_create
// 地址: 0xfad5ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x24)
int64_t x0_3 =
    _spMalloc(strlen(arg1) + 1, "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x25)
*result = x0_3
strcpy(x0_3, arg1)
*(result + 0xc) = arg2
result[2] = _spMalloc(zx.q(arg2) << 0x20 s>> 0x1d, 
    "..\..\ExternalCode\spine-c\src\spine\spAnimation.c", 0x27)
return result
