// 函数: _ZN5Botan8XTS_Mode12update_tweakEm
// 地址: 0xed68f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0_1 = (*(**(arg1 + 0x10) + 0x30))()
int64_t entry_x1

if (entry_x1 != 0)
    uint8_t* x0_2 = *(arg1 + 0x18)
    Botan::poly_double_n_le(x0_2, x0_2 + x0_1 * (entry_x1 - 1), x0_1)

int64_t result = (*(*arg1 + 0x50))(arg1)
uint64_t x21_1 = result u/ x0_1

if (x21_1 u>= 2)
    int64_t x22_1 = 0
    int64_t x23_1 = 1
    
    do
        void* x8_5 = *(arg1 + 0x18)
        result = Botan::poly_double_n_le(x8_5 + x0_1 + x22_1, x8_5 + x22_1, x0_1)
        x23_1 += 1
        x22_1 += x0_1
    while (x23_1 != x21_1)

return result
