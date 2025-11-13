// 函数: sub_fda580
// 地址: 0xfda580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_68
__builtin_memset(&var_68, 0, 0x18)
TextureLoadFileWithSTB(&var_68, arg3)
*arg1 = 8
void* x0_1 = var_68

if (x0_1 != 0)
    XFree(x0_1)

int64_t var_58
int32_t x8 = var_58:4.d
var_68 = nullptr
int32_t x9 = arg1[1]
int32_t x8_1

x8_1 = x8 == 5 ? 4 : x8

int32_t x26

x26 = x9 == 0 ? x8_1 : x9

FILE* fp = fopen(arg3, "rb")

if (fp == 0)
    XTrace("failed to open file: %s")
    return 0

fseek(fp, 0, 2)
int32_t x0_4 = ftell(fp)
fseek(fp, 0, 0)

if (x0_4 == 0)
    XTrace("file too small: %s")
    fclose(fp)
    return 0

void* buf = XMalloc(x0_4)
int32_t x0_7 = fread(buf, 1, sx.q(x0_4), fp)
fclose(fp)

if (x0_7 != x0_4)
    XTrace("failed to read: %s")
    XFree(buf)
    return 0

arg2[2].d = 1
*(arg2 + 0x3c) = 1
int64_t var_60
*arg2 = var_60
arg2[9] = XCalloc(0x10)
void* x0_11 = strrchr(arg3, 0x2e)
int32_t* x0_12

if (x0_11 != 0)
    x0_12 = SymbolMapLookupValue(0x1180490, x0_11 + 1)

int32_t x8_2

if (x0_11 == 0 || x0_12 == 0)
    x8_2 = 0
else
    x8_2 = *x0_12

int32_t* x9_1 = arg2[9]
*(arg2 + 0x14) = x8_2
arg2[3].d = x26
*(arg2 + 0x1c) = 0
*x9_1 = x0_4
*(arg2[9] + 8) = buf
arg2[4].d = arg1[2]
*(arg2 + 0x24) = arg1[3]
return 1
