// 函数: sub_ea843c
// 地址: 0xea843c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23

if ((Botan::PKCS10_Request::is_CA() & 1) == 0)
    Botan::Public_Key* x0_3 = Botan::PKCS10_Request::subject_public_key()
    Botan::verify_cert_constraints_valid_for_key_type(x0_3, 
        zx.q(Botan::PKCS10_Request::constraints()))
    x23 = Botan::PKCS10_Request::constraints()
    (*(*x0_3 + 8))(x0_3)
else
    x23 = 0x600

Botan::PKCS10_Request::data()
Botan::Extensions::Extensions(arg1)
int64_t* x0_13 = operator new(0x18)
char x0_15 = Botan::PKCS10_Request::is_CA()
int64_t x0_17 = Botan::PKCS10_Request::path_limit()
x0_13[1].b = x0_15 & 1
x0_13[2] = x0_17
*x0_13 = _vtable_for_Botan::Cert_Extension::Basic_Constraints + 0x10
Botan::Extensions::replace(arg1, x0_13.b)

if (x23 != 0)
    void** x0_19 = operator new(0x10)
    x0_19[1].d = x23
    *x0_19 = _vtable_for_Botan::Cert_Extension::Key_Usage + 0x10
    Botan::Extensions::replace(arg1, x0_19.b)

void** x0_21 = operator new(0x20)
void* x0_23 = Botan::X509_Certificate::data()
x0_21[2] = 0
x0_21[3] = 0
*x0_21 = _vtable_for_Botan::Cert_Extension::Authority_Key_ID + 0x10
x0_21[1] = 0
int64_t x8_6 = *(x0_23 + 0x288)
int64_t x9_1 = *(x0_23 + 0x280)
uint64_t x26 = x8_6 - x9_1

if (x8_6 != x9_1)
    if ((x26 & 0xffffffff80000000) != 0)
        int64_t* x0_47 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        operator delete(arg4)
        *(arg1 + 0x28)
        *arg1 = _vtable_for_Botan::Extensions + 0x10
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
            arg1 + 0x20)
        void* x21_4 = *(arg1 + 8)
        
        if (x21_4 != 0)
            void** x8_13 = *(arg1 + 0x10)
            void* x0_50 = x21_4
            
            if (x8_13 != x21_4)
                void** x23_2 = x8_13
                
                do
                    x23_2 = &x23_2[-4]
                    *x23_2 = _vtable_for_Botan::OID + 0x10
                    void* x0_51 = x23_2[1]
                    
                    if (x0_51 != 0)
                        x8_13[-2] = x0_51
                        operator delete(x0_51)
                    
                    x8_13 = x23_2
                while (x21_4 != x23_2)
                
                x0_50 = *(arg1 + 8)
            
            *(arg1 + 0x10) = x21_4
            operator delete(x0_50)
        
        sub_1101e04(x0_47)
        noreturn
    
    int64_t x0_25 = operator new(x26)
    x0_21[1] = x0_25
    x0_21[2] = x0_25
    x0_21[3] = x0_25 + x26
    int64_t x1_4 = *(x0_23 + 0x280)
    int64_t x25_1 = x0_25
    size_t x22_2 = *(x0_23 + 0x288) - x1_4
    
    if (x22_2 s>= 1)
        memcpy(x25_1, x1_4, x22_2)
        x25_1 += x22_2
    
    x0_21[2] = x25_1

Botan::Extensions::replace(arg1, x0_21.b)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_28 = operator new(0x20)
Botan::Cert_Extension::Subject_Key_ID::Subject_Key_ID(x0_28, Botan::PKCS10_Request::data() + 0x38)
Botan::Extensions::replace(arg1, x0_28.b)
void** x0_33 = operator new(0x40)
Botan::PKCS10_Request::data()
*x0_33 = _vtable_for_Botan::Cert_Extension::Subject_Alternative_Name + 0x10
Botan::AlternativeName::AlternativeName(&x0_33[1])
Botan::Extensions::replace(arg1, x0_33.b)
void** x0_39 = operator new(0x20)
Botan::PKCS10_Request::ex_constraints()
*x0_39 = _vtable_for_Botan::Cert_Extension::Extended_Key_Usage + 0x10
std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::vector(&x0_39[1])
int64_t result = Botan::Extensions::replace(arg1, x0_39.b)
void* var_68

if (var_68 == 0)
    return result

void** var_60
void** x8_11 = var_60
void* x0_45

if (x8_11 == var_68)
    x0_45 = var_68
else
    void** x21_3 = x8_11
    
    do
        x21_3 = &x21_3[-4]
        *x21_3 = _vtable_for_Botan::OID + 0x10
        void* x0_44 = x21_3[1]
        
        if (x0_44 != 0)
            x8_11[-2] = x0_44
            operator delete(x0_44)
        
        x8_11 = x21_3
    while (var_68 != x21_3)
    
    x0_45 = var_68

void* var_60_1 = var_68
return operator delete(x0_45)
