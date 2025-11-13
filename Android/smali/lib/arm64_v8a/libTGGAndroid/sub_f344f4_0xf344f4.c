// 函数: sub_f344f4
// 地址: 0xf344f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = **(arg1 + 0x10)
int64_t x8_1 = x19[2]
int64_t x0 = *x19
size_t x9 = x8_1 - x0
size_t x2 = x19[1] - x0
int64_t x10_1 = x9 s>> 2
int64_t x11 = x2 s>> 2

if (x10_1 u> x11)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x19)
    x0 = *x19
    x2 = x19[1] - x0
else if (x10_1 u< x11)
    x2 = x9
    x19[1] = x8_1

if (x2 != 0)
    memset(x0, 0, x2)

x19[3] = 0
x19[4].d = 1
return 0
