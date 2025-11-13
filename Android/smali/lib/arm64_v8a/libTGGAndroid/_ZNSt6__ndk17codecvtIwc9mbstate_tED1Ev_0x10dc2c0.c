// 函数: _ZNSt6__ndk17codecvtIwc9mbstate_tED1Ev
// 地址: 0x10dc2c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t x20 = entry_x0[2]
*entry_x0 = _vtable_for_std::__ndk1::codecvt<wchar_t, char, mbstate_t> + 0x10

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

if (x20 != data_24bad00)
    freelocale(entry_x0[2])

return std::__ndk1::__shared_count::~__shared_count() __tailcall
