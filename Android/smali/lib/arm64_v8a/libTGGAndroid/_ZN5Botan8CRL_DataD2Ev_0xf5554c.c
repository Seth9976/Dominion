// 函数: _ZN5Botan8CRL_DataD2Ev
// 地址: 0xf5554c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0

if ((zx.d(entry_x0[0x1f].b) & 1) != 0)
    operator delete(entry_x0[0x21])

void* x0_1 = entry_x0[0x1c]

if (x0_1 != 0)
    entry_x0[0x1d] = x0_1
    operator delete(x0_1)

entry_x0[0x19]
entry_x0[0x14] = _vtable_for_Botan::Extensions + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &entry_x0[0x18])
void* x20 = entry_x0[0x15]

if (x20 != 0)
    void** x8_2 = entry_x0[0x16]
    void* x0_4
    
    if (x8_2 == x20)
        x0_4 = x20
    else
        void** x22_1 = x8_2
        
        do
            x22_1 = &x22_1[-4]
            *x22_1 = _vtable_for_Botan::OID + 0x10
            void* x0_3 = x22_1[1]
            
            if (x0_3 != 0)
                x8_2[-2] = x0_3
                operator delete(x0_3)
            
            x8_2 = x22_1
        while (x20 != x22_1)
        
        x0_4 = entry_x0[0x15]
    
    entry_x0[0x16] = x20
    operator delete(x0_4)

void* x21_2 = entry_x0[0x11]

if (x21_2 != 0)
    void** x22_2 = entry_x0[0x12]
    void* x0_7
    
    if (x22_2 == x21_2)
        x0_7 = x21_2
    else
        do
            x22_2 = &x22_2[-3]
            *x22_2 = _vtable_for_Botan::CRL_Entry + 0x10
            int64_t* x20_1 = x22_2[2]
            
            if (x20_1 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x20_1[1])
                    i = __stlxr(x9_1 - 1, &x20_1[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x20_1 + 0x10))(x20_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_2 != x21_2)
        
        x0_7 = entry_x0[0x11]
    
    entry_x0[0x12] = x21_2
    operator delete(x0_7)

void* result = entry_x0[4]
*entry_x0 = _vtable_for_Botan::X509_DN + 0x10

if (result != 0)
    entry_x0[5] = result
    result = operator delete(result)

void* x20_2 = entry_x0[1]

if (x20_2 == 0)
    return result

void* x23_2 = entry_x0[2]
void* x0_11

if (x23_2 == x20_2)
    x0_11 = x20_2
else
    bool cond:1_1
    
    do
        uint32_t x8_7 = zx.d(*(x23_2 - 0x20))
        *(x23_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_7 & 1) != 0)
            operator delete(*(x23_2 - 0x10))
        
        void* x0_9 = *(x23_2 - 0x38)
        
        if (x0_9 != 0)
            *(x23_2 - 0x30) = x0_9
            operator delete(x0_9)
        
        void* x0_10 = *(x23_2 - 0x58)
        *(x23_2 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_10 != 0)
            *(x23_2 - 0x50) = x0_10
            operator delete(x0_10)
        
        cond:1_1 = x20_2 == x23_2 - 0x60
        x23_2 -= 0x60
    while (not(cond:1_1))
    x0_11 = entry_x0[1]

entry_x0[2] = x20_2
return operator delete(x0_11) __tailcall
