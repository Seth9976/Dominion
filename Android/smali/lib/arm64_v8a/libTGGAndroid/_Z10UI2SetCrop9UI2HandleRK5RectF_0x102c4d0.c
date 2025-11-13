// 函数: _Z10UI2SetCrop9UI2HandleRK5RectF
// 地址: 0x102c4d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg1.d) & 0xffff
int64_t x9 = *gUI2
void* i = x9 + mulu.dp.d(x10.d, 0x19a8)

if (*(i + 0x173c) != 0xffffffff)
label_102c510:
    *(x9 + x10 * 0x19a8 + 0x172c) = *arg2
    *(i + 0x173c) = 0xffffffff
    
    do
        *(i + 0x1378) = 2
        i = *(i + 0x17d0)
    while (i != 0)
    
    return 

int128_t v0
v0.d = *(x9 + x10 * 0x19a8 + 0x172c)

if (v0.d f!= *arg2)
    goto label_102c510

v0.d = *(x9 + x10 * 0x19a8 + 0x1730)

if (v0.d f!= *(arg2 + 4))
    goto label_102c510

v0.d = *(x9 + x10 * 0x19a8 + 0x1734)

if (v0.d f!= *(arg2 + 8))
    goto label_102c510

v0.d = *(x9 + x10 * 0x19a8 + 0x1738)

if (not(v0.d f== *(arg2 + 0xc)))
    goto label_102c510
