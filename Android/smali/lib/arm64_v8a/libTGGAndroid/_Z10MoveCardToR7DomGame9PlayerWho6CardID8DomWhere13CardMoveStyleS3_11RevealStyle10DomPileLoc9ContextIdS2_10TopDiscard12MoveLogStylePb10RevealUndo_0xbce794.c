// 函数: _Z10MoveCardToR7DomGame9PlayerWho6CardID8DomWhere13CardMoveStyleS3_11RevealStyle10DomPileLoc9ContextIdS2_10TopDiscard12MoveLogStylePb10RevealUndo
// 地址: 0xbce794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3 & 0xffff
int32_t x26 = arg4
int32_t x23 = arg3

if (x19 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_6 = *(arg1 + mulu.dp.d(x19, 0x68) + 0x1a74)

if (x8_6 == 0x3eb && *(arg1 + sx.q(*(arg1 + zx.q(x19) * 0x68 + 0x1a94)) * 0x5a30 + 0x17f74) != x23)
    return 0

if (x26 != 7)
    if ((x26 != 0x451 || x8_6 != 0x3e9) && x8_6 != x26
            && ((x26 == 0x3e9 ? 1 : 0) & (x8_6 == 0x451 ? 1 : 0)) == 0)
        return 0
else if (x8_6 - 7 u>= 0x41)
    return 0

int32_t var_ce0
int32_t x0_4 = CardsWhere(arg1, 0xffffffff, 5, &var_ce0)

if (x0_4 != 0)
    if (x0_4 != 1)
        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_11 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
        *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_12 = *(x8_11 - 0x90)
        *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x0_4 = var_ce0

if (x0_4 == x23)
    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_15 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
    *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_16 = *(x8_15 - 0x90)
    *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t var_d00_1 = arg14.d
bool* var_d08_1 = arg13
int32_t var_d10_1 = arg11.d
int32_t var_d18_1 = arg12.d
int32_t var_d20_1 = arg10.d
MoveCardToSafe(arg1, zx.q(arg2), zx.q(x23), zx.q(arg5), zx.q(arg6), zx.q(arg7), arg8, arg9.q)
return 1
