// 函数: __cxa_current_exception_type
// 地址: 0x10e9ae0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = __cxa_get_globals_fast()

if (result == 0)
    return result

void* x8_1 = *result

if (x8_1 != 0 && 0x434c4e47432b2b == *(x8_1 + 0x60) u>> 8)
    return *(x8_1 + 0x10)

return nullptr
