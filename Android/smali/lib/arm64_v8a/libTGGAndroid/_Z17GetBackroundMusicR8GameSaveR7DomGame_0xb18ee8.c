// 函数: _Z17GetBackroundMusicR8GameSaveR7DomGame
// 地址: 0xb18ee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(GetBackground(arg1, arg2) + 0x28)

if (x8 != 0)
    return *x8

uint64_t x8_1 = zx.q(*(arg1 + 0x34))
return *(&data_114f730)[zx.q(x8_1.d - ((x8_1 * 0xcccccccd) u>> 0x22).d * 5)]
