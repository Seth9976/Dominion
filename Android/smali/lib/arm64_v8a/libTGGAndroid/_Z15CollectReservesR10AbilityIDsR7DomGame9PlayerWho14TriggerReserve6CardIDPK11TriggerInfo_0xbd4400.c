// 函数: _Z15CollectReservesR10AbilityIDsR7DomGame9PlayerWho14TriggerReserve6CardIDPK11TriggerInfo
// 地址: 0xbd4400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x28 = *(arg2 + muls.dp.d(arg3, 0x5a30) + 0x1814c)

if (x28 == 0)
    return 

uint64_t x25_1 = zx.q(x28.w)
int32_t x20_1 = arg5

if (x25_1.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t x27_2 = zx.q(x28) | zx.q(*(arg2 + x25_1 * 0x68 + 0x1ac8)) << 0x20

while (true)
    int32_t i_2 = 0
    int32_t x8_10 = 0
    int32_t* x10_2 = *(arg2 + (x27_2 & 0xffffffff) * 0x68 + 0x1a68) + 0xec
    int32_t var_468[0x100]
    
    while (true)
        int32_t x11_1 = x10_2[-3]
        
        if (x11_1 != 6)
            if (x11_1 == 0)
                break
        else if (x10_2[-2] == 5 && *x10_2 == arg4)
            int64_t i_3 = sx.q(i_2)
            i_2 = i_3.d + 1
            var_468[i_3] =
                (0x3ffff & (x20_1 & 0xfff) << 6) | (0x3fff & x28) << 0x12 | (x8_10 & 0xf) | 0x10
        
        x8_10 += 1
        x10_2 = &x10_2[0x30]
    
    uint64_t i_1 = zx.q(i_2)
    
    if (i_1.d s>= 1)
        int32_t (* x25_2)[0x100] = &var_468
        uint64_t i
        
        do
            uint64_t x28_1 = zx.q(*x25_2)
            
            if ((TriggerAbilityTestValid(arg2, zx.q(arg3), x28_1, zx.q(x20_1), 0, 0xffffffff, arg6)
                    .d & 1) != 0)
                int64_t x8_11 = sx.q(*(arg1 + 0x400))
                *(arg1 + 0x400) = x8_11.d + 1
                *(arg1 + (x8_11 << 2)) = x28_1.d
            
            i = i_1
            i_1 -= 1
            x25_2 = &(*x25_2)[1]
        while (i != 1)
    
    x28 = (x27_2 u>> 0x20).d
    
    if (x28 == 0)
        break
    
    int32_t x25_3 = x28 & 0xffff
    
    if (x25_3 u>= 0x320)
        void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_14 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
        *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_15 = *(x8_14 - 0x90)
        *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x27_2 = zx.q(x28) | zx.q(*(arg2 + mulu.dp.d(x25_3, 0x68) + 0x1ac8)) << 0x20
