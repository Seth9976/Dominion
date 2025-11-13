// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_dateES4_S4_RNS_8ios_baseERjP2tm
// 地址: 0x10bcc50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0_1 = (*(*(arg1 + 0x10) + 0x28))()
int32_t temp0 = zx.d(*x0_1) & 1
char* x6

if (temp0 != 0)
    x6 = *(x0_1 + 0x10)
else
    x6 = &x0_1[1]

if (temp0 != 0)
    *(x0_1 + 8)

char* entry_x5
return std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::get(
    arg1, arg2, arg3, arg4, arg5, entry_x5, x6) __tailcall
