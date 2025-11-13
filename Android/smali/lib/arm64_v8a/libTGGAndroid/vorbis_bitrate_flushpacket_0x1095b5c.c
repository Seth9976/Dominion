// 函数: vorbis_bitrate_flushpacket
// 地址: 0x1095b5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *(arg1 + 0x88)
void* x21 = *(x20 + 0xd0)

if (x21 == 0)
    return 0

if (arg2 != 0)
    int64_t x9_2
    
    if (*(*(*(x21 + 0x68) + 0x88) + 0x90) == 0)
        x9_2 = 7
    else
        x9_2 = sx.q(*(x20 + 0xd8))
    
    void* x22_1 = *(x21 + 0xb8) + (x9_2 << 3)
    *(x22_1 + 0x10)
    *arg2 = oggpack_get_buffer()
    int64_t x0_4
    int128_t v0_1
    x0_4, v0_1 = oggpack_bytes(*(x22_1 + 0x10))
    arg2[1] = x0_4
    arg2[2] = 0
    arg2[3] = sx.q(*(x21 + 0x50))
    *(arg2 + 0x20) = *(x21 + 0x58)

*(x20 + 0xd0) = 0
return 1
