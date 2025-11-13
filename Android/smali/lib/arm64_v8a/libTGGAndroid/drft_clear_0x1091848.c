// 函数: drft_clear
// 地址: 0x1091848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1

if (arg1 == 0)
    return 

int64_t x0 = *(x19 + 8)

if (x0 != 0)
    free(x0)

arg1 = *(x19 + 0x10)

if (arg1 != 0)
    free(arg1)

__builtin_memset(x19, 0, 0x18)
