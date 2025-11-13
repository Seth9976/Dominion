// 函数: vorbis_synthesis_init
// 地址: 0x10804e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (sub_107f328(arg1, arg2, 0) != 0)
    vorbis_dsp_clear(arg1)
    return 1

void* x9_1 = *(arg1 + 8)

if (x9_1 != 0)
    void* x8_1 = *(arg1 + 0x88)
    
    if (x8_1 == 0)
        return 0
    
    void* x9_2 = *(x9_1 + 0x30)
    
    if (x9_2 != 0)
        uint64_t x10_1 = zx.q(*(x9_2 + 0x1690))
        int64_t x9_4 = *(x9_2 + 8) s>> zx.q(x10_1.d + 1)
        arg1[0xc] = 0
        *(arg1 + 0x58) = -1
        *(arg1 + 0x60) = -1
        *(arg1 + 0x50) = x9_4
        arg1[9] = (x9_4 s>> x10_1).d
        arg1[0xa] = 0xffffffff
        *(x8_1 + 0xe0) = -1

return 0
