// 函数: sub_10f2f10
// 地址: 0x10f2f10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
    ** result = sub_10efb98(arg1)

if (result != 0)
    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
        ** result_1 = result
    result = sub_10efb98(arg1)
    
    if (result != 0)
        void** x24_1 = arg1[0x266]
        struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
            ** result_2 = result
        int64_t x8_1 = x24_1[1]
        
        if (x8_1 + 0x30 u>= 0xff0)
            void** x0_1 = malloc(0x1000)
            
            if (x0_1 == 0)
                std::terminate()
                noreturn
            
            x8_1 = 0
            *x0_1 = x24_1
            x0_1[1] = 0
            x24_1 = x0_1
            arg1[0x266] = x0_1
        
        x24_1[1] = x8_1 + 0x30
        result = x24_1 + x8_1 + 0x10
        *result = &_vtable_for_(anonymous namespace)::itanium_demangle::BinaryExpr{for `(anonymous namespace)::itanium_demangle::Node'}
        result[1].d = 0x101012f
        result[2] = result_1
        result[3] = arg2
        result[4] = arg3
        result[5] = result_2

return result
