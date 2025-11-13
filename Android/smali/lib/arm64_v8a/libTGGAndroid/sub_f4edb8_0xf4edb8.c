// 函数: sub_f4edb8
// 地址: 0xf4edb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 

int64_t lr
int64_t var_30 = lr
void* x0 = arg2[7]
*arg2 = _vtable_for_Botan::TLS::Certificate_Req + 0x10

if (x0 != 0)
    arg2[8] = x0
    operator delete(x0)

void* x20 = arg2[4]

if (x20 != 0)
    char* x8_1 = arg2[5]
    void* x0_2
    
    if (x8_1 == x20)
        x0_2 = x20
    else
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_2 = arg2[4]
    
    arg2[5] = x20
    operator delete(x0_2)

void* x22 = arg2[1]

if (x22 != 0)
    void** x20_1 = arg2[2]
    void* x0_4
    
    if (x20_1 == x22)
        x0_4 = x22
    else
        do
            x20_1 -= 0x38
            sub_f276a8(&arg2[3], x20_1)
        while (x22 != x20_1)
        
        x0_4 = arg2[1]
    
    arg2[2] = x22
    operator delete(x0_4)

return operator delete(arg2) __tailcall
