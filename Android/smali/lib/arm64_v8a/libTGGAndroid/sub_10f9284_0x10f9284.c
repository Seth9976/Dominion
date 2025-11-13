// 函数: sub_10f9284
// 地址: 0x10f9284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
char* x0

if (x8 + 1 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_1 = x10 << 1
    size_t bytes
    
    if (bytes_1 u< x8 + 1)
        bytes = x8 + 1
    else
        bytes = bytes_1
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 == 0)
        std::terminate()
        noreturn
    
    x8 = arg2[1]
else
    x0 = *arg2

x0[x8] = 0x7e
arg2[1] += 1
jump(*(**(arg1 + 0x10) + 0x20))
