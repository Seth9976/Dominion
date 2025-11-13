// 函数: _Z8BuyPhaseR7DomGame9PlayerWho
// 地址: 0xbea648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x19f4) = 2
*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181e8) = 0
int32_t x8_1 = *(arg1 + 0x150c)
int32_t x20 = arg2

if (x8_1 - 3 u>= 4)
    int64_t var_cc8_1 = 0
    int32_t var_cd0_1 = 0
    int32_t var_cd8_1 = 0
    int64_t var_ce0
    var_ce0.d = 0
    DomNotifyEffect(zx.q(x8_1 == 2 ? 1 : 0), 0x29, zx.q(x20), 0, 2, 0, 0, 0)

int128_t var_cc0
__builtin_memset(&var_cc0, 0, 0x48)
int32_t var_24 = 1
int64_t var_ce0_1 = 0
int64_t result = TriggerEvents(arg1, zx.q(x20), &var_24, 1, &var_cc0, 0, nullptr, 0)

if ((*(arg1 + 0x19f4) & 0xfffffffe) == 2)
    bool var_28 = false
    int32_t i
    
    do
        int32_t var_40_1 = CardsSupplyTops(arg1, zx.q(x20), &var_cc0, 4)
        var_24 = 0
        result = DoBuy(arg1, zx.q(x20), &var_cc0, 1, &var_24, &var_28, 0)
        int32_t i_1
        
        if ((result.d & 1) != 0)
            i_1 = 3
        else
            i_1 = 0
        
        if ((*(arg1 + 0x19f4) & 0xfffffffe) == 2)
            i = i_1
        else
            i = 1
    while (i == 0)
    
    if (i == 3)
        __builtin_memset(&var_cc0, 0, 0x48)
        var_24 = 2
        int64_t var_ce0_2 = 0
        result = TriggerEvents(arg1, zx.q(x20), &var_24, 1, &var_cc0, 0, nullptr, 0)
        
        if (*(arg1 + 0x19f4) != 1)
            *(arg1 + 0x19f4) = 0

return result
