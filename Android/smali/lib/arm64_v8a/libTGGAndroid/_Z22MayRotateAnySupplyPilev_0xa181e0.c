// 函数: _Z22MayRotateAnySupplyPilev
// 地址: 0xa181e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t var_ce0[0xd0]
int32_t x0_2 = SupplyPileTypes(*(x0 + 8), &var_ce0)
int32_t var_1960[0x240]
int32_t x20

if (x0_2 s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        int32_t x0_4 = BoardPileWhere(*(x0 + 8), zx.q(var_ce0[i]))
        void* x0_5 = DomGetContext()
        int32_t j = *GetPileHead(*(x0_5 + 8), zx.q(x0_4), 0xffffffff)
        
        if (j != 0)
            int32_t x0_9 = CardWhat(*(x0_5 + 8), zx.q(j))
            
            do
                if (CardWhat(*(x0_5 + 8), zx.q(j)) != x0_9)
                    var_1960[sx.q(x20)] = var_ce0[i]
                    x20 += 1
                    break
                
                j = *(CardGet(*(x0_5 + 8), zx.q(j)) + 0x60)
            while (j != 0)
        
        i += 1
    while (i != zx.q(x0_2))

ChoiceUI_Lookahead(0xed, zx.q(ThisCard(false, nullptr)), 0)
DomChoiceUI var_1998
int64_t result = ChooseSupplyPile(&var_1960, x20, &var_1998, 0x29, true)

if (result.d == 0)
    return result

int32_t x0_17 = BoardPileWhere(*(x0 + 8), zx.q(result.d))
RotatePile(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x0_17))
return NotifyResult(3)
