// 函数: _ZN5Botan11Hex_Encoder7end_msgEv
// 地址: 0xd7a494
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* entry_x0
*(entry_x0 + 0x88)
int64_t result = Botan::Hex_Encoder::encode_and_send(entry_x0, *(entry_x0 + 0x58))

if (*(entry_x0 + 0x90) != 0 && *(entry_x0 + 0x50) != 0)
    char var_14 = 0xa
    result = (*(*entry_x0 + 0x38))(entry_x0, &var_14, 1)

*(entry_x0 + 0x88) = 0
*(entry_x0 + 0x90) = 0
return result
