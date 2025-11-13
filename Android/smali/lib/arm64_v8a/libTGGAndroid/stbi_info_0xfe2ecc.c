// 函数: stbi_info
// 地址: 0xfe2ecc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
FILE* fp = fopen(arg1, "rb")
int32_t x19_1

if (fp == 0)
    x19_1 = 0
    data_2423720 = "can't fopen"
else
    int64_t offset
    int128_t v1_1
    offset, v1_1 = ftell(fp)
    int64_t v0_1 = (data_11805a0.o).q
    v1_1.q = 0x8000000001
    int32_t (* var_110_1)(FILE* fp) = j_feof
    FILE* fp_1 = fp
    int64_t var_100_1 = 0x8000000001
    char var_f8
    char* var_68_1 = &var_f8
    int32_t x0_1 = v0_1(fp, &var_f8, 0x80, v0_1, v1_1)
    void var_130
    void* x8_3
    
    if (x0_1 == 0)
        var_100_1.d = 0
        void var_f7
        x8_3 = &var_f7
        var_f8 = 0
    else
        x8_3 = &var_130 + sx.q(x0_1) + 0x38
    
    char* var_78_1 = &var_f8
    void* var_70_1 = x8_3
    void* var_60_1 = x8_3
    x19_1 = sub_fe30fc(&var_130, arg2, arg3, arg4)
    fseek(fp, offset, 0)
    fclose(fp)

if (*(x25 + 0x28) == x8)
    return zx.q(x19_1)

__stack_chk_fail()
noreturn
