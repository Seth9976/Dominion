// 函数: sub_10f4b1c
// 地址: 0x10f4b1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
int16_t* x0

if (x8 + 2 u>= x10)
    int64_t oldmem = *arg2
    size_t bytes_2 = x10 << 1
    size_t bytes
    
    if (bytes_2 u< x8 + 2)
        bytes = x8 + 2
    else
        bytes = bytes_2
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8 = arg2[1]
        goto label_10f4b74
else
    x0 = *arg2
label_10f4b74:
    *(x0 + x8) = 0x3c22
    arg2[1] += 2
    int64_t* x20_1 = *(arg1 + 0x10)
    (*(*x20_1 + 0x20))(x20_1, arg2)
    
    if (zx.d(*(x20_1 + 9)) != 1)
        (*(*x20_1 + 0x28))(x20_1, arg2)
    
    int64_t x8_8 = arg2[1]
    int64_t x10_1 = arg2[2]
    int16_t* result
    
    if (x8_8 + 2 u< x10_1)
        result = *arg2
    label_10f4bfc:
        *(result + x8_8) = 0x223e
        arg2[1] += 2
        return result
    
    int64_t oldmem_1 = *arg2
    int64_t bytes_3 = x10_1 << 1
    size_t bytes_1
    
    if (bytes_3 u< x8_8 + 2)
        bytes_1 = x8_8 + 2
    else
        bytes_1 = bytes_3
    
    arg2[2] = bytes_1
    result = realloc(oldmem_1, bytes_1)
    *arg2 = result
    
    if (result != 0)
        x8_8 = arg2[1]
        goto label_10f4bfc
std::terminate()
noreturn
