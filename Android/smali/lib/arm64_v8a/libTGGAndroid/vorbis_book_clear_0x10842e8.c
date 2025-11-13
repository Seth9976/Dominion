// 函数: vorbis_book_clear
// 地址: 0x10842e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *(arg1 + 0x20)

if (x0 != 0)
    free(x0)

int64_t x0_1 = *(arg1 + 0x28)

if (x0_1 != 0)
    free(x0_1)

int64_t x0_2 = *(arg1 + 0x30)

if (x0_2 != 0)
    free(x0_2)

int64_t x0_3 = *(arg1 + 0x38)

if (x0_3 != 0)
    free(x0_3)

int64_t x0_4 = *(arg1 + 0x40)

if (x0_4 != 0)
    free(x0_4)

return memset(arg1, 0, 0x60) __tailcall
