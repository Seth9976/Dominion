// 函数: sub_d65b50
// 地址: 0xd65b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg3
arg3 = nullptr
void* x21

if (x0 != 0)
    (*(*x0 + 0x18))()
    x21 = *arg2
    
    if (x21 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x21 = *arg2
    
    if (x21 == 0)
        sub_1101e04(arg1)
        noreturn

int64_t* x22 = arg2[1]
void* x0_2 = x21

if (x22 != x21)
    do
        x22 = &x22[-1]
        int64_t* x0_3 = *x22
        *x22 = 0
        
        if (x0_3 != 0)
            (*(*x0_3 + 0x18))()
    while (x21 != x22)
    
    x0_2 = *arg2

arg2[1] = x21
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
