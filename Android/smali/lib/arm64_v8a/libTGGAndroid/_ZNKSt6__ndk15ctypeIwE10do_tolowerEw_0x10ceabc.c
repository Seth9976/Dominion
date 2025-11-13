// 函数: _ZNKSt6__ndk15ctypeIwE10do_tolowerEw
// 地址: 0x10ceabc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry___saved_x0

if (entry___saved_x0 u> 0x7f)
    return zx.q(entry___saved_x0)

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

if (isupper_l(entry___saved_x0, data_24bad00) == 0)
    return zx.q(entry___saved_x0)

return zx.q(entry___saved_x0 + 0x20)
