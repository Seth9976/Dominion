// 函数: sub_10ef0e8
// 地址: 0x10ef0e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2

if (zx.d(*(x8 + 8)) != 0x29)
    goto label_10ef184

int32_t x22_1 = *(x8 + 0xc)

if (x22_1 - 2 u> 3)
    goto label_10ef184

void** x23_1 = arg1[0x266]
int64_t x8_2 = x23_1[1]

if (x8_2 + 0x10 u< 0xff0)
    goto label_10ef174

void** x0 = malloc(0x1000)

if (x0 != 0)
    x8_2 = 0
    *x0 = x23_1
    x0[1] = 0
    x23_1 = x0
    arg1[0x266] = x0
label_10ef174:
    x23_1[1] = x8_2 + 0x10
    *(x23_1 + x8_2 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::ExpandedSpecialSubstitution{for `(anonymous namespace)::itanium_demangle::Node'}
    *(x23_1 + x8_2 + 0x18) = 0x1010128
    *(x23_1 + x8_2 + 0x1c) = x22_1
    *arg2 = x23_1 + x8_2 + 0x10
label_10ef184:
    char* x8_5 = *arg1
    int64_t x9_3 = arg1[1]
    void* result
    int32_t x9_5
    int64_t x10_4
    
    if (x8_5 == x9_3 || zx.d(*x8_5) != 0x43)
        if (x9_3 == x8_5)
            return nullptr
        
        if (x9_3 - x8_5 == 1 || zx.d(*x8_5) != 0x44)
            return nullptr
        
        uint64_t x22_3 = zx.q(x8_5[1])
        
        if (x22_3.d u> 0x35 || (1 << x22_3 & 0x37000000000000) == 0)
            return nullptr
        
        *arg1 = &x8_5[2]
        
        if (arg3 != 0)
            *arg3 = 1
        
        void** x21_2 = arg1[0x266]
        int64_t x8_10 = x21_2[1]
        
        if (x8_10 + 0x20 u< 0xff0)
            goto label_10ef2f4
        
        void** x0_4 = malloc(0x1000)
        
        if (x0_4 != 0)
            x8_10 = 0
            *x0_4 = x21_2
            x0_4[1] = 0
            x21_2 = x0_4
            arg1[0x266] = x0_4
        label_10ef2f4:
            x21_2[1] = x8_10 + 0x20
            x10_4 = *arg2
            x9_5 = x22_3.d - 0x30
            result = x21_2 + x8_10 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::CtorDtorName{for `(anonymous namespace)::itanium_demangle::Node'}
            *(result + 8) = 0x101012a
            *(result + 0x18) = 1
        label_10ef324:
            *(result + 0x10) = x10_4
            *(result + 0x1c) = x9_5
            return result
    else
        void* x11_1 = &x8_5[1]
        *arg1 = x11_1
        
        if (x11_1 == x9_3)
            return nullptr
        
        uint32_t x10_2 = zx.d(*x11_1)
        
        if (x10_2 == 0x49)
            x11_1 = &x8_5[2]
            *arg1 = x11_1
        
        if (x9_3 == x11_1)
            return nullptr
        
        uint32_t x22_2 = zx.d(*x11_1)
        
        if (x22_2 - 0x31 u> 4)
            return nullptr
        
        *arg1 = x11_1 + 1
        
        if (arg3 != 0)
            *arg3 = 1
        
        if (x10_2 == 0x49)
            result = sub_10ed160(arg1, arg3)
        
        if (x10_2 == 0x49 && result == 0)
            return result
        
        void** x21_1 = arg1[0x266]
        int64_t x8_8 = x21_1[1]
        
        if (x8_8 + 0x20 u< 0xff0)
            goto label_10ef238
        
        void** x0_2 = malloc(0x1000)
        
        if (x0_2 != 0)
            x8_8 = 0
            *x0_2 = x21_1
            x0_2[1] = 0
            x21_1 = x0_2
            arg1[0x266] = x0_2
        label_10ef238:
            x21_1[1] = x8_8 + 0x20
            x10_4 = *arg2
            result = x21_1 + x8_8 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::CtorDtorName{for `(anonymous namespace)::itanium_demangle::Node'}
            x9_5 = x22_2 - 0x30
            *(result + 8) = 0x101012a
            *(result + 0x18) = 0
            goto label_10ef324

std::terminate()
noreturn
