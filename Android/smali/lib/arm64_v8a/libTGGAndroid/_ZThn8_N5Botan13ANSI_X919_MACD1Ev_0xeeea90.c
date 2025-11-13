// 函数: _ZThn8_N5Botan13ANSI_X919_MACD1Ev
// 地址: 0xeeea90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[3]
arg1[-1] = _vtable_for_Botan::ANSI_X919_MAC + 0x10
*arg1 = _vtable_for_Botan::ANSI_X919_MAC + 0x98

if (x0 != 0)
    int64_t x8_1 = arg1[5]
    arg1[4] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* x0_1 = arg1[2]
arg1[2] = 0

if (x0_1 != 0)
    (*(*x0_1 + 8))()

int64_t* result = arg1[1]
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
