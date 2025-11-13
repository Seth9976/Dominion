// 函数: _ZN9XmlReaderD1Ev
// 地址: 0x1062524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* result = *entry_x0

if (result != 0)
    result = XFree(result)

void* i = entry_x0[0x26]

while (i != 0)
    void* i_1 = i
    i = *(i + 0x10)
    result = XPooledFree(i_1, 0x20)

*entry_x0 = 0
__builtin_memset(&entry_x0[0x26], 0, 0x14)
return result
