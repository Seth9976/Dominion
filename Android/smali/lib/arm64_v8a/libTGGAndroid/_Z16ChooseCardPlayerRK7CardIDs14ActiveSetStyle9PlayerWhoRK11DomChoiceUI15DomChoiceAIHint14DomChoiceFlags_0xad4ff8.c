// 函数: _Z16ChooseCardPlayerRK7CardIDs14ActiveSetStyle9PlayerWhoRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xad4ff8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) == 0)
    return 0

int32_t x22_1 = arg6
int32_t x0_2 = CardWhat(*(DomGetContext() + 8), zx.q(*arg1))

if (*(arg1 + 0xc80) s>= 2)
    int64_t i = 1
    
    do
        if (CardWhat(*(DomGetContext() + 8), zx.q(*(arg1 + (i << 2)))) != x0_2)
            goto label_ad5094
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xc80)))

if ((x22_1 & 1) == 0)
    uint64_t result = zx.q(*arg1)
    
    if (result.d != 0)
        return result

label_ad5094:
int32_t* x0_6
int128_t v0_1
int128_t v1_1
int128_t v2_1
x0_6, v0_1, v1_1, v2_1 = DomGetContext()
int64_t var_70_1 = *(arg4 + 0x30)
int128_t var_80_1 = *(arg4 + 0x20)
int128_t var_90_1 = *(arg4 + 0x10)
int128_t var_a0 = *arg4
var_80_1:8.q = *(x0_6 + 0x40)
int32_t var_d28
memcpy(&var_d28, arg1, 0xc84)
DomGame* x0_8 = *(x0_6 + 8)
int32_t var_58 = *x0_6
int32_t var_54_1 = x0_6[7]
int32_t var_d30_1 = 0
int32_t var_d38_1 = x22_1
int32_t var_d40_1 = arg5
int128_t* var_d48_1 = &var_a0
int32_t var_d50_1 = arg2
int32_t var_a8
int32_t x0_9 = QueueChoiceCards(x0_8, &var_58, zx.q(arg3), 1, &var_d28, zx.q(var_a8), 1, 1)
GameAssert((x0_9 s< 2 ? 1 : 0).b)

if (x0_9 == 0)
    return 0

return zx.q(var_d28)
