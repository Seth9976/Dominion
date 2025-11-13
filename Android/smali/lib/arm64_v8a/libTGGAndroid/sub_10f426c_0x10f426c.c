// 函数: sub_10f426c
// 地址: 0x10f426c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*(arg1 + 0xc))
char const* const x21

if (x8 == 0)
    x21 = "false"
else
    x21 = "true"

char const* const x8_1

if (x8 == 0)
    x8_1 = &data_745dbb[5]
else
    x8_1 = &data_765017[4]

size_t x20 = x8_1 - x21

if (x8_1 == x21)
    return 

int64_t x8_2 = arg2[1]
int64_t x10_1 = arg2[2]
int64_t bytes_2 = x8_2 + x20
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
    
    x8_2 = arg2[1]
else
    x0 = *arg2

memmove(x0 + x8_2, x21, x20)
arg2[1] += x20
