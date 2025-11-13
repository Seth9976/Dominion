// 函数: ogg_stream_packetin
// 地址: 0x10962b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
int128_t var_40 = *arg2
int64_t result = ogg_stream_iovecin(arg1, &var_40, 1, *(arg2 + 0x18), arg2[2].q)

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
