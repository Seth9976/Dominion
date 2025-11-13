// 函数: _spSkeletonBinary_setError
// 地址: 0xfc0688
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
_spFree(*(arg1 + 0x10))
char var_148[0x100]
strcpy(&var_148, arg2)
size_t x0_3 = strlen(arg2)

if (arg3 != 0)
    strncat(&var_148[sx.q(x0_3.d)], arg3, (0xff00000000 - (x0_3 << 0x20)) s>> 0x20)

int64_t x0_8 =
    _spMalloc(strlen(&var_148) + 1, "..\..\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x58)
*(arg1 + 0x10) = x0_8
int64_t result = strcpy(x0_8, &var_148)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
