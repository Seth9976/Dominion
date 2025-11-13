// 函数: sub_10f5618
// 地址: 0x10f5618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
int64_t result

if (x8 + 9 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_1 = x10 << 1
    int64_t bytes
    
    if (bytes_1 u< x8 + 9)
        bytes = x8 + 9
    else
        bytes = bytes_1
    
    arg2[2] = bytes
    result = realloc(oldmem, bytes)
    *arg2 = result
    
    if (result == 0)
        std::terminate()
        noreturn
    
    x8 = arg2[1]
else
    result = *arg2

__builtin_strncpy(result + x8, "typename ", 9)
arg2[1] += 9
return result
