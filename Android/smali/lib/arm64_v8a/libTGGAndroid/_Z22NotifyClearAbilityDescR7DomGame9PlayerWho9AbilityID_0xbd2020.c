// 函数: _Z22NotifyClearAbilityDescR7DomGame9PlayerWho9AbilityID
// 地址: 0xbd2020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int32_t x8

if (x19 != 0xffffffff)
    x8 = *(arg1 + 0x150c)
    
    if (x8 - 3 u>= 4)
        goto label_bd20e4
    
    return 

void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
*(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
void* x8_4 = *(x8_3 - 0x90)
*(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
XTrace("game thread yield (error)")
xco_yield()
XTrace("game thread resume (error)")
x8 = *(arg1 + 0x150c)

if (x8 - 3 u< 4)
    return 

label_bd20e4:
int64_t var_28 = 0
int32_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
DomNotifyEffect(zx.q(x8 == 2 ? 1 : 0), 0x19, zx.q(arg2), zx.q(x19), 0, 0, 0, 0)
