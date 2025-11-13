// 函数: sub_10ccba8
// 地址: 0x10ccba8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__shared_count::__add_shared()
int64_t x8 = *(arg1 + 0x10)
int64_t x10 = (*(arg1 + 0x18) - x8) s>> 3

if (x10 u<= arg3)
    if (arg3 + 1 u> x10)
        sub_10dd360(arg1 + 0x10, arg3 + 1 - x10)
        x8 = *(arg1 + 0x10)
    else if (arg3 + 1 u< x10)
        *(arg1 + 0x18) = x8 + ((arg3 + 1) << 3)

int64_t result = *(x8 + (arg3 << 3))

if (result != 0)
    result = std::__ndk1::__shared_count::__release_shared()
    x8 = *(arg1 + 0x10)

*(x8 + (arg3 << 3)) = arg2
return result
