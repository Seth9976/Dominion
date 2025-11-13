// 函数: _Z22AndroidReadIntFromFilePKc
// 地址: 0x1069d9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
FILE* fp = fopen(arg1, "rb")

if (fp != 0)
    char var_78[0x50]
    var_78[0] = 0
    fgets(&var_78, 0x50, fp)
    fclose(fp)
    fp = atoi(&var_78)

if (*(x20 + 0x28) == x8)
    return fp

__stack_chk_fail()
noreturn
