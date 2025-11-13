// 函数: _Z14DomMoveDisplay9PlayerWhoR6DomGfxS1_RK10DomPileLocb
// 地址: 0xb24550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
int64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = PileAddCard(arg2, arg3, *arg4, arg5 & 1)
int32_t x9 = *(arg3 + 0x5c)
int32_t x23 = result.d
int128_t var_d0
int128_t var_c0_1
int128_t var_b0
int32_t x8_1
int32_t x10_3
int32_t x10_2

if (x9 - 0x454 u> 0x1e)
label_b24b98:
    uint64_t x8_12 = zx.q(x9 - 0x3e9)
    
    if (x8_12.d u> 3)
        if (x9 != 2)
            pthread_kill(pthread_self(), 6)
            int64_t x0_4
            DomGfx* x1_3
            DomGfx* x2_1
            DomPileLoc* x3_1
            int64_t x4
            bool x5
            int64_t x6
            bool x7
            x0_4, x1_3, x2_1, x3_1, x4, x5, x6, x7 = XNoReturn()
            return DomMoveCard(x0_4, x1_3, x2_1, x3_1, x4, x5, x6, x7) __tailcall
        
        x8_1 = *(arg3 + 0x3c4)
        v0.q = 0
        v0:8.q = 0
        __builtin_memset(&var_d0, 0, 0x78)
        var_d0.d = 0xa
        x10_3 = 2
    else
        x10_2 = 0xc
        
        switch (x8_12)
            case 0
                goto label_b245c0
            case 1
                x10_2 = 0xb
                goto label_b245c4
            case 2
                goto label_b245c4
            case 3
                x10_2 = 0xd
                goto label_b245c4
else
    if ((1 << (x9 - 0x454) & 0x44006001) != 0)
    label_b245c0:
        x10_2 = 0xf
        goto label_b245c4
    
    if (x9 != 0x45f)
        goto label_b24b98
    
    x10_2 = 0xe
label_b245c4:
    x8_1 = *(arg3 + 0x3c4)
    v0.q = 0
    v0:8.q = 0
    var_c0_1 = zx.o(0)
    __builtin_memset(&var_b0, 0, 0x58)
    __builtin_memset(&var_d0, 0, 0x1c)
    var_d0.d = x10_2
    x10_3 = x9
var_d0:4.d = x10_3
var_d0:8.d = x21
var_d0:0xc.d = x8_1
DomGfx& var_58 = arg2
uint64_t x8_2 = zx.q(*(arg2 + 0x1f78))

if (x8_2.d s>= 1)
    int64_t i = x8_2 + 1
    int32_t* x10_5 = arg2 + x8_2 * 0xd8 + 0x448
    
    do
        int32_t x11_1 = *x10_5
        
        if (x11_1 == 0xa || x11_1 == 3)
            x8_2 = zx.q(x8_2.d - 1)
            *(arg2 + 0x1f78) = x8_2.d
        
        i -= 1
        x10_5 -= 0xd8
    while (i s> 1)
    
    x9 = *(arg3 + 0x5c)

int32_t var_178 = 1
int64_t var_188 = 0
int64_t var_180 = 0
int64_t var_60
int128_t var_100 = var_60.o
int32_t var_190 = 1
int32_t var_18c = x9
var_180.d = 0x10000
int128_t var_170 = var_d0
int128_t var_150 = var_b0

if (x8_2.d s>= 1)
    int64_t x9_2 = zx.q(x8_2.d) + 1
    void* x10_7 = arg2 + mulu.dp.d(x8_2.d, 0xd8) + 0x448
    
    while (*x10_7 == 3)
        x9_2 -= 1
        x8_2 = zx.q(x8_2.d - 1)
        x10_7 -= 0xd8
        *(arg2 + 0x1f78) = x8_2.d
        
        if (x9_2 s<= 1)
            goto label_b246f8

int128_t var_e8
int64_t var_d8
int128_t var_a0
int128_t var_90
int128_t var_80
int128_t var_70

if (x8_2.d == 0x20)
    v1 = var_178.o
    *(arg2 + 0x1f98) = var_c0_1
    *(arg2 + 0x1f88) = var_170
    *(arg2 + 0x1f78) = v1
    *(arg2 + 0x1fd8) = var_80
    *(arg2 + 0x1fc8) = var_90
    *(arg2 + 0x1fb8) = var_a0
    *(arg2 + 0x1fa8) = var_150
    *(arg2 + 0x2008) = var_e8
    *(arg2 + 0x1ff8) = var_100
    *(arg2 + 0x1fe8) = var_70
    *(arg2 + 0x2018) = var_d8
    v2.q = 6
    *(arg2 + 0x2038) = var_188.o
    *(arg2 + 0x2028) = arg2.o
    *(arg2 + 0x2020) = 6
    *(arg2 + 0x2048) = 0
else if (x8_2.d != 0)
    *(arg2 + 0x1f78) = x8_2.d + 1
    void* x8_4 = arg2 + muls.dp.d(x8_2.d, 0xd8)
    v1 = var_178.o
    *(x8_4 + 0x498) = var_c0_1
    *(x8_4 + 0x488) = var_170
    *(x8_4 + 0x478) = v1
    *(x8_4 + 0x4d8) = var_80
    v1.q = 6
    *(x8_4 + 0x4c8) = var_90
    *(x8_4 + 0x4b8) = var_a0
    *(x8_4 + 0x4a8) = var_150
    *(x8_4 + 0x518) = var_d8
    *(x8_4 + 0x508) = var_e8
    *(x8_4 + 0x4f8) = var_100
    *(x8_4 + 0x4e8) = var_70
    *(x8_4 + 0x520) = 6
    *(x8_4 + 0x538) = var_188.o
    *(x8_4 + 0x528) = arg2.o
    *(x8_4 + 0x548) = 0
