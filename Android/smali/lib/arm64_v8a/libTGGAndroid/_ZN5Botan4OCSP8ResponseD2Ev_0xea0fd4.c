// 函数: _ZN5Botan4OCSP8ResponseD2Ev
// 地址: 0xea0fd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x20 = *(entry_x0 + 0x120)

if (x20 != 0)
    void** x21_1 = *(entry_x0 + 0x128)
    void* x0_1
    
    if (x21_1 == x20)
        x0_1 = x20
    else
        do
            x21_1 = &x21_1[-0x20]
            *x21_1 = _vtable_for_Botan::OCSP::SingleResponse + 0x10
            Botan::OCSP::CertID::~CertID()
        while (x20 != x21_1)
        
        x0_1 = *(entry_x0 + 0x120)
    
    *(entry_x0 + 0x128) = x20
    operator delete(x0_1)

void* x21_2 = *(entry_x0 + 0x108)

if (x21_2 != 0)
    int64_t* x20_1 = *(entry_x0 + 0x110)
    void* x0_3
    
    if (x20_1 == x21_2)
        x0_3 = x21_2
    else
        do
            x20_1 = &x20_1[-0x11]
            (*(*x20_1 + 0x10))(x20_1)
        while (x21_2 != x20_1)
        
        x0_3 = *(entry_x0 + 0x108)
    
    *(entry_x0 + 0x110) = x21_2
    operator delete(x0_3)

void* x0_4 = *(entry_x0 + 0xf0)

if (x0_4 != 0)
    *(entry_x0 + 0xf8) = x0_4
    operator delete(x0_4)

void* x0_5 = *(entry_x0 + 0xd8)
*(entry_x0 + 0xb0) = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_5 != 0)
    *(entry_x0 + 0xe0) = x0_5
    operator delete(x0_5)

void* x0_6 = *(entry_x0 + 0xc0)
*(entry_x0 + 0xb8) = _vtable_for_Botan::OID + 0x10

if (x0_6 != 0)
    *(entry_x0 + 0xc8) = x0_6
    operator delete(x0_6)

void* x0_7 = *(entry_x0 + 0x98)

if (x0_7 != 0)
    *(entry_x0 + 0xa0) = x0_7
    operator delete(x0_7)

void* x0_8 = *(entry_x0 + 0x80)

if (x0_8 != 0)
    *(entry_x0 + 0x88) = x0_8
    operator delete(x0_8)

void* x0_9 = *(entry_x0 + 0x68)
*(entry_x0 + 0x48) = _vtable_for_Botan::X509_DN + 0x10

if (x0_9 != 0)
    *(entry_x0 + 0x70) = x0_9
    operator delete(x0_9)

void* x20_2 = *(entry_x0 + 0x50)

if (x20_2 != 0)
    void* x23_1 = *(entry_x0 + 0x58)
    void* x0_13
    
    if (x23_1 == x20_2)
        x0_13 = x20_2
    else
        bool cond:0_1
        
        do
            uint32_t x8_6 = zx.d(*(x23_1 - 0x20))
            *(x23_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_6 & 1) != 0)
                operator delete(*(x23_1 - 0x10))
            
            void* x0_11 = *(x23_1 - 0x38)
            
            if (x0_11 != 0)
                *(x23_1 - 0x30) = x0_11
                operator delete(x0_11)
            
            void* x0_12 = *(x23_1 - 0x58)
            *(x23_1 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_12 != 0)
                *(x23_1 - 0x50) = x0_12
                operator delete(x0_12)
            
            cond:0_1 = x20_2 == x23_1 - 0x60
            x23_1 -= 0x60
        while (not(cond:0_1))
        x0_13 = *(entry_x0 + 0x50)
    
    *(entry_x0 + 0x58) = x20_2
    operator delete(x0_13)

void* result = *(entry_x0 + 8)

if (result == 0)
    return result

*(entry_x0 + 0x10) = result
return operator delete(result) __tailcall
