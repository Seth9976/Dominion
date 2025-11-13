// 函数: _Z33MiningVillage_Achievement_OnTrashPK6CardIDi
// 地址: 0xa84c5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardIs(zx.q(*arg1), 0x30e) & 1) == 0)
    return 0

int32_t* x0_2 = DomAchievementDataGet()
int32_t x8_1 = *(*(DomGetContext() + 8) + 0x19ec)

if (x8_1 == *x0_2)
    uint64_t result = zx.q(zx.d(x0_2[1].b) != 0 ? 1 : 0)
    *(x0_2 + 5) = 1
    return result

*x0_2 = 0
*x0_2 = x8_1
*(x0_2 + 5) = 1
return 0
