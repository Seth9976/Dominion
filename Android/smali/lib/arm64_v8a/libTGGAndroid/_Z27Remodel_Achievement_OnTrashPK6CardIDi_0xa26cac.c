// 函数: _Z27Remodel_Achievement_OnTrashPK6CardIDi
// 地址: 0xa26cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomAchievementDataGet()

if ((CardIs(zx.q(*arg1), 0x103) & 1) != 0 && *(x0 + 0x20) s<= 3)
    void* x8_2 = *(DomGetContext() + 0x10)
    int64_t x9_1 = sx.q(*(x0 + 0x20))
    int64_t x8_3 = *(x8_2 + 0x40)
    *(x0 + 0x20) = x9_1.d + 1
    *(x0 + (x9_1 << 3)) = x8_3

return 0
