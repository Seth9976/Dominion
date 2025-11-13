// 函数: _Z16QueueChoiceWhereR7DomGameRK13DomActiveItem9PlayerWhoP6CardIDP8DomWhereiS8_iRK11DomChoiceUI15DomChoiceAIHint
// 地址: 0xbe6cd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg6 == 0)
    return 

int32_t x24_1 = arg3

if (arg8 s<= 1)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t x3

if (*(arg1 + 0x19d4) == x24_1)
    x3 = zx.q(*(arg1 + 0x19d8))
else
    x3 = zx.q(x24_1)

int32_t var_68_1 = 0
int32_t var_70_1 = arg10.d
DomChoiceUI const& var_78_1 = arg9
int32_t var_80_1 = arg8
DomNotifyYieldWheres(arg1, arg2, zx.q(x24_1), x3, arg4, arg5, zx.q(arg6), arg7)
