// 函数: _ZN5Botan13ANSI_X919_MAC12final_resultEPh
// 地址: 0xeca654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x38) != 0)
    int64_t* x21_1 = *(arg1 + 0x10)
    int64_t x22_1 = *(arg1 + 0x20)
    (*(*x21_1 + 0x48))(x21_1, x22_1, x22_1, (*(arg1 + 0x28) - x22_1) u/ (*(*x21_1 + 0x30))(x21_1))

int64_t* x0_3 = *(arg1 + 0x18)
int64_t entry_x1
(*(*x0_3 + 0x50))(x0_3, *(arg1 + 0x20), entry_x1, 1)
int64_t* x0_4 = *(arg1 + 0x10)
(*(*x0_4 + 0x48))(x0_4, entry_x1, entry_x1, 1)
int64_t result = *(arg1 + 0x20)
int64_t x8_9 = *(arg1 + 0x28)

if (x8_9 != result)
    result = memset(result, 0, x8_9 - result)

*(arg1 + 0x38) = 0
return result
