// 函数: _Z10Journeymanv
// 地址: 0xa79824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = NameCardInDeckDiscard(0x1e)
int32_t var_38 = 0
int32_t var_cc0 = 0
int32_t i_2 = RevealDeckOne(0x3ee, 0x7e44bc)
void var_1940
void var_cb8

if (i_2 != 0)
    int32_t i_1 = i_2
    int32_t x22_1 = 0
    int32_t i
    
    do
        if ((CardIs(zx.q(i_1), zx.q(x0)) & 1) != 0)
            operator+=(&var_1940, zx.q(i_1))
        else
            operator+=(&var_cb8, zx.q(i_1))
            x22_1 += 1
            
            if (x22_1 == 3)
                PauseUI(true)
                break
        
        i = RevealDeckOne(0x3ee, 0x7e44bc)
        i_1 = i
    while (i != 0)

MoveToHand(&var_cb8, 0x3ee)
return DiscardCards(&var_1940, 0x3ee, 0xb, 7, 0)
