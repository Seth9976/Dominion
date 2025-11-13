// 函数: _Z7BuyCardR7DomGame9PlayerWho6CardIDb
// 地址: 0xbe3868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_48 = arg3
int32_t x21 = arg4.d
int32_t x22 = arg3
int32_t x19 = arg2

if (zx.d(*(arg1 + 0x19e0)) != 0 && *(arg1 + 0x19d4) == x19)
    int64_t x8_4 = sx.q(x19)
    
    if ((*(arg1 + 0x19f4) & 0xfffffffe) == 2)
        void* x9_1 = arg1 + x8_4 * 0x5a30
        *(x9_1 + 0x181e8) += 1
    
    void* x8_5 = arg1 + x8_4 * 0x5a30
    int64_t x9_2 = sx.q(*(x8_5 + 0x181e4))
    *(x8_5 + 0x181e4) = x9_2.d + 1
    *(x8_5 + (x9_2 << 2) + 0x1a798) = x22

int32_t var_c0

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2
    
    if (*(arg1 + 0x19d4) == x19)
        x2 = zx.q(*(arg1 + 0x19d8))
    else
        x2 = zx.q(x19)
    
    int32_t var_b0_1 = 0
    int32_t var_b8_1 = 0
    var_c0 = 0
    DomAddLogEvent(arg1, zx.q(x19), x2, 0x21, 0, &var_48, 1, 0)
    x22 = var_48

int32_t x0_2 = BuyIsCombo(arg1, zx.q(x19), zx.q(x22))
int32_t x8_10 = *(arg1 + 0x150c)

if (x8_10 - 3 u>= 4)
    int64_t var_a8_1 = 0
    int32_t var_b0_2 = 0
    int32_t var_b8_2 = 0
    var_c0 = 0
    DomNotifyEffect(zx.q(x8_10 == 2 ? 1 : 0), 8, zx.q(x19), zx.q(x22), zx.q(x0_2) & 1, 0, 0, 0)

int64_t x1_3 = PayCosts(arg1, zx.q(x19), zx.q(var_48))
uint64_t x2_4 = zx.q(var_48)
int64_t x22_1 = x2_4 & 0xffff

if (x22_1.d u>= 0x320)
    void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_13 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
    *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_14 = *(x8_13 - 0x90)
    *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    x1_3 = XTrace("game thread resume (error)")
    x2_4 = zx.q(var_48)

int32_t x22_2 = *(arg1 + x22_1 * 0x68 + 0x1a70)
TriggerOverpay(arg1, x1_3, x2_4)
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x48)
int32_t var_44 = 7
var_c0.q = 0
TriggerEvents(arg1, zx.q(x19), &var_44, 1, &var_a0, 0, &var_48, 1)
int32_t var_c0_2

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2_7
    
    if (*(arg1 + 0x19d4) == x19)
        x2_7 = zx.q(*(arg1 + 0x19d8))
    else
        x2_7 = zx.q(x19)
    
    int32_t var_b0_3 = 0
    int32_t var_b8_3 = 0
    int32_t var_c0_1 = 0
    DomAddLogEvent(arg1, zx.q(x19), x2_7, 0x1f, 0, nullptr, 0, 0)
    
    if ((x21 & 1) != 0)
        goto label_be3aa4
    
    var_c0_2 = 4
    GainCard(arg1, zx.q(x19), zx.q(var_48), 0x476, 0, 0x476, 0, 0x10)
else if ((x21 & 1) == 0)
    var_c0_2 = 4
    GainCard(arg1, zx.q(x19), zx.q(var_48), 0x476, 0, 0x476, 0, 0x10)
else
label_be3aa4:
    
    if (x22_2 == 0)
        GainCardExact(arg1, zx.q(x19), zx.q(x22_2), 0x10)
    else
        int32_t x21_1 = *(arg1 + 0xd50)
        int32_t x8_23 = (x22_2 + (x21_1 << 0x10)) s% 0x3e5
        int32_t* x9_8 = *(&data_1838a20 + (sx.q(x8_23) << 3))
        
        if (x9_8 != 0)
            while (*x9_8 != x22_2 || x9_8[1] != x21_1)
                x9_8 = *(x9_8 + 0x10)
                
                if (x9_8 == 0)
                    goto label_be3af0
            
            if ((zx.d(*(*(x9_8 + 8) + 0xca)) & 0x40) != 0)
                var_c0_2 = 4
                GainCard(arg1, zx.q(x19), zx.q(var_48), 0x476, 0, 0x476, 0, 0x10)
            else
                GainCardExact(arg1, zx.q(x19), zx.q(x22_2), 0x10)
        else
        label_be3af0:
            DomDefGetSlow(zx.q(x22_2), zx.q(x21_1))
            int32_t* x0_10 = malloc(0x18)
            int64_t x8_24 = sx.q(x8_23) << 3
            int64_t x9_9 = *(&data_1838a20 + x8_24)
            *x0_10 = x22_2
            x0_10[1] = x21_1
            *(&data_1838a20 + x8_24) = x0_10
            *(x0_10 + 0x10) = x9_9
            void* x0_12 = DomDefGetSlow(zx.q(x22_2), zx.q(x21_1))
            *(x0_10 + 8) = x0_12
            
            if ((zx.d(*(x0_12 + 0xca)) & 0x40) == 0)
                GainCardExact(arg1, zx.q(x19), zx.q(x22_2), 0x10)
            else
                var_c0_2 = 4
                GainCard(arg1, zx.q(x19), zx.q(var_48), 0x476, 0, 0x476, 0, 0x10)
int32_t var_b8_4 = 0
int32_t var_c0_3 = 0
int64_t result = AddOngoing(arg1, zx.q(x19), 6, 0, 1, 0, 0, 0xffffffff)

if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
    return result

uint64_t x2_9

if (*(arg1 + 0x19d4) == x19)
    x2_9 = zx.q(*(arg1 + 0x19d8))
else
    x2_9 = zx.q(x19)

int32_t var_b0_4 = 0
int32_t var_b8_5 = 0
int32_t var_c0_4 = 0
return DomAddLogEvent(arg1, zx.q(x19), x2_9, 0x20, 0, nullptr, 0, 0)
