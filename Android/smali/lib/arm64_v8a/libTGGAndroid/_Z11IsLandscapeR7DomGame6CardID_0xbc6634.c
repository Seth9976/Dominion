// 函数: _Z11IsLandscapeR7DomGame6CardID
// 地址: 0xbc6634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(arg2)

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x19 = *(arg1 + 0xd50)
int32_t x20_1 = *(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)
int32_t x8_10 = (x20_1 + (x19 << 0x10)) s% 0x3e5
int32_t* x9_3 = *(&data_1838a20 + (sx.q(x8_10) << 3))
void* x0_5

if (x9_3 != 0)
    while (*x9_3 != x20_1 || x9_3[1] != x19)
        x9_3 = *(x9_3 + 0x10)
        
        if (x9_3 == 0)
            goto label_bc66f4
    
    x0_5 = *(x9_3 + 8)
else
label_bc66f4:
    DomDefGetSlow(zx.q(x20_1), zx.q(x19))
    int32_t* x0_3 = malloc(0x18)
    int64_t x8_11 = sx.q(x8_10) << 3
    int64_t x9_4 = *(&data_1838a20 + x8_11)
    *x0_3 = x20_1
    x0_3[1] = x19
    *(&data_1838a20 + x8_11) = x0_3
    *(x0_3 + 0x10) = x9_4
    x0_5 = DomDefGetSlow(zx.q(x20_1), zx.q(x19))
    *(x0_3 + 8) = x0_5

return zx.q((*(x0_5 + 0xc8) & 0x9407f000400) != 0 ? 1 : 0)
