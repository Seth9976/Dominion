// 函数: _ZNKSt6__ndk17codecvtIwc9mbstate_tE11do_encodingEv
// 地址: 0x10d0d28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
locale_t newloc = uselocale(*(entry_x0 + 0x10))
int32_t x0_1 = mbtowc(nullptr, nullptr, 4)

if (newloc != 0)
    uselocale(newloc)

if (x0_1 != 0)
    return 0xffffffff

locale_t newloc_1 = *(entry_x0 + 0x10)

if (newloc_1 == 0)
    return 1

locale_t newloc_2 = uselocale(newloc_1)
size_t x0_4 = __ctype_get_mb_cur_max()

if (newloc_2 != 0)
    uselocale(newloc_2)

return zx.q(x0_4 == 1 ? 1 : 0)
