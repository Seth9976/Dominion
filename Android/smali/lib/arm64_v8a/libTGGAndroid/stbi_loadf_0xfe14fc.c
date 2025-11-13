// 函数: stbi_loadf
// 地址: 0xfe14fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
FILE* fp
int128_t v1
fp, v1 = fopen(arg1, "rb")
float* result

if (fp == 0)
    result = nullptr
    data_2423720 = "can't fopen"
else
    int64_t v0_1 = (data_11805a0.o).q
    v1.q = 0x8000000001
    int32_t (* var_110_1)(FILE* fp) = j_feof
    FILE* fp_1 = fp
    int64_t var_100_1 = 0x8000000001
    char var_f8
    char* var_68_1 = &var_f8
    int32_t x0 = v0_1(fp, &var_f8, 0x80, v0_1, v1)
    void var_130
    void* x8_3
    
    if (x0 == 0)
        var_100_1.d = 0
        void var_f7
        x8_3 = &var_f7
        var_f8 = 0
    else
        x8_3 = &var_130 + sx.q(x0) + 0x38
    
    char* var_78_1 = &var_f8
    void* var_70_1 = x8_3
    void* var_60_1 = x8_3
    result = sub_fe1010(&var_130, arg2, arg3, arg4, arg5)
    fclose(fp)

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
