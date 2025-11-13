// 函数: _ZNKSt6__ndk15ctypeIwE10do_toupperEw
// 地址: 0x10ce92c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wint_t entry_wc

if (entry_wc u> 0x7f)
    return zx.q(entry_wc)

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

if (iswlower_l(entry_wc, data_24bad00) == 0)
    return zx.q(entry_wc)

return zx.q(entry_wc - 0x20)
