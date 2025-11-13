// 函数: sub_c05564
// 地址: 0xc05564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(*arg2)
void* x21 = *(arg1 + 8)

if (x20.d u> 0x31f)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    
    if ((zx.d(*(x21 + mulu.dp.d(x20.d, 0x68) + 0x1a90)) & 1) != 0)
        return 0
    
    x21 = *(arg1 + 8)
    x20 = zx.q(x20.d)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_10 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_11 = *(x8_10 - 0x90)
    *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
else if ((zx.d(*(x21 + x20 * 0x68 + 0x1a90)) & 1) != 0)
    return 0

int32_t x19_2 = *(x21 + 0xd50)
int32_t x20_1 = *(x21 + x20 * 0x68 + 0x1a70)
int32_t x8_17 = (x20_1 + (x19_2 << 0x10)) s% 0x3e5
int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_17) << 3))
void* x0_7

if (x9_5 != 0)
    while (*x9_5 != x20_1 || x9_5[1] != x19_2)
        x9_5 = *(x9_5 + 0x10)
        
        if (x9_5 == 0)
            goto label_c056a8
    
    x0_7 = *(x9_5 + 8)
else
label_c056a8:
    DomDefGetSlow(zx.q(x20_1), zx.q(x19_2))
    int32_t* x0_5 = malloc(0x18)
    int64_t x8_18 = sx.q(x8_17) << 3
    int64_t x9_6 = *(&data_1838a20 + x8_18)
    *x0_5 = x20_1
    x0_5[1] = x19_2
    *(&data_1838a20 + x8_18) = x0_5
    *(x0_5 + 0x10) = x9_6
    x0_7 = DomDefGetSlow(zx.q(x20_1), zx.q(x19_2))
    *(x0_5 + 8) = x0_7

return zx.q((zx.d(*(x0_7 + 0xcb)) & 0x40) == 0 ? 1 : 0)
