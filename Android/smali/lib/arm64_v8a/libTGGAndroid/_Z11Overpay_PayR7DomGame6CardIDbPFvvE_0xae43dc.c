// 函数: _Z11Overpay_PayR7DomGame6CardIDbPFvvE
// 地址: 0xae43dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
void* x0 = DomGetContext()
int32_t x23 = *(x0 + 0x18)
int64_t var_ce0 = ToCardRef(arg1, zx.q(x20))
DomPushContext(arg1, zx.q(x23), &var_ce0)
int32_t x0_5 = CountResource(*(x0 + 8), zx.q(*(x0 + 0x18)), 0)
int32_t x24 = 0

if ((arg3.d & 1) != 0)
    x24 = CountResource(*(x0 + 8), zx.q(*(x0 + 0x18)), 3)

int32_t x0_9 = CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0xa00)
int32_t x8_2

if (*(*(DomGetContext() + 8) + 0x19d4) == *(DomGetContext() + 0x18))
    x8_2 = x0_9
else
    x8_2 = 0

int32_t x25_2 = x8_2 + x0_5

if (x25_2 s>= 1)
    int64_t var_cf8_1 = 0
    int32_t var_d00_1 = 0
    int32_t var_d08_1 = 0
    int32_t var_d10_1 = 0
    NotifyEffect(arg1, 9, zx.q(*(x0 + 0x18)), zx.q(x20), 0x3ec, 0, 0, 0xb)

__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x79
int128_t var_cd0
var_cd0:0xc.d = x24
int128_t var_cc0
__builtin_memset(&var_cc0, 0, 0x18)

if ((x25_2 | x24) != 0)
    int32_t* x0_13 = DomGetContext()
    DomGame* x8_3 = *(x0_13 + 8)
    uint64_t x2_2 = zx.q(x0_13[6])
    int32_t x9_1 = x0_13[7]
    int32_t var_ce8 = *x0_13
    int32_t var_ce4_1 = x9_1
    int32_t x0_15 =
        QueueChoiceNumber(x8_3, &var_ce8, x2_2, 0, x25_2, &var_ce0, 0x2c, zx.q(x24 != 0 ? 1 : 0))
    
    if (x0_15 != 0)
        int32_t x25_3 = x0_15 & 0xfffeffff
        int32_t x26_1
        
        x26_1 = x0_5 s< x25_3 ? x0_5 : x25_3
        
        int32_t x23_2 = x0_15 & 0x10000
        
        if (x25_3 != x26_1)
            int32_t var_d08_2 = 0
            int32_t var_d10_2 = 0xffffffff
            AddTokens(*(x0 + 8), zx.q(*(x0 + 0x18)), 0xa00, zx.q(neg.d(x25_3 - x26_1)), 0x476, 0, 
                0, 0)
        
        if (x26_1 != 0)
            AddResource(*(x0 + 8), zx.q(*(x0 + 0x18)), 0, neg.d(x26_1), 0, 2)
        
        if (x23_2 != 0)
            AddResource(*(x0 + 8), zx.q(*(x0 + 0x18)), 3, 0xffffffff, 0, 2)
        
        int32_t var_d08_3 = 0
        int32_t var_d10_3 = 0
        NotifyLog(*(x0 + 8), 0x38, zx.q(*(x0 + 0x18)), 0, nullptr, 0, zx.q(x25_3), 
            zx.q(x23_2 u>> 0x10))
        int32_t x8_5 = *(x0 + 0x18)
        uint64_t x7_3
        
        if (x8_5 == *(arg1 + 0x19d4))
            x7_3 = zx.q(*(arg1 + 0x19d8))
        else
            x7_3 = zx.q(x8_5)
        
        var_ce0.d = 3
        var_ce0:4.d = x20
        int32_t var_cd8_1 = x0_15
        int32_t var_5c_1 = 2
        ThisTurnOnce(6, arg4, sub_ae5888, 0, &var_ce0, 1, nullptr, x7_3)

return DomPopContext()
