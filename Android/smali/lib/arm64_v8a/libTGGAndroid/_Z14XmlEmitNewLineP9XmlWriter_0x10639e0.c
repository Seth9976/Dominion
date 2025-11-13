// 函数: _Z14XmlEmitNewLineP9XmlWriter
// 地址: 0x10639e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)

if (x8 == 0)
    return 

if (x8 == 1)
    fputc(0x3e, *arg1)
    *(arg1 + 8) = 3

fwrite(&data_729947, 1, 2, *arg1)

if (*(arg1 + 0xc) s< 1)
    return 

int32_t i = 0

do
    fwrite(0x751848, 1, 2, *arg1)
    i += 1
while (i s< *(arg1 + 0xc))
