// 函数: _ZN5Botan6Sodium25sodium_mprotect_readwriteEPv
// 地址: 0xe371d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = sysconf(0x27)
int64_t x1

x1 = x0 s> 1 ? x0 : 0x1000

mprotect(arg1, x1, 3)
return 0
