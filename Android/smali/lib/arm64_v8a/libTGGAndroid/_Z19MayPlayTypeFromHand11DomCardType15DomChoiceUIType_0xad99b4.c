// 函数: _Z19MayPlayTypeFromHand11DomCardType15DomChoiceUIType
// 地址: 0xad99b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetPlayableFromHand(arg1, 0)
int64_t var_1998
__builtin_memset(&var_1998, 0, 0x18)
int32_t var_d00
int32_t x19_1

if (var_d00 == 0)
    x19_1 = 0
else
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    v0_1 = var_1998.o
    int32_t var_68 = arg2
    int128_t var_64_1 = v0_1
    int64_t var_54
    __builtin_memset(&var_54, 0, 0x24)
    int64_t var_44 = *(x0 + 0x40)
    void var_1980
    int32_t var_cf0
    memcpy(&var_cf0, &var_1980, 0xc84)
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_cf8 = *x0
    int32_t var_cf4_1 = x0[7]
    int32_t var_19a0_1 = 0
    int32_t var_19a8_1 = 0
    int32_t* var_19b8_1 = &var_68
    int32_t var_19b0_1 = 0xb
    int32_t var_19c0_1 = 1
    int32_t var_70
    
    if (QueueChoiceCards(x0_2, &var_cf8, zx.q(x0[6]), 1, &var_cf0, zx.q(var_70), 1, 0) == 0)
        x19_1 = 0
    else
        x19_1 = var_cf0
        
        if (x19_1 != 0)
            void* x0_4 = DomGetContext()
            DomGame* x20_2 = *(x0_4 + 8)
            int32_t x21_1 = *(x0_4 + 0x18)
            var_cf0.q = ToCardRef(x20_2, zx.q(x19_1))
            var_68.q = 0
            var_1998 = 0
            PlayCard(x20_2, zx.q(x21_1), &var_cf0, &var_68, &var_1998, 0)

return zx.q(x19_1)
