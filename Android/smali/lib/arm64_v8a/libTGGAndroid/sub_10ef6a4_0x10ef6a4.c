// 函数: sub_10ef6a4
// 地址: 0x10ef6a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 0x10)
int64_t x8 = *(arg1 + 0x18)
size_t x20 = x8 - x21

if (x8 == x21)
    return 

int64_t x8_1 = arg2[1]
int64_t x10_1 = arg2[2]
int64_t bytes_2 = x8_1 + x20
int64_t x0

if (bytes_2 u>= x10_1)
    int64_t oldmem = *arg2
    int64_t bytes_1 = x10_1 << 1
    int64_t bytes
    
    bytes = bytes_1 u< bytes_2 ? bytes_2 : bytes_1
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 == 0)
        std::terminate()
        noreturn
    
    x8_1 = arg2[1]
else
    x0 = *arg2

memmove(x0 + x8_1, x21, x20)
arg2[1] += x20
