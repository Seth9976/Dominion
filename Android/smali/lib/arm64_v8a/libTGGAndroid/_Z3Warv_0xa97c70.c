// 函数: _Z3Warv
// 地址: 0xa97c70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = 0
int32_t i_2 = RevealDeckOne(0x3ee, 0x7e71a4)
void var_ca8

if (i_2 != 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        if ((CostBetween(zx.q(i_1), 3, 4) & 1) != 0)
            PauseUI(true)
            TrashDisplay(zx.q(i_1), 0x3ee, 0)
            break
        
        operator+=(&var_ca8, zx.q(i_1))
        i = RevealDeckOne(0x3ee, 0x7e71a4)
        i_1 = i
    while (i != 0)

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
