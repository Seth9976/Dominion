// 函数: vorbis_book_encode
// 地址: 0x109034c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg2 & 0x80000000) != 0)
    return 0

void* x8_1 = *(arg1 + 0x18)
int64_t x20_1 = sx.q(arg2)

if (*(x8_1 + 8) s<= x20_1)
    return 0

oggpack_write(arg3, zx.q(*(*(arg1 + 0x28) + (x20_1 << 2))), zx.q(sx.d(*(*(x8_1 + 0x10) + x20_1))))
return zx.q(sx.d(*(*(*(arg1 + 0x18) + 0x10) + x20_1)))
