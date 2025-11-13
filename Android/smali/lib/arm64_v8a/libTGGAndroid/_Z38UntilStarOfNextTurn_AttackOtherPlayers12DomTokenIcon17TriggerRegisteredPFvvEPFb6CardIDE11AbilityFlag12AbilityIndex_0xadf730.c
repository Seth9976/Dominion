// 函数: _Z38UntilStarOfNextTurn_AttackOtherPlayers12DomTokenIcon17TriggerRegisteredPFvvEPFb6CardIDE11AbilityFlag12AbilityIndex
// 地址: 0xadf730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_60 = v8
int32_t x19 = arg6
int32_t x20 = arg5
int32_t x23 = arg2
int32_t x25 = arg1
int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
CardIs(*(DomGetContext() + 8), zx.q(x0[7]), 0x20)
DomGame* result = *(x0 + 8)
int32_t x8_1 = *(result + 0xd40)

if (x8_1 s>= 2)
    if (x25 == 0)
        int32_t x26_2 = 1
        
        do
            int32_t x25_1 = (x26_2 + x0[6]) s% x8_1
            
            if ((HasOngoing(result, zx.q(x25_1), 0, 0, 0) & 1) == 0)
                int64_t* x0_10 = AbilityAllocRegistered(*(x0 + 8))
                *(x0_10 + 0x14) = x0[6]
                x0_10[3].d = x25_1
                *(x0_10 + 0x1c) = *(x0 + 0x1c)
                *(x0_10 + 0x44) = *(x0 + 0x30)
                int32_t x8_9 = x0[0xe]
                *x0_10 = 0x200000002
                *(x0_10 + 0x4c) = 2
                x0_10[0xa].d = x23
                x0_10[0xb] = arg3
                x0_10[0xc] = arg4
                x0_10[0xe].d = x20
                x0_10[0x10] = 0
                *(x0_10 + 0x8c) = 0
                x0_10[5].d = x8_9
                *(x0_10 + 0x94) = x19
            
            result = *(x0 + 8)
            x26_2 += 1
            x8_1 = *(result + 0xd40)
        while (x26_2 s< x8_1)
    else
        int32_t x27_1 = 1
        
        do
            int32_t x26_1 = (x27_1 + x0[6]) s% x8_1
            
            if ((HasOngoing(result, zx.q(x26_1), 0, 0, 0) & 1) == 0)
                int64_t* x0_6 = AbilityAllocRegistered(*(x0 + 8))
                *(x0_6 + 0x14) = x0[6]
                x0_6[3].d = x26_1
                *(x0_6 + 0x1c) = *(x0 + 0x1c)
                *(x0_6 + 0x44) = *(x0 + 0x30)
                int32_t x8_5 = x0[0xe]
                *x0_6 = 0x200000002
                *(x0_6 + 0x4c) = 2
                x0_6[0xa].d = x23
                x0_6[0xb] = arg3
                x0_6[0xc] = arg4
                x0_6[0xe].d = x20
                x0_6[0x10] = 0
                *(x0_6 + 0x8c) = x25
                x0_6[0x12].d = 0
                x0_6[5].d = x8_5
                *(x0_6 + 0x94) = x19
                int64_t var_68_1 = 0
                int32_t var_70_1 = 0
                int32_t var_78_1 = 0
                int32_t var_80_1 = 0
                NotifyEffect(*(x0 + 8), 0x1b, zx.q(x26_1), 0x14, zx.q(x25), 0, 0, 0)
            
            result = *(x0 + 8)
            x27_1 += 1
            x8_1 = *(result + 0xd40)
        while (x27_1 s< x8_1)

return result
