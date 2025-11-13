// 函数: stbi_load_16_from_memory
// 地址: 0xfe094c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
int64_t x9 = arg1 + sx.q(arg2)
int64_t var_28 = arg1
int64_t var_20 = x9
int64_t var_38 = arg1
int64_t var_30 = x9
int64_t var_e0 = 0
int32_t var_c0 = 0
void var_f0
void* result = sub_fe05bc(&var_f0, arg3, arg4, arg5, arg6)

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
