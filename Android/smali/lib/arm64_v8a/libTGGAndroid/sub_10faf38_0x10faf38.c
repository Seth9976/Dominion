// 函数: sub_10faf38
// 地址: 0x10faf38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
size_t bytes_4 = x8 + 1
char* x0

if (bytes_4 u>= x10)
    int64_t oldmem = *arg2
    size_t bytes_2 = x10 << 1
    size_t bytes
    
    bytes = bytes_2 u< bytes_4 ? bytes_4 : bytes_2
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8 = arg2[1]
        bytes_4 = x8 + 1
        goto label_10faf90
else
    x0 = *arg2
label_10faf90:
    arg2[1] = bytes_4
    x0[x8] = 0x5b
    sub_10f59b0(arg1 + 0x10, arg2)
    int64_t x8_1 = arg2[1]
    int64_t x10_1 = arg2[2]
    int64_t bytes_5 = x8_1 + 1
    char* result
    
    if (bytes_5 u< x10_1)
        result = *arg2
    label_10fafe8:
        arg2[1] = bytes_5
        result[x8_1] = 0x5d
        return result
    
    int64_t oldmem_1 = *arg2
    int64_t bytes_3 = x10_1 << 1
    int64_t bytes_1
    
    bytes_1 = bytes_3 u< bytes_5 ? bytes_5 : bytes_3
    
    arg2[2] = bytes_1
    result = realloc(oldmem_1, bytes_1)
    *arg2 = result
    
    if (result != 0)
        x8_1 = arg2[1]
        bytes_5 = x8_1 + 1
        goto label_10fafe8
std::terminate()
noreturn
