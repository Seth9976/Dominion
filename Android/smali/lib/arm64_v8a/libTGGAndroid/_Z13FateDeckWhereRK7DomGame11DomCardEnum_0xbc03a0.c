// 函数: _Z13FateDeckWhereRK7DomGame11DomCardEnum
// 地址: 0xbc03a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

if (arg2 != 0xd30 && x19 != 0xd3d)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (arg2 == 0xd30 || x19 == 0xd3d || x19 != 0)
    void* __offset(DomGame, 0x15a0) x9_3 = arg1 + 0x15a0
    int64_t x8_5 = -0x41
    
    while (true)
        if (*(x9_3 - 4) == x19 || *x9_3 == x19)
            return zx.q(x8_5.d + 0x48)
        
        int64_t temp0_1 = x8_5
        x8_5 += 1
        x9_3 += 0x10
        
        if (temp0_1 u>= -1)
            break
        
        continue

return 0
