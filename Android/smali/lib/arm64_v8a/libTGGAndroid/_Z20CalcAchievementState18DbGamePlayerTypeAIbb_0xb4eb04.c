// 函数: _Z20CalcAchievementState18DbGamePlayerTypeAIbb
// 地址: 0xb4eb04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1 + 1)
int32_t x8_1
int32_t x9_1
bool cond:2_1

if ((arg3.d & 1) == 0)
    if (x8.d u> 4)
        pthread_kill(pthread_self(), 6)
        return GetActiveAchievementState(XNoReturn()) __tailcall
    
    switch (x8)
        case 0
            cond:2_1 = (arg2.d & 1) != 0
            x8_1 = 0xa
            x9_1 = 0x19
        case 1
            return 0x10
        case 2
            return 0x11
        case 3
            return 0x12
        case 4
            return 0xf
else
    if (x8.d u> 4)
        pthread_kill(pthread_self(), 6)
        return GetActiveAchievementState(XNoReturn()) __tailcall
    
    switch (x8)
        case 0
            cond:2_1 = (arg2.d & 1) != 0
            x8_1 = 0x1e
            x9_1 = 0x2d
        case 1
            return 0x24
        case 2
            return 0x25
        case 3
            return 0x26
        case 4
            return 0x23

if (cond:2_1)
    return zx.q(x9_1)

return zx.q(x8_1)
