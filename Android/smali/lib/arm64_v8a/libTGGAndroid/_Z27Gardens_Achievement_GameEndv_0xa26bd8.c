// 函数: _Z27Gardens_Achievement_GameEndv
// 地址: 0xa26bd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = CountWhereWhat(0, 0x209, 0xffffffff)

if (result.d == 0)
    return result

int32_t var_38[0x6]
PlayerScores(*(DomGetContext() + 8), &var_38)
int64_t x8_1 = muls.dp.d(CountOwned(), 0x66666667)
int32_t x0_3 = CountWhereWhat(0, 0x209, 0xffffffff)
return zx.q(var_38[sx.q(CurrentWho())] s< (x0_3 * ((x8_1 s>> 0x22).d + (x8_1 u>> 0x3f).d)) << 1 ? 1
    : 0)
