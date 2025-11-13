// 函数: stbi_load_from_callbacks
// 地址: 0xfe0ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int128_t v1
v1.q = 0x8000000001
int64_t v0 = (*arg1).q
int64_t var_110 = arg1[1].q
int64_t var_108 = arg2
int64_t var_100 = 0x8000000001
char var_f8
char* var_68 = &var_f8
int32_t x0_1 = v0(arg2, &var_f8, 0x80, v0, v1)
void var_130
void* x8_4

if (x0_1 == 0)
    var_100.d = 0
    void var_f7
    x8_4 = &var_f7
    var_f8 = 0
else
    x8_4 = &var_130 + sx.q(x0_1) + 0x38

char* var_78 = &var_f8
void* var_70 = x8_4
void* var_60 = x8_4
void* result = sub_fe0280(&var_130, arg3, arg4, arg5, arg6)

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
