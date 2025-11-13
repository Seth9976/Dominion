// 函数: _Z15UI2SetTransform9UI2HandleRK9Transform
// 地址: 0x10272c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1)
int64_t x9 = *gUI2
void* x10 = x9 + mulu.dp.d(x8.d, 0x19a8)
int64_t result = *(x10 + 0x16c8)
int64_t x11_3 = (*(x10 + 0x16b0) ^ *arg2) | (*(x10 + 0x16b8) ^ *(arg2 + 8))
    | (*(x10 + 0x16c0) ^ *(arg2 + 0x10)) | (result ^ *(arg2 + 0x18))

if (x11_3 != 0)
    int128_t v1 = *(arg2 + 0x10)
    void* i = x9 + x8 * 0x19a8
    *(x10 + 0x16b0) = *arg2
    *(x10 + 0x16c0) = v1
    
    do
        *(i + 0x1378) = 2
        i = *(i + 0x17d0)
    while (i != 0)

return result
