// 函数: _Z24DomLogGetCurrentDecisionv
// 地址: 0xc101b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(gLog + 0x10))

if (x9.d != 0)
    uint64_t x9_2 = zx.q(*(*(gLog + 8) + (x9 << 6) - 0x10))
    
    if ((x9_2.d & 0x80000000) == 0)
        return zx.q(*(*(gLog + 0x18) + (x9_2 << 4) + 4))

return 0xffffffff
