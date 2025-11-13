// 函数: sub_10fcb48
// 地址: 0x10fcb48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
int64_t x0

if (x8 + 6 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_2 = x10 << 1
    int64_t bytes
    
    if (bytes_2 u< x8 + 6)
        bytes = x8 + 6
    else
        bytes = bytes_2
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8 = arg2[1]
        goto label_10fcbb0
else
    x0 = *arg2
label_10fcbb0:
    __builtin_strncpy(x0 + x8, "throw(", 6)
    arg2[1] += 6
    sub_10f59b0(arg1 + 0x10, arg2)
    int64_t x8_4 = arg2[1]
    int64_t x10_1 = arg2[2]
    int64_t bytes_4 = x8_4 + 1
    char* result
    
    if (bytes_4 u< x10_1)
        result = *arg2
    label_10fcc0c:
        arg2[1] = bytes_4
        result[x8_4] = 0x29
        return result
    
    int64_t oldmem_1 = *arg2
    int64_t bytes_3 = x10_1 << 1
    int64_t bytes_1
    
    bytes_1 = bytes_3 u< bytes_4 ? bytes_4 : bytes_3
    
    arg2[2] = bytes_1
    result = realloc(oldmem_1, bytes_1)
    *arg2 = result
    
    if (result != 0)
        x8_4 = arg2[1]
        bytes_4 = x8_4 + 1
        goto label_10fcc0c
std::terminate()
noreturn
