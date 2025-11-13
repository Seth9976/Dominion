// 函数: sub_10f5840
// 地址: 0x10f5840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
int64_t x0

if (x8 + 9 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_2 = x10 << 1
    int64_t bytes
    
    if (bytes_2 u< x8 + 9)
        bytes = x8 + 9
    else
        bytes = bytes_2
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8 = arg2[1]
        goto label_10f58ac
else
    x0 = *arg2
label_10f58ac:
    __builtin_strncpy(x0 + x8, "template<", 9)
    arg2[1] += 9
    sub_10f59b0(arg1 + 0x18, arg2)
    int64_t x8_4 = arg2[1]
    int64_t x10_1 = arg2[2]
    int64_t result
    
    if (x8_4 + 0xb u< x10_1)
        result = *arg2
    label_10f591c:
        __builtin_strncpy(result + x8_4, "> typename ", 0xb)
        arg2[1] += 0xb
        return result
    
    int64_t oldmem_1 = *arg2
    int64_t bytes_3 = x10_1 << 1
    int64_t bytes_1
    
    if (bytes_3 u< x8_4 + 0xb)
        bytes_1 = x8_4 + 0xb
    else
        bytes_1 = bytes_3
    
    arg2[2] = bytes_1
    result = realloc(oldmem_1, bytes_1)
    *arg2 = result
    
    if (result != 0)
        x8_4 = arg2[1]
        goto label_10f591c
std::terminate()
noreturn
