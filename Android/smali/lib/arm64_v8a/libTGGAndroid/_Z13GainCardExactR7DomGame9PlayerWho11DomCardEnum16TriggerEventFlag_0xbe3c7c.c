// 函数: _Z13GainCardExactR7DomGame9PlayerWho11DomCardEnum16TriggerEventFlag
// 地址: 0xbe3c7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg3
uint64_t x23 = -0x1a0

while (true)
    void* x24_1 = arg1 + x23
    int32_t x25_1 = *(x24_1 + 0x173c)
    
    if (x25_1 != x22 && *(x24_1 + 0x1740) != x22 && PileSource(arg1, zx.q(x22)) != x25_1)
        uint64_t temp0_1 = x23
        x23 += 0x10
        
        if (temp0_1 == -0x10)
            break
        
        continue
    
    x23 = zx.q(*(x24_1 + 0x1744))
    
    if (x23.d != 0)
        int64_t x24_2 = x23 & 0xffff
        
        if (x24_2.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x24_2 * 0x68 + 0x1a70) != x22)
            x23 = 0
        else
            int32_t var_50_1 = 4
            GainCard(arg1, zx.q(arg2), zx.q(x23.d), 0x476, 0, 0x476, 0, zx.q(arg4))
    
    break

return zx.q(x23.d)
