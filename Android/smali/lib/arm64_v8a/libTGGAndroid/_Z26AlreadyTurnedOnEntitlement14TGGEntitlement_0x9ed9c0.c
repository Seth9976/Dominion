// 函数: _Z26AlreadyTurnedOnEntitlement14TGGEntitlement
// 地址: 0x9ed9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = GetActiveProfile()

for (int32_t* i =
        *(*(x0 + 0x5750) + ((zx.q(*(x0 + 0x5758)) & (zx.q(x19) | zx.q(x19 s>> 4))) << 3)); i != 0; 
        i = *(i + 8))
    if (*i == x19)
        return zx.q(i[1] == 1 ? 1 : 0)

return 0
