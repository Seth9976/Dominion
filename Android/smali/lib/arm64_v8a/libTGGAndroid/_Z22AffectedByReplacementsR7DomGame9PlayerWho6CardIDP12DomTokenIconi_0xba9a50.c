// 函数: _Z22AffectedByReplacementsR7DomGame9PlayerWho6CardIDP12DomTokenIconi
// 地址: 0xba9a50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3.d
int32_t x22 = arg2.d
DomPushHintContext(arg1, arg2, arg3)
int32_t x0_1 = Corsair_ReplacementHint(zx.q(x21))
DomPopContext()
int32_t x20_1

if ((x0_1 & 1) == 0)
    x20_1 = 0
else
    x20_1 = 1
    *arg4 = 0xe

DomPushHintContext(arg1, zx.q(x22), zx.q(x21))
int32_t x0_4 = Enchantress_ReplacementHint(zx.q(x21))
DomPopContext()

if ((x0_4 & 1) == 0)
    DomPushHintContext(arg1, zx.q(x22), zx.q(x21))
    int32_t x0_7 = Enlightenment_ReplacementHint(zx.q(x21))
    DomPopContext()
    
    if ((x0_7 & 1) == 0)
        DomPushHintContext(arg1, zx.q(x22), zx.q(x21))
        int32_t x0_10 = Highaymwan_ReplacementHint(zx.q(x21))
        DomPopContext()
        
        if ((x0_10 & 1) != 0)
            *(arg4 + (zx.q(x20_1) << 2)) = 9
            x20_1 += 1
    else
        *(arg4 + (zx.q(x20_1) << 2)) = 0x11
        x20_1 += 1
else
    *(arg4 + (zx.q(x20_1) << 2)) = 1
    x20_1 += 1

return zx.q(x20_1)
