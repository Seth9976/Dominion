// 函数: _Z21CollectTokenAbilitiesR10AbilityIDsR7DomGame9PlayerWho12TriggerToken6CardID
// 地址: 0xbd4ab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = arg5 & 0xffff

if (x24 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t i_2 = *(arg2 + mulu.dp.d(x24, 0x68) + 0x1a70)
int64_t result = PileSource(arg2, zx.q(i_2))
int64_t x9_3 = -0x410

while (true)
    void* x10_1 = arg2 + x9_3
    int32_t i = *(x10_1 + 0x19ac)
    
    if (i == i_2)
        i = i_2
    else if (i != result.d && *(x10_1 + 0x19b0) != i_2)
        int64_t temp0_1 = x9_3
        x9_3 += 0x10
        
        if (temp0_1 != -0x10)
            continue
        
        goto label_bd4bb8
    
    int32_t x25
    
    if (i == 0)
    label_bd4bb8:
        x25 = 0
        
        if (*(arg2 + 0x19ac) s< 1)
            break
    else
        void* __offset(DomGame, 0x15a0) x10_3 = arg2 + 0x15a0
        int64_t x9_4 = -0x41
        
        while (*(x10_3 - 4) != i)
            if (*x10_3 == i)
                break
            
            int64_t temp1_1 = x9_4
            x9_4 += 1
            x10_3 += 0x10
            
            if (temp1_1 u>= -1)
                goto label_bd4bb8
        
        x25 = x9_4.d + 0x48
        
        if (*(arg2 + 0x19ac) s< 1)
            break
    
    int64_t i_1 = 0
    void* __offset(DomGame, 0x15f6c) x26_1 = arg2 + 0x15f6c
    
    do
        int32_t x8_9 = *x26_1
        
        if ((x8_9 == 0xffffffff || x8_9 == arg3) && *(x26_1 + 4) == x25 && *(x26_1 + 0x10) != 0)
            result = TokenHasAbility(arg2, zx.q(i_1.d), zx.q(arg4), zx.q(arg5))
            
            if (result.d != 0xffffffff)
                int64_t x8_12 = sx.q(*(arg1 + 0x400))
                *(arg1 + 0x400) = x8_12.d + 1
                *(arg1 + (x8_12 << 2)) = result.d
        
        i_1 += 1
        x26_1 += 0x20
    while (i_1 s< sx.q(*(arg2 + 0x19ac)))
    
    break

return result
