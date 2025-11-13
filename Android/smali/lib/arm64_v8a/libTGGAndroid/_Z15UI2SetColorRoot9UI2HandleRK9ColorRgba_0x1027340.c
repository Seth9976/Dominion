// 函数: _Z15UI2SetColorRoot9UI2HandleRK9ColorRgba
// 地址: 0x1027340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg1.d) & 0xffff
int64_t x9 = *gUI2
void* i = x9 + mulu.dp.d(x10.d, 0x19a8)
int128_t v0
v0.d = *(i + 0x1704)

if (v0.d f!= *arg2)
label_10273bc:
    *(i + 0x1704) = *arg2
    
    do
        *(i + 0x1378) = 2
        i = *(i + 0x17d0)
    while (i != 0)
    
    return 

v0.d = *(x9 + x10 * 0x19a8 + 0x1708)

if (v0.d f!= *(arg2 + 4))
    goto label_10273bc

v0.d = *(x9 + x10 * 0x19a8 + 0x170c)

if (v0.d f!= *(arg2 + 8))
    goto label_10273bc

v0.d = *(x9 + x10 * 0x19a8 + 0x1710)

if (not(v0.d f== *(arg2 + 0xc)))
    goto label_10273bc
