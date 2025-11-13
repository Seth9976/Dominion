// 函数: _Z19CalcOwnedIndivScoreR7DomGame9PlayerWho6CardID
// 地址: 0xbf02c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = arg3 & 0xffff

if (x25 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x22 = *(arg1 + 0xd50)
int32_t x23 = *(arg1 + mulu.dp.d(x25, 0x68) + 0x1a70)
int32_t x8_10 = (x23 + (x22 << 0x10)) s% 0x3e5
int32_t* x9_3 = *(&data_1838a20 + (sx.q(x8_10) << 3))
void* x22_1

if (x9_3 != 0)
    while (*x9_3 != x23 || x9_3[1] != x22)
        x9_3 = *(x9_3 + 0x10)
        
        if (x9_3 == 0)
            goto label_bf0398
    
    x22_1 = *(x9_3 + 8)
    
    if (x25 u>= 0x320)
        goto label_bf03e0
else
label_bf0398:
    DomDefGetSlow(zx.q(x23), zx.q(x22))
    int32_t* x0_3 = malloc(0x18)
    int64_t x8_11 = sx.q(x8_10) << 3
    int64_t x9_4 = *(&data_1838a20 + x8_11)
    *x0_3 = x23
    x0_3[1] = x22
    *(&data_1838a20 + x8_11) = x0_3
    *(x0_3 + 0x10) = x9_4
    void* x0_5 = DomDefGetSlow(zx.q(x23), zx.q(x22))
    x22_1 = x0_5
    *(x0_3 + 8) = x0_5
    
    if (x25 u>= 0x320)
    label_bf03e0:
        void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_14 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
        *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_15 = *(x8_14 - 0x90)
        *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")

uint64_t var_58 = zx.q(arg3) | zx.q(*(arg1 + zx.q(x25) * 0x68 + 0x1a78)) << 0x20
DomPushContext(arg1, zx.q(arg2), &var_58)
int32_t x0_9 = (*(x22_1 + 0xd8))()
int32_t* x8_19 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
*x8_19 -= 1
return zx.q(x0_9)
