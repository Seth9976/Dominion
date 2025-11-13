// 函数: sub_10f71e8
// 地址: 0x10f71e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x10)
(*(*x21 + 0x20))(x21)

if (zx.d(*(x21 + 9)) != 1)
    (*(*x21 + 0x28))(x21, arg2)

int64_t x8_5 = arg2[1]
int64_t x10 = arg2[2]
char* x0_2

if (x8_5 + 1 u>= x10)
    int64_t oldmem = *arg2
    size_t bytes_2 = x10 << 1
    size_t bytes
    
    if (bytes_2 u< x8_5 + 1)
        bytes = x8_5 + 1
    else
        bytes = bytes_2
    
    arg2[2] = bytes
    x0_2 = realloc(oldmem, bytes)
    *arg2 = x0_2
    
    if (x0_2 != 0)
        x8_5 = arg2[1]
        goto label_10f7278
else
    x0_2 = *arg2
label_10f7278:
    x0_2[x8_5] = 0x28
    arg2[1] += 1
    sub_10f59b0(arg1 + 0x18, arg2)
    int64_t x8_8 = arg2[1]
    int64_t x10_1 = arg2[2]
    char* result
    
    if (x8_8 + 1 u< x10_1)
        result = *arg2
    label_10f72d4:
        result[x8_8] = 0x29
        arg2[1] += 1
        return result
    
    int64_t oldmem_1 = *arg2
    int64_t bytes_3 = x10_1 << 1
    size_t bytes_1
    
    if (bytes_3 u< x8_8 + 1)
        bytes_1 = x8_8 + 1
    else
        bytes_1 = bytes_3
    
    arg2[2] = bytes_1
    result = realloc(oldmem_1, bytes_1)
    *arg2 = result
    
    if (result != 0)
        x8_8 = arg2[1]
        goto label_10f72d4
std::terminate()
noreturn
