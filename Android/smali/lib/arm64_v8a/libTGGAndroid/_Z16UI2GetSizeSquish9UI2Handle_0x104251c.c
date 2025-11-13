// 函数: _Z16UI2GetSizeSquish9UI2Handle
// 地址: 0x104251c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *gUI2 + mulu.dp.d(arg1.d & 0xffff, 0x19a8)
int128_t v0
v0.q = *(x8_1 + 0x175c)
int128_t v1
v1.q = *(x8_1 + 0x16e4)
int128_t v2
v2.q = *(x8_1 + 0x16ec)
v1.d = vadd_f32(vsub_f32(v0, v1), v2):4.d
