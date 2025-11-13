// 函数: spAtlas_createFromFile
// 地址: 0xfc0028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = strrchr(arg1, 0x2f)
int64_t x0_2 = strrchr(arg1, 0x5c)
int64_t x8

x8 = x0 u> x0_2 ? x0 : x0_2

int64_t x8_1

if (x8 == arg1)
    x8_1 = x8 + 1
else
    x8_1 = x8

int32_t x22

if (x8_1 == 0)
    x22 = 0
else
    x22 = x8_1.d - arg1.d

char* x0_4 = _spMalloc(sx.q(x22 + 1), "..\..\ExternalCode\spine-c\src\spine\Atlas.c", 0x143)
int64_t x22_1 = sx.q(x22)
memcpy(x0_4, arg1, x22_1)
x0_4[x22_1] = 0
int64_t x0_6 = _spUtil_readFile()
int64_t result
int32_t var_24

if (x0_6 == 0)
    result = 0
else
    result = spAtlas_create(x0_6, zx.q(var_24), x0_4, arg2)
_spFree(x0_6)
_spFree(x0_4)
return result
