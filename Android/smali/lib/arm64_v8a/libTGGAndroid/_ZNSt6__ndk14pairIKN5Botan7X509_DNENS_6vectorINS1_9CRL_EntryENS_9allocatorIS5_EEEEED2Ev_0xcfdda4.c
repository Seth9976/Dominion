// 函数: _ZNSt6__ndk14pairIKN5Botan7X509_DNENS_6vectorINS1_9CRL_EntryENS_9allocatorIS5_EEEEED2Ev
// 地址: 0xcfdda4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x21 = entry_x0[7]

if (x21 != 0)
    void** x22_1 = entry_x0[8]
    void* x0_2
    
    if (x22_1 == x21)
        x0_2 = x21
    else
        do
            x22_1 = &x22_1[-3]
            *x22_1 = _vtable_for_Botan::CRL_Entry + 0x10
            int64_t* x20_1 = x22_1[2]
            
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
        while (x22_1 != x21)
        
        x0_2 = entry_x0[7]
    
    entry_x0[8] = x21
    operator delete(x0_2)

void* result = entry_x0[4]
*entry_x0 = _vtable_for_Botan::X509_DN + 0x10

if (result != 0)
    entry_x0[5] = result
    result = operator delete(result)

void* x20_2 = entry_x0[1]

if (x20_2 == 0)
    return result

void* x23_2 = entry_x0[2]
void* x0_6

if (x23_2 == x20_2)
    x0_6 = x20_2
else
    bool cond:0_1
    
    do
        uint32_t x8_5 = zx.d(*(x23_2 - 0x20))
        *(x23_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_5 & 1) != 0)
            operator delete(*(x23_2 - 0x10))
        
        void* x0_4 = *(x23_2 - 0x38)
        
        if (x0_4 != 0)
            *(x23_2 - 0x30) = x0_4
            operator delete(x0_4)
        
        void* x0_5 = *(x23_2 - 0x58)
        *(x23_2 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_5 != 0)
            *(x23_2 - 0x50) = x0_5
            operator delete(x0_5)
        
        cond:0_1 = x20_2 == x23_2 - 0x60
        x23_2 -= 0x60
    while (not(cond:0_1))
    x0_6 = entry_x0[1]

entry_x0[2] = x20_2
return operator delete(x0_6) __tailcall
