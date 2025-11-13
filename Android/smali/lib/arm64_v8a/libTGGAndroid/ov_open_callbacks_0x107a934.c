// 函数: ov_open_callbacks
// 地址: 0x107a934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int128_t var_40 = arg5[1]
int128_t var_50 = *arg5
int32_t result = sub_107a99c(arg1, arg2, arg3, arg4, &var_50)

if (result == 0)
    result = sub_107ab78(arg2)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
