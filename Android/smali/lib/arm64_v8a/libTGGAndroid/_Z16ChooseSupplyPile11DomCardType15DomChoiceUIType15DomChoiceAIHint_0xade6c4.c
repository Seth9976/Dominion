// 函数: _Z16ChooseSupplyPile11DomCardType15DomChoiceUIType15DomChoiceAIHint
// 地址: 0xade6c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = arg1
int32_t var_cd0[0x320]
uint64_t x20 = zx.q(SupplyPileTypes(*(DomGetContext() + 8), &var_cd0))

if (x22 != 0 && x20.d s>= 1)
    int32_t i = 0
    
    do
        if ((*(DomDefGet(zx.q(var_cd0[sx.q(i)]), zx.q(*(*(DomGetContext() + 8) + 0xd50))) + 0xc8)
                & x22) == 0)
            x20 = sx.q(x20.d) - 1
            int64_t i_1 = sx.q(i)
            i -= 1
            var_cd0[i_1] = var_cd0[x20]
        
        i += 1
    while (i s< x20.d)

int128_t var_d10
__builtin_memset(&var_d10, 0, 0x38)
var_d10.d = arg2
int32_t* x0_6 = DomGetContext()
DomGame* x8_5 = *(x0_6 + 8)
int32_t var_48 = *x0_6
int32_t var_44 = x0_6[7]
int32_t var_d18 = arg3
int128_t* var_d20 = &var_d10

if (QueueChoiceCardTypes(x8_5, &var_48, 8, zx.q(x0_6[6]), &var_cd0, zx.q(x20.d), 1, 1) == 0)
    return 0

return zx.q(var_cd0[0])
