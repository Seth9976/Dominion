// 函数: _Z8PlayFateR7DomGame9PlayerWho6CardIDi
// 地址: 0xbecac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_64 = arg3
void* x26 = *(arg1 + mulu.dp.d(arg3, 0x68) + 0x1a68)
int32_t x22 = arg3
int32_t x20 = arg2

if (*(x26 + 0xd0) == 0)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_6 = *(arg1 + 0x150c)

if (x8_6 - 3 u>= 4)
    int64_t var_78_1 = 0
    int32_t var_80_1 = 0
    int32_t var_88_1 = 0
    int32_t var_90_1 = 0
    DomNotifyEffect(zx.q(x8_6 == 2 ? 1 : 0), 0x16, 0xffffffff, zx.q(x22), 2, 1, 0, 0)

int32_t x22_1 = x22 & 0xffff

if (x22_1 u>= 0x320)
    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_9 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_10 = *(x8_9 - 0x90)
    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t var_70 = zx.q(x22) | zx.q(*(arg1 + mulu.dp.d(x22_1, 0x68) + 0x1a78)) << 0x20
DomPushContext(arg1, zx.q(x20), &var_70)

if (arg4 s>= 1)
    int32_t x25_1 = 0
    bool cond:1_1
    
    do
        if (arg4 != 1)
            int32_t x24_1 = var_64
            uint64_t x23_2 = zx.q(x24_1.w)
            
            if (x23_2.d u>= 0x320)
                void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_15 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_16 = *(x8_15 - 0x90)
                *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t x27_1 = *(arg1 + x23_2 * 0x68 + 0x1a78)
            int32_t x23_3 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)
            
            if (x23_3 s<= 0)
                void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_19 = x0_11 + muls.dp.d(x23_3 - 1, 0x98)
                *(*(x8_19 + 8) + 0x1a28) = 0xffffffff
                void* x8_20 = *(x8_19 + 8)
                *(x8_20 + 0x1a2c) = *(x8_20 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x23_3 = *(x0_11 + 0x13000)
            
            *(__emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x23_3, 0x98) - 0x68) =
                zx.q(x24_1) | zx.q(x27_1) << 0x20
        
        int32_t x8_23 = *(arg1 + 0x150c)
        
        if (x8_23 - 3 u>= 4)
            int64_t var_78_2 = 0
            int32_t var_80_2 = 0
            int32_t var_88_2 = 0
            int32_t var_90_2 = 0
            DomNotifyEffect(zx.q(x8_23 == 2 ? 1 : 0), 0x16, zx.q(x20), zx.q(var_64), 0, 
                zx.q(x25_1 + 1), zx.q(arg4), 0)
        
        int32_t x8_27 = (*(arg1 + 0x150c) - 3 u> 3 ? 1 : 0) & (zx.d(*(arg1 + 0x1508)) == 0 ? 1 : 0)
        
        if (x25_1 == 0)
            if (x8_27 != 0)
                uint64_t x2_3
                
                if (*(arg1 + 0x19d4) == x20)
                    x2_3 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_3 = zx.q(x20)
                
                int32_t var_80_4 = 0
                int32_t var_88_4 = 0
                int32_t var_90_4 = 0
                DomAddLogEvent(arg1, zx.q(x20), x2_3, 0x18, 0, &var_64, 1, 0)
            
            if (*(arg1 + 0x19d4) == x20)
                int32_t x8_31 = *(arg1 + 0x150c)
                
                if (x8_31 - 3 u>= 4)
                    int64_t var_78_3 = 0
                    int32_t var_80_5 = 0
                    int32_t var_88_5 = 0
                    int32_t var_90_5 = 0
                    DomNotifyEffect(zx.q(x8_31 == 2 ? 1 : 0), 0xb, zx.q(x20), zx.q(var_64), 0, 0, 
                        0, 0)
        else if (x8_27 != 0)
            uint64_t x2_2
            
            if (*(arg1 + 0x19d4) == x20)
                x2_2 = zx.q(*(arg1 + 0x19d8))
            else
                x2_2 = zx.q(x20)
            
            int32_t var_80_3 = 0
            int32_t var_88_3 = 0
            int32_t var_90_3 = 0
            DomAddLogEvent(arg1, zx.q(x20), x2_2, 0x19, 0, &var_64, 1, 0)
        
        if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            uint64_t x2_5
            
            if (*(arg1 + 0x19d4) == x20)
                x2_5 = zx.q(*(arg1 + 0x19d8))
            else
                x2_5 = zx.q(x20)
            
            int32_t var_80_6 = 0
            int32_t var_88_6 = 0
            int32_t var_90_6 = 0
            DomAddLogEvent(arg1, zx.q(x20), x2_5, 0x1f, 0, nullptr, 0, 0)
        
        (*(x26 + 0xd0))()
        
        if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            uint64_t x2_6
            
            if (*(arg1 + 0x19d4) == x20)
                x2_6 = zx.q(*(arg1 + 0x19d8))
            else
                x2_6 = zx.q(x20)
            
            int32_t var_80_7 = 0
            int32_t var_88_7 = 0
            int32_t var_90_7 = 0
            DomAddLogEvent(arg1, zx.q(x20), x2_6, 0x20, 0, nullptr, 0, 0)
        
        InvalidateSubmittedActions()
        cond:1_1 = arg4 == x25_1 + 1
        x25_1 += 1
    while (not(cond:1_1))

int32_t x8_41 = *(arg1 + 0x150c)
void* result

if (x8_41 - 3 u> 3)
    int64_t var_78_4 = 0
    int32_t var_80_8 = 0
    int32_t var_88_8 = 0
    int32_t var_90_8 = 0
    DomNotifyEffect(zx.q(x8_41 == 2 ? 1 : 0), 0x16, zx.q(x20), zx.q(var_64), 0, 0, 0, 0)
    int32_t x19_1 = *(arg1 + 0x150c)
    result = __emutls_get_address(__emutls_v.gContextStack_tl)
    *(result + 0x13000) -= 1
    
    if (x19_1 - 3 u>= 4)
        int64_t var_78_5 = 0
        int32_t var_80_9 = 0
        int32_t var_88_9 = 0
        int32_t var_90_9 = 0
        return DomNotifyEffect(zx.q(x19_1 == 2 ? 1 : 0), 0x16, 0xffffffff, zx.q(var_64), 2, 0, 0, 0)
else
    result = __emutls_get_address(__emutls_v.gContextStack_tl)
    *(result + 0x13000) -= 1

return result
