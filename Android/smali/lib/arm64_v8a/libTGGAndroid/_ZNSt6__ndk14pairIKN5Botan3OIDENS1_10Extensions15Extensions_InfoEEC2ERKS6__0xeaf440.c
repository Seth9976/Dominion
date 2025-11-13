// 函数: _ZNSt6__ndk14pairIKN5Botan3OIDENS1_10Extensions15Extensions_InfoEEC2ERKS6_
// 地址: 0xeaf440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::OID + 0x10
void* __offset(std::__ndk1::pair<Botan::OID const, Botan::Extensions::Extensions_Info>, 0x8) 
    x21_1 = arg1 + 8
*x21_1 = 0
void* entry_x1
int64_t x9 = *(entry_x1 + 8)
int64_t x8_1 = *(entry_x1 + 0x10)
std::__ndk1::pair<Botan::OID const, Botan::Extensions::Extensions_Info> const& x19 = arg1
uint64_t x23 = x8_1 - x9

if (x8_1 == x9)
label_eaf4c8:
    *(x19 + 0x20) = *(entry_x1 + 0x20)
    int64_t x8_6 = *(entry_x1 + 0x28)
    *(x19 + 0x28) = x8_6
    
    if (x8_6 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8_6 + 8) + 1, x8_6 + 8)
        while (i != 0)
    
    x21_1 = x19 + 0x30
    __builtin_memset(x21_1, 0, 0x18)
    int64_t x9_3 = *(entry_x1 + 0x30)
    int64_t x8_8 = *(entry_x1 + 0x38)
    uint64_t x23_1 = x8_8 - x9_3
    
    if (x8_8 == x9_3)
        *(x19 + 0x48) = *(entry_x1 + 0x48)
        return 
    
    if ((x23_1 & 0xffffffff80000000) == 0)
        arg1 = operator new(x23_1)
        *(x19 + 0x30) = arg1
        *(x19 + 0x38) = arg1
        *(x19 + 0x40) = arg1 + x23_1
        int64_t x1_1 = *(entry_x1 + 0x30)
        std::__ndk1::pair<Botan::OID const, Botan::Extensions::Extensions_Info> const& x22_2 = arg1
        size_t x21_4 = *(entry_x1 + 0x38) - x1_1
        
        if (x21_4 s>= 1)
            memcpy(x22_2, x1_1, x21_4)
            x22_2 += x21_4
        
        *(x19 + 0x38) = x22_2
        *(x19 + 0x48) = *(entry_x1 + 0x48)
        return 
else
    if ((x23 & 0xffffffff80000000) == 0)
        arg1 = operator new(x23)
        *(x19 + 8) = arg1
        *(x19 + 0x10) = arg1
        *(x19 + 0x18) = arg1 + (x23 s>> 2 << 2)
        int64_t x1 = *(entry_x1 + 8)
        std::__ndk1::pair<Botan::OID const, Botan::Extensions::Extensions_Info> const& x22_1 = arg1
        size_t x21_2 = *(entry_x1 + 0x10) - x1
        
        if (x21_2 s>= 1)
            memcpy(x22_1, x1, x21_2)
            x22_1 += x21_2
        
        *(x19 + 0x10) = x22_1
        goto label_eaf4c8
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_12 = *x21_1

if (x8_12 != 0)
    *(x19 + 0x38) = x8_12
    operator delete(x8_12)

int64_t* x21_5 = *(x19 + 0x28)

if (x21_5 != 0)
    int64_t x9_4
    int32_t i_1
    
    do
        x9_4 = __ldaxr(&x21_5[1])
        i_1 = __stlxr(x9_4 - 1, &x21_5[1])
    while (i_1 != 0)
    
    if (x9_4 == 0)
        (*(*x21_5 + 0x10))(x21_5)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_10 = *(x19 + 8)
*x19 = _vtable_for_Botan::OID + 0x10

if (x0_10 != 0)
    *(x19 + 0x10) = x0_10
    operator delete(x0_10)

sub_1101e04(x0_6)
noreturn
