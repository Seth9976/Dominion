// 函数: _Z10InTutorialv
// 地址: 0x9ae980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) != 1)
    return 0

return zx.q(*(GetClient() + 0x506c) == 0x7fffffff ? 1 : 0)
