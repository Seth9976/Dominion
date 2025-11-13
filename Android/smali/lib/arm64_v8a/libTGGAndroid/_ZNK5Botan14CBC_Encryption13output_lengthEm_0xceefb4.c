// 函数: _ZNK5Botan14CBC_Encryption13output_lengthEm
// 地址: 0xceefb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = *(arg1 + 0x30)
int64_t entry_x1

if (entry_x1 == 0)
    return result

if (result == 0)
    uint8_t* x0
    uint64_t x1
    x0, x1 = Botan::throw_invalid_argument("align_to must not be 0", "round_up", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::CBC_Encryption::process(x0, x1) __tailcall

int64_t x8_2 = entry_x1 u% result
int64_t x8_3

if (x8_2 == 0)
    x8_3 = 0
else
    x8_3 = result - x8_2

return x8_3 + entry_x1
