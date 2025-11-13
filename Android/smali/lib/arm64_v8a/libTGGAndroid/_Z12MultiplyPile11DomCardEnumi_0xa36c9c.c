// 函数: _Z12MultiplyPile11DomCardEnumi
// 地址: 0xa36c9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
DomGame* x19 = *(DomGetContext() + 8)
int64_t result = BoardPileWhere(x19, zx.q(x21))

if (result.d == 0)
    return result

int32_t x20_1 = result.d
int32_t i = *(DomBoardPile(x19, x20_1) + 8)

if (i != 0)
    if (arg2 s<= 1)
        do
            i = *(CardGet(x19, zx.q(i)) + 0x60)
        while (i != 0)
    else
        int32_t x23_1 = 0
        
        do
            void* x0_5 = CardGet(x19, zx.q(i))
            i = *(x0_5 + 0x60)
            int32_t j_2 = arg2 - 1
            int32_t j
            
            do
                CardCreate(x19, zx.q(*(x0_5 + 8)), zx.q(x20_1), 0xffffffff, x23_1)
                j = j_2
                j_2 -= 1
                x23_1 += 1
            while (j != 1)
            x23_1 += 1
        while (i != 0)

if (x21 == 0xd3d || x21 == 0x1301 || x21 == 0x1128)
label_a36da8:
    CardID var_cd8
    int32_t i_3 = CardsWhere(x19, 0xffffffff, zx.q(x20_1), &var_cd8)
    int32_t i_4 = i_3
    
    if (i_3 s>= 1)
        int32_t i_2 = i_3
        int32_t i_1
        
        do
            int32_t x0_14 = GameRandom(x19, i_2)
            int32_t j_1 = *(DomBoardPile(x19, x20_1) + 8)
            
            if (x0_14 s>= 1 && j_1 != 0)
                int32_t x24_2 = 1
                
                do
                    j_1 = *(CardGet(x19, zx.q(j_1)) + 0x60)
                    
                    if (x24_2 s>= x0_14)
                        break
                    
                    x24_2 += 1
                while (j_1 != 0)
            
            CardRemove(x19, zx.q(j_1), nullptr)
            CardAddTail(x19, zx.q(j_1), zx.q(x20_1), 0xffffffff)
            int64_t var_ce8_1 = 0
            int32_t var_cf0_1 = 0
            int32_t var_cf8_1 = 0
            int32_t var_d00_1 = 0
            NotifyEffect(x19, 9, 0xffffffff, zx.q(j_1), zx.q(x20_1), 0xffffffff, 0, 0xf)
            i_1 = i_2
            i_2 -= 1
        while (i_1 s> 1)

if (x21 == 0x91c || x21 == 0x923 || x21 == 0xd30)
    goto label_a36da8

return UpdateSplitPileInfo(x19, zx.q(x20_1))
