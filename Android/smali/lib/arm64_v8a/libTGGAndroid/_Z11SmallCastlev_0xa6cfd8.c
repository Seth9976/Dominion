// 函数: _Z11SmallCastlev
// 地址: 0xa6cfd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 0x10000)
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
            goto label_a6d04c
    else
        i_4 = 0
    label_a6d04c:
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
int32_t x0_1 = CheckStopMoving(x0, 0x3e9)
CardIDs var_1938

if ((x0_1 & 1) == 0)
    operator+=(&var_1938, zx.q(x0.d))
    var_cb0[sx.q(var_cb8 - 1)] = 0x3e9

int64_t result

if ((x0_1 & 1) != 0 || x20.d == 0)
    result = MayTrashOneOf(&var_1938, &var_cb0, 0x14)
    
    if (result.d != 0)
        return GainCard(0xc0a, 0x476, 0, 0, 4)
else
    result = TrashOneOf(&var_1938, &var_cb0, 0x12, 7, zx.q(var_cb8 s> 1 ? 1 : 0))
    
    if (result.d != 0)
        return GainCard(0xc0a, 0x476, 0, 0, 4)

return result
