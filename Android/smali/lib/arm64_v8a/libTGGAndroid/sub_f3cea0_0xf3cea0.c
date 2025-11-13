// 函数: sub_f3cea0
// 地址: 0xf3cea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *(arg1 + 0x10)

if (result == 0)
    return result

int64_t x9_1 = *(arg1 + 0x20)
*(arg1 + 0x18) = result
return Botan::deallocate_memory(result, x9_1 - result, 1)
