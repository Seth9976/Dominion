// 函数: stbi_is_hdr
// 地址: 0xfe1af4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
FILE* fp = fopen(arg1, "rb")
int32_t x21

if (fp == 0)
    x21 = 0
else
    int64_t offset
    int128_t v1_1
    offset, v1_1 = ftell(fp)
    int64_t v0_1 = (data_11805a0.o).q
    v1_1.q = 0x8000000001
    int32_t (* var_100_1)(FILE* fp) = j_feof
    FILE* fp_1 = fp
    int64_t var_f0_1 = 0x8000000001
    char var_e8
    char* var_58_1 = &var_e8
    int32_t x0_1 = v0_1(fp, &var_e8, 0x80, v0_1, v1_1)
    void var_120
    void* x8_3
    
    if (x0_1 == 0)
        var_f0_1.d = 0
        void var_e7
        x8_3 = &var_e7
        var_e8 = 0
    else
        x8_3 = &var_120 + sx.q(x0_1) + 0x38
    
    char* var_68_1 = &var_e8
    void* var_60_1 = x8_3
    void* var_50_1 = x8_3
    x21 = sub_fe1748(&var_120)
    fseek(fp, offset, 0)
    fclose(fp)

if (*(x22 + 0x28) == x8)
    return zx.q(x21)

__stack_chk_fail()
noreturn
