// 函数: _Z23NotifyCreateAbilityDescR7DomGame9PlayerWho9AbilityIDRK13DomActiveItemP6CardIDi
// 地址: 0xbd1eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
CardID* x19 = arg5
int32_t x21 = arg2

if (x20 == 0xffffffff)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

GetAbilityVisibileType(arg1, arg4)
int64_t result = AbilitySourceCardRef(arg1, zx.q(x20))
int32_t x8_5 = *(arg1 + 0x150c)

if (x8_5 - 3 u>= 4)
    int32_t var_70_1 = result.d
    int64_t var_68_1 = 0
    int32_t var_48
    int32_t var_78_1 = var_48
    int32_t var_4c
    int32_t var_80_1 = var_4c
    int32_t var_54
    int32_t var_50
    result = DomNotifyEffect(zx.q(x8_5 == 2 ? 1 : 0), 0x18, zx.q(x21), zx.q(x20), zx.q(*arg4), 
        zx.q(*(arg4 + 4)), zx.q(var_54), zx.q(var_50))

if (arg6 s>= 1)
    uint64_t i_1 = zx.q(arg6)
    uint64_t i
    
    do
        int32_t x8_7 = *(arg1 + 0x150c)
        
        if (x8_7 - 3 u>= 4)
            int64_t var_68_2 = 0
            int32_t var_70_2 = 0
            int32_t var_78_2 = 0
            int32_t var_80_2 = 0
            result = DomNotifyEffect(zx.q(x8_7 == 2 ? 1 : 0), 0x1a, zx.q(x21), zx.q(x20), 
                zx.q(*x19), 0, 0, 0)
        
        i = i_1
        i_1 -= 1
        x19 += 4
    while (i != 1)

return result
