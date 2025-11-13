// 函数: _Z11SpendActionR7DomGame9PlayerWho
// 地址: 0xbc2680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2.d
int64_t result = CountOngoing(arg1, arg2, 0x32, 0, 0)
int64_t x8 = sx.q(x19)

if (result.d s>= 1)
    int32_t x10_1 = *(arg1 + x8 * 0x5a30 + 0x1819c)
    
    if (x10_1 != 0)
        int32_t x21_1
        
        if (x10_1 s>= 1)
            x21_1 = -1
        else
            x21_1 = neg.d(x10_1)
        
        *(arg1 + x8 * 0x5a30 + 0x1819c) = x21_1 + x10_1
        int32_t x8_2
        
        if (x21_1 + x10_1 s< 0)
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            result = XTrace("game thread resume (error)")
            x8_2 = *(arg1 + 0x150c)
            
            if (x8_2 - 3 u>= 4)
            label_bc2834:
                int64_t var_448_1 = 0
                int32_t var_450_1 = 0
                int32_t var_458_2 = 0
                int32_t var_460_2 = 0
                return DomNotifyEffect(zx.q(x8_2 == 2 ? 1 : 0), 0x10, zx.q(x19), 0, 2, zx.q(x21_1), 
                    1, 0)
        else
            x8_2 = *(arg1 + 0x150c)
            
            if (x8_2 - 3 u>= 4)
                goto label_bc2834
        return result

if (*(arg1 + x8 * 0x5a30 + 0x18198) != 0)
    return AddResource(arg1, zx.q(x19), 1, 0xffffffff, 0, 2) __tailcall

CollectOngoing(arg1, zx.q(x19), 0x34, 0)
AbilityIDs var_438

if (SumOngoingParam(arg1, &var_438) s>= 1)
    int32_t var_458_1 = 0
    int32_t var_460_1 = 0
    AddOngoing(arg1, zx.q(x19), 0x34, 0xffffffff, 1, 0, 0, 0xffffffff)
    return SpendBuy(arg1, zx.q(x19)) __tailcall

if (CountOngoing(arg1, zx.q(x19), 0x12, 0, 0) s>= 1)
    void* x0_14 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_13 = x0_14 + sx.q(*(x0_14 + 0x13000)) * 0x98
    *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_14 = *(x8_13 - 0x90)
    *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t var_458_3 = 0
int32_t var_460_3 = 0xffffffff
return AddTokens(arg1, zx.q(x19), 0xe00, 0xffffffff, 0x476, 0, 0, 0)
