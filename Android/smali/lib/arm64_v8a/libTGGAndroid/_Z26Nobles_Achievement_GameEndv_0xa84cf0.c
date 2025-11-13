// 函数: _Z26Nobles_Achievement_GameEndv
// 地址: 0xa84cf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = CountWhereWhat(0, 0x319, 0xffffffff)

if (result.d == 0)
    return result

int32_t var_38[0x6]
PlayerScores(*(DomGetContext() + 8), &var_38)
int32_t x0_2 = CountWhereWhat(0, 0x319, 0xffffffff)
return zx.q(var_38[sx.q(CurrentWho())] s< x0_2 << 2 ? 1 : 0)
