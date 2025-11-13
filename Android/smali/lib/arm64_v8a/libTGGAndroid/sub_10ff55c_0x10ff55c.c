// 函数: sub_10ff55c
// 地址: 0x10ff55c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1 = calloc(arg1, arg2)
void* result = result_1

if (result_1 == 0)
    size_t x20_1 = arg2 * arg1
    void* result_2 = sub_10ff468(x20_1)
    result = result_2
    
    if (result_2 != 0)
        memset(result, 0, x20_1)

return result
