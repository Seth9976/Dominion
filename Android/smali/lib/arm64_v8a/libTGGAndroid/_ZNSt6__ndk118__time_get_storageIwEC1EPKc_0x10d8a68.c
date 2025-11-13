// 函数: _ZNSt6__ndk118__time_get_storageIwEC1EPKc
// 地址: 0x10d8a68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
std::__ndk1::__time_get::__time_get(arg1)
memset(&arg1[8], 0, 0x420)
struct std::__ndk1::locale::facet::std::__ndk1::__time_get_temp<wchar_t>::VTable* const var_50
uint64_t entry_x1
std::__ndk1::ctype_byname<wchar_t>::ctype_byname(&var_50, entry_x1)
var_50 = &_vtable_for_std::__ndk1::__time_get_temp<wchar_t>{for `std::__ndk1::locale::facet'}
std::__ndk1::__time_get_storage<wchar_t>::init(arg1)
var_50 = _vtable_for_std::__ndk1::ctype_byname<wchar_t> + 0x10
locale_t dataset
freelocale(dataset)
int64_t result = std::__ndk1::__shared_count::~__shared_count()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
