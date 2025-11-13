// 函数: _Z14XmlReadDisposeP9XmlReader
// 地址: 0x106258c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *arg1

if (x0 != 0)
    XFree(x0)

void* result = *(arg1 + 0x130)

if (result != 0)
    void* i
    
    do
        i = *(result + 0x10)
        XPooledFree(result, 0x20)
        result = i
    while (i != 0)

__builtin_memset(arg1 + 0x130, 0, 0x14)
*arg1 = 0
return result
