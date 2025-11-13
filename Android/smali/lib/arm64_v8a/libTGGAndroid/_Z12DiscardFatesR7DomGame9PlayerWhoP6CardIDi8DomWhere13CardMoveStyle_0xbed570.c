// 函数: _Z12DiscardFatesR7DomGame9PlayerWhoP6CardIDi8DomWhere13CardMoveStyle
// 地址: 0xbed570
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* x21 = arg3
uint64_t x25

if (arg4 s<= 0)
    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_16 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
    *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_17 = *(x8_16 - 0x90)
    *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x25 = zx.q(*x21)
    
    if (x25.d u>= 0x320)
    label_bed5bc:
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
else
    x25 = zx.q(*x21)
    
    if (x25.d u>= 0x320)
        goto label_bed5bc

int32_t x24 = *(arg1 + 0xd50)
int32_t x25_1 = *(arg1 + x25 * 0x68 + 0x1a70)
int32_t x8_10 = (x25_1 + (x24 << 0x10)) s% 0x3e5
int32_t* x9_3 = *(&data_1838a20 + (sx.q(x8_10) << 3))
void* result

if (x9_3 != 0)
    while (*x9_3 != x25_1 || x9_3[1] != x24)
        x9_3 = *(x9_3 + 0x10)
        
        if (x9_3 == 0)
            goto label_bed658
    
    result = *(x9_3 + 8)
else
label_bed658:
    DomDefGetSlow(zx.q(x25_1), zx.q(x24))
    int32_t* x0_3 = malloc(0x18)
    int64_t x8_11 = sx.q(x8_10) << 3
    int64_t x9_4 = *(&data_1838a20 + x8_11)
    *x0_3 = x25_1
    x0_3[1] = x24
    *(&data_1838a20 + x8_11) = x0_3
    *(x0_3 + 0x10) = x9_4
    result = DomDefGetSlow(zx.q(x25_1), zx.q(x24))
    *(x0_3 + 8) = result

void* __offset(DomGame, 0x15a0) x9_5 = arg1 + 0x15a0
int32_t x10_3

if ((zx.d(*(result + 0xcb)) & 2) == 0)
    x10_3 = 0xd30
else
    x10_3 = 0xd3d

int64_t x8_13 = -0x41

while (true)
    int32_t x24_1
    
    if (*(x9_5 - 4) == x10_3 || *x9_5 == x10_3)
        x24_1 = x8_13.d + 0x48
        
        if (arg4 s< 1)
            break
    else
        int64_t temp0_1 = x8_13
        x8_13 += 1
        x9_5 += 0x10
        
        if (temp0_1 u< -1)
            continue
        else
            x24_1 = 0
            
            if (arg4 s< 1)
                break
    
    uint64_t i_1 = zx.q(arg4)
    uint64_t i
    
    do
        MarkFateDiscarded(arg1, zx.q(*x21), true)
        uint64_t x2 = zx.q(*x21)
        x21 += 4
        int32_t var_68_1 = 0
        int64_t var_70_1 = 0
        int32_t var_78_1 = 0
        int32_t var_80_1 = 0
        int32_t var_88_1 = 0
        int64_t var_90_1 = 0
        result = MoveCardTo(arg1, 0xffffffff, x2, zx.q(arg5), zx.q(arg6), zx.q(x24_1), 0, 0)
        i = i_1
        i_1 -= 1
    while (i != 1)
    break

return result
