// 函数: sub_10977c8
// 地址: 0x10977c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(arg1[1].d)
int64_t x9 = arg1[4]
int64_t x22

if (arg3 s< 0)
    x22 = arg3 + 7
else
    x22 = arg3

int64_t x10_1 = x8 + arg3
int64_t x10_2

if (x10_1 s< 0)
    x10_2 = x10_1 + 7
else
    x10_2 = x10_1

int64_t x10_3 = *arg1 + (x10_2 s>> 3)
int64_t* x19 = arg1

if (x10_3 s< x9)
    goto label_1097828

if (x19[3] != 0 && x9 s<= x10_3 + 0x100)
    int64_t oldmem = x19[2]
    x19[4] = x10_3 + 0x100
    arg1 = realloc(oldmem, x10_3 + 0x100)

if (x19[3] == 0 || x9 s> x10_3 + 0x100 || arg1 == 0)
    arg1 = x19[2]
    
    if (arg1 != 0)
        free(arg1)
    
    __builtin_memset(x19, 0, 0x28)
    return 

x8 = zx.q(x19[1].d)
void* x9_3 = arg1 + *x19
x19[2] = arg1
x19[3] = x9_3
label_1097828:
size_t i_2 = x22 s>> 3
int64_t x22_1 = arg3 - (x22 & 0xfffffffffffffff8)

if (x8.d == 0)
    memmove(x19[3], arg2, i_2)
    int64_t x8_4 = x19[3]
    int64_t x9_5 = *x19 + i_2
    x19[3] = x8_4 + i_2
    *x19 = x9_5
    *(x8_4 + i_2) = 0
    
    if (x22_1 != 0)
    label_1097870:
        
        if (arg5 != 0)
            arg2[i_2]
        
        jump(arg4)
else
    if (arg3 s>= 8)
        size_t i_1 = i_2
        char* x25_1 = arg2
        int64_t var_48_1 = arg4
        size_t i
        
        do
            uint64_t x1 = zx.q(*x25_1)
            x25_1 = &x25_1[1]
            var_48_1(x19, x1, 8)
            arg4 = var_48_1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (x22_1 != 0)
        goto label_1097870
