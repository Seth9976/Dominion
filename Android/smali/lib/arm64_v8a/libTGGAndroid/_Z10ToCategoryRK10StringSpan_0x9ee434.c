// 函数: _Z10ToCategoryRK10StringSpan
// 地址: 0x9ee434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s1 = *arg1
size_t n = *(arg1 + 8)

for (int64_t i = 0; i != 0xe60; i += 0x28)
    if (strncasecmp(s1, *(i + &data_1124b40), n) == 0)
        return zx.q(*(&data_1124b38 + i))

return 0
