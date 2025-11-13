// 函数: sub_10a7778
// 地址: 0x10a7778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__cxa_begin_catch(arg1)
void* x8 = *arg2
void* x9_1 = arg2 + *(x8 - 0x18)
*(x9_1 + 0x20) |= 1

if ((zx.d(*(arg2 + *(x8 - 0x18) + 0x24)) & 1) != 0)
    __cxa_rethrow()
    noreturn

__cxa_end_catch()
void* x9_4 = arg2 + *(*arg2 - 0x18)
int32_t x8_5 = *(x9_4 + 0x20) | 1 | (*(x9_4 + 0x28) == 0 ? 1 : 0)
bool cond:1 = (x8_5 & *(x9_4 + 0x24)) == 0
*(x9_4 + 0x20) = x8_5

if (cond:1)
    return 0

sub_10b053c()
noreturn
