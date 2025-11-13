// 函数: _Z10MoveTokensR7DomGame8DomWhere9PlayerWhoS1_12DomTokenTypeiS2_
// 地址: 0xbe26c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg5

if (arg2 - 7 u>= 0x41)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t var_48 = 0
int32_t var_50 = 0xffffffff
AddTokens(arg1, 0xffffffff, zx.q(x21), zx.q(neg.d(arg6)), zx.q(arg2), 0, 0, 0)
int32_t var_48_1 = 0
int32_t var_50_1 = arg7
return AddTokens(arg1, zx.q(arg3), zx.q(x21), zx.q(arg6), zx.q(arg4), 0, 0, 0)
