// 函数: _Z7DomTurnR7DomGame
// 地址: 0xbef59c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_68 = 0
DomPushContext(arg1, zx.q(*(arg1 + 0x19d4)), &var_68)
*(arg1 + 0x19e0) = 1
int32_t x8 = *(arg1 + 0x150c)
int32_t x20

if (x8 - 3 u> 3)
    int64_t var_78_1 = 0
    int32_t var_80_1 = 0
    int32_t var_88_1 = 0
    int32_t var_90_1 = 0
    DomNotifyEffect(zx.q(x8 == 2 ? 1 : 0), 4, zx.q(*(arg1 + 0x19d4)), 0, zx.q(*(arg1 + 0x19d8)), 
        zx.q(*(arg1 + 0x19ec)), zx.q(*(arg1 + 0x19f0) != 0 ? 1 : 0), 0)
    int32_t x8_1 = *(arg1 + 0x150c)
    x20 = *(arg1 + 0x19d4)
    
    if (x8_1 - 3 u< 4)
        *(arg1 + 0x19f4) = 1
    else if (zx.d(*(arg1 + 0x1508)) == 0)
        int32_t var_80_2 = 0
        int32_t var_88_2 = 0
        int32_t var_90_2 = *(arg1 + 0x19ec)
        DomAddLogEvent(arg1, zx.q(x20), zx.q(*(arg1 + 0x19d8)), 6, zx.q(*(arg1 + 0x19f0)), nullptr, 
            0, zx.q(*(arg1 + 0x19e4)))
        x8_1 = *(arg1 + 0x150c)
        x20 = *(arg1 + 0x19d4)
        *(arg1 + 0x19f4) = 1
        
        if (x8_1 - 3 u>= 4)
            goto label_bef6e0
    else
        *(arg1 + 0x19f4) = 1
    label_bef6e0:
        int64_t var_78_2 = 0
        int32_t var_80_3 = 0
        int32_t var_88_3 = 0
        int32_t var_90_3 = 0
        DomNotifyEffect(zx.q(x8_1 == 2 ? 1 : 0), 0x29, zx.q(x20), 0, 1, 0, 0, 0)
else
    x20 = *(arg1 + 0x19d4)
    *(arg1 + 0x19f4) = 1

StartOfTurnPhase(arg1, zx.q(x20))

while (true)
    ActionPhase(arg1, zx.q(x20))
    BuyPhase(arg1, zx.q(x20))
    
    if (*(arg1 + 0x19f4) != 1)
        NightPhase(arg1, zx.q(x20))
        
        if (*(arg1 + 0x19f4) != 1)
            break

CleanupPhase(arg1, zx.q(x20))
int32_t x8_5 = *(arg1 + 0x150c)

if (x8_5 - 3 u>= 4)
    uint64_t x2_4 = zx.q(*(arg1 + 0x19d4))
    uint64_t x5_2 = zx.q(*(arg1 + 0x19d8))
    int64_t var_78_3 = 0
    int32_t var_80_4 = 0
    int32_t var_88_4 = 0
    int32_t var_90_4 = 0
    DomNotifyEffect(zx.q(x8_5 == 2 ? 1 : 0), 6, x2_4, 0, zx.q(x2_4.d != x5_2.d ? 1 : 0), x5_2, 0, 0)
    
    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
        int32_t var_80_5 = 0
        int32_t var_88_5 = 0
        int32_t var_90_5 = 0
        DomAddLogEvent(arg1, zx.q(*(arg1 + 0x19d4)), zx.q(*(arg1 + 0x19d8)), 7, 0, nullptr, 0, 0)

*(arg1 + 0x19e0) = 0
uint64_t i_1 = zx.q(*(arg1 + 0xd40))

if (i_1.d s>= 1)
    void* x14_1 = arg1 + mulu.dp.d(x20, 0x5a30)
    uint64_t x23_1 = zx.q(x20)
    void* __offset(DomGame, 0x181e4) fp_1 = arg1 + 0x181e4
    uint64_t i
    
    do
        if (x23_1 == 0)
            *(x14_1 + 0x181e0) = *(x14_1 + 0x181dc)
            int64_t x8_10 = sx.q(*(x14_1 + 0x181a4))
            *(x14_1 + 0x181b4) = x8_10.d
            memcpy(x14_1 + 0x18e98, x14_1 + 0x18218, x8_10 << 2)
        
        *(fp_1 - 8) = 0
        *(fp_1 - 0x40) = 0
        *(fp_1 - 0x38) = 0
        *(fp_1 - 0x14) = 0
        *(fp_1 - 0x1c) = 0
        __builtin_memset(fp_1, 0, 0x18)
        fp_1 += 0x5a30
        i = i_1
        i_1 -= 1
        x23_1 -= 1
    while (i != 1)

*(arg1 + 0x19b0) = 0
*(arg1 + 0x19b8) = 0
void* result = __emutls_get_address(__emutls_v.gContextStack_tl)
*(result + 0x13000) -= 1
return result
