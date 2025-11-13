// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi
// 地址: 0xf13810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x18)
void* x19 = arg1
void** result
int64_t* x8_2
void** result_1
void** result_2
int32_t entry_x1
int64_t x8_4
struct vtable_for_std::__ndk1::__back_ref_collate<char, std::__ndk1::regex_traits<char> >* const 
    x9_1

if ((x8 & 1) != 0)
    result_2 = operator new(0x30)
    result_1 = result_2
    x8_4 = *(*(x19 + 0x38) + 8)
    x9_1 = _vtable_for_std::__ndk1::__back_ref_icase<char, std::__ndk1::regex_traits<char> >
label_f13898:
    *result_2 = x9_1 + 0x10
    result_2[1] = x8_4
    int128_t v0_1
    result, v0_1 = std::__ndk1::locale::locale(&result_2[2])
    result_1[5].d = entry_x1
    *(result_1 + 0x18) = *(x19 + 8)
    x8_2 = *(x19 + 0x38) + 8
else
    if ((x8 & 8) != 0)
        result_2 = operator new(0x30)
        result_1 = result_2
        x8_4 = *(*(x19 + 0x38) + 8)
        x9_1 = _vtable_for_std::__ndk1::__back_ref_collate<char, std::__ndk1::regex_traits<char> >
        goto label_f13898
    
    result = operator new(0x18)
    result_1 = result
    x8_2 = *(x19 + 0x38) + 8
    int64_t x9 = *x8_2
    result[2].d = entry_x1
    *result = _vtable_for_std::__ndk1::__back_ref<char> + 0x10
    result[1] = x9
*x8_2 = result_1
*(x19 + 0x38) = *(*(x19 + 0x38) + 8)
return result
