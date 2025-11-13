// 函数: stbi_info_from_file
// 地址: 0xfe2ffc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
int64_t offset
int128_t v1
offset, v1 = ftell(arg1)
int64_t v0 = (data_11805a0.o).q
v1.q = 0x8000000001
int32_t (* var_110)(FILE* fp) = j_feof
FILE* var_108 = arg1
int64_t var_100 = 0x8000000001
char var_f8
char* var_68 = &var_f8
int32_t x0_1 = v0(arg1, &var_f8, 0x80, v0, v1)
void var_130
void* x8_3

if (x0_1 == 0)
    var_100.d = 0
    void var_f7
    x8_3 = &var_f7
    var_f8 = 0
else
    x8_3 = &var_130 + sx.q(x0_1) + 0x38

char* var_78 = &var_f8
void* var_70 = x8_3
void* var_60 = x8_3
int32_t x0_3 = sub_fe30fc(&var_130, arg2, arg3, arg4)
fseek(arg1, offset, 0)

if (*(x25 + 0x28) == x8)
    return zx.q(x0_3)

__stack_chk_fail()
noreturn
