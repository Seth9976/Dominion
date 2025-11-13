// 函数: _Z13XFindFileNextR15XFileSearchData
// 地址: 0x1069178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct dirent64* x0_1 = readdir(*arg1)
*(arg1 + 8) = x0_1
return zx.q(x0_1 != 0 ? 1 : 0)
