// 函数: _Z16ChooseCardsRangeRK7CardIDsii14ActiveSetStyleRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags16DomChoiceAIFlags
// 地址: 0xad2cc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x8

if (*(arg1 + 0xc80) == 0)
    return memset(entry_x8, 0, 0xc84) __tailcall

int32_t* x0
int128_t v0
int128_t v1
int128_t v2
x0, v0, v1, v2 = DomGetContext()
int64_t var_70 = *(arg5 + 0x30)
int128_t var_80 = *(arg5 + 0x20)
int128_t var_90 = *(arg5 + 0x10)
int128_t var_a0 = *arg5
var_80:8.q = *(x0 + 0x40)
CardID var_d28
memcpy(&var_d28, arg1, 0xc84)
uint64_t x2 = zx.q(x0[6])
int32_t x8_2 = x0[7]
DomGame* x0_2 = *(x0 + 8)
int32_t var_d30 = *x0
int32_t var_d2c = x8_2
int32_t var_d40 = arg8
int32_t var_d48 = arg7
int32_t var_d50 = arg6
int128_t* var_d58 = &var_a0
int32_t var_d60 = arg4
int32_t var_a8
int32_t var_a8_1 =
    QueueChoiceCards(x0_2, &var_d30, x2, 1, &var_d28, zx.q(var_a8), zx.q(arg3), zx.q(arg2))
return memcpy(entry_x8, &var_d28, 0xc84)
