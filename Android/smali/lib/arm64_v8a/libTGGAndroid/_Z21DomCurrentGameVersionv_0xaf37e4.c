// 函数: _Z21DomCurrentGameVersionv
// 地址: 0xaf37e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) == 0)
    return 0x18

return zx.q(*(ActiveGame() + 0x30))
