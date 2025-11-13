// 函数: sub_ab53f0
// 地址: 0xab53f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_ca0
int32_t i_2 = CardsSupplyTypes(&var_ca0)

if (i_2 s< 1)
    return 

uint64_t i_1 = zx.q(i_2)
void* x20_1 = &var_ca0
uint64_t i

do
    if ((CardIs(zx.q(*x20_1), 8) & 1) != 0)
        AddTokenToBoardPile(0x600, zx.q(*x20_1))
    
    i = i_1
    i_1 -= 1
    x20_1 += 4
while (i != 1)
