// 函数: _ZNSt6__ndk16chrono12system_clock3nowEv
// 地址: 0x10a1580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
struct timespec tp

if (clock_gettime(0, &tp) != 0)
    std::__ndk1::__throw_system_error(*__errno(), "clock_gettime(CLOCK_REALTIME) failed")
else if (*(x19 + 0x28) == x8)
    return tp.tv_nsec s/ 0x3e8 + tp.tv_sec * 0xf4240

__stack_chk_fail()
noreturn
