// 函数: sub_10ef4c8
// 地址: 0x10ef4c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
char* x8_1 = *arg1
int64_t x9 = arg1[1]
void* x0_1
void* x1_4

if (x9 != x8_1)
    uint32_t x10_1 = zx.d(*x8_1)
    
    if (x10_1 != 0x55)
        if (x10_1 - 0x31 u> 8)
            goto label_10ef530
        
        x0_1 = sub_10f7a0c(arg1)
        goto label_10ef648
    
    x0_1 = sub_10f39a4(arg1, arg2)
label_10ef648:
    x1_4 = x0_1
    
    if (x0_1 == 0)
    label_10ef674:
        
        if (*(x22 + 0x28) == x8)
            return nullptr
    else
    label_10ef654:
        void* result = sub_10ef350(arg1, x1_4)
        
        if (*(x22 + 0x28) == x8)
            return result
    
    __stack_chk_fail()
    noreturn

label_10ef530:

if (x9 - x8_1 u< 2 || zx.d(*x8_1) != 0x44 || zx.d(x8_1[1]) != 0x43)
    x0_1 = sub_10f7d28(arg1, arg2)
    goto label_10ef648

*arg1 = &x8_1[2]
int64_t x21_1 = arg1[2]
int64_t x23_1 = arg1[3]
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
    ** i_2 = sub_10f7a0c(arg1)
struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
    ** i_1 = i_2

if (i_2 != 0)
    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NameType::VTable
        ** i
    
    do
        sub_10ede98(&arg1[2], &i_1)
        char* x8_4 = *arg1
        
        if (x8_4 != arg1[1] && zx.d(*x8_4) == 0x45)
            int64_t x2_1 = arg1[3]
            int64_t x21_3 = (x23_1 - x21_1) s>> 3 << 3
            int64_t x1_1 = arg1[2] + x21_3
            *arg1 = &x8_4[1]
            void* x0_7
            int64_t x1_2
            x0_7, x1_2 = sub_10f7304(arg1, x1_1, x2_1)
            void** x23_2 = arg1[0x266]
            arg1[3] = arg1[2] + x21_3
            int64_t x8_8 = x23_2[1]
            
            if (x8_8 + 0x20 u>= 0xff0)
                void** x0_8 = malloc(0x1000)
                
                if (x0_8 == 0)
                    std::terminate()
                    noreturn
                
                x8_8 = 0
                *x0_8 = x23_2
                x0_8[1] = 0
                x23_2 = x0_8
                arg1[0x266] = x0_8
            
            x23_2[1] = x8_8 + 0x20
            x1_4 = x23_2 + x8_8 + 0x10
            *x1_4 = &_vtable_for_(anonymous namespace)::itanium_demangle::StructuredBindingName{for `(anonymous namespace)::itanium_demangle::Node'}
            *(x1_4 + 8) = 0x101012e
            *(x1_4 + 0x10) = x0_7
            *(x1_4 + 0x18) = x1_2
            goto label_10ef654
        
        i = sub_10f7a0c(arg1)
        i_1 = i
    while (i != 0)

goto label_10ef674
