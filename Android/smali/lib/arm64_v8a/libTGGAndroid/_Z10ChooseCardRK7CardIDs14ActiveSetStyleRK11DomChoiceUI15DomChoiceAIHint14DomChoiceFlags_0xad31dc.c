// 函数: _Z10ChooseCardRK7CardIDs14ActiveSetStyleRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xad31dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) == 0)
    return 0

int32_t x21_1 = arg5
int32_t x0_2 = CardWhat(*(DomGetContext() + 8), zx.q(*arg1))
int32_t x8_1 = *(arg1 + 0xc80)

if (x8_1 s< 2)
label_ad3268:
    
    if ((x21_1 & 1) == 0)
        uint64_t result = zx.q(*arg1)
        
        if (result.d != 0)
            return result
else
    int64_t x26_1 = 1
    
    while (true)
        int32_t x0_5 = CardWhat(*(DomGetContext() + 8), zx.q(*(arg1 + (x26_1 << 2))))
        x8_1 = *(arg1 + 0xc80)
        
        if (x0_5 != x0_2)
            break
        
        x26_1 += 1
        
        if (x26_1 s>= sx.q(x8_1))
            goto label_ad3268

if (x8_1 != 0)
    int32_t* x0_6
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_6, v0_1, v1_1, v2_1 = DomGetContext()
    int64_t var_60_1 = *(arg3 + 0x30)
    int128_t var_70_1 = *(arg3 + 0x20)
    int128_t var_80_1 = *(arg3 + 0x10)
    int128_t var_90 = *arg3
    var_70_1:8.q = *(x0_6 + 0x40)
    int32_t var_d18
    memcpy(&var_d18, arg1, 0xc84)
    uint64_t x2 = zx.q(x0_6[6])
    int32_t x8_4 = x0_6[7]
    DomGame* x0_8 = *(x0_6 + 8)
    int32_t var_d20 = *x0_6
    int32_t var_d1c_1 = x8_4
    int32_t var_d30_1 = 0
    int32_t var_d38_1 = x21_1
    int32_t var_d40_1 = arg4
    int128_t* var_d48_1 = &var_90
    int32_t var_d50_1 = arg2
    int32_t var_98
    
    if (QueueChoiceCards(x0_8, &var_d20, x2, 1, &var_d18, zx.q(var_98), 1, 1) != 0)
        return zx.q(var_d18)

pthread_kill(pthread_self(), 6)
uint64_t x0_11
int64_t x1_4
x0_11, x1_4 = XNoReturn()
return TrashOne(x0_11, x1_4) __tailcall
