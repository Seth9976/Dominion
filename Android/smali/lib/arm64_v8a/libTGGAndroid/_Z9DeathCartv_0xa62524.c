// 函数: _Z9DeathCartv
// 地址: 0xa62524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 4)
int32_t var_c98
uint64_t x8 = zx.q(var_c98)
int32_t var_c90[0x4]

if (x8.d s>= 1)
    int64_t i_4
    
    if (x8.d u>= 8)
        i_4 = x8 & 0xfffffff8
        void var_c80
        void* x10_1 = &var_c80
        int128_t v0
        v0.d = 0x3ea
        v0:4.d = 0x3ea
        v0:8.d = 0x3ea
        v0:0xc.d = 0x3ea
        int64_t i_3 = i_4
        int64_t i
        
        do
            *(x10_1 - 0x10) = v0
            *x10_1 = v0
            i = i_3
            i_3 -= 8
            x10_1 += 0x20
        while (i != 8)
        
        if (i_4 != x8)
            goto label_a62590
    else
        i_4 = 0
    label_a62590:
        int64_t i_2 = x8 - i_4
        void* x9_1 = &var_c90[i_4]
        int64_t i_1
        
        do
            i_1 = i_2
            i_2 -= 1
            *x9_1 = 0x3ea
            x9_1 += 4
        while (i_1 != 1)

CardIDs var_1918

if (CardWhere(ThisCard(false, nullptr)) == 0x3e9)
    var_c90[sx.q(var_c98)] = 0x3e9
    operator+=(&var_1918, zx.q(ThisCard(false, nullptr)))

int64_t result = MayTrashOneOf(&var_1918, &var_c90, 0x69)

if (result.d == 0)
    return result

return MoneyPlus(5, 0, false)
