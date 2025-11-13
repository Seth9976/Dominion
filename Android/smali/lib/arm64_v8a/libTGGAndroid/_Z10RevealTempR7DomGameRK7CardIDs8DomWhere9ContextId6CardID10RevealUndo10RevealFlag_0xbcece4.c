// 函数: _Z10RevealTempR7DomGameRK7CardIDs8DomWhere9ContextId6CardID10RevealUndo10RevealFlag
// 地址: 0xbcece4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg2 + 0xc80))

if (x8.d == 0)
    return 

uint64_t x21_1 = zx.q(*arg2)
int32_t x23_1 = arg6

if (x21_1.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x8 = zx.q(*(arg2 + 0xc80))

int32_t x9_4 = *(arg1 + x21_1 * 0x68 + 0x1a94)
int32_t x10_1

x10_1 = arg3 == 0x3ea ? 2 : 1

uint64_t x7_1

if (x23_1 == 0)
    x7_1 = zx.q(x10_1)
else
    x7_1 = zx.q(x23_1)

int64_t var_e0

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x1 = zx.q(x9_4)
    uint64_t x2
    
    if (*(arg1 + 0x19d4) == x1.d)
        x2 = zx.q(*(arg1 + 0x19d8))
    else
        x2 = zx.q(x1.d)
    
    int32_t var_d0_1 = 0
    int32_t var_d8_1 = 0
    var_e0.d = 0
    DomAddLogEvent(arg1, x1, x2, 0x2d, 0, arg2, zx.q(x8.d), x7_1)
    x8 = zx.q(*(arg2 + 0xc80))

if (x8.d s>= 1)
    int64_t x23_2 = 0
    
    do
        int32_t x9_8 = *(arg1 + 0x150c)
        
        if (x9_8 - 3 u>= 4)
            int64_t var_c8_1 = 0
            int32_t var_d0_2 = 0
            int32_t var_d8_2 = 0
            var_e0.d = 0
            DomNotifyEffect(zx.q(x9_8 == 2 ? 1 : 0), 0xd, zx.q(x9_4), zx.q(*(arg2 + (x23_2 << 2))), 
                zx.q(x23_2.d), zx.q(x8.d), zx.q(arg7), 0)
        
        if (*(arg1 + 0xd40) s>= 1)
            int64_t i = 0
            
            do
                int32_t x28_1 = *(arg2 + (x23_2 << 2))
                uint64_t x22_2 = zx.q(x28_1.w)
                
                if (x22_2.d u>= 0x320)
                    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_9 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_10 = *(x8_9 - 0x90)
                    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                *(arg1 + 0x1aa8 + x22_2 * 0x68 + (i << 2)) = 6
                int32_t x8_12 = *(arg1 + 0x150c)
                
                if (x8_12 - 3 u>= 4)
                    int64_t var_c8_2 = 0
                    int32_t var_d0_3 = 0
                    int32_t var_d8_3 = 0
                    var_e0.d = 0
                    DomNotifyEffect(zx.q(x8_12 == 2 ? 1 : 0), 0x28, zx.q(i.d), zx.q(x28_1), 6, 0, 
                        0, 0)
                
                i += 1
            while (i s< sx.q(*(arg1 + 0xd40)))
        
        x8 = sx.q(*(arg2 + 0xc80))
        x23_2 += 1
    while (x23_2 s< x8)

int128_t var_b0
__builtin_memset(&var_b0, 0, 0x48)
int32_t var_64 = 0xb
int64_t var_e0_1 = 0
TriggerEvents(arg1, zx.q(x9_4), &var_64, 1, &var_b0, 0, arg2, zx.q(x8.d))
