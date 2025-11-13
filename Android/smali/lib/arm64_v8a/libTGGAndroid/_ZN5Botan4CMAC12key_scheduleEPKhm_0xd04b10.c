// 函数: _ZN5Botan4CMAC12key_scheduleEPKhm
// 地址: 0xd04b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 0x10) + 0x10))()
int64_t x0_1 = *(arg1 + 0x30)
int64_t x8_2 = *(arg1 + 0x38)

if (x8_2 != x0_1)
    memset(x0_1, 0, x8_2 - x0_1)

int64_t x0_2 = *(arg1 + 0x18)
int64_t x8_3 = *(arg1 + 0x20)

if (x8_3 != x0_2)
    memset(x0_2, 0, x8_3 - x0_2)

int64_t x0_3 = *(arg1 + 0x48)
int64_t x8_4 = *(arg1 + 0x50)

if (x8_4 != x0_3)
    memset(x0_3, 0, x8_4 - x0_3)

int64_t x0_4 = *(arg1 + 0x60)
int64_t x8_5 = *(arg1 + 0x68)

if (x8_5 != x0_4)
    memset(x0_4, 0, x8_5 - x0_4)

uint8_t* x0_5 = *(arg1 + 0x10)
*(arg1 + 0x80) = 0
Botan::SymmetricAlgorithm::set_key(x0_5, arg2)
int64_t* x20_1 = *(arg1 + 0x10)
int64_t x21_1 = *(arg1 + 0x48)
(*(*x20_1 + 0x48))(x20_1, x21_1, x21_1, (*(arg1 + 0x50) - x21_1) u/ (*(*x20_1 + 0x30))(x20_1))
uint8_t* x0_9 = *(arg1 + 0x48)
Botan::poly_double_n(x0_9, x0_9, *(arg1 + 0x50) - x0_9)
uint8_t* x0_10 = *(arg1 + 0x60)
return Botan::poly_double_n(x0_10, *(arg1 + 0x48), *(arg1 + 0x68) - x0_10) __tailcall
