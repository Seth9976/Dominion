// 函数: stbi_is_hdr_from_file
// 地址: 0xfe1bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t offset
int128_t v1
offset, v1 = ftell(arg1)
int64_t v0 = (data_11805a0.o).q
v1.q = 0x8000000001
int32_t (* var_100)(FILE* fp) = j_feof
FILE* var_f8 = arg1
int64_t var_f0 = 0x8000000001
char var_e8
char* var_58 = &var_e8
int32_t x0_1 = v0(arg1, &var_e8, 0x80, v0, v1)
void var_120
void* x8_3

if (x0_1 == 0)
    var_f0.d = 0
    void var_e7
    x8_3 = &var_e7
    var_e8 = 0
else
    x8_3 = &var_120 + sx.q(x0_1) + 0x38

char* var_68 = &var_e8
void* var_60 = x8_3
void* var_50 = x8_3
int32_t x0_3 = sub_fe1748(&var_120)
fseek(arg1, offset, 0)

if (*(x22 + 0x28) == x8)
    return zx.q(x0_3)

__stack_chk_fail()
noreturn
