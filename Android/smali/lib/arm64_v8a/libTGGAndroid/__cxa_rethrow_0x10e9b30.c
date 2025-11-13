// 函数: __cxa_rethrow
// 地址: 0x10e9b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = __cxa_get_globals()
void* x20 = *x0

if (x20 != 0)
    int64_t x22_1 = *(x20 + 0x60) & 0xffffffffffffff00
    
    if (x22_1 != 0x434c4e47432b2b00)
        *x0 = 0
    else
        *(x20 + 0x38) = neg.d(*(x20 + 0x38))
        x0[1].d += 1
    
    sub_1101c08(x20 + 0x60)
    int64_t x23_1 = *(x20 + 0x60)
    void** x0_2 = __cxa_get_globals()
    
    if ((x23_1 & 0xffffffffffffff00) == 0x434c4e47432b2b00)
        int32_t x9_1 = *(x20 + 0x38)
        int32_t x9_2
        
        if (x9_1 s< 0)
            x9_2 = neg.d(x9_1)
        else
            x9_2 = x9_1
        
        *(x20 + 0x38) = x9_2 + 1
        void* x9_4 = *x0_2
        
        if (x9_4 != x20)
            *(x20 + 0x30) = x9_4
            *x0_2 = x20
        
        x0_2[1].d -= 1
        
        if (x22_1 == 0x434c4e47432b2b00)
            sub_10ea33c(*(x20 + 0x28))
            noreturn
    else if (*x0_2 == 0)
        *x0_2 = x20
        
        if (x22_1 == 0x434c4e47432b2b00)
            sub_10ea33c(*(x20 + 0x28))
            noreturn

std::terminate()
noreturn
