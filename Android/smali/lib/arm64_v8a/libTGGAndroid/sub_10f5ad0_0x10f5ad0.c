// 函数: sub_10f5ad0
// 地址: 0x10f5ad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 0x10) + 0x20))()
int64_t x8_2 = arg2[1]
int64_t x10 = arg2[2]
void* result

if (x8_2 + 3 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_1 = x10 << 1
    int64_t bytes
    
    if (bytes_1 u< x8_2 + 3)
        bytes = x8_2 + 3
    else
        bytes = bytes_1
    
    arg2[2] = bytes
    result = realloc(oldmem, bytes)
    *arg2 = result
    
    if (result == 0)
        std::terminate()
        noreturn
    
    x8_2 = arg2[1]
else
    result = *arg2

int16_t* x8_3 = result + x8_2
x8_3[1].b = 0x2e
*x8_3 = 0x2e2e
arg2[1] += 3
return result
