// 函数: _ZNSt6__ndk18ios_base4swapERS0_
// 地址: 0x10b070c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t x9 = *(arg1 + 8)
void* entry_x1
*(arg1 + 8) = *(entry_x1 + 8)
*(entry_x1 + 8) = x9
int64_t x9_1 = *(arg1 + 0x10)
*(arg1 + 0x10) = *(entry_x1 + 0x10)
*(entry_x1 + 0x10) = x9_1
int64_t x9_2 = *(arg1 + 0x18)
*(arg1 + 0x18) = *(entry_x1 + 0x18)
*(entry_x1 + 0x18) = x9_2
int32_t x9_3 = *(arg1 + 0x20)
*(arg1 + 0x20) = *(entry_x1 + 0x20)
*(entry_x1 + 0x20) = x9_3
int32_t x9_4 = *(arg1 + 0x24)
*(arg1 + 0x24) = *(entry_x1 + 0x24)
*(entry_x1 + 0x24) = x9_4
void var_50
std::__ndk1::locale::locale(&var_50)
std::__ndk1::locale::operator=(arg1 + 0x30)
std::__ndk1::locale::operator=(entry_x1 + 0x30)
int64_t result = std::__ndk1::locale::~locale()
int64_t x9_5 = *(arg1 + 0x38)
*(arg1 + 0x38) = *(entry_x1 + 0x38)
*(entry_x1 + 0x38) = x9_5
int64_t x9_6 = *(arg1 + 0x40)
*(arg1 + 0x40) = *(entry_x1 + 0x40)
*(entry_x1 + 0x40) = x9_6
int64_t x9_7 = *(arg1 + 0x48)
*(arg1 + 0x48) = *(entry_x1 + 0x48)
*(entry_x1 + 0x48) = x9_7
int64_t x9_8 = *(arg1 + 0x50)
*(arg1 + 0x50) = *(entry_x1 + 0x50)
*(entry_x1 + 0x50) = x9_8
int64_t x9_9 = *(arg1 + 0x58)
*(arg1 + 0x58) = *(entry_x1 + 0x58)
*(entry_x1 + 0x58) = x9_9
int64_t x9_10 = *(arg1 + 0x60)
*(arg1 + 0x60) = *(entry_x1 + 0x60)
*(entry_x1 + 0x60) = x9_10
int64_t x9_11 = *(arg1 + 0x68)
*(arg1 + 0x68) = *(entry_x1 + 0x68)
*(entry_x1 + 0x68) = x9_11
int64_t x9_12 = *(arg1 + 0x70)
*(arg1 + 0x70) = *(entry_x1 + 0x70)
*(entry_x1 + 0x70) = x9_12
int64_t x9_13 = *(arg1 + 0x78)
*(arg1 + 0x78) = *(entry_x1 + 0x78)
*(entry_x1 + 0x78) = x9_13
int64_t x9_14 = *(arg1 + 0x80)
*(arg1 + 0x80) = *(entry_x1 + 0x80)
*(entry_x1 + 0x80) = x9_14

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
