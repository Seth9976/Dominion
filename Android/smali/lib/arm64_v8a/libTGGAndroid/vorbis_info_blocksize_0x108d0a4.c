// 函数: vorbis_info_blocksize
// 地址: 0x108d0a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x30)

if (x8 == 0)
    return 0xffffffff

return *(x8 + (sx.q(arg2) << 3))
