// 函数: _Z11CardAddHeadR7DomGame6CardID8DomWhere9PlayerWho
// 地址: 0xbb92c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg4
int32_t x22 = arg3
int32_t x19 = arg2
void* x23
int32_t x24

if (arg3 u> 0x48)
    x24 = x19 & 0xffff
    x23 = arg1 + muls.dp.d(x20, 0x5a30) + (sx.q(x22) << 2) + 0x16fc8
    
    if (x24 u>= 0x320)
    label_bb9384:
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_10 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_11 = *(x8_10 - 0x90)
        *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
else
    if (arg3 == 0x48)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x24 = x19 & 0xffff
    x23 = arg1 + (zx.q(x22) << 4) + 0x1534
    
    if (x24 u>= 0x320)
        goto label_bb9384

uint64_t x8_12 = zx.q(x24)

if (x22 != 0x451 && (x22 != 0x3e9 || *(arg1 + x8_12 * 0x68 + 0x1a74) != 0x451))
    int32_t x9_7 = *(arg1 + 0x19b4)
    *(arg1 + 0x19b4) = x9_7 + 1
    *(arg1 + x8_12 * 0x68 + 0x1a78) = x9_7

*(arg1 + x8_12 * 0x68 + 0x1a74) = x22

if (x20 != 0xffffffff)
    *(arg1 + x8_12 * 0x68 + 0x1a98) = x20

void* x8_13 = arg1 + x8_12 * 0x68
*(x8_13 + 0x1a94) = x20
*(x8_13 + 0x1a9c) = x20
*(x8_13 + 0x1ac8) = *x23
*x23 = x19
