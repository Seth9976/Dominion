// 函数: _Z18StateMachineUpdateR12StateMachine
// 地址: 0xb1e85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 == 0)
    return 0

int64_t x0 = Now()
int64_t x8_1 = *arg1
int64_t x9 = sx.q(*(arg1 + 8))

if (*(x8_1 + x9 * 0x18 + 8) s> x0 - *(arg1 + 0x10))
    return 1

int64_t x22_1

for (int32_t i = *(x8_1 + x9 * 0x18 + 4); i != 0xffffffff; i = *(x22_1 + sx.q(i) * 0x18 + 4))
    int64_t x0_3 = Now()
    x22_1 = *arg1
    *(arg1 + 0x10) = x0_3
    *(arg1 + 8) = i
    void* x23_1 = x22_1 + muls.dp.d(i, 0x18)
    (*(x23_1 + 0x10))()
    
    if (*(x23_1 + 8) != 0)
        return 1

*arg1 = 0
return 0
