// 函数: _ZNK5Botan15ECIES_Decryptor16plaintext_lengthEm
// 地址: 0xd3c178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0x88)
void* x0_1 = Botan::EC_Group::data()
int64_t* x8 = *(arg1 + 0xd0)
int64_t x9_1 = *(x0_1 + 0x1e0) + 7
int64_t x21_1

if (x21 != 1)
    x21_1 = x9_1 u>> 2 | 1
else
    x21_1 = (x9_1 u>> 3) + 1

int64_t entry_x1

if ((**x8)(x8) + x21_1 u<= entry_x1)
    jump(*(**(arg1 + 0xd8) + 0x48))

return 0
