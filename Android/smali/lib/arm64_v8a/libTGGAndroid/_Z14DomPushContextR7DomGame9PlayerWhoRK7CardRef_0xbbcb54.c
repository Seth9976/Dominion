// 函数: _Z14DomPushContextR7DomGame9PlayerWhoRK7CardRef
// 地址: 0xbbcb54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)

if (x8_1 s>= 0x200)
    void* x8_2 = __emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_1 - 1, 0x98)
    *(*(x8_2 + 8) + 0x1a28) = 0xffffffff
    void* x8_3 = *(x8_2 + 8)
    *(x8_3 + 0x1a2c) = *(x8_3 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x0_4 = IsDomContextStackEmpty()
void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
int64_t x24 = sx.q(*(x0_6 + 0x13000))
int32_t x10 = x0_4 & 1
int32_t x25 = 0
*(x0_6 + 0x13000) = x24.d + 1
int32_t* result = x0_6 + x24 * 0x98
result[6] = arg2
void* x23_1

if (x10 != 0)
    x23_1 = nullptr
else
    x23_1 = x0_6 + muls.dp.d(x24.d - 1, 0x98)

*result = 2
*(result + 8) = arg1
*(result + 0x10) = x23_1
int64_t x8_5 = *arg3
*(result + 0x30) = 0
*(result + 0x1c) = x8_5
int64_t x9_3 = sx.q(*(arg1 + 0x1a14))
*(arg1 + 0x1a14) = x9_3.d + 1
*(result + 0x40) = x9_3 | x8_5 << 0x20
result[0x17] = 0
result[0xe] = 0
result[0x13] = 0

if (x10 == 0)
    x25 = *(x23_1 + 0x50)

*(__emutls_get_address(__emutls_v.gContextStack_tl) + x24 * 0x98 + 0x50) = x25
uint64_t x25_1 = zx.q(*arg3)

if (x25_1.d u>= 0x320)
    void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_10 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
    *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_11 = *(x8_10 - 0x90)
    *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x19_1

if (*(arg1 + x25_1 * 0x68 + 0x1a94) != 0xffffffff)
    x19_1 = *arg3
else if ((x0_4 & 1) == 0)
    x19_1 = *(x23_1 + 0x48)
else
    x19_1 = 0

*(__emutls_get_address(__emutls_v.gContextStack_tl) + x24 * 0x98 + 0x48) = x19_1
return result
