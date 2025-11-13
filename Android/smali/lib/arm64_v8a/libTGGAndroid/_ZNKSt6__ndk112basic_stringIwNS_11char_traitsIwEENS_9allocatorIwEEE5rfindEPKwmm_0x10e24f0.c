// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5rfindEPKwmm
// 地址: 0x10e24f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x9 = zx.q(*arg1)
void* x8
uint64_t x9_1

if ((x9.d & 1) != 0)
    x9_1 = *(arg1 + 8)
    x8 = *(arg1 + 0x10)
else
    x8 = &arg1[1]
    x9_1 = x9 u>> 1

uint64_t x10

x10 = x9_1 u< arg3 ? x9_1 : arg3

int64_t entry_x3
uint64_t x10_2

if (x9_1 - x10 u> entry_x3)
    x10_2 = x10 + entry_x3
else
    x10_2 = x9_1

void* i_1 = x8 + (x10_2 << 2)
void* i_3

if (entry_x3 != 0 && x10_2 s>= entry_x3)
    int64_t x13_1 = entry_x3 << 2
    int64_t x10_3 = arg2 + x13_1
    void* i = i_1
    
    while (x13_1 + x8 - 4 != i)
        void* i_2 = i
        i -= 4
        
        if (*i == *(x10_3 - 4))
            int64_t x16_2 = 0
            int32_t x0
            int32_t x17_3
            
            do
                if (4 - x13_1 == x16_2)
                    i_3 = i_2 + x16_2 - 4
                    goto label_10e25ac
                
                x17_3 = *(i_2 + x16_2 - 8)
                x0 = *(x10_3 - 8 + x16_2)
                x16_2 -= 4
            while (x17_3 == x0)

i_3 = i_1
label_10e25ac:
bool z

if (i_3 == i_1)
    z = entry_x3 == 0
else
    z = true

if (z)
    return (i_3 - x8) s>> 2

return -1
