// 函数: _spAttachmentLoader_setUnknownTypeError
// 地址: 0xfac8dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char s[0x10]
sprintf(&s, "%d", zx.q(arg2))
_spFree(*arg1)
_spFree(arg1[1])
int64_t x0_3 = _spMalloc(0x1a, "..\..\ExternalCode\spine-c\src\spine\AttachmentLoader.c", 0x58)
*arg1 = x0_3
__builtin_strcpy(x0_3, "Unknown attachment type: ")
int64_t x0_7 =
    _spMalloc(strlen(&s) + 1, "..\..\ExternalCode\spine-c\src\spine\AttachmentLoader.c", 0x59)
arg1[1] = x0_7
int64_t result = strcpy(x0_7, &s)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
