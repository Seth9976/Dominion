// 函数: _Z13dumpBacktracePPvm
// 地址: 0x1061d18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 

int64_t x21_1 = 0

do
    struct Dl_info info
    dladdr(arg1[x21_1], &info)
    XLog("%d: %0X %s")
    x21_1 += 1
while (arg2 != x21_1)
