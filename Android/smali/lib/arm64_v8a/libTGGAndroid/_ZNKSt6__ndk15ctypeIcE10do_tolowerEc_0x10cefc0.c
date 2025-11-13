// 函数: _ZNKSt6__ndk15ctypeIcE10do_tolowerEc
// 地址: 0x10cefc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if ((entry_x1 & 0x80) != 0)
    return zx.q(entry_x1)

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

if (isupper_l(entry_x1 & 0xff, data_24bad00) == 0)
    return zx.q(entry_x1)

return zx.q(entry_x1 + 0x20)
