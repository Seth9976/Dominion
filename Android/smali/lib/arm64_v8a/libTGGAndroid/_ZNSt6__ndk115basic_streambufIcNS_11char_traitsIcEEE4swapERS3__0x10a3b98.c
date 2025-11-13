// 函数: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4swapERS3_
// 地址: 0x10a3b98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
void var_50
std::__ndk1::locale::locale(&var_50)
std::__ndk1::locale::operator=(arg1 + 8)
void* entry_x1
std::__ndk1::locale::operator=(entry_x1 + 8)
int64_t result = std::__ndk1::locale::~locale()
int64_t x9 = *(arg1 + 0x10)
*(arg1 + 0x10) = *(entry_x1 + 0x10)
*(entry_x1 + 0x10) = x9
int64_t x9_1 = *(arg1 + 0x18)
*(arg1 + 0x18) = *(entry_x1 + 0x18)
*(entry_x1 + 0x18) = x9_1
int64_t x9_2 = *(arg1 + 0x20)
*(arg1 + 0x20) = *(entry_x1 + 0x20)
*(entry_x1 + 0x20) = x9_2
int64_t x9_3 = *(arg1 + 0x28)
*(arg1 + 0x28) = *(entry_x1 + 0x28)
*(entry_x1 + 0x28) = x9_3
int64_t x9_4 = *(arg1 + 0x30)
*(arg1 + 0x30) = *(entry_x1 + 0x30)
*(entry_x1 + 0x30) = x9_4
int64_t x9_5 = *(arg1 + 0x38)
*(arg1 + 0x38) = *(entry_x1 + 0x38)
*(entry_x1 + 0x38) = x9_5

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
