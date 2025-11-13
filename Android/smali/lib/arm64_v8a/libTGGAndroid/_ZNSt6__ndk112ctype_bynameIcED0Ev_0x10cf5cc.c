// 函数: _ZNSt6__ndk112ctype_bynameIcED0Ev
// 地址: 0x10cf5cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
locale_t dataset = entry_x0[4]
*entry_x0 = _vtable_for_std::__ndk1::ctype_byname<char> + 0x10
freelocale(dataset)
void* x0 = entry_x0[2]
*entry_x0 = _vtable_for_std::__ndk1::ctype<char> + 0x10

if (x0 != 0 && zx.d(entry_x0[3].b) != 0)
    operator delete[](x0)

std::__ndk1::__shared_count::~__shared_count()
return operator delete(entry_x0) __tailcall
