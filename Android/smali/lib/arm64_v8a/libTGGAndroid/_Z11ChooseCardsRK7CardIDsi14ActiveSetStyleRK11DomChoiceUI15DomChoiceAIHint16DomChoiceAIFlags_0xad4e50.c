// 函数: _Z11ChooseCardsRK7CardIDsi14ActiveSetStyleRK11DomChoiceUI15DomChoiceAIHint16DomChoiceAIFlags
// 地址: 0xad4e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x8

if (*(arg1 + 0xc80) == 0)
    return memset(entry_x8, 0, 0xc84) __tailcall

int32_t* x0
int128_t v0
int128_t v1
int128_t v2
x0, v0, v1, v2 = DomGetContext()
int64_t var_60 = *(arg4 + 0x30)
int128_t var_70 = *(arg4 + 0x20)
int128_t var_80 = *(arg4 + 0x10)
int128_t var_90 = *arg4
var_70:8.q = *(x0 + 0x40)
CardID var_d18
memcpy(&var_d18, arg1, 0xc84)
uint64_t x2 = zx.q(x0[6])
int32_t x8_2 = x0[7]
DomGame* x0_2 = *(x0 + 8)
int32_t var_d20 = *x0
int32_t var_d1c = x8_2
int32_t var_d30 = arg6
int32_t var_d38 = 0
int32_t var_d40 = arg5
int128_t* var_d48 = &var_90
int32_t var_d50 = arg3
int32_t var_98
int32_t var_98_1 =
    QueueChoiceCards(x0_2, &var_d20, x2, 1, &var_d18, zx.q(var_98), zx.q(arg2), zx.q(arg2))
return memcpy(entry_x8, &var_d18, 0xc84)
