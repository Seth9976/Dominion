// 函数: _ZN5Botan5Tiger4passERmS1_S1_RKNSt6__ndk16vectorImNS_16secure_allocatorImEEEEh
// 地址: 0xe3f608
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12_1 = *arg3 ^ **arg4
int64_t x13_2 = *(Botan::Tiger::SBOX1 + ((x12_1 & 0xff) << 3))
int64_t x14_1 = *(Botan::Tiger::SBOX2 + ((x12_1 u>> 0x10 & 0xff) << 3))
*arg3 = x12_1
*arg1 -= x14_1 ^ x13_2 ^ *(Botan::Tiger::SBOX3 + ((x12_1 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x12_1 u>> 0x30 & 0xff) << 3))
uint64_t x13_5 = *arg3
uint64_t x12_6 = zx.q(arg5)
int64_t x13_8 = *(Botan::Tiger::SBOX2 + ((x13_5 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_5 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_5 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_5 u>> 8 & 0xff) << 3))
*arg2 = (*arg2 + x13_8) * x12_6
uint64_t x13_13 = *arg1 ^ *(*arg4 + 8)
int64_t x14_9 = *(Botan::Tiger::SBOX1 + ((x13_13 & 0xff) << 3))
int64_t x15_5 = *(Botan::Tiger::SBOX2 + ((x13_13 u>> 0x10 & 0xff) << 3))
*arg1 = x13_13
*arg2 -= x15_5 ^ x14_9 ^ *(Botan::Tiger::SBOX3 + ((x13_13 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_13 u>> 0x30 & 0xff) << 3))
uint64_t x13_18 = *arg1
int64_t x13_21 = *(Botan::Tiger::SBOX2 + ((x13_18 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_18 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_18 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_18 u>> 8 & 0xff) << 3))
*arg3 = (*arg3 + x13_21) * x12_6
uint64_t x13_26 = *arg2 ^ *(*arg4 + 0x10)
int64_t x14_19 = *(Botan::Tiger::SBOX1 + ((x13_26 & 0xff) << 3))
int64_t x15_9 = *(Botan::Tiger::SBOX2 + ((x13_26 u>> 0x10 & 0xff) << 3))
*arg2 = x13_26
*arg3 -= x15_9 ^ x14_19 ^ *(Botan::Tiger::SBOX3 + ((x13_26 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_26 u>> 0x30 & 0xff) << 3))
uint64_t x13_31 = *arg2
int64_t x13_34 = *(Botan::Tiger::SBOX2 + ((x13_31 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_31 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_31 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_31 u>> 8 & 0xff) << 3))
*arg1 = (*arg1 + x13_34) * x12_6
uint64_t x13_39 = *arg3 ^ *(*arg4 + 0x18)
int64_t x14_29 = *(Botan::Tiger::SBOX1 + ((x13_39 & 0xff) << 3))
int64_t x15_13 = *(Botan::Tiger::SBOX2 + ((x13_39 u>> 0x10 & 0xff) << 3))
*arg3 = x13_39
*arg1 -= x15_13 ^ x14_29 ^ *(Botan::Tiger::SBOX3 + ((x13_39 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_39 u>> 0x30 & 0xff) << 3))
uint64_t x13_44 = *arg3
int64_t x13_47 = *(Botan::Tiger::SBOX2 + ((x13_44 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_44 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_44 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_44 u>> 8 & 0xff) << 3))
*arg2 = (*arg2 + x13_47) * x12_6
uint64_t x13_52 = *arg1 ^ *(*arg4 + 0x20)
int64_t x14_39 = *(Botan::Tiger::SBOX1 + ((x13_52 & 0xff) << 3))
int64_t x15_17 = *(Botan::Tiger::SBOX2 + ((x13_52 u>> 0x10 & 0xff) << 3))
*arg1 = x13_52
*arg2 -= x15_17 ^ x14_39 ^ *(Botan::Tiger::SBOX3 + ((x13_52 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_52 u>> 0x30 & 0xff) << 3))
uint64_t x13_57 = *arg1
int64_t x13_60 = *(Botan::Tiger::SBOX2 + ((x13_57 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_57 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_57 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_57 u>> 8 & 0xff) << 3))
*arg3 = (*arg3 + x13_60) * x12_6
uint64_t x13_65 = *arg2 ^ *(*arg4 + 0x28)
int64_t x14_49 = *(Botan::Tiger::SBOX1 + ((x13_65 & 0xff) << 3))
int64_t x15_21 = *(Botan::Tiger::SBOX2 + ((x13_65 u>> 0x10 & 0xff) << 3))
*arg2 = x13_65
*arg3 -= x15_21 ^ x14_49 ^ *(Botan::Tiger::SBOX3 + ((x13_65 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_65 u>> 0x30 & 0xff) << 3))
uint64_t x13_70 = *arg2
int64_t x13_73 = *(Botan::Tiger::SBOX2 + ((x13_70 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_70 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_70 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_70 u>> 8 & 0xff) << 3))
*arg1 = (*arg1 + x13_73) * x12_6
uint64_t x13_78 = *arg3 ^ *(*arg4 + 0x30)
int64_t x14_59 = *(Botan::Tiger::SBOX1 + ((x13_78 & 0xff) << 3))
int64_t x15_25 = *(Botan::Tiger::SBOX2 + ((x13_78 u>> 0x10 & 0xff) << 3))
*arg3 = x13_78
*arg1 -= x15_25 ^ x14_59 ^ *(Botan::Tiger::SBOX3 + ((x13_78 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_78 u>> 0x30 & 0xff) << 3))
uint64_t x13_83 = *arg3
int64_t x13_86 = *(Botan::Tiger::SBOX2 + ((x13_83 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_83 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_83 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_83 u>> 8 & 0xff) << 3))
*arg2 = (*arg2 + x13_86) * x12_6
uint64_t x13_91 = *arg1 ^ *(*arg4 + 0x38)
int64_t x14_69 = *(Botan::Tiger::SBOX1 + ((x13_91 & 0xff) << 3))
int64_t x15_29 = *(Botan::Tiger::SBOX2 + ((x13_91 u>> 0x10 & 0xff) << 3))
*arg1 = x13_91
*arg2 -= x15_29 ^ x14_69 ^ *(Botan::Tiger::SBOX3 + ((x13_91 u>> 0x20 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_91 u>> 0x30 & 0xff) << 3))
uint64_t x13_96 = *arg1
int64_t x8_3 = *(Botan::Tiger::SBOX2 + ((x13_96 u>> 0x28 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX1 + (x13_96 u>> 0x35 & 0x7f8))
    ^ *(Botan::Tiger::SBOX3 + ((x13_96 u>> 0x18 & 0xff) << 3))
    ^ *(Botan::Tiger::SBOX4 + ((x13_96 u>> 8 & 0xff) << 3))
*arg3 = (*arg3 + x8_3) * x12_6
