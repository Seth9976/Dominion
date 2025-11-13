// 函数: ov_halfrate_p
// 地址: 0x107b3ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_2 = *(arg1 + 0x68)

if (x0_2 == 0)
    return 0xffffff7d

return vorbis_synthesis_halfrate_p(x0_2) __tailcall
