// 函数: sub_10eefc0
// 地址: 0x10eefc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
int64_t x9 = arg1[1]

if (x8 != x9 && zx.d(*x8) == 0x44)
    *arg1 = &x8[1]
    
    if (&x8[1] != x9 && (zx.d(x8[1]) == 0x74 || zx.d(x8[1]) == 0x54))
        *arg1 = &x8[2]
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
            ** result = sub_10efb98(arg1)
        
        if (result == 0)
            return result
        
        char* x8_2 = *arg1
        
        if (x8_2 != arg1[1] && zx.d(*x8_2) == 0x45)
            void** x21_1 = arg1[0x266]
            *arg1 = &x8_2[1]
            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                ** result_1 = result
            int64_t x8_4 = x21_1[1]
            
            if (x8_4 + 0x40 u>= 0xff0)
                void** x0_1 = malloc(0x1000)
                
                if (x0_1 == 0)
                    std::terminate()
                    noreturn
                
                x8_4 = 0
                *x0_1 = x21_1
                x0_1[1] = 0
                x21_1 = x0_1
                arg1[0x266] = x0_1
            
            x21_1[1] = x8_4 + 0x40
            result = x21_1 + x8_4 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::EnclosingExpr{for `(anonymous namespace)::itanium_demangle::Node'}
            result[1].d = 0x1010134
            result[2] = "decltype("
            result[3] = &data_725b57[9]
            result[4] = result_1
            result[5] = &data_797a7e
            result[6] = &data_797a7f
            return result

return nullptr
