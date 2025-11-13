// 函数: sub_10fb840
// 地址: 0x10fb840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
int64_t x0

if (x8 + 5 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_1 = x10 << 1
    int64_t bytes
    
    if (bytes_1 u< x8 + 5)
        bytes = x8 + 5
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

__builtin_strncpy(x0 + x8, "std::", 5)
arg2[1] += 5
int64_t* x20_1 = *(arg1 + 0x10)
int64_t result = (*(*x20_1 + 0x20))(x20_1, arg2)

if (zx.d(*(x20_1 + 9)) != 1)
    jump(*(*x20_1 + 0x28))

return result
