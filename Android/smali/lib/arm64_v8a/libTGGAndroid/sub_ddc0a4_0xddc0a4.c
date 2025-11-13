// 函数: sub_ddc0a4
// 地址: 0xddc0a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_7 = *(arg2 + 0xb0)

if (x8_7 != 0)
    int64_t x9_1 = *(arg2 + 0xc0)
    *(arg2 + 0xb8) = x8_7
    Botan::deallocate_memory(x8_7, x9_1 - x8_7, 1)

void* x0_1 = *(arg2 + 0x98)

if (x0_1 != 0)
    int64_t x8 = *(arg2 + 0xa8)
    *(arg2 + 0xa0) = x0_1
    Botan::deallocate_memory(x0_1, x8 - x0_1, 1)

void* x0_2 = *(arg2 + 0x80)

if (x0_2 != 0)
    int64_t x8_1 = *(arg2 + 0x90)
    *(arg2 + 0x88) = x0_2
    Botan::deallocate_memory(x0_2, x8_1 - x0_2, 1)

void* x0_3 = *arg5

if (x0_3 != 0)
    int64_t x8_2 = *(arg2 + 0x78)
    *(arg2 + 0x70) = x0_3
    Botan::deallocate_memory(x0_3, x8_2 - x0_3, 1)

void* x0_4 = *arg4

if (x0_4 != 0)
    int64_t x8_3 = *(arg2 + 0x48)
    *(arg2 + 0x40) = x0_4
    Botan::deallocate_memory(x0_4, x8_3 - x0_4, 1)

void* x0_5 = *arg3

if (x0_5 != 0)
    int64_t x8_4 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x0_5
    Botan::deallocate_memory(x0_5, x8_4 - x0_5, 1)

void* x20 = *arg6
*arg6 = 0
int64_t* x0_6

if (x20 != 0)
    Botan::L_computer::~L_computer()
    operator delete(x20)
    x0_6 = *(arg2 + 8)
    *(arg2 + 8) = 0
    
    if (x0_6 != 0)
    label_ddc210:
        (*(*x0_6 + 8))()
        sub_1101e04(arg1)
        noreturn
else
    x0_6 = *(arg2 + 8)
    *(arg2 + 8) = 0
    
    if (x0_6 != 0)
        goto label_ddc210
sub_1101e04(arg1)
noreturn
