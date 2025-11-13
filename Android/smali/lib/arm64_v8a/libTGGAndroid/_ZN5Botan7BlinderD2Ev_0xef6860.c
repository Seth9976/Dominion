// 函数: _ZN5Botan7BlinderD2Ev
// 地址: 0xef6860
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x0 = entry_x0[0x1e]

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x20]
    entry_x0[0x1f] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = entry_x0[0x19]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[0x1b]
    entry_x0[0x1a] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

int64_t* x0_2 = entry_x0[0x16]

if (&entry_x0[0x12] == x0_2)
    (*(*x0_2 + 0x20))()
else if (x0_2 != 0)
    (*(*x0_2 + 0x28))()

int64_t* x0_3 = entry_x0[0x10]

if (&entry_x0[0xc] == x0_3)
    (*(*x0_3 + 0x20))()
else if (x0_3 != 0)
    (*(*x0_3 + 0x28))()

void* x0_4 = entry_x0[5]

if (x0_4 != 0)
    int64_t x8_13 = entry_x0[7]
    entry_x0[6] = x0_4
    Botan::deallocate_memory(x0_4, (x8_13 - x0_4) s>> 2, 4)

void* result = *entry_x0

if (result == 0)
    return result

int64_t x8_15 = entry_x0[2]
entry_x0[1] = result
return Botan::deallocate_memory(result, (x8_15 - result) s>> 2, 4)
