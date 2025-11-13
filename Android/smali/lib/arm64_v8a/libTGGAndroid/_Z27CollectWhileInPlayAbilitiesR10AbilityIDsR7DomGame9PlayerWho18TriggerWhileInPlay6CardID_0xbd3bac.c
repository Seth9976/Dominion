// 函数: _Z27CollectWhileInPlayAbilitiesR10AbilityIDsR7DomGame9PlayerWho18TriggerWhileInPlay6CardID
// 地址: 0xbd3bac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x27 = *(arg2 + muls.dp.d(arg3, 0x5a30) + 0x17f6c)
int32_t x21 = arg3
int32_t x19 = arg5
int32_t x20 = arg4
int32_t x28 = (arg5 & 0xfff) << 6

if (x27 != 0)
    uint64_t x25_1 = zx.q(x27.w)
    
    if (x25_1.d u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    uint64_t x24_2 = zx.q(x27) | zx.q(*(arg2 + x25_1 * 0x68 + 0x1ac8)) << 0x20
    
    while (true)
        int32_t x8_10 = 0
        int32_t* x9_6 = *(arg2 + (x24_2 & 0xffffffff) * 0x68 + 0x1a68) + 0xec
        uint64_t x27_1
        
        while (true)
            int32_t x10_1 = x9_6[-3]
            
            if (x10_1 != 6)
                if (x10_1 == 0)
                    x27_1 = 0xffffffff
                    break
            else if (x9_6[-2] == 1 && *x9_6 == x20)
                x27_1 = (0x3ffff & zx.q(x28)) | zx.q((0x3fff & x27) << 0x12) | (zx.q(x8_10) & 0xf)
                    | 0x10
                break
            
            x8_10 += 1
            x9_6 = &x9_6[0x30]
        
        if ((TriggerAbilityTestValid(arg2, zx.q(x21), x27_1, zx.q(x19), 0, 0xffffffff, nullptr).d
                & 1) != 0)
            int64_t x8_13 = sx.q(*(arg1 + 0x400))
            *(arg1 + 0x400) = x8_13.d + 1
            *(arg1 + (x8_13 << 2)) = x27_1.d
        
        x27 = (x24_2 u>> 0x20).d
        
        if (x27 == 0)
            break
        
        int32_t x24_4 = x27 & 0xffff
        
        if (x24_4 u>= 0x320)
            void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_16 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
            *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_17 = *(x8_16 - 0x90)
            *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x24_2 = zx.q(x27) | zx.q(*(arg2 + mulu.dp.d(x24_4, 0x68) + 0x1ac8)) << 0x20

uint32_t x27_2 = *(arg2 + sx.q(x21) * 0x5a30 + 0x1810c)

if (x27_2 == 0)
    return 

uint64_t x25_2 = zx.q(x27_2.w)

if (x25_2.d u>= 0x320)
    void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_21 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
    *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_22 = *(x8_21 - 0x90)
    *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t x24_6 = zx.q(x27_2) | zx.q(*(arg2 + x25_2 * 0x68 + 0x1ac8)) << 0x20

while (true)
    int32_t x8_27 = 0
    int32_t* x9_18 = *(arg2 + (x24_6 & 0xffffffff) * 0x68 + 0x1a68) + 0xec
    uint64_t x27_3
    
    while (true)
        int32_t x10_4 = x9_18[-3]
        
        if (x10_4 != 6)
            if (x10_4 == 0)
                x27_3 = 0xffffffff
                break
        else if (x9_18[-2] == 1 && *x9_18 == x20)
            x27_3 =
                (0x3ffff & zx.q(x28)) | zx.q((0x3fff & x27_2) << 0x12) | (zx.q(x8_27) & 0xf) | 0x10
            break
        
        x8_27 += 1
        x9_18 = &x9_18[0x30]
    
    if ((TriggerAbilityTestValid(arg2, zx.q(x21), x27_3, zx.q(x19), 0, 0xffffffff, nullptr).d & 1)
            != 0)
        int64_t x8_30 = sx.q(*(arg1 + 0x400))
        *(arg1 + 0x400) = x8_30.d + 1
        *(arg1 + (x8_30 << 2)) = x27_3.d
    
    x27_2 = (x24_6 u>> 0x20).d
    
    if (x27_2 == 0)
        break
    
    int32_t x24_8 = x27_2 & 0xffff
    
    if (x24_8 u>= 0x320)
        void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_33 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
        *(*(x8_33 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_34 = *(x8_33 - 0x90)
        *(x8_34 + 0x1a2c) = *(x8_34 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x24_6 = zx.q(x27_2) | zx.q(*(arg2 + mulu.dp.d(x24_8, 0x68) + 0x1ac8)) << 0x20
