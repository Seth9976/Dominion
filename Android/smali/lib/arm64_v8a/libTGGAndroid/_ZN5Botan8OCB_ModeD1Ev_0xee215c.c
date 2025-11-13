// 函数: _ZN5Botan8OCB_ModeD1Ev
// 地址: 0xee215c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0x16]
*entry_x0 = _vtable_for_Botan::OCB_Mode + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x18]
    entry_x0[0x17] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[0x13]

if (x0_1 != 0)
    int64_t x8_2 = entry_x0[0x15]
    entry_x0[0x14] = x0_1
    Botan::deallocate_memory(x0_1, x8_2 - x0_1, 1)

void* x0_2 = entry_x0[0x10]

if (x0_2 != 0)
    int64_t x8_3 = entry_x0[0x12]
    entry_x0[0x11] = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)

void* x0_3 = entry_x0[0xd]

if (x0_3 != 0)
    int64_t x8_4 = entry_x0[0xf]
    entry_x0[0xe] = x0_3
    Botan::deallocate_memory(x0_3, x8_4 - x0_3, 1)

void* x0_4 = entry_x0[7]

if (x0_4 != 0)
    int64_t x8_5 = entry_x0[9]
    entry_x0[8] = x0_4
    Botan::deallocate_memory(x0_4, x8_5 - x0_4, 1)

void* x0_5 = entry_x0[4]

if (x0_5 != 0)
    int64_t x8_6 = entry_x0[6]
    entry_x0[5] = x0_5
    Botan::deallocate_memory(x0_5, x8_6 - x0_5, 1)

void* x20 = entry_x0[2]
entry_x0[2] = 0

if (x20 != 0)
    Botan::L_computer::~L_computer()
    operator delete(x20)

int64_t* result = entry_x0[1]
entry_x0[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
