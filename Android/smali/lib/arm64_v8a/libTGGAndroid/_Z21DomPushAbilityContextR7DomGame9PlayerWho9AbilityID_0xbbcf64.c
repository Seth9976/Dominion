// 函数: _Z21DomPushAbilityContextR7DomGame9PlayerWho9AbilityID
// 地址: 0xbbcf64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
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
int64_t x23 = sx.q(*(x0_6 + 0x13000))
int32_t x24 = x0_4 & 1
int32_t* result = x0_6 + x23 * 0x98
*(x0_6 + 0x13000) = x23.d + 1
result[6] = arg2
result[7] = x20
uint64_t x20_1 = zx.q(x20)
void* x21_1

if (x24 != 0)
    x21_1 = nullptr
else
    x21_1 = x0_6 + muls.dp.d(x23.d - 1, 0x98)

*result = 3
*(result + 0x30) = 0
*(result + 8) = arg1
*(result + 0x10) = x21_1
int64_t x0_8 = AbilitySourceCardRef(arg1, x20_1)
int64_t x8_5 = sx.q(*(arg1 + 0x1a14))
*(arg1 + 0x1a14) = x8_5.d + 1
*(result + 0x40) = x8_5 | x0_8 << 0x20
result[0x17] = 0
result[0xe] = 0
int32_t x19_1 = 0
result[0x12] = AbilitySourceCardRef(arg1, x20_1)
result[0x13] = 0

if (x24 == 0)
    x19_1 = *(x21_1 + 0x50)

*(__emutls_get_address(__emutls_v.gContextStack_tl) + x23 * 0x98 + 0x50) = x19_1
return result
