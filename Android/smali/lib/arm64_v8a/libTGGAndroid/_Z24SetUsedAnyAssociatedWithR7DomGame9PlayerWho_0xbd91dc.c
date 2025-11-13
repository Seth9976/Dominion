// 函数: _Z24SetUsedAnyAssociatedWithR7DomGame9PlayerWho
// 地址: 0xbd91dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f6c)

if (i == 0)
    return 

uint64_t x22_1 = zx.q(i.w)
DomGame& x19_1 = arg1

if (x22_1.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x8_5 = x19_1 + sx.q(arg2) * 0x5a30
uint64_t x25_1 = zx.q(*(x19_1 + x22_1 * 0x68 + 0x1ac8)) << 0x20

while (true)
    uint64_t x8_8 = zx.q(*(x8_5 + 0x181cc))
    int32_t x20_1
    
    if (x8_8.d s< 1)
        x20_1 = 0
    else if (*(x8_5 + 0x19b18) != i)
        int64_t x11_1 = 0
        int64_t x10_1
        
        do
            x10_1 = x11_1
            
            if (x8_8 - 1 == x11_1)
                break
            
            x11_1 = x10_1 + 1
        while (*(x8_5 + 0x19b1c + (x10_1 << 2)) != i)
        
        x20_1 = x10_1 + 1 u< x8_8 ? 1 : 0
    else
        x20_1 = 1
    
    arg1 = CardStaysUntilNextTurn(x19_1, zx.q(i))
    int32_t x8_9 = *(x19_1 + 0x150c)
    
    if (x8_9 - 3 u>= 4)
        int64_t var_68_1 = 0
        int32_t var_70_1 = 0
        int32_t var_78_1 = 0
        int32_t var_80_1 = 0
        DomNotifyEffect(zx.q(x8_9 == 2 ? 1 : 0), 0x16, zx.q(*(x19_1 + 0x19d4)), zx.q(i), 1, 
            zx.q(not.d(x20_1 | arg1.d)) & 1, 0, 0)
    
    i = (x25_1 u>> 0x20).d
    
    if (i == 0)
        break
    
    int32_t x25_3 = i & 0xffff
    
    if (x25_3 u>= 0x320)
        void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_12 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_13 = *(x8_12 - 0x90)
        *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x25_1 = zx.q(i) | zx.q(*(x19_1 + mulu.dp.d(x25_3, 0x68) + 0x1ac8)) << 0x20
