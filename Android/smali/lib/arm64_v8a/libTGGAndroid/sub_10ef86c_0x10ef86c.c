// 函数: sub_10ef86c
// 地址: 0x10ef86c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg1[1]
int64_t* x19 = arg1

if (x8 == arg1[2])
    int64_t oldmem = *x19
    size_t x21_1 = x8 - oldmem
    int64_t* x22_1
    
    if (oldmem == &x19[3])
        arg1 = malloc(x21_1 << 1)
        
        if (arg1 == 0)
            std::terminate()
            noreturn
        
        x22_1 = arg1
        
        if (x21_1 != 0)
            memmove(x22_1, oldmem, x21_1)
        
        *x19 = x22_1
    else
        arg1 = realloc(oldmem, x21_1 << 1)
        x22_1 = arg1
        *x19 = arg1
        
        if (arg1 == 0)
            std::terminate()
            noreturn
    
    x8 = &x22_1[x21_1 s>> 3]
    x19[1] = x8
    x19[2] = &x22_1[x21_1 s>> 2]

int64_t x9_5 = *arg2
x19[1] = x8 + 8
*x8 = x9_5
