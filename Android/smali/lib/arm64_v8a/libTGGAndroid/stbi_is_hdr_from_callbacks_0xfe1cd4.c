// 函数: stbi_is_hdr_from_callbacks
// 地址: 0xfe1cd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int128_t v1
v1.q = 0x8000000001
int64_t v0 = (*arg1).q
int64_t var_f0 = arg1[1].q
int64_t var_e8 = arg2
int64_t var_e0 = 0x8000000001
char var_d8
char* var_48 = &var_d8
int32_t x0_1 = v0(arg2, &var_d8, 0x80, v0, v1)
void var_110
void* x8_4

if (x0_1 == 0)
    var_e0.d = 0
    void var_d7
    x8_4 = &var_d7
    var_d8 = 0
else
    x8_4 = &var_110 + sx.q(x0_1) + 0x38

char* var_58 = &var_d8
void* var_50 = x8_4
void* var_40 = x8_4
uint64_t result = sub_fe1748(&var_110)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
