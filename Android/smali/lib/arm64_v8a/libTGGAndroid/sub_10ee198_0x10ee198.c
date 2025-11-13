// 函数: sub_10ee198
// 地址: 0x10ee198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(arg1 + 0x10)
int64_t x8 = *(arg1 + 0x18)
size_t x21 = x8 - x22

if (x8 != x22)
    int64_t x8_1 = arg2[1]
    int64_t x10_1 = arg2[2]
    int64_t bytes_2 = x8_1 + x21
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
    
    memmove(x0 + x8_1, x22, x21)
    arg2[1] += x21

int64_t* x20_1 = *(arg1 + 0x20)
int64_t result = (*(*x20_1 + 0x20))(x20_1, arg2)

if (zx.d(*(x20_1 + 9)) != 1)
    jump(*(*x20_1 + 0x28))

return result
