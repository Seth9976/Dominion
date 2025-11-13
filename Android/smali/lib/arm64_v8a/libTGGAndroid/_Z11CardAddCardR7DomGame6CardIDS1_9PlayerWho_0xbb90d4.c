// 函数: _Z11CardAddCardR7DomGame6CardIDS1_9PlayerWho
// 地址: 0xbb90d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x22 = zx.d(arg2)
int32_t x19 = arg4

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x10 = arg1 + mulu.dp.d(x22, 0x68)
*(x10 + 0x1a74) = 0x474
int32_t x9_3 = *(arg1 + 0x19b4)
uint64_t x8_5 = zx.q(x22)
*(arg1 + 0x19b4) = x9_3 + 1
*(x10 + 0x1a78) = x9_3
*(x10 + 0x1a8c) = arg3
*(x10 + 0x1ac8) = 0

if (x19 != 0xffffffff)
    *(arg1 + x8_5 * 0x68 + 0x1a98) = x19

void* x8_6 = arg1 + x8_5 * 0x68
*(x8_6 + 0x1a94) = x19
*(x8_6 + 0x1a9c) = x19
