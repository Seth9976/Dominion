// 函数: _ZNSt6__ndk110__time_putC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0x10d9b44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char* entry_x1
void* x1

if ((zx.d(*entry_x1) & 1) != 0)
    x1 = *(entry_x1 + 0x10)
else
    x1 = &entry_x1[1]

int64_t result = newlocale(0x1fbf, x1, nullptr)
*arg1 = result

if (result == 0)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "time_put_byname failed to construct for ", entry_x1)
    sub_10cdaec()
    noreturn

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
