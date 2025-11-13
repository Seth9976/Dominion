// 函数: sub_10f383c
// 地址: 0x10f383c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x22 = *arg1
void* x8 = arg1[1]
char* x9_1
void* x23

if (x22 == x8)
    x23 = nullptr
    x9_1 = x22
    x22 = nullptr
else
    x9_1 = x22
    
    if (zx.d(*x22) == 0x6e)
        x9_1 = &x22[1]
        *arg1 = x9_1
    
    if (x8 == x9_1)
        x22 = nullptr
        x23 = nullptr
        x9_1 = x8
    else if (zx.d(*x9_1) - 0x30 u<= 9)
        void* x10_3 = &x9_1[1]
        
        while (true)
            x9_1 = x10_3
            *arg1 = x10_3
            
            if (x8 == x10_3)
                x23 = x8
                break
            
            x10_3 = &x9_1[1]
            
            if (zx.d(*x9_1) - 0x30 u>= 0xa)
                x23 = x10_3 - 1
                break
    else
        x22 = nullptr
        x23 = nullptr

void* result = nullptr

if (x23 != x22 && x9_1 != x8)
    if (zx.d(*x9_1) != 0x45)
        return nullptr
    
    void** x24_1 = arg1[0x266]
    *arg1 = &x9_1[1]
    int64_t x8_3 = x24_1[1]
    
    if (x8_3 + 0x30 u>= 0xff0)
        void** x0 = malloc(0x1000)
        
        if (x0 == 0)
            std::terminate()
            noreturn
        
        x8_3 = 0
        *x0 = x24_1
        x0[1] = 0
        x24_1 = x0
        arg1[0x266] = x0
    
    x24_1[1] = x8_3 + 0x30
    result = x24_1 + x8_3 + 0x10
    *result = &_vtable_for_(anonymous namespace)::itanium_demangle::IntegerLiteral{for `(anonymous namespace)::itanium_demangle::Node'}
    *(result + 8) = 0x1010145
    *(result + 0x10) = arg2
    *(result + 0x18) = arg3
    *(result + 0x20) = x22
    *(result + 0x28) = x23

return result
