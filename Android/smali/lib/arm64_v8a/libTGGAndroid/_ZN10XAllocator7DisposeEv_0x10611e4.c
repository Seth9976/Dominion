// 函数: _ZN10XAllocator7DisposeEv
// 地址: 0x10611e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* result = *(entry_x0 + 8)

if (result != 0)
    int64_t* i
    
    do
        i = *result
        XFree(result)
        result = i
    while (i != 0)

*(entry_x0 + 8) = 0
return result
