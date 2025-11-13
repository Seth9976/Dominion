// 函数: _ZN5Botan7FPE_FE1D1Ev
// 地址: 0xd7fa5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xb]
*entry_x0 = _vtable_for_Botan::FPE_FE1 + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xd]
    entry_x0[0xc] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = entry_x0[6]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[8]
    entry_x0[7] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

void* x0_2 = entry_x0[3]

if (x0_2 != 0)
    entry_x0[4] = x0_2
    operator delete(x0_2)

sub_d7f9f0(&entry_x0[2], 0)
int64_t* result = entry_x0[1]
entry_x0[1] = 0

if (result == 0)
    return result

jump(*(*result + 0x10))
