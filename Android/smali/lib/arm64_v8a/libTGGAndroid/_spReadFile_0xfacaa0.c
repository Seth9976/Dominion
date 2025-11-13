// 函数: _spReadFile
// 地址: 0xfacaa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(arg1, "rb")

if (fp == 0)
    return 0

fseek(fp, 0, 2)
*arg2 = ftell(fp)
fseek(fp, 0, 0)
int64_t x8 = data_2422580
int64_t x0_3 = sx.q(*arg2)
int64_t buf

if (x8 == 0)
    buf = data_11bbe10(x0_3)
else
    buf = x8(x0_3, "..\..\ExternalCode\spine-c\src\spine\extension.c", 0x60)

fread(buf, 1, sx.q(*arg2), fp)
fclose(fp)
return buf
