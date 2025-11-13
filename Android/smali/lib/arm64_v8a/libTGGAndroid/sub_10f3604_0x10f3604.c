// 函数: sub_10f3604
// 地址: 0x10f3604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
int64_t x9 = arg1[1]

if (x9 != x8 && x9 - x8 != 1 && zx.d(*x8) == 0x64)
    uint32_t x9_3 = zx.d(x8[1])
    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
        ** result
    
    if (x9_3 == 0x58)
        *arg1 = &x8[2]
        result = sub_10efb98(arg1)
        
        if (result == 0)
            return result
        
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** result_2 = result
        result = sub_10efb98(arg1)
        
        if (result == 0)
            return result
        
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** result_5 = result
        result = sub_10f3604(arg1)
        
        if (result == 0)
            return result
        
        void** x23_1 = arg1[0x266]
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** result_7 = result
        int64_t x8_5 = x23_1[1]
        
        if (x8_5 + 0x30 u>= 0xff0)
            void** x0_9 = malloc(0x1000)
            
            if (x0_9 == 0)
                std::terminate()
                noreturn
            
            x8_5 = 0
            *x0_9 = x23_1
            x0_9[1] = 0
            x23_1 = x0_9
            arg1[0x266] = x0_9
        
        x23_1[1] = x8_5 + 0x30
        result = x23_1 + x8_5 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::BracedRangeExpr{for `(anonymous namespace)::itanium_demangle::Node'}
        result[1].d = 0x101014a
        result[2] = result_2
        result[3] = result_5
        result[4] = result_7
        return result
    
    if (x9_3 == 0x78)
        *arg1 = &x8[2]
        result = sub_10efb98(arg1)
        
        if (result == 0)
            return result
        
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** result_3 = result
        result = sub_10f3604(arg1)
        
        if (result == 0)
            return result
        
        void** x22_2 = arg1[0x266]
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** result_6 = result
        int64_t x8_7 = x22_2[1]
        
        if (x8_7 + 0x30 u>= 0xff0)
            void** x0_13 = malloc(0x1000)
            
            if (x0_13 == 0)
                std::terminate()
                noreturn
            
            x8_7 = 0
            *x0_13 = x22_2
            x0_13[1] = 0
            x22_2 = x0_13
            arg1[0x266] = x0_13
        
        x22_2[1] = x8_7 + 0x30
        result = x22_2 + x8_7 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::BracedExpr{for `(anonymous namespace)::itanium_demangle::Node'}
        result[1].d = 0x1010149
        result[2] = result_3
        result[3] = result_6
        result[4].b = 1
        return result
    
    if (x9_3 == 0x69)
        *arg1 = &x8[2]
        result = sub_10f7a0c(arg1)
        
        if (result == 0)
            return result
        
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** result_1 = result
        result = sub_10f3604(arg1)
        
        if (result == 0)
            return result
        
        void** x22_1 = arg1[0x266]
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
            ** result_4 = result
        int64_t x8_2 = x22_1[1]
        
        if (x8_2 + 0x30 u>= 0xff0)
            void** x0_2 = malloc(0x1000)
            
            if (x0_2 == 0)
                std::terminate()
                noreturn
            
            x8_2 = 0
            *x0_2 = x22_1
            x0_2[1] = 0
            x22_1 = x0_2
            arg1[0x266] = x0_2
        
        x22_1[1] = x8_2 + 0x30
        result = x22_1 + x8_2 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::BracedExpr{for `(anonymous namespace)::itanium_demangle::Node'}
        result[1].d = 0x1010149
        result[2] = result_1
        result[3] = result_4
        result[4].b = 0
        return result

return sub_10efb98(arg1) __tailcall
