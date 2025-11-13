// 函数: _Z24UIStateOverrideOwnerDrawjib
// 地址: 0x105866c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x19 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
void* result = UIStateElementGet(x19, arg2, &data_793a18)
int32_t x8_1 = *(x19 + 0x28)
*(result + 0x174) = arg3 & 1
*(result + 0x170) = x8_1 + 1
return result
