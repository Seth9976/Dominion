// 函数: _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEC2EPNS_15basic_streambufIwS2_EE
// 地址: 0x10ad73c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0x18)) = entry_x1[1]
void* x19 = arg1 + *(*arg1 - 0x18)
*(x19 + 0x10) = data_71cc40
int64_t entry_x2
*(x19 + 0x28) = entry_x2
*(x19 + 0x20) = entry_x2 == 0 ? 1 : 0
*(x19 + 0x24) = 0
*(x19 + 8) = 0x1002
__builtin_memset(x19 + 0x38, 0, 0x50)
int64_t result = std::__ndk1::locale::locale()
*(x19 + 0x88) = 0
*(x19 + 0x90) = 0xffffffff
return result
