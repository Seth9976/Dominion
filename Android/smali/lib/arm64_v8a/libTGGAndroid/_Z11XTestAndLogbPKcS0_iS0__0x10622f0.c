// 函数: _Z11XTestAndLogbPKcS0_iS0_
// 地址: 0x10622f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)

if ((arg1.d & 1) == 0)
    char var_428[0x400]
    Xsnprintf(&var_428, 0x400, "\ntest failed '%s'\n%s\n%s (%s:%d)\n")
    XOutputDebugString(&var_428)
    XOutputDebugString(&var_428)

if (*(x20 + 0x28) == x8)
    return (zx.q(arg1.d) ^ 1) & 1

__stack_chk_fail()
noreturn
