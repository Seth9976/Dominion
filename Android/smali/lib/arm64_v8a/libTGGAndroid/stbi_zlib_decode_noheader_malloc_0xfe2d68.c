// 函数: stbi_zlib_decode_noheader_malloc
// 地址: 0xfe2d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
char* x0 = malloc(0x4000)

if (x0 == 0)
    goto label_fe2e00

int64_t var_1038 = arg1
int64_t var_1030_1 = arg1 + sx.q(arg2)
char* var_1018

if (sub_fe1e9c(&var_1038, x0, 0x4000, 1, 0) == 0)
    free(var_1018)
    x0 = nullptr
label_fe2e00:
    
    if (*(x22 + 0x28) == x8)
        return x0
else if (arg3 == 0)
    if (*(x22 + 0x28) == x8)
        return var_1018
else
    int32_t var_1020
    *arg3 = var_1020 - var_1018.d
    
    if (*(x22 + 0x28) == x8)
        return var_1018
__stack_chk_fail()
noreturn
