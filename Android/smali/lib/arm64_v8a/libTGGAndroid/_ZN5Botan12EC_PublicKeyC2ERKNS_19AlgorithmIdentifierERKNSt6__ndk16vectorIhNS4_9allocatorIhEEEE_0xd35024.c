// 函数: _ZN5Botan12EC_PublicKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xd35024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
void* entry_x2
*(entry_x2 + 0x30)
Botan::EC_Group::EC_Group(arg1 + 8, *(entry_x2 + 0x28))
int64_t* entry_x3
uint8_t* x22 = *entry_x3
Botan::OS2ECP(x22, entry_x3[1] - x22, Botan::EC_Group::data())
*(arg1 + 0xa4) = 0
void* result = Botan::EC_Group::data()
*(arg1 + 0xa0) = (*(result + 0x1c8) != *(result + 0x1d0) ? 1 : 0) << 1
return result
