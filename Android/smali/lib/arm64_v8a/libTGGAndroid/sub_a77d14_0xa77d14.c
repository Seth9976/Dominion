// 函数: sub_a77d14
// 地址: 0xa77d14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_84
int32_t i_2 = CardsSupplyTypes(&var_84)

if (i_2 s< 1)
    return 

uint64_t i_1 = zx.q(i_2)
void* x20_1 = &var_84
uint64_t i

do
    if ((CardIs(zx.q(*x20_1), 4, 0x20000) & 1) != 0)
        AddTokens(0x601, zx.q(GetBoardPile(zx.q(*x20_1), false)), 2, 0)
    
    i = i_1
    i_1 -= 1
    x20_1 += 4
while (i != 1)
