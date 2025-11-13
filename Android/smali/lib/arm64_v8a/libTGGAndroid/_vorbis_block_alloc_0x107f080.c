// 函数: _vorbis_block_alloc
// 地址: 0x107f080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 0x70)
int64_t x22 = *(arg1 + 0x78)
size_t bytes = (arg2 + 7) & 0xfffffffffffffff8

if (x22 + bytes s> *(arg1 + 0x80))
    if (x21 != 0)
        int64_t* x0 = malloc(0x10)
        int64_t x9_2 = *(arg1 + 0x90)
        *(arg1 + 0x88) += x22
        *(arg1 + 0x90) = x0
        *x0 = x21
        x0[1] = x9_2
    
    *(arg1 + 0x80) = bytes
    int64_t x0_2 = malloc(bytes)
    x21 = x0_2
    x22 = 0
    *(arg1 + 0x70) = x0_2
    *(arg1 + 0x78) = 0

*(arg1 + 0x78) = x22 + bytes
return x21 + x22
