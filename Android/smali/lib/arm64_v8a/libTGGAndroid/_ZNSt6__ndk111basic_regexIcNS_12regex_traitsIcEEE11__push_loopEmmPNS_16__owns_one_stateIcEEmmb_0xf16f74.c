// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEmmPNS_16__owns_one_stateIcEEmmb
// 地址: 0xf16f74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x10)
void* x8 = *(arg1 + 0x38)
int64_t x9 = *(x8 + 8)
*x0 = _vtable_for_std::__ndk1::__empty_state<char> + 0x10
x0[1] = x9
*(x8 + 8) = 0
void** x0_1 = operator new(0x38)
int32_t x8_1 = *(arg1 + 0x20)
int64_t x9_1 = *(arg4 + 8)
x0_1[2] = x0
x0_1[3] = arg2
x0_1[4] = arg3
*(x0_1 + 0x2c) = arg5.d
x0_1[6].d = arg6.d
char entry_x6
*(x0_1 + 0x34) = entry_x6 & 1
*x0_1 = _vtable_for_std::__ndk1::__loop<char> + 0x10
x0_1[1] = x9_1
x0_1[5].d = x8_1
*(arg4 + 8) = 0
void** result = operator new(0x10)
*result = _vtable_for_std::__ndk1::__repeat_one_loop<char> + 0x10
result[1] = x0_1
*(*(arg1 + 0x38) + 8) = result
*(arg1 + 0x38) = x0_1[2]
*(arg4 + 8) = x0_1
*(arg1 + 0x20) += 1
return result
