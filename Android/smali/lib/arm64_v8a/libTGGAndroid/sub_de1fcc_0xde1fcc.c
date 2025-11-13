// 函数: sub_de1fcc
// 地址: 0xde1fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg4
arg4 = nullptr
void* x22

if (x0 != 0)
    (*(*x0 + 0x10))()
    x22 = *arg3
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x22 = *arg3
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn

int64_t* x23 = *(arg2 + 0x10)
void* x0_2 = x22

if (x23 != x22)
    do
        x23 = &x23[-1]
        int64_t* x0_3 = *x23
        *x23 = 0
        
        if (x0_3 != 0)
            (*(*x0_3 + 0x10))()
    while (x22 != x23)
    
    x0_2 = *arg3

*(arg2 + 0x10) = x22
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
