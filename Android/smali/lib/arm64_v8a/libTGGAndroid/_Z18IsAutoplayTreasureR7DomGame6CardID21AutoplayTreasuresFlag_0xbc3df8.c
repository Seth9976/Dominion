// 函数: _Z18IsAutoplayTreasureR7DomGame6CardID21AutoplayTreasuresFlag
// 地址: 0xbc3df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(arg2)
int32_t x19 = arg3

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_6 = *(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)

if (x8_6 s> 0xc04)
    if (x8_6 s> 0xe14)
        uint64_t x9_5 = zx.q(x8_6 - 0x1102)
        
        if ((x9_5.d u> 0x32 || (1 << x9_5 & 0x4350000050003) == 0) && x8_6 != 0xe15
                && x8_6 != 0x1309)
            return 0
    else if (x8_6 - 0xd21 u> 4 || x8_6 == 0xd23)
        uint64_t x9_8 = zx.q(x8_6 - 0xc05)
        
        if ((x9_8.d u> 0x25 || (1 << x9_8 & 0x2000000081) == 0) && x8_6 != 0xe01)
            return 0
else if (x8_6 s<= 0x5ff)
    if (x8_6 s<= 0x317)
        if (x8_6 - 0x105 u< 2)
            return zx.q((x19 & 8) == 0 ? 1 : 0)
        
        if (x8_6 != 0x100)
            if (x8_6 == 0x104)
                return zx.q((x19 & 4) == 0 ? 1 : 0)
            
            return 0
    else if (x8_6 s> 0x4ff)
        if (x8_6 != 0x500 && x8_6 != 0x509)
            return 0
    else if (x8_6 != 0x318 && x8_6 != 0x41a)
        return 0
else if (x8_6 s<= 0x801)
    uint64_t x9_11 = zx.q(x8_6 - 0x600)
    
    if (x9_11.d u> 0x20)
    label_bc4028:
        
        if (x8_6 != 0x70f)
            return 0
    else if ((1 << x9_11 & 0x100010081) == 0)
        if (x9_11 == 0x1b)
            return zx.q((x19 & 3) == 0 ? 1 : 0)
        
        goto label_bc4028
else if ((x8_6 - 0x802 u> 0x1d || (1 << (x8_6 - 0x802) & 0x20001001) == 0) && x8_6 != 0xa03
        && x8_6 != 0xb17)
    return 0

return 1
