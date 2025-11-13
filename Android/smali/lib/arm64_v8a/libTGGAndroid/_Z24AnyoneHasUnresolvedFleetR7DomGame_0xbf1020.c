// 函数: _Z24AnyoneHasUnresolvedFleetR7DomGame
// 地址: 0xbf1020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xd40) s< 1)
    return 0

int32_t x21 = 1
int32_t x0_2
int32_t x9_1

do
    int32_t var_24
    ProjectIsOwned(arg1, zx.q(x21 - 1), 0xe29, &var_24)
    x0_2 = CountOngoing(arg1, zx.q(x21 - 1), 7, 0xe29, 0)
    x9_1 = var_24
    
    if (x21 s>= *(arg1 + 0xd40))
        break
    
    x21 += 1
while (x0_2 s>= x9_1)

return zx.q(x0_2 s< x9_1 ? 1 : 0)
