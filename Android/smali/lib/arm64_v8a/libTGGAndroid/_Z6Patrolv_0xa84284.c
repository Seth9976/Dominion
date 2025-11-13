// 函数: _Z6Patrolv
// 地址: 0xa84284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(3, 0, 0, nullptr)
RevealDeck(4, 0x3ee, 0x7e579c)
void var_cb8
AchievementSignalResult(&var_cb8)
PauseUI(true)
int32_t var_38
int64_t x8 = sx.q(var_38)

if (x8.d != 0)
    int64_t i = 0
    
    do
        int32_t x19_1 = *(&var_cb8 + i)
        int32_t x0_4 = CardIs(zx.q(x19_1), 8)
        int32_t x0_6
        
        if ((x0_4 & 1) == 0)
            x0_6 = CardIs(zx.q(x19_1), 0x10)
        
        if ((x0_4 & 1) != 0 || (x0_6 & 1) != 0)
            MoveToHand(zx.q(x19_1), 0x3ee)
            operator-=(&var_cb8, zx.q(x19_1))
        
        i += 4
    while (x8 << 2 != i)

return ReturnToDeckAnyOrder(&var_cb8, 0x3ee, 0x18)
