// 函数: _Z10PayoffDebtR7DomGame9PlayerWhoi
// 地址: 0xbc1fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 

int32_t x8_2 = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x18194)
int32_t x19_1 = arg2
int32_t x23_1

x23_1 = x8_2 s> arg3 ? arg3 : x8_2

int32_t x22_1 = arg3 - x23_1

if (arg3 - x23_1 s< 0)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_6 = *(x8_5 - 0x90)
    *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (x22_1 s> GetCoffers(arg1, zx.q(x19_1)))
    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_9 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_10 = *(x8_9 - 0x90)
    *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if (x23_1 != 0)
    AddResource(arg1, zx.q(x19_1), 0, neg.d(x23_1), 0, 2)

if (x22_1 != 0)
    RemoveCoffers(arg1, zx.q(x19_1), x22_1, 0)

int32_t var_38_1 = 0
int32_t var_40_1 = 0xffffffff
AddTokens(arg1, zx.q(x19_1), 0xc00, zx.q(neg.d(arg3)), 0x476, 0, 0, 0)
