// 函数: stbi_zlib_decode_noheader_buffer
// 地址: 0xfe2e38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x19 + 0x28)
int64_t var_1028 = arg3
int64_t var_1020 = arg3 + sx.q(arg4)
uint64_t result
int32_t var_1010
int32_t var_1008

if (sub_fe1e9c(&var_1028, arg1, arg2, 0, 0) != 0)
    result = zx.q(var_1010 - var_1008)
else
    result = 0xffffffff

if (*(x19 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
