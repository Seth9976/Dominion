// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE16find_last_not_ofEPKwmm
// 地址: 0x10e2800
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x8_1
void* x21

if ((x8.d & 1) != 0)
    x8_1 = *(arg1 + 8)
    x21 = *(arg1 + 0x10)
else
    x21 = &arg1[1]
    x8_1 = x8 u>> 1

uint64_t x8_2

if (x8_1 u<= arg3)
    x8_2 = x8_1
else
    x8_2 = arg3 + 1

int64_t x8_4 = (x8_2 << 2) - 4
int64_t x22_1
wchar_t* i

do
    if (x8_4 == -4)
        return -1
    
    x22_1 = x8_4
    size_t entry_n
    
    if (entry_n == 0)
        break
    
    i = wmemchr(arg2, *(x21 + x22_1), entry_n)
    x8_4 = x22_1 - 4
while (i != 0)
return x22_1 s>> 2
