// 函数: _ZNSt6__ndk111__lookaheadIcNS_12regex_traitsIcEEED2Ev
// 地址: 0xf11f74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x20 = entry_x0[8]
int64_t* x19 = entry_x0
*entry_x0 = _vtable_for_std::__ndk1::__lookahead<char, std::__ndk1::regex_traits<char> > + 0x10

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

std::__ndk1::locale::~locale()
int64_t* result = x19[1]
*x19 = _vtable_for_std::__ndk1::__owns_one_state<char> + 0x10

if (result == 0)
    return result

jump(*(*result + 8))
