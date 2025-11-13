// 函数: _Z26CollectPossessionAbilitiesR10AbilityIDsR7DomGame9PlayerWho17TriggerPossession6CardID
// 地址: 0xbd3968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x19d4) == *(arg2 + 0x19d8))
    return 

int32_t i = *(arg2 + 0xd50)
int32_t x8_2 = (0x50c | (0xffff & i) << 0x10) s% 0x3e5
int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_2) << 3))
int32_t x19_1 = arg5
AbilityIDs& x23_1 = arg1
AbilityIDs& x24_1

if (x9_5 != 0)
    while (*x9_5 != 0x50c || x9_5[1] != i)
        x9_5 = *(x9_5 + 0x10)
        
        if (x9_5 == 0)
            goto label_bd3a10
    
    x24_1 = *(x9_5 + 8)
else
label_bd3a10:
    DomDefGetSlow(0x50c, zx.q(i))
    int32_t* x0 = malloc(0x18)
    int64_t x8_3 = sx.q(x8_2) << 3
    int64_t x9_6 = *(&data_1838a20 + x8_3)
    *x0 = 0x50c
    x0[1] = i
    *(&data_1838a20 + x8_3) = x0
    *(x0 + 0x10) = x9_6
    arg1 = DomDefGetSlow(0x50c, zx.q(i))
    x24_1 = arg1
    *(x0 + 8) = arg1

int64_t x26_1 = 0

while (true)
    int32_t x8_5 = *(x24_1 + x26_1 * 0xc0 + 0xe0)
    
    if (x8_5 != 6)
        if (x8_5 == 0)
            break
    else if (*(x24_1 + x26_1 * 0xc0 + 0xe4) == 8 && *(x24_1 + x26_1 * 0xc0 + 0xec) == arg4)
        uint64_t x9_7 = zx.q(*(arg2 + 0x1528))
        
        if (x9_7.d s< 1)
        label_bd3b40:
            pthread_kill(pthread_self(), 6)
            DomGame* x0_3
            int64_t x1_3
            int64_t x2_1
            int64_t x3_1
            x0_3, x1_3, x2_1, x3_1 = XNoReturn()
            return CardHasWhileInPlay(x0_3, x1_3, x2_1, x3_1) __tailcall
        
        int64_t x8_10 = 0
        int64_t x10_3 = 0x1a70
        
        while (*(arg2 + x10_3) != 0x50c)
            x8_10 += 0x40000
            x10_3 += 0x68
            
            if (x9_7 << 0x12 == x8_10)
                goto label_bd3b40
        
        uint64_t x25_2 = zx.q((x19_1 & 0xfff) << 6) | (zx.q(x26_1.d) & 0xf) | zx.q(x8_10.d) | 0x10
        
        if ((TriggerAbilityTestValid(arg2, zx.q(arg3), x25_2, zx.q(x19_1), 0, 0xffffffff, nullptr).d
                & 1) != 0)
            int64_t x8_12 = sx.q(*(x23_1 + 0x400))
            *(x23_1 + 0x400) = x8_12.d + 1
            *(x23_1 + (x8_12 << 2)) = x25_2.d
    
    x26_1 += 1
