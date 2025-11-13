// 函数: _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE
// 地址: 0x10afc9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = entry_x1[1]
*arg1 = x8
*(arg1 + *(x8 - 0x18)) = entry_x1[2]
void* x8_2 = *arg1
*(arg1 + 8) = 0
void* x21 = arg1 + *(x8_2 - 0x18)
*(x21 + 0x10) = data_71cc40
int64_t entry_x2
*(x21 + 0x28) = entry_x2
*(x21 + 0x20) = entry_x2 == 0 ? 1 : 0
*(x21 + 0x24) = 0
*(x21 + 8) = 0x1002
__builtin_memset(x21 + 0x38, 0, 0x50)
int64_t result = std::__ndk1::locale::locale()
*(x21 + 0x88) = 0
*(x21 + 0x90) = 0xffffffff
void* x8_5 = entry_x1[3]
*(arg1 + 0x10) = x8_5
*(arg1 + 0x10 + *(x8_5 - 0x18)) = entry_x1[4]
void* x8_7 = *entry_x1
*arg1 = x8_7
*(arg1 + *(x8_7 - 0x18)) = entry_x1[5]
*(arg1 + 0x10) = entry_x1[6]
return result
