// 函数: _Z17GetDailyGameIndex5DayID
// 地址: 0xb3ce10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = GetActiveProfile()

for (int32_t* i =
        *(*(x0 + 0x7590) + ((zx.q(*(x0 + 0x7598)) & (zx.q(x20) | zx.q(x20 s>> 4))) << 3)); i != 0; 
        i = *(i + 8))
    if (*i == x20)
        return zx.q(i[1])

void* x0_1 = GetClient()
int32_t x8_2 = *(x0_1 + 0x75f8)

if (x8_2 != 0)
    for (Date* i_1 = *(*(x0_1 + 0x75d8) + ((((0xffff00ff & zx.q(x8_2 << 0x10))
            | zx.q(zx.d((*(x0_1 + 0x75fc)).b) << 8) | zx.q(*(x0_1 + 0x7600))) & zx.q(*(x0_1 + 0x75e0)))
            << 3)); i_1 != 0; i_1 = *(i_1 + 0x28))
        if ((operator!=(x0_1 + 0x75f8, i_1) & 1) == 0)
            if (*(x0 + 0x433c) == *(i_1 + 0x10))
                return zx.q(*(x0 + 0x4334))
            
            break

return 0
