// 函数: _ZNKSt6__ndk16locale9has_facetERNS0_2idE
// 地址: 0x10cd5e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int64_t* entry_x1
uint64_t* x19 = entry_x1
void* x21 = *arg1
int64_t* var_60 = entry_x1
int64_t (* const var_58)() = std::__ndk1::locale::id::__init
int64_t var_50 = 0

if (*entry_x1 != -1)
    int64_t* var_40 = &var_60
    int64_t** var_48 = &var_40
    std::__ndk1::__call_once(x19, &var_48, sub_10dd4b0)

int64_t x8_2 = *(x21 + 0x10)
int64_t x9_1 = sx.q(x19[1].d) - 1
uint64_t result

if (x9_1 u>= (*(x21 + 0x18) - x8_2) s>> 3)
    result = 0
else
    result = zx.q(*(x8_2 + (x9_1 << 3)) != 0 ? 1 : 0)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
