// 函数: _Z20GameGetTimeRemainingR8GameSave9PlayerWhoRi
// 地址: 0x9b557c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(GameSave, 0x78) entry_x22
void* __offset(GameSave, 0x78) var_20 = entry_x22

if (*(GetClient() + 0x5068) != 2 || *(arg1 + 0x28) == 3)
    return 0

uint64_t x8_2 = zx.q(*(arg1 + 0x11b4))

if (x8_2.d s< 1)
label_9b55f8:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
else
    entry_x22 = arg1 + 0x78
    
    while (*(entry_x22 - 8) != arg2)
        uint64_t temp0_1 = x8_2
        x8_2 -= 1
        entry_x22 += 0x22c
        
        if (temp0_1 == 1)
            goto label_9b55f8

int32_t x8_6

if (*(entry_x22 - 4) != 4)
    x8_6 = 0
else
    int64_t x8_4 = muls.dp.d(TimerStop(arg1 + 8), 0xef9db22d)
    x8_6 = (x8_4 s>> 0x26).d + (x8_4 u>> 0x3f).d

*arg3 = *entry_x22 + x8_6
return zx.q(*(entry_x22 - 4) == 4 ? 1 : 0) | zx.q(*(arg1 + 0x28) != 5 ? 1 : 0)
