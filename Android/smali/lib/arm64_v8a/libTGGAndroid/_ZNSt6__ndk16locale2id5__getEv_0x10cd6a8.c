// 函数: _ZNSt6__ndk16locale2id5__getEv
// 地址: 0x10cd6a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int64_t* entry_x0
uint64_t* x19 = entry_x0
int64_t* var_50 = entry_x0
int64_t (* const var_48)() = std::__ndk1::locale::id::__init
int64_t var_40 = 0

if (*entry_x0 != -1)
    int64_t* var_30 = &var_50
    int64_t** var_38 = &var_30
    std::__ndk1::__call_once(x19, &var_38, sub_10dd4b0)

if (*(x20 + 0x28) == x8)
    return sx.q(x19[1].d) - 1

__stack_chk_fail()
noreturn
