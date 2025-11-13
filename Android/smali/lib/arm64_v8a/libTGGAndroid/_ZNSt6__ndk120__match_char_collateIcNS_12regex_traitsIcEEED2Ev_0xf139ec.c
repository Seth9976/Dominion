// 函数: _ZNSt6__ndk120__match_char_collateIcNS_12regex_traitsIcEEED2Ev
// 地址: 0xf139ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x19 = entry_x0
*entry_x0 =
    _vtable_for_std::__ndk1::__match_char_collate<char, std::__ndk1::regex_traits<char> > + 0x10
std::__ndk1::locale::~locale()
int64_t* result = x19[1]
*x19 = _vtable_for_std::__ndk1::__owns_one_state<char> + 0x10

if (result == 0)
    return result

jump(*(*result + 8))
