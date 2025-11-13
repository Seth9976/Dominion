// 函数: sub_10fcc4c
// 地址: 0x10fcc4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 0x10) + 0x20))()
int64_t x8_2 = arg2[1]
int64_t x10 = arg2[2]
char* result

if (x8_2 + 1 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_1 = x10 << 1
    size_t bytes
    
    if (bytes_1 u< x8_2 + 1)
        bytes = x8_2 + 1
    else
        bytes = bytes_1
    
    arg2[2] = bytes
    result = realloc(oldmem, bytes)
    *arg2 = result
    
    if (result == 0)
        std::terminate()
        noreturn
    
    x8_2 = arg2[1]
else
    result = *arg2

result[x8_2] = 0x20
arg2[1] += 1
return result
