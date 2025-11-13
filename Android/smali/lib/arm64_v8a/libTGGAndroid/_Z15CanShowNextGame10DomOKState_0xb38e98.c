// 函数: _Z15CanShowNextGame10DomOKState
// 地址: 0xb38e98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(GetClient() + 0x5068)

if (x8 == 1)
    return 1

if (x8 == 2 && *(ActiveGame() + 0x28) != 5)
    return zx.q(*(gDomClient + 0x207a0) != LocalWho() ? 1 : 0)

return 0
