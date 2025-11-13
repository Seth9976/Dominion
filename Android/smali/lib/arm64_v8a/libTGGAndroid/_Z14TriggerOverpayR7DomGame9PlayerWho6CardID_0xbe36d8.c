// 函数: _Z14TriggerOverpayR7DomGame9PlayerWho6CardID
// 地址: 0xbe36d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg3 & 0xffff

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x21 = *(arg1 + 0xd50)
int32_t x22_1 = *(arg1 + mulu.dp.d(x22, 0x68) + 0x1a70)
int32_t x8_10 = (x22_1 + (x21 << 0x10)) s% 0x3e5
int32_t* x9_3 = *(&data_1838a20 + (sx.q(x8_10) << 3))
void* result

if (x9_3 != 0)
    while (*x9_3 != x22_1 || x9_3[1] != x21)
        x9_3 = *(x9_3 + 0x10)
        
        if (x9_3 == 0)
            goto label_be37a0
    
    result = *(x9_3 + 8)
else
label_be37a0:
    DomDefGetSlow(zx.q(x22_1), zx.q(x21))
    int32_t* x0_3 = malloc(0x18)
    int64_t x8_11 = sx.q(x8_10) << 3
    int64_t x9_4 = *(&data_1838a20 + x8_11)
    *x0_3 = x22_1
    x0_3[1] = x21
    *(&data_1838a20 + x8_11) = x0_3
    *(x0_3 + 0x10) = x9_4
    result = DomDefGetSlow(zx.q(x22_1), zx.q(x21))
    *(x0_3 + 8) = result

int64_t x8_12 = 0
int32_t* x9_5 = result + 0xe0

for (int32_t i = *x9_5; i != 0; i = *x9_5)
    if (i == 0x14)
        void* x8_14 = result + (x8_12 & 0xffffffff) * 0xc0
        return Overpay_Pay(arg1, zx.q(arg3), (*(x8_14 + 0x194) u>> 0xa).b & 1, *(x8_14 + 0xf8))
            __tailcall
    
    x8_12 += 1
    x9_5 = &x9_5[0x30]

return result
