// 函数: vorbis_analysis_init
// 地址: 0x107f2ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = 1

if (sub_107f328(arg1, arg2, 1) == 0)
    int64_t* x21_1 = *(arg1 + 0x88)
    x21_1[0xe] = _vp_global_look(arg2)
    int64_t x0_3 = calloc(1, 0x118)
    *x21_1 = x0_3
    _ve_envelope_init(x0_3, arg2)
    vorbis_bitrate_init(arg2, &x21_1[0x12])
    x21 = 0
    *(arg1 + 0x60) = 3

return zx.q(x21)
