// 函数: sub_10ff3f4
// 地址: 0x10ff3f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
size_t size

size = arg1 != 0 ? arg1 : 1

void* memptr
void* result

if (posix_memalign(&memptr, 0x10, size) == 0)
    result = memptr
else
    result = sub_10ff468(size)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
