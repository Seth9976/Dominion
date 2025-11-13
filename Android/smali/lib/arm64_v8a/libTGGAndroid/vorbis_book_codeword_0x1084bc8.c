// 函数: vorbis_book_codeword
// 地址: 0x1084bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x18) == 0)
    return -1

return zx.q(*(*(arg1 + 0x28) + (sx.q(arg2) << 2)))
