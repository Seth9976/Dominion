// 函数: _Z7IsTrait11DomCardEnum
// 地址: 0xb1114c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1

if (*(GetClient() + 0x5068) == 0)
    x1 = 0x18
else
    x1 = zx.q(*(ActiveGame() + 0x30))

return zx.q(*(DomDefGet(zx.q(arg1), x1) + 0xcd)) & 1
