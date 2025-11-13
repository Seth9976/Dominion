// 函数: _Z15GetLocalProfile9PlayerWho
// 地址: 0xb4ea9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_2 = GameGetPlayer(ActiveGame() + 8, zx.q(arg1))
int32_t x8 = *(x0_2 + 0x14)

if (x8 == 1)
    if (*(x0_2 + 0x18) == *(GetActiveProfile() + 0x42ac))
        return GetActiveProfile()
else if (x8 == 0x3e8)
    return GameProfilesTryGetByIndex(zx.q(*(x0_2 + 0x18))) __tailcall

return 0
