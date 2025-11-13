// 函数: _Z14TriggerDiscard6CardID
// 地址: 0xad860c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
DomGame* x0_4
uint64_t x1
TriggerEventType* x2
TriggerInfo* x4
int64_t x5
CardID* x6
int32_t x19
int32_t var_d08
int128_t var_80
int32_t var_34

if (CurrentPhase(*(DomGetContext() + 8)) != 5)
    int32_t var_88_2 = 0
    
    if (x20 == 0)
        x19 = 0
    else
        x19 = 1
        GameAssert(true)
        int32_t var_88_3 = 1
        var_d08 = x20
    
    var_34 = 6
    void* x0_5 = DomGetContext()
    __builtin_memset(&var_80, 0, 0x48)
    var_80.d = 3
    var_80:8.d = 1
    x1 = zx.q(*(x0_5 + 0x18))
    x2 = &var_34
    x4 = &var_80
    x6 = &var_d08
    int64_t var_d10_1 = 0
    x0_4 = *(x0_5 + 8)
    x5 = 0
else
    int32_t var_88 = 0
    
    if (x20 == 0)
        x19 = 0
    else
        x19 = 1
        GameAssert(true)
        int32_t var_88_1 = 1
        var_d08 = x20
    
    var_34 = 6
    void* x0_3 = DomGetContext()
    __builtin_memset(&var_80, 0, 0x48)
    var_80.d = 3
    var_80:8.d = 1
    x1 = zx.q(*(x0_3 + 0x18))
    x2 = &var_34
    x4 = &var_80
    x6 = &var_d08
    x5 = 1
    x0_4 = *(x0_3 + 8)
    int64_t var_d10 = 0
return TriggerEvents(x0_4, x1, x2, 1, x4, x5, x6, zx.q(x19))
