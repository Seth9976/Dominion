// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16find_last_not_ofEPKcmm
// 地址: 0x10e0598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x8_1
void* x22

if ((x8.d & 1) != 0)
    x8_1 = *(arg1 + 8)
    x22 = *(arg1 + 0x10)
else
    x22 = &arg1[1]
    x8_1 = x8 u>> 1

uint64_t x8_2

if (x8_1 u<= arg3)
    x8_2 = x8_1
else
    x8_2 = arg3 + 1

int64_t result_1 = x8_2 - 1
int64_t result
int64_t i

do
    result = result_1
    
    if (result_1 == -1)
        break
    
    size_t entry_x3
    
    if (entry_x3 == 0)
        break
    
    i = memchr(arg2, zx.d(*(x22 + result)), entry_x3)
    result_1 = result - 1
while (i != 0)
return result
