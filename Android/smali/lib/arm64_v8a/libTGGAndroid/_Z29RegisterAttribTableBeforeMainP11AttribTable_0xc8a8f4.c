// 函数: _Z29RegisterAttribTableBeforeMainP11AttribTable
// 地址: 0xc8a8f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*gAttribTableLookupCount)
*(gAttribTableFastLookupArray + (x9 << 3)) = arg1
*gAttribTableLookupCount = x9.d + 1
