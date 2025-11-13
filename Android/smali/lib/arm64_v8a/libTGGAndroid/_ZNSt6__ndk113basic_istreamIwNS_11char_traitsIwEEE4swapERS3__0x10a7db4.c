// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4swapERS3_
// 地址: 0x10a7db4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 8)
int64_t* entry_x1
*(arg1 + 8) = entry_x1[1]
entry_x1[1] = x9
void* x19 = arg1 + *(*arg1 - 0x18)
void* x20 = entry_x1 + *(*entry_x1 - 0x18)
int64_t result = std::__ndk1::ios_base::swap(x19)
int64_t x9_3 = *(x19 + 0x88)
*(x19 + 0x88) = *(x20 + 0x88)
*(x20 + 0x88) = x9_3
int32_t x9_4 = *(x19 + 0x90)
*(x19 + 0x90) = *(x20 + 0x90)
*(x20 + 0x90) = x9_4
return result
