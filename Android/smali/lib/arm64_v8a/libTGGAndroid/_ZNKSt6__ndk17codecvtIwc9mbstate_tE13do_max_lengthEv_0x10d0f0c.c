// 函数: _ZNKSt6__ndk17codecvtIwc9mbstate_tE13do_max_lengthEv
// 地址: 0x10d0f0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
locale_t newloc = *(entry_x0 + 0x10)
int32_t x20

if (newloc == 0)
    x20 = 1
else
    locale_t newloc_1 = uselocale(newloc)
    x20 = __ctype_get_mb_cur_max()
    
    if (newloc_1 != 0)
        uselocale(newloc_1)

return zx.q(x20)
