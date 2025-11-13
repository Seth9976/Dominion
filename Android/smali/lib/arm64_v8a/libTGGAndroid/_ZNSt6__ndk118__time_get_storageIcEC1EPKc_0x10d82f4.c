// 函数: _ZNSt6__ndk118__time_get_storageIcEC1EPKc
// 地址: 0x10d82f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
std::__ndk1::__time_get::__time_get(arg1)
memset(&arg1[8], 0, 0x420)
struct std::__ndk1::locale::facet::std::__ndk1::__time_get_temp<char>::VTable* const var_60
uint64_t entry_x1
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
