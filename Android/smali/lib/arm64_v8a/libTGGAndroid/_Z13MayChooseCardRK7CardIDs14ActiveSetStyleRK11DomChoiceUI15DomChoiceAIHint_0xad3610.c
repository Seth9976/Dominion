// 函数: _Z13MayChooseCardRK7CardIDs14ActiveSetStyleRK11DomChoiceUI15DomChoiceAIHint
// 地址: 0xad3610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) != 0)
    int32_t* x0
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0, v0_1, v1_1, v2_1 = DomGetContext()
    int64_t var_50_1 = *(arg3 + 0x30)
    int128_t var_60_1 = *(arg3 + 0x20)
    int128_t var_70_1 = *(arg3 + 0x10)
    int128_t var_80 = *arg3
    var_60_1:8.q = *(x0 + 0x40)
    int32_t var_d08
    memcpy(&var_d08, arg1, 0xc84)
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_38 = *x0
    int32_t var_34_1 = x0[7]
    int32_t var_d10_1 = 0
    int32_t var_d18_1 = 0
    int32_t var_d20_1 = arg4
    int128_t* var_d28_1 = &var_80
    int32_t var_d30_1 = arg2
    int32_t var_88
    
    if (QueueChoiceCards(x0_2, &var_38, zx.q(x0[6]), 1, &var_d08, zx.q(var_88), 1, 0) != 0)
        return zx.q(var_d08)

return 0
