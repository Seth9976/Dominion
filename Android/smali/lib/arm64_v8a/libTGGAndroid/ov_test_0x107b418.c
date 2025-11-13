// 函数: ov_test
// 地址: 0x107b418
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x19 + 0x28)
int128_t v0 = data_11816d0.o
int128_t var_50 = data_11816c0.o
int128_t var_40 = v0
uint64_t result = sub_107a99c(arg1, arg2, arg3, arg4, &var_50)

if (*(x19 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
