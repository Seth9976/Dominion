// 函数: stbi_load_from_file_16
// 地址: 0xfe04b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x10 = *(x25 + 0x28)
int64_t v0 = (data_11805a0.o).q
int128_t v1
v1.q = 0x8000000001
int32_t (* var_110)(FILE* fp) = j_feof
FILE* var_108 = arg1
int64_t var_100 = 0x8000000001
char var_f8
char* var_68 = &var_f8
int32_t x0 = v0(arg1, &var_f8, 0x80, v0, v1)
void var_130
void* x8_2

if (x0 == 0)
    var_100.d = 0
    void var_f7
    x8_2 = &var_f7
    var_f8 = 0
else
    x8_2 = &var_130 + sx.q(x0) + 0x38

int32_t var_78 = &var_f8
int32_t var_70 = x8_2.d
void* var_60 = x8_2
void* result = sub_fe05bc(&var_130, arg2, arg3, arg4, arg5)

if (result != 0)
    fseek(arg1, sx.q(var_78 - var_70), 1)

if (*(x25 + 0x28) == x10)
    return result

__stack_chk_fail()
noreturn
