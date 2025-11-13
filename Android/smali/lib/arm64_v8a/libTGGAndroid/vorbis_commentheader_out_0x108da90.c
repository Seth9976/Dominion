// 函数: vorbis_commentheader_out
// 地址: 0x108da90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void var_60
oggpack_writeinit(&var_60)
sub_108db48(&var_60, arg1)
int64_t x0_4 = malloc(oggpack_bytes(&var_60))
*arg2 = x0_4
int64_t var_50
memcpy(x0_4, var_50, oggpack_bytes(&var_60))
arg2[1] = oggpack_bytes(&var_60)
__builtin_memset(&arg2[2], 0, 0x18)
arg2[5] = 1
oggpack_writeclear(&var_60)

if (*(x22 + 0x28) == x8)
    return 0

__stack_chk_fail()
noreturn
