// 函数: _ZNSt6__ndk118__time_get_storageIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0x10d86c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char* entry_x1
void* x1

if ((zx.d(*entry_x1) & 1) != 0)
    x1 = *(entry_x1 + 0x10)
else
    x1 = &entry_x1[1]

int64_t x0 = newlocale(0x1fbf, x1, nullptr)
*arg1 = x0

if (x0 == 0)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "time_get_byname failed to construct for ", entry_x1)
    sub_10cdaec()
    noreturn

memset(arg1 + 8, 0, 0x420)
struct std::__ndk1::locale::facet::std::__ndk1::__time_get_temp<char>::VTable* const var_60
std::__ndk1::ctype_byname<char>::ctype_byname(&var_60, entry_x1)
var_60 = &_vtable_for_std::__ndk1::__time_get_temp<char>{for `std::__ndk1::locale::facet'}
std::__ndk1::__time_get_storage<char>::init(arg1)
var_60 = _vtable_for_std::__ndk1::ctype_byname<char> + 0x10
locale_t dataset
freelocale(dataset)
var_60 = _vtable_for_std::__ndk1::ctype<char> + 0x10
void* var_50
char var_48

if (var_50 != 0 && zx.d(var_48) != 0)
    operator delete[](var_50)

int64_t result = std::__ndk1::__shared_count::~__shared_count()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
