// 函数: _ZN14NetworkGlobalsD2Ev
// 地址: 0xf84284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x20_1 = entry_x0 + 0x80
void* i = *x20_1

while (i != 0)
    void* i_3 = i
    i = *(i + 8)
    XPooledFree(i_3, 0x18)

__builtin_memset(x20_1, 0, 0x14)
void* i_1 = *(entry_x0 + 0x68)

while (i_1 != 0)
    void* i_4 = i_1
    i_1 = *(i_1 + 8)
    XPooledFree(i_4, 0x18)

__builtin_memset(entry_x0 + 0x68, 0, 0x14)
void* i_2 = *(entry_x0 + 0x50)

while (i_2 != 0)
    void* i_5 = i_2
    i_2 = *(i_2 + 8)
    XPooledFree(i_5, 0x18)

__builtin_memset(entry_x0 + 0x50, 0, 0x14)
