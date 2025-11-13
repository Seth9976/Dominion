// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc
// 地址: 0xf13684
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x18)
void* x19 = arg1
void** result
int64_t* x8_2
void** result_1
int32_t entry_x1

if ((x8 & 1) != 0)
    void** result_2 = operator new(0x30)
    result_1 = result_2
    int64_t x8_4 = *(*(x19 + 0x38) + 8)
    *result_2 =
        _vtable_for_std::__ndk1::__match_char_icase<char, std::__ndk1::regex_traits<char> > + 0x10
    result_2[1] = x8_4
    std::__ndk1::locale::locale(&result_2[2])
    *(result_1 + 0x18) = *(x19 + 8)
    int64_t* x0_1 = *(x19 + 8)
    result = (*(*x0_1 + 0x28))(x0_1, zx.q(entry_x1))
    result_1[5].b = (result.d).b
    x8_2 = *(x19 + 0x38) + 8
else if ((x8 & 8) != 0)
    void** result_3 = operator new(0x30)
    result_1 = result_3
    int64_t x8_8 = *(*(x19 + 0x38) + 8)
    *result_3 =
        _vtable_for_std::__ndk1::__match_char_collate<char, std::__ndk1::regex_traits<char> > + 0x10
    result_3[1] = x8_8
    int128_t v0_2
    result, v0_2 = std::__ndk1::locale::locale(&result_3[2])
    result_1[5].b = entry_x1.b
    *(result_1 + 0x18) = *(x19 + 8)
    x8_2 = *(x19 + 0x38) + 8
else
    result = operator new(0x18)
    result_1 = result
    x8_2 = *(x19 + 0x38) + 8
    int64_t x9 = *x8_2
    result[2].b = entry_x1.b
    *result = _vtable_for_std::__ndk1::__match_char<char> + 0x10
    result[1] = x9
*x8_2 = result_1
*(x19 + 0x38) = *(*(x19 + 0x38) + 8)
return result
