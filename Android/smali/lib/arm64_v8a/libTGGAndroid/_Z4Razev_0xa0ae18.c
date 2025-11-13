// 函数: _Z4Razev
// 地址: 0xa0ae18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
CardsHand()
int32_t var_cb8
uint64_t x20 = zx.q(var_cb8)
int32_t var_cb0[0x4]

if (x20.d s>= 1)
    int64_t i_4
    
    if (x20.d u>= 8)
        i_4 = x20 & 0xfffffff8
        void var_ca0
        void* x9_1 = &var_ca0
        int128_t v0
        v0.d = 0x3ea
        v0:4.d = 0x3ea
        v0:8.d = 0x3ea
        v0:0xc.d = 0x3ea
        int64_t i_3 = i_4
        int64_t i
        
        do
            *(x9_1 - 0x10) = v0
            *x9_1 = v0
            i = i_3
            i_3 -= 8
            x9_1 += 0x20
        while (i != 8)
        
        if (i_4 != x20)
            goto label_a0ae98
    else
        i_4 = 0
    label_a0ae98:
        int64_t i_2 = x20 - i_4
        void* x8_1 = &var_cb0[i_4]
        int64_t i_1
        
        do
            i_1 = i_2
            i_2 -= 1
            *x8_1 = 0x3ea
            x8_1 += 4
        while (i_1 != 1)

int64_t x0 = ThisCard(false, nullptr)
int32_t x0_1 = CardIsWhere(x0, 0x3e9)
void var_1938

if ((x0_1 & 1) != 0)
    operator+=(&var_1938, zx.q(x0.d))
    var_cb0[sx.q(var_cb8) - 1] = 0x3e9

int64_t result

if ((x0_1 & 1) == 0 || x20.d s< 1)
    result = MayTrashOneOf(&var_1938, &var_cb0, 0x14)
    
    if (result.d != 0)
    label_a0af3c:
        LookAt(CostOnlyCoin(result))
        int128_t var_2600
        __builtin_memset(&var_2600, 0, 0x30)
        var_2600.d = 0x1c
        int128_t var_25f0
        var_25f0:0xc.d = 1
        int128_t var_25e0
        var_25e0:8.q = 0
        int64_t var_25d0_1 = 0
        void var_25c0
        int32_t x0_7 = ChooseCard(&var_25c0, 0x14, &var_2600, 0xa, 0)
        operator-=(&var_25c0, zx.q(x0_7))
        MoveToHand(zx.q(x0_7), 0x3ee)
        return DiscardCards(&var_25c0, 0x3ee, 0xb, 7, 0)
else
    result = TrashOneOf(&var_1938, &var_cb0, 0x12, 7, 1)
    
    if (result.d != 0)
        goto label_a0af3c

return result
