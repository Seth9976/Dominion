// 函数: _Z11CardAddTailR7DomGame6CardID8DomWhere9PlayerWho
// 地址: 0xbb91a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3
int32_t x20 = arg2
int32_t x19 = arg4
int32_t* result = GetPileTail(arg1, zx.q(arg3), zx.q(arg4))
int32_t x24 = x20 & 0xffff
int32_t* result_1 = result

if (x24 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    result = XTrace("game thread resume (error)")

uint64_t x8_5 = zx.q(x24)

if (x23 != 0x451 && (x23 != 0x3e9 || *(arg1 + x8_5 * 0x68 + 0x1a74) != 0x451))
    int32_t x9_5 = *(arg1 + 0x19b4)
    *(arg1 + 0x19b4) = x9_5 + 1
    *(arg1 + x8_5 * 0x68 + 0x1a78) = x9_5

void* x9_6 = arg1 + x8_5 * 0x68
*(x9_6 + 0x1a74) = x23
*(x9_6 + 0x1ac8) = 0

if (x19 != 0xffffffff)
    *(arg1 + x8_5 * 0x68 + 0x1a98) = x19

void* x8_6 = arg1 + x8_5 * 0x68
*(x8_6 + 0x1a94) = x19
*(x8_6 + 0x1a9c) = x19
*result_1 = x20
return result
