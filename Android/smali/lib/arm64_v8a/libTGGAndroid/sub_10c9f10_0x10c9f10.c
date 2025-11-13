// 函数: sub_10c9f10
// 地址: 0x10c9f10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t var_60 = 0
int64_t (* const var_70)() = std::__ndk1::moneypunct<wchar_t, true>::id
int64_t (* const var_68)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::moneypunct<wchar_t, true>::id != -1)
    int64_t (* const* var_50)() = &var_70
    int64_t (* const** var_58)() = &var_50
    std::__ndk1::__call_once(std::__ndk1::moneypunct<wchar_t, true>::id, &var_58, sub_10dd4b0)

int64_t x23 = sx.q(*(std::__ndk1::moneypunct<wchar_t, true>::id + 8)) - 1
std::__ndk1::__shared_count::__add_shared()
int64_t x8_3 = *(arg1 + 0x10)
int64_t x10 = (*(arg1 + 0x18) - x8_3) s>> 3

if (x10 u<= x23)
    if (x23 + 1 u> x10)
        sub_10dd360(arg1 + 0x10, x23 + 1 - x10)
        x8_3 = *(arg1 + 0x10)
    else if (x23 + 1 u< x10)
        *(arg1 + 0x18) = x8_3 + ((x23 + 1) << 3)

int64_t result = *(x8_3 + (x23 << 3))

if (result != 0)
    result = std::__ndk1::__shared_count::__release_shared()
    x8_3 = *(arg1 + 0x10)

*(x8_3 + (x23 << 3)) = arg2

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
