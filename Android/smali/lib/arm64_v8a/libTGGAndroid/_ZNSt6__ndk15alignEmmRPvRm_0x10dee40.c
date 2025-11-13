// 函数: _ZNSt6__ndk15alignEmmRPvRm
// 地址: 0x10dee40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x8 = *arg4

if (x8 u< arg2)
    return 0

void* x11 = *arg3
void* result_1 = (arg1 + x11 - 1) & neg.q(arg1)
void* x11_1 = result_1 - x11
void* result = nullptr

if (x11_1 u<= x8 - arg2)
    result = result_1
    *arg3 = result_1
    *arg4 = x8 - x11_1

return result
