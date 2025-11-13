// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_timeES4_S4_RNS_8ios_baseERjP2tm
// 地址: 0x10be9a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
int128_t var_50
__builtin_memcpy(&var_50, U"%H:%M:%S", 0x20)
wchar_t* entry_x5
int64_t result = std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::get(
    arg1, arg2, arg3, arg4, arg5, entry_x5, &var_50)

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
