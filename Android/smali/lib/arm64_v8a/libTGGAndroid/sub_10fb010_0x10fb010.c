// 函数: sub_10fb010
// 地址: 0x10fb010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x10)
(*(*x21 + 0x20))(x21)

if (zx.d(*(x21 + 9)) != 1)
    (*(*x21 + 0x28))(x21, arg2)

int64_t x8_5 = arg2[1]
int64_t x10 = arg2[2]
int16_t* x0_2

if (x8_5 + 2 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_1 = x10 << 1
    size_t bytes
    
    if (bytes_1 u< x8_5 + 2)
        bytes = x8_5 + 2
    else
        bytes = bytes_1
    
    arg2[2] = bytes
    x0_2 = realloc(oldmem, bytes)
    *arg2 = x0_2
    
    if (x0_2 == 0)
        std::terminate()
        noreturn
    
    x8_5 = arg2[1]
else
    x0_2 = *arg2

*(x0_2 + x8_5) = 0x3a3a
arg2[1] += 2
int64_t* x20_1 = *(arg1 + 0x18)
int64_t result = (*(*x20_1 + 0x20))(x20_1, arg2)

if (zx.d(*(x20_1 + 9)) != 1)
    jump(*(*x20_1 + 0x28))

return result