else
label_b246f8:
    result, v0, v1, v2, v3 =
        MoveComponent<DomLoc, DomMoveCallback>::Move(arg2 + 0x258, &var_178, 6, nullptr)
int64_t x8_5 = sx.q(*(arg2 + 0x1f78))
v2 = *(arg2 + 0x3d0)
v0 = *(arg2 + 0x3b0)
v1 = *(arg2 + 0x3c0)
void* x8_6 = arg2 + x8_5 * 0xd8
*(arg2 + 0x1f78) = x8_5.d + 1
*(x8_6 + 0x498) = v2
*(x8_6 + 0x488) = v1
*(x8_6 + 0x478) = v0
v3 = *(arg2 + 0x400)
v1 = *(arg2 + 0x3e0)
v2 = *(arg2 + 0x3f0)
*(x8_6 + 0x4d8) = *(arg2 + 0x410)
v0.q = 0x3e800000000
*(x8_6 + 0x4c8) = v3
*(x8_6 + 0x4b8) = v2
*(x8_6 + 0x4a8) = v1
v2 = *(arg2 + 0x440)
v3 = *(arg2 + 0x430)
v1 = *(arg2 + 0x420)
*(x8_6 + 0x518) = *(arg2 + 0x450)
*(x8_6 + 0x508) = v2
*(x8_6 + 0x4f8) = v3
*(x8_6 + 0x4e8) = v1
*(x8_6 + 0x530) = 4
v1.q = 0
v1:8.q = 0
*(x8_6 + 0x528) = arg2
*(x8_6 + 0x53c) = 0
*(x8_6 + 0x534) = 0
*(x8_6 + 0x544) = 0x3e800000000
*(x8_6 + 0x520) = 0xb
int32_t x10_27 = *(arg3 + 0x5c)
int64_t x11_3 = *(arg3 + 0x60)
int128_t* entry_x8
__builtin_memset(entry_x8, 0, 0x78)
v0 = entry_x8[2]
v1 = entry_x8[3]
*(entry_x8 + 0x78) = arg2
int128_t var_150_1 = v0
int128_t var_140_1 = v1
v0 = entry_x8[6]
v1 = entry_x8[7]
*(entry_x8 + 8) = x21
*(entry_x8 + 0xc) = x23
*(entry_x8 + 0x18) = 0
*entry_x8 = 6
*(entry_x8 + 4) = x10_27
entry_x8[1].q = x11_3
var_178 = 1
v3 = entry_x8[5]
int128_t var_100_1 = v1
int128_t var_110_1 = v0
v1 = entry_x8[1]
int32_t var_190_1 = 1
int32_t var_18c_1 = x10_27
int64_t var_188_1 = 0
int64_t var_180_1 = 0
int128_t var_130_1 = entry_x8[4]
int128_t var_170_1 = *entry_x8
var_180_1.d = (x10_27 == 2 ? 1 : 0) << 2
uint64_t x8_9 = zx.q(*(arg2 + 0x1f78))

if (x8_9.d s>= 1)
    int64_t x9_10 = x8_9 + 1
    int32_t* x10_29 = arg2 + x8_9 * 0xd8 + 0x448
    
    while (*x10_29 == 3)
        x9_10 -= 1
        x8_9 = zx.q(x8_9.d - 1)
        x10_29 -= 0xd8
        *(arg2 + 0x1f78) = x8_9.d
        
        if (x9_10 s<= 1)
            return MoveComponent<DomLoc, DomMoveCallback>::Move(arg2 + 0x258, &var_178, 6, nullptr)

if (x8_9.d == 0x20)
    v0 = v1
    v1 = var_178.o
    *(arg2 + 0x1f98) = v0
    *(arg2 + 0x1f88) = var_170_1
    *(arg2 + 0x1f78) = v1
    *(arg2 + 0x1fd8) = v3
    *(arg2 + 0x1fc8) = var_130_1
    *(arg2 + 0x1fb8) = var_140_1
    *(arg2 + 0x1fa8) = var_150_1
    *(arg2 + 0x2008) = var_e8
    *(arg2 + 0x1ff8) = var_100_1
    *(arg2 + 0x1fe8) = var_110_1
    *(arg2 + 0x2018) = var_d8
    *(arg2 + 0x2038) = var_188_1.o
    *(arg2 + 0x2028) = arg2.o
    *(arg2 + 0x2020) = 6
    *(arg2 + 0x2048) = 0
else
    if (x8_9.d == 0)
        return MoveComponent<DomLoc, DomMoveCallback>::Move(arg2 + 0x258, &var_178, 6, nullptr)
    
    *(arg2 + 0x1f78) = x8_9.d + 1
    v0 = v1
    void* x8_11 = arg2 + muls.dp.d(x8_9.d, 0xd8)
    v1 = var_178.o
    *(x8_11 + 0x498) = v0
    *(x8_11 + 0x488) = var_170_1
    *(x8_11 + 0x478) = v1
    *(x8_11 + 0x4d8) = v3
    v1.q = 6
    *(x8_11 + 0x4c8) = var_130_1
    *(x8_11 + 0x4b8) = var_140_1
    *(x8_11 + 0x4a8) = var_150_1
    *(x8_11 + 0x518) = var_d8
    *(x8_11 + 0x508) = var_e8
    *(x8_11 + 0x4f8) = var_100_1
    *(x8_11 + 0x4e8) = var_110_1
    *(x8_11 + 0x520) = 6
    *(x8_11 + 0x538) = var_188_1.o
    *(x8_11 + 0x528) = arg2.o
    *(x8_11 + 0x548) = 0

return result
