// 函数: _Z8SpendBuyR7DomGame9PlayerWho
// 地址: 0xbc2ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x1819c)
int32_t x19 = arg2

if (x9 == 0)
    if (CountOngoing(arg1, zx.q(x19), 0x31, 0, 0) s< 1)
        CollectOngoing(arg1, zx.q(x19), 0x34, 0)
        AbilityIDs var_438
        
        if (SumOngoingParam(arg1, &var_438) s< 1)
            pthread_kill(pthread_self(), 6)
            DomGame* x0_12
            int64_t x1_6
            CardID* x2_3
            x0_12, x1_6, x2_3 = XNoReturn()
            return CardsHand(x0_12, x1_6, x2_3) __tailcall
        
        int32_t var_458_2 = 0
        int32_t var_460_2 = 0
        AddOngoing(arg1, zx.q(x19), 0x34, 0xffffffff, 1, 0, 0, 0xffffffff)
    
    return SpendAction(arg1, zx.q(x19)) __tailcall

int32_t x21

if (x9 s>= 1)
    x21 = -1
else
    x21 = neg.d(x9)

*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x1819c) = x21 + x9
int32_t x8_2

if (x21 + x9 s>= 0)
    x8_2 = *(arg1 + 0x150c)
    
    if (x8_2 - 3 u>= 4)
        goto label_bc2b30
    
    return 

void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
void* x8_6 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
*(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
void* x8_7 = *(x8_6 - 0x90)
*(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
XTrace("game thread yield (error)")
xco_yield()
XTrace("game thread resume (error)")
x8_2 = *(arg1 + 0x150c)

if (x8_2 - 3 u< 4)
    return 

label_bc2b30:
int64_t var_448_1 = 0
int32_t var_450_1 = 0
int32_t var_458_1 = 0
int32_t var_460_1 = 0
DomNotifyEffect(zx.q(x8_2 == 2 ? 1 : 0), 0x10, zx.q(x19), 0, 2, zx.q(x21), 1, 0)
