// 函数: __cxa_current_primary_exception
// 地址: 0x10e9c3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = __cxa_get_globals_fast()

if (result != 0)
    void* x8_1 = *result
    int64_t x9_1
    
    if (x8_1 != 0)
        x9_1 = *(x8_1 + 0x60)
    
    if (x8_1 == 0 || 0x434c4e47432b2b != x9_1 u>> 8)
        return nullptr
    
    if ((x9_1 & 0xff) == 1)
        x8_1 = *(x8_1 + 8) - 0x80
    
    result = x8_1 + 0x80
    int32_t i
    
    do
        i = __stlxr(__ldaxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

return result
