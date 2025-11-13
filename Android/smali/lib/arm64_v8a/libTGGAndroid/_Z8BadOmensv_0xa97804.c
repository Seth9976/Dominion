// 函数: _Z8BadOmensv
// 地址: 0xa97804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MovePileTo(0x3eb, 0x3ec, 8, false)
LookThroughDiscard()
CardsWhereWhat(0x3ec, 0x104)
int32_t var_18
int32_t x8 = var_18

if (x8 s<= 1)
    int64_t result = RevealDiscardTemp()
    x8 = var_18
    
    if (x8 == 0)
        return result

int32_t x8_1

x8_1 = x8 s< 2 ? x8 : 2

int32_t var_18_1 = x8_1
void var_c98
return MoveToTopDeck(&var_c98, 0x3ec)
