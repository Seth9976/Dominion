// 函数: _ZNK7XStringneERKS_
// 地址: 0x106465c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
int64_t* entry_x1
void* x9 = *entry_x1
void* const x0

x0 = x8 == 0 ? &data_793a18 : x8

void* const x1

x1 = x9 == 0 ? &data_793a18 : x9

return zx.q(strcmp(x0, x1) != 0 ? 1 : 0)
