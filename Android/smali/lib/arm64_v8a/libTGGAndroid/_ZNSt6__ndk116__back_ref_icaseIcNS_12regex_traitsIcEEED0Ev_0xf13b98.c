// 函数: _ZNSt6__ndk116__back_ref_icaseIcNS_12regex_traitsIcEEED0Ev
// 地址: 0xf13b98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_std::__ndk1::__back_ref_icase<char, std::__ndk1::regex_traits<char> > + 0x10
std::__ndk1::locale::~locale()
int64_t* x0_1 = entry_x0[1]
*entry_x0 = _vtable_for_std::__ndk1::__owns_one_state<char> + 0x10

if (x0_1 != 0)
    (*(*x0_1 + 8))()

return operator delete(entry_x0) __tailcall
