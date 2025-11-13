// 函数: _Z4XLogPKcz
// 地址: 0x1061da0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1
int64_t var_4a8 = x1
int64_t x2
int64_t var_4a0 = x2
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
int128_t var_530 = entry_v0
int128_t entry_v1
int128_t var_520 = entry_v1
int128_t entry_v2
int128_t var_510 = entry_v2
int128_t entry_v3
int128_t var_500 = entry_v3
int128_t entry_v4
int128_t var_4f0 = entry_v4
int128_t entry_v5
int128_t var_4e0 = entry_v5
int128_t entry_v6
int128_t var_4d0 = entry_v6
int128_t entry_v7
int128_t var_4c0 = entry_v7
uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x12 = *(x19 + 0x28)
void var_4b0
void* var_460 = &var_4b0
int64_t var_458 = -0x7f00000038
void arg_0
void* var_470 = &arg_0
void** var_468 = &var_470
int128_t var_450 = var_470.o
int128_t var_440 = var_460.o
char var_428[0x400]
int64_t x8_1 = sx.q(Xvsnprintf(&var_428, 0x400, arg1, &var_450))

if (zx.d(var_428[x8_1 - 1]) != 0xa)
    if (x8_1.d s> 0x3fe)
        var_428[x8_1 - 1] = 0xa
    else
        *(&var_428 + x8_1) = 0xa

int64_t result = XOutputDebugString(&var_428)

if (*(x19 + 0x28) == x12)
    return result

__stack_chk_fail()
noreturn
