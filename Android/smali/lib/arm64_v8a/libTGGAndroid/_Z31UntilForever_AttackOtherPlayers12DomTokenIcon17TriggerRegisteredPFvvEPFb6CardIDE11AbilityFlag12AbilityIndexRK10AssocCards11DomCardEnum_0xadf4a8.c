// 函数: _Z31UntilForever_AttackOtherPlayers12DomTokenIcon17TriggerRegisteredPFvvEPFb6CardIDE11AbilityFlag12AbilityIndexRK10AssocCards11DomCardEnum
// 地址: 0xadf4a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t x19 = arg8
int32_t var_78 = arg5
int32_t var_74 = arg6
int32_t x25 = arg2
int32_t x28 = arg1
int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
CardIs(*(DomGetContext() + 8), zx.q(x0[7]), 0x20)
DomGame* x0_4 = *(x0 + 8)
int32_t x8_1 = *(x0_4 + 0xd40)
int32_t x27_1

if (x8_1 s< 2)
    x27_1 = -1
else if (x28 == 0)
    int32_t x20_2 = 1
    x27_1 = -1
    
    do
        int32_t x28_1 = (x20_2 + x0[6]) s% x8_1
        
        if ((HasOngoing(x0_4, zx.q(x28_1), 0, 0, 0) & 1) == 0)
            int64_t* x0_13 = AbilityAllocRegistered(*(x0 + 8))
            int32_t x9_8 = *(x0_13 + 0x2c)
            *(x0_13 + 0x14) = x0[6]
            x0_13[3].d = x28_1
            
            if (x27_1 == 0xffffffff)
                x27_1 = x9_8
            
            *(x0_13 + 0x1c) = *(x0 + 0x1c)
            *(x0_13 + 0x44) = *(x0 + 0x30)
            int32_t x8_10 = x0[0xe]
            x0_13[0xb] = arg3
            x0_13[0xc] = arg4
            *x0_13 = 0x200000000
            x0_13[5].d = x8_10
            *(x0_13 + 0x4c) = 2
            x0_13[0xa].d = x25
            x0_13[0xe].d = var_78
            *(x0_13 + 0x84) = 0
            x0_13[0x10].d = 0
            *(x0_13 + 0x8c) = 0
            x0_13[0x12].d = x19
            *(x0_13 + 0x94) = var_74
            x0_13[8].d = x27_1
            ToAssociatedCards(*(x0 + 8), &x0_13[0x10], x0_13 + 0x84, &x0_13[0x11], arg7)
        
        x0_4 = *(x0 + 8)
        x20_2 += 1
        x8_1 = *(x0_4 + 0xd40)
    while (x20_2 s< x8_1)
else
    int32_t x23_1 = 1
    x27_1 = -1
    
    do
        int32_t fp_1 = (x23_1 + x0[6]) s% x8_1
        
        if ((HasOngoing(x0_4, zx.q(fp_1), 0, 0, 0) & 1) == 0)
            int64_t* x0_7 = AbilityAllocRegistered(*(x0 + 8))
            int32_t x9_3 = *(x0_7 + 0x2c)
            *(x0_7 + 0x14) = x0[6]
            x0_7[3].d = fp_1
            
            if (x27_1 == 0xffffffff)
                x27_1 = x9_3
            
            *(x0_7 + 0x1c) = *(x0 + 0x1c)
            *(x0_7 + 0x44) = *(x0 + 0x30)
            int32_t x8_5 = x0[0xe]
            *(x0_7 + 0x4c) = 2
            x0_7[0xa].d = x25
            *x0_7 = 0x200000000
            x0_7[5].d = x8_5
            x0_7[0xb] = arg3
            x0_7[0xc] = arg4
            x0_7[0xe].d = var_78
            *(x0_7 + 0x84) = 0
            x0_7[0x10].d = 0
            *(x0_7 + 0x8c) = x28
            x0_7[0x12].d = x19
            *(x0_7 + 0x94) = var_74
            x0_7[8].d = x27_1
            int64_t var_88_1 = 0
            int32_t var_90_1 = 0
            int32_t var_98_1 = 0
            int32_t var_a0_1 = 0
            NotifyEffect(*(x0 + 8), 0x1b, zx.q(fp_1), 0x14, zx.q(x28), zx.q(x19), 0, 0)
            ToAssociatedCards(*(x0 + 8), &x0_7[0x10], x0_7 + 0x84, &x0_7[0x11], arg7)
        
        x0_4 = *(x0 + 8)
        x23_1 += 1
        x8_1 = *(x0_4 + 0xd40)
    while (x23_1 s< x8_1)

return zx.q(x27_1)
