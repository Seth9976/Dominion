// 函数: _Z18XmlWriteLiteralIntP9XmlWriteri
// 地址: 0x1063f5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)

if (*(arg1 + 8) == 1)
    fputc(0x3e, *arg1)
    *(arg1 + 8) = 3

char buf[0x20]
Xsnprintf(&buf, 0x20, "%d")
size_t result = fwrite(&buf, 1, strlen(&buf), *arg1)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
