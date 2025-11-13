// 函数: sub_10ef350
// 地址: 0x10ef350
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg1
void* x8 = arg1[1]
void* result = arg2

if (x9 != x8)
    while (zx.d(*x9) == 0x42)
        *arg1 = &x9[1]
        int64_t x10_7
        void* x24_1
        
        if (x8 != &x9[1] && zx.d(x9[1]) - 0x30 u<= 9)
            x10_7 = 0
            void* x9_3 = &x9[2]
            
            while (true)
                *arg1 = x9_3
                x10_7 = zx.q(*(x9_3 - 1)) + x10_7 * 0xa - 0x30
                
                if (x8 == x9_3)
                    x24_1 = x8
                    break
                
                uint32_t x11_2 = zx.d(*x9_3)
                x9_3 += 1
                
                if (x11_2 - 0x30 u>= 0xa)
                    x24_1 = x9_3 - 1
                    break
        
        if (x8 == &x9[1] || zx.d(x9[1]) - 0x30 u> 9 || x8 - x24_1 u< x10_7)
            return nullptr
        
        void* x25_1 = x24_1 + x10_7
        *arg1 = x25_1
        
        if (x24_1 == x25_1)
            return nullptr
        
        void** x26_1 = arg1[0x266]
        int64_t x8_1 = x26_1[1]
        
        if (x8_1 + 0x30 u>= 0xff0)
            void** x0 = malloc(0x1000)
            
            if (x0 == 0)
                std::terminate()
                noreturn
            
            x8_1 = 0
            *x0 = x26_1
            x0[1] = 0
            x26_1 = x0
            arg1[0x266] = x0
        
        x26_1[1] = x8_1 + 0x30
        int16_t x8_2 = *(result + 9)
        char x9_2 = *(result + 0xb)
        *(x26_1 + x8_1 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::AbiTagAttr{for `(anonymous namespace)::itanium_demangle::Node'}
        *(x26_1 + x8_1 + 0x18) = 8
        *(x26_1 + x8_1 + 0x20) = result
        *(x26_1 + x8_1 + 0x28) = x24_1
        *(x26_1 + x8_1 + 0x30) = x25_1
        *(x26_1 + x8_1 + 0x19) = x8_2
        *(x26_1 + x8_1 + 0x1b) = x9_2
        x9 = *arg1
        x8 = arg1[1]
        result = x26_1 + x8_1 + 0x10
        
        if (x9 == x8)
            return x26_1 + x8_1 + 0x10

return result
