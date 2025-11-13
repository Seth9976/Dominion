// 函数: __cxa_decrement_exception_refcount
// 地址: 0x10e9a84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int64_t x9_1
int32_t i

do
    x9_1 = __ldaxr(arg1 - 0x78)
    i = __stlxr(x9_1 - 1, arg1 - 0x78)
while (i != 0)

if (x9_1 != 1)
    return 

int64_t x8_2 = *(arg1 - 0x68)

if (x8_2 != 0)
    x8_2()

sub_10ff5c0(arg1 - 0x80)
