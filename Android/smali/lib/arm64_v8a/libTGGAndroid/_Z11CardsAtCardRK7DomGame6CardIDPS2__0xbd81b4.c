// 函数: _Z11CardsAtCardRK7DomGame6CardIDPS2_
// 地址: 0xbd81b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1528)
int32_t x22

if (x8 s< 1)
    x22 = 0
else
    int64_t i = 0
    x22 = 0
    void* __offset(DomGame, 0x1a74) fp_1 = arg1 + 0x1a74
    
    do
        if (*fp_1 == 0x474 && *(fp_1 + 0x18) == arg2)
            if (x22 s>= 0x320)
                void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
                *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_4 = *(x8_3 - 0x90)
                *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            *(arg3 + (sx.q(x22) << 2)) = i.d
            x8 = *(arg1 + 0x1528)
            x22 += 1
        
        i += 1
        fp_1 += 0x68
    while (i s< sx.q(x8))

return zx.q(x22)
