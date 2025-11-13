// 函数: stbi_zlib_decode_malloc_guesssize
// 地址: 0xfe1dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char* x0_1 = malloc(sx.q(arg3))

if (x0_1 == 0)
    goto label_fe1e60

int64_t var_1048 = arg1
int64_t var_1040_1 = arg1 + sx.q(arg2)
char* var_1028

if (sub_fe1e9c(&var_1048, x0_1, arg3, 1, 1) == 0)
    free(var_1028)
    x0_1 = nullptr
label_fe1e60:
    
    if (*(x23 + 0x28) == x8)
        return x0_1
else if (arg4 == 0)
    if (*(x23 + 0x28) == x8)
        return var_1028
else
    int32_t var_1030
    *arg4 = var_1030 - var_1028.d
    
    if (*(x23 + 0x28) == x8)
        return var_1028
__stack_chk_fail()
noreturn
