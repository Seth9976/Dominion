// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_timeES4_S4_RNS_8ios_baseERjP2tm
// 地址: 0x10bcbe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
int64_t var_30
__builtin_strncpy(&var_30, "%H:%M:%S", 8)
char* entry_x5
int64_t result = std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::get(
    arg1, arg2, arg3, arg4, arg5, entry_x5, &var_30)

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
