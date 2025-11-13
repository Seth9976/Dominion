// 函数: sub_10f9d0c
// 地址: 0x10f9d0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x10)

if (x21 != 0)
    (*(*x21 + 0x20))(x21, arg2)
    
    if (zx.d(*(x21 + 9)) != 1)
        (*(*x21 + 0x28))(x21, arg2)

int64_t x8_6 = arg2[1]
int64_t x10 = arg2[2]
size_t bytes_4 = x8_6 + 1
char* x0_2

if (bytes_4 u>= x10)
    int64_t oldmem = *arg2
    size_t bytes_2 = x10 << 1
    size_t bytes
    
    bytes = bytes_2 u< bytes_4 ? bytes_4 : bytes_2
    
    arg2[2] = bytes
    x0_2 = realloc(oldmem, bytes)
    *arg2 = x0_2
    
    if (x0_2 != 0)
        x8_6 = arg2[1]
        bytes_4 = x8_6 + 1
        goto label_10f9da4
else
    x0_2 = *arg2
label_10f9da4:
    arg2[1] = bytes_4
    x0_2[x8_6] = 0x7b
    sub_10f59b0(arg1 + 0x18, arg2)
    int64_t x8_7 = arg2[1]
    int64_t x10_1 = arg2[2]
    int64_t bytes_5 = x8_7 + 1
    char* result
    
    if (bytes_5 u< x10_1)
        result = *arg2
    label_10f9dfc:
        arg2[1] = bytes_5
        result[x8_7] = 0x7d
        return result
    
    int64_t oldmem_1 = *arg2
    int64_t bytes_3 = x10_1 << 1
    int64_t bytes_1
    
    bytes_1 = bytes_3 u< bytes_5 ? bytes_5 : bytes_3
    
    arg2[2] = bytes_1
    result = realloc(oldmem_1, bytes_1)
    *arg2 = result
    
    if (result != 0)
        x8_7 = arg2[1]
        bytes_5 = x8_7 + 1
        goto label_10f9dfc
std::terminate()
noreturn
