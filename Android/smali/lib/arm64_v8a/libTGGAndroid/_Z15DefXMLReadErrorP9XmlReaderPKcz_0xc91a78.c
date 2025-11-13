// 函数: _Z15DefXMLReadErrorP9XmlReaderPKcz
// 地址: 0xc91a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
int64_t var_4a0 = entry_x2
int64_t x3
int64_t var_498 = x3
int64_t x4
int64_t var_490 = x4
int64_t x5
int64_t var_488 = x5
int64_t x6
int64_t var_480 = x6
int64_t x7
int64_t var_478 = x7
int128_t entry_v0
int128_t var_520 = entry_v0
int128_t entry_v1
int128_t var_510 = entry_v1
int128_t entry_v2
int128_t var_500 = entry_v2
int128_t entry_v3
int128_t var_4f0 = entry_v3
int128_t entry_v4
int128_t var_4e0 = entry_v4
int128_t entry_v5
int128_t var_4d0 = entry_v5
int128_t entry_v6
int128_t var_4c0 = entry_v6
int128_t entry_v7
int128_t var_4b0 = entry_v7
uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x13 = *(x20 + 0x28)
int128_t var_470
int128_t* var_440 = &var_470
int64_t var_430 = -0x7f00000030
void arg_0
var_470 = (&arg_0).o
int128_t var_460 = (&var_4a0).o
char var_428[0x400]
Xvsnprintf(&var_428, 0x400, arg2, &var_470)
*(arg1 + 0x12c)
int64_t result = XTrace("%s(%d): DefXML %s")

if (*(x20 + 0x28) == x13)
    return result

__stack_chk_fail()
noreturn
