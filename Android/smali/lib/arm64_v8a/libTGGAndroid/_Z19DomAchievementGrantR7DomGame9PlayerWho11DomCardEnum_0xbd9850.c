// 函数: _Z19DomAchievementGrantR7DomGame9PlayerWho11DomCardEnum
// 地址: 0xbd9850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0x60808))
int32_t x19 = arg3
int32_t x20 = arg2
int64_t x22_1

if (x9.d s< 1)
label_bd98bc:
    x22_1 = sx.q(x9.d)
    *(arg1 + 0x60808) = x9.d + 1
    *(arg1 + muls.dp.d(x9.d, 0x31c) + 0x47a08) = x19
else
    x22_1 = 0
    void* __offset(DomGame, 0x47a08) x10_1 = arg1 + 0x47a08
    
    while (true)
        int32_t x11_1 = *x10_1
        
        if (x11_1 == 0)
            goto label_bd98bc
        
        if (x11_1 == x19)
            break
        
        x22_1 += 1
        x10_1 += 0x31c
        
        if (x9 == x22_1)
            goto label_bd98bc

if (zx.d(*(arg1 + x22_1 * 0x31c + muls.dp.d(x20, 0x84) + 0x47a0c)) != 0)
    return 

*(arg1 + x22_1 * 0x31c + muls.dp.d(x20, 0x84) + 0x47a0c) = 1

if ((IsEndOfGameAchievement(zx.q(*(arg1 + 0xd50)), zx.q(x19)).d & 1) != 0 || (
        (IsEndOfTurnAchievement(zx.q(*(arg1 + 0xd50)), zx.q(x19)).d & 1) != 0
        && zx.d(*(arg1 + 0x1a0c)) != 0))
    return 

*(arg1 + x22_1 * 0x31c + sx.q(x20) * 0x84 + 0x47a0d) = 1
int32_t x8_9 = *(arg1 + 0x150c)

if (x8_9 - 3 u< 4)
    return 

int64_t var_38_1 = 0
int32_t var_40_1 = 0
int32_t var_48_1 = 0
int32_t var_50_1 = 0
DomNotifyEffect(zx.q(x8_9 == 2 ? 1 : 0), 0x26, zx.q(x20), zx.q(x19), 0, 1, 0, 0)
