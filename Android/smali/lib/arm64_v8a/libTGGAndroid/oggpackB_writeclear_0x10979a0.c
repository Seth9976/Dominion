// 函数: oggpackB_writeclear
// 地址: 0x10979a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = *(arg1 + 0x10)

if (result != 0)
    result = free(result)

__builtin_memset(arg1, 0, 0x28)
return result
