// 函数: _ZNSt6__ndk118__time_get_storageIcE4initERKNS_5ctypeIcEE
// 地址: 0x10d748c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t i = 0
void* __offset(std::__ndk1::ctype<char>, 0xb0) x21 = arg1 + 0xb0
struct tm tp
tp.tm_zone = 0
tp.tm_mon = 0
tp.tm_year = 0
tp.tm_wday = 0
tp.tm_yday = 0
tp.tm_isdst = 0
tp.tm_gmtoff = 0
tp.tm_sec = 0
tp.tm_min = 0
tp.tm_hour = 0
tp.tm_mday = 0
char s[0x64]

do
    tp.tm_wday = i.d
    strftime_l(&s, 0x64, "%A", &tp, *arg1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        x21 - 0xa8)
    strftime_l(&s, 0x64, "%a", &tp, *arg1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        x21)
    i += 1
    x21 += 0x18
while (i != 7)

int64_t i_1 = 0
void* __offset(std::__ndk1::ctype<char>, 0x278) x21_1 = arg1 + 0x278

do
    tp.tm_mon = i_1.d
    strftime_l(&s, 0x64, "%B", &tp, *arg1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        x21_1 - 0x120)
    strftime_l(&s, 0x64, "%b", &tp, *arg1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        x21_1)
    i_1 += 1
    x21_1 += 0x18
while (i_1 != 0xc)

tp.tm_hour = 1
strftime_l(&s, 0x64, "%p", &tp, *arg1)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    arg1 + 0x398)
tp.tm_hour = 0xd
strftime_l(&s, 0x64, "%p", &tp, *arg1)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    arg1 + 0x3b0)
std::__ndk1::__time_get_storage<char>::__analyze(arg1.b, 0x63)

if ((zx.d(*(arg1 + 0x3c8)) & 1) != 0)
    operator delete(*(arg1 + 0x3d8))

int64_t var_108
*(arg1 + 0x3d8) = var_108
int128_t var_118
*(arg1 + 0x3c8) = var_118
std::__ndk1::__time_get_storage<char>::__analyze(arg1.b, 0x72)

if ((zx.d(*(arg1 + 0x3e0)) & 1) != 0)
    operator delete(*(arg1 + 0x3f0))

*(arg1 + 0x3f0) = var_108
*(arg1 + 0x3e0) = var_118
std::__ndk1::__time_get_storage<char>::__analyze(arg1.b, 0x78)

if ((zx.d(*(arg1 + 0x3f8)) & 1) != 0)
    operator delete(*(arg1 + 0x408))

*(arg1 + 0x408) = var_108
*(arg1 + 0x3f8) = var_118
int64_t result
int128_t v0_3
result, v0_3 = std::__ndk1::__time_get_storage<char>::__analyze(arg1.b, 0x58)

if ((zx.d(*(arg1 + 0x410)) & 1) != 0)
    result, v0_3 = operator delete(*(arg1 + 0x420))

*(arg1 + 0x420) = var_108
*(arg1 + 0x410) = var_118

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
