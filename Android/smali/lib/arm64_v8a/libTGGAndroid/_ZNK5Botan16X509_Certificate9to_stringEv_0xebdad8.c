// 函数: _ZNK5Botan16X509_Certificate9to_stringEv
// 地址: 0xebdad8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* var_170)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_100)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_100)
int64_t var_78 = 0
int32_t var_70 = 0xffffffff
var_170 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_100 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_168 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
char var_128 = (zx.o(0)).b
int64_t var_118 = (zx.o(0)).q
int32_t var_108 = 0x10
uint32_t x0_2 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    &var_170, "Version: ", 9)
*(Botan::X509_Certificate::data() + 0x428)
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_2), "\n", 1)
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_8 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Subject: ", 9)
Botan::operator<<(x0_8, Botan::X509_Certificate::data() + 0x90)
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_8, "\n", 1)
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_14 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Issuer: ", 8)
Botan::operator<<(x0_14, Botan::X509_Certificate::data() + 0x58)
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_14, "\n", 1)
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_20 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Issued: ", 8)
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10)* var_1e8 = &var_168
Botan::X509_Certificate::data()
Botan::ASN1_Time::readable_string()
char var_1d8
uint64_t x8_2 = zx.q(var_1d8)
int32_t temp0 = x8_2.d & 1
char* var_1c8
char* x1_3

if (temp0 == 0)
    x1_3 = &var_1d8 | 1
else
    x1_3 = var_1c8

uint64_t var_1d0
uint64_t x2

if (temp0 == 0)
    x2 = x8_2 u>> 1
else
    x2 = var_1d0

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_20, x1_3, x2), 
    "\n", 1)

if ((zx.d(var_1d8) & 1) != 0)
    operator delete(var_1c8)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_28 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Expires: ", 9)
Botan::X509_Certificate::data()
Botan::ASN1_Time::readable_string()
uint64_t x8_4 = zx.q(var_1d8)
int32_t temp1 = x8_4.d & 1
char* x1_4

if (temp1 == 0)
    x1_4 = &var_1d8 | 1
else
    x1_4 = var_1c8

uint64_t x2_1

if (temp1 == 0)
    x2_1 = x8_4 u>> 1
else
    x2_1 = var_1d0

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_28, x1_4, 
        x2_1), 
    "\n", 1)

if ((zx.d(var_1d8) & 1) != 0)
    operator delete(var_1c8)

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Constraints:\n", 0xd)
int32_t x19 = *(Botan::X509_Certificate::data() + 0x438)

if (x19 == 0)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
        " None\n", 6)
else
    if ((x19 & 0x8000) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Digital Signature\n", 0x15)
    
    if ((x19 & 0x4000) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Non-Repudiation\n", 0x13)
    
    if ((x19 & 0x2000) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Key Encipherment\n", 0x14)
    
    if ((x19 & 0x1000) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Data Encipherment\n", 0x15)
    
    if ((x19 & 0x800) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Key Agreement\n", 0x11)
    
    if ((x19 & 0x400) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Cert Sign\n", 0xd)
    
    if ((x19 & 0x200) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   CRL Sign\n", 0xc)
    
    if ((x19 & 0x100) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Encipher Only\n", 0x11)
    
    if ((x19 & 0x80) != 0)
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Decipher Only\n", 0x11)

void* x0_49 = Botan::X509_Certificate::data()
int64_t var_1c0
char var_188
uint64_t var_180
char* var_178

if (*(x0_49 + 0x298) != *(x0_49 + 0x2a0))
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "Policies: ", 0xa), 
        "\n", 1)
    void* x28_1 = *(x0_49 + 0x298)
    int64_t x21_1 = *(x0_49 + 0x2a0)
    
    if (x28_1 != x21_1)
        do
            var_1d8.q = _vtable_for_Botan::OID + 0x10
            __builtin_memset(&var_1d0, 0, 0x18)
            int64_t x9_6 = *(x28_1 + 8)
            int64_t x8_7 = *(x28_1 + 0x10)
            uint64_t x27_1 = x8_7 - x9_6
            
            if (x8_7 != x9_6)
                if ((x27_1 & 0xffffffff80000000) != 0)
                    int64_t* x0_185 =
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    
                    if ((zx.d(var_188) & 1) != 0)
                        operator delete(var_178)
                    
                    void* x19_10 = var_1d8.q
                    
                    if (x19_10 != 0)
                        uint64_t x8_72 = var_1d0
                        void* x0_187 = x19_10
                        
                        if (x8_72 != x19_10)
                            uint64_t x20_5 = x8_72
                            
                            do
                                x20_5 -= 0x18
                                
                                if ((zx.d(*x20_5) & 1) != 0)
                                    operator delete(*(x8_72 - 8))
                                
                                x8_72 = x20_5
                            while (x19_10 != x20_5)
                            
                            x0_187 = var_1d8.q
                        
                        void* var_1d0_4 = x19_10
                        operator delete(x0_187)
                    
                    var_100 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    var_170 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    var_168 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x10
                    
                    if ((zx.d(var_128) & 1) != 0)
                        operator delete(var_118)
                    
                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
                    std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                    sub_1101e04(x0_185)
                    noreturn
                
                uint64_t x0_53 = operator new(x27_1)
                var_1d0 = x0_53
                var_1c8 = x0_53
                var_1c0 = x0_53 + (x27_1 s>> 2 << 2)
                int64_t x1_5 = *(x28_1 + 8)
                uint64_t x26_1 = x0_53
                size_t x27_2 = *(x28_1 + 0x10) - x1_5
                
                if (x27_2 s>= 1)
                    memcpy(x26_1, x1_5, x27_2)
                    x26_1 += x27_2
                
                var_1c8 = x26_1
            
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_56 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                &var_170, "   ", 3)
            Botan::OID::to_string()
            uint64_t x8_11 = zx.q(var_188)
            int32_t temp3_1 = x8_11.d & 1
            char* x1_6
            
            if (temp3_1 == 0)
                x1_6 = &var_188 | 1
            else
                x1_6 = var_178
            
            uint64_t x2_3
            
            if (temp3_1 == 0)
                x2_3 = x8_11 u>> 1
            else
                x2_3 = var_180
            
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_56, 
                    x1_6, x2_3), 
                "\n", 1)
            
            if ((zx.d(var_188) & 1) != 0)
                operator delete(var_178)
            
            uint64_t x0_60 = var_1d0
            var_1d8.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_60 != 0)
                var_1c8 = x0_60
                operator delete(x0_60)
            
            x28_1 += 0x20
        while (x21_1 != x28_1)

void* x0_62 = Botan::X509_Certificate::data()

if (*(x0_62 + 0x250) != *(x0_62 + 0x258))
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
        "Extended Constraints:\n", 0x16)
    int64_t x23_6 = *(x0_62 + 0x250)
    int64_t x19_2 = *(x0_62 + 0x258)
    
    if (x23_6 != x19_2)
        do
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_65 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                &var_170, "   ", 3)
            Botan::OID::to_formatted_string()
            uint64_t x8_15 = zx.q(var_1d8)
            int32_t temp2_1 = x8_15.d & 1
            char* x1_7
            
            if (temp2_1 == 0)
                x1_7 = &var_1d8 | 1
            else
                x1_7 = var_1c8
            
            uint64_t x2_4
            
            if (temp2_1 == 0)
                x2_4 = x8_15 u>> 1
            else
                x2_4 = var_1d0
            
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_65, 
                    x1_7, x2_4), 
                "\n", 1)
            
            if ((zx.d(var_1d8) & 1) != 0)
                operator delete(var_1c8)
            
            x23_6 += 0x20
        while (x19_2 != x23_6)

void* x0_71 = Botan::X509_Certificate::data()

if (*(x0_71 + 0x3c8) != *(x0_71 + 0x3d0) || *(x0_71 + 0x3e0) != *(x0_71 + 0x3e8))
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
        "Name Constraints:\n", 0x12)
    char* var_1b8
    char var_1b0
    void var_1af
    uint64_t var_1a8
    char* var_1a0
    
    if (*(x0_71 + 0x3c8) != *(x0_71 + 0x3d0))
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Permit", 9)
        void* x21_2 = *(x0_71 + 0x3c8)
        int64_t x19_4 = *(x0_71 + 0x3d0)
        
        if (x21_2 != x19_4)
            do
                var_1d8.q = _vtable_for_Botan::GeneralSubtree + 0x10
                void* __offset(vtable_for_Botan::GeneralName, 0x10) var_1d0_1 =
                    _vtable_for_Botan::GeneralName + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_1c8)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_1b0)
                int128_t var_198_1 = *(x21_2 + 0x40)
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_77 =
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    &var_170, " ", 1)
                uint64_t x8_20 = zx.q(var_1c8.b)
                int32_t temp4_1 = x8_20.d & 1
                char* x1_10
                
                if (temp4_1 == 0)
                    x1_10 = &var_1c8:1
                else
                    x1_10 = var_1b8
                
                uint64_t x2_5
                
                if (temp4_1 == 0)
                    x2_5 = x8_20 u>> 1
                else
                    x2_5 = var_1c0
                
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_79 =
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        x0_77, x1_10, x2_5), 
                    ":", 1)
                uint64_t x8_21 = zx.q(var_1b0)
                int32_t temp9_1 = x8_21.d & 1
                char* x1_11
                
                x1_11 = temp9_1 == 0 ? &var_1af : var_1a0
                
                uint64_t x2_6
                
                if (temp9_1 == 0)
                    x2_6 = x8_21 u>> 1
                else
                    x2_6 = var_1a8
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_79, 
                    x1_11, x2_6)
                uint32_t x8_22 = zx.d(var_1b0)
                var_1d8.q = _vtable_for_Botan::GeneralSubtree + 0x10
                var_1d0 = _vtable_for_Botan::GeneralName + 0x10
                
                if ((x8_22 & 1) != 0)
                    operator delete(var_1a0)
                    
                    if ((zx.d(var_1c8.b) & 1) != 0)
                        operator delete(var_1b8)
                else if ((zx.d(var_1c8.b) & 1) != 0)
                    operator delete(var_1b8)
                
                x21_2 += 0x50
            while (x19_4 != x21_2)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "\n", 1)
    
    if (*(x0_71 + 0x3e0) != *(x0_71 + 0x3e8))
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "   Exclude", 0xa)
        void* x21_3 = *(x0_71 + 0x3e0)
        int64_t x19_5 = *(x0_71 + 0x3e8)
        
        if (x21_3 != x19_5)
            do
                var_1d8.q = _vtable_for_Botan::GeneralSubtree + 0x10
                void* __offset(vtable_for_Botan::GeneralName, 0x10) var_1d0_2 =
                    _vtable_for_Botan::GeneralName + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_1c8)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_1b0)
                int128_t var_198_2 = *(x21_3 + 0x40)
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_87 =
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    &var_170, " ", 1)
                uint64_t x8_26 = zx.q(var_1c8.b)
                int32_t temp6_1 = x8_26.d & 1
                char* x1_14
                
                if (temp6_1 == 0)
                    x1_14 = &var_1c8:1
                else
                    x1_14 = var_1b8
                
                int64_t x2_7
                
                if (temp6_1 == 0)
                    x2_7 = x8_26 u>> 1
                else
                    x2_7 = var_1c0
                
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_89 =
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        x0_87, x1_14, x2_7), 
                    ":", 1)
                uint64_t x8_27 = zx.q(var_1b0)
                int32_t temp10_1 = x8_27.d & 1
                char* x1_15
                
                x1_15 = temp10_1 == 0 ? &var_1af : var_1a0
                
                uint64_t x2_8
                
                if (temp10_1 == 0)
                    x2_8 = x8_27 u>> 1
                else
                    x2_8 = var_1a8
                
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_89, 
                    x1_15, x2_8)
                uint32_t x8_28 = zx.d(var_1b0)
                var_1d8.q = _vtable_for_Botan::GeneralSubtree + 0x10
                var_1d0 = _vtable_for_Botan::GeneralName + 0x10
                
                if ((x8_28 & 1) != 0)
                    operator delete(var_1a0)
                    
                    if ((zx.d(var_1c8.b) & 1) != 0)
                        operator delete(var_1b8)
                else if ((zx.d(var_1c8.b) & 1) != 0)
                    operator delete(var_1b8)
                
                x21_3 += 0x50
            while (x19_5 != x21_3)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "\n", 1)

Botan::X509_Certificate::data()
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_1d8)
uint32_t x8_31 = zx.d(var_1d8)

if ((x8_31 & 1) != 0)
    uint64_t x19_6 = var_1d0
    operator delete(var_1c8)
    
    if (x19_6 != 0)
    label_ebe3bc:
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_98 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            "OCSP responder ", 0xf)
        Botan::X509_Certificate::data()
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_1d8)
        uint64_t x8_32 = zx.q(var_1d8)
        int32_t temp5_1 = x8_32.d & 1
        char* x1_18
        
        if (temp5_1 == 0)
            x1_18 = &var_1d8 | 1
        else
            x1_18 = var_1c8
        
        uint64_t x2_9
        
        if (temp5_1 == 0)
            x2_9 = x8_32 u>> 1
        else
            x2_9 = var_1d0
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_98, 
                x1_18, x2_9), 
            "\n", 1)
        
        if ((zx.d(var_1d8) & 1) != 0)
            operator delete(var_1c8)
else if (x8_31 u>= 2)
    goto label_ebe3bc

Botan::X509_Certificate::data()
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_1d8)

if (var_1d8.q != var_1d0)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
        "CA Issuers:\n", 0xc)
    
    if (var_1d0 != var_1d8.q)
        int64_t x19_7 = 0
        int64_t i = 0
        
        do
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_110 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                &var_170, "   URI: ", 8)
            char* x8_37 = var_1d8.q + x19_7
            uint64_t x9_23 = zx.q(*x8_37)
            int32_t temp8_1 = x9_23.d & 1
            void* x1_20
            
            if (temp8_1 != 0)
                x1_20 = *(x8_37 + 0x10)
            else
                x1_20 = &x8_37[1]
            
            uint64_t x2_10
            
            if (temp8_1 == 0)
                x2_10 = x9_23 u>> 1
            else
                x2_10 = *(x8_37 + 8)
            
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    x0_110, x1_20, x2_10), 
                "\n", 1)
            i += 1
            x19_7 += 0x18
        while (i != ((var_1d0 - var_1d8.q) s>> 3) * -0x5555555555555555)

void* x0_113 = Botan::X509_Certificate::data()

if (*(x0_113 + 0x2b8) != *(x0_113 + 0x2b0))
    *(Botan::X509_Certificate::data() + 0x2b0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_188)
    uint32_t x8_43 = zx.d(var_188)
    
    if ((x8_43 & 1) != 0)
        operator delete(var_178)
        
        if (var_180 != 0)
        label_ebe53c:
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_119 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                &var_170, "CRL ", 4)
            void* x0_121 = Botan::X509_Certificate::data()
            uint32_t x8_45
            
            if (*(x0_121 + 0x2b8) == *(x0_121 + 0x2b0))
                x8_45 = 0
                var_188.w = 0
            else
                *(Botan::X509_Certificate::data() + 0x2b0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_188)
                x8_45 = zx.d(var_188)
            
            int32_t temp11_1 = x8_45 & 1
            char* x1_23
            void var_187
            
            x1_23 = temp11_1 != 0 ? var_178 : &var_187
            uint64_t x2_11
            
            if (temp11_1 == 0)
                x2_11 = zx.q(x8_45 u>> 1)
            else
                x2_11 = var_180
            
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    x0_119, x1_23, x2_11), 
                "\n", 1)
            
            if ((zx.d(var_188) & 1) != 0)
                operator delete(var_178)
    else if (x8_43 u>= 2)
        goto label_ebe53c

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_129 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Signature algorithm: ", 0x15)
Botan::OID::to_formatted_string()
uint64_t x8_47 = zx.q(var_188)
int32_t temp7 = x8_47.d & 1
char* x1_24

if (temp7 == 0)
    x1_24 = &var_188 | 1
else
    x1_24 = var_178

uint64_t x2_12

if (temp7 == 0)
    x2_12 = x8_47 u>> 1
else
    x2_12 = var_180

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_129, x1_24, 
        x2_12), 
    "\n", 1)

if ((zx.d(var_188) & 1) != 0)
    operator delete(var_178)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_135 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Serial number: ", 0xf)
int64_t* x0_137 = Botan::X509_Certificate::data()
uint8_t* x9_28 = *x0_137
Botan::hex_encode(x9_28, x0_137[1] - x9_28, true)
uint64_t x8_50 = zx.q(var_188)
int32_t temp12 = x8_50.d & 1
char* x1_26

if (temp12 == 0)
    x1_26 = &var_188 | 1
else
    x1_26 = var_178

uint64_t x2_13

if (temp12 == 0)
    x2_13 = x8_50 u>> 1
else
    x2_13 = var_180

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_135, x1_26, 
        x2_13), 
    "\n", 1)

if ((zx.d(var_188) & 1) != 0)
    operator delete(var_178)

void* x0_143 = Botan::X509_Certificate::data()

if (*(x0_143 + 0x270) != *(x0_143 + 0x268))
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_145 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
        "Authority keyid: ", 0x11)
    void* x0_147 = Botan::X509_Certificate::data()
    uint8_t* x9_31 = *(x0_147 + 0x268)
    Botan::hex_encode(x9_31, *(x0_147 + 0x270) - x9_31, true)
    uint64_t x8_54 = zx.q(var_188)
    int32_t temp13_1 = x8_54.d & 1
    char* x1_28
    
    if (temp13_1 == 0)
        x1_28 = &var_188 | 1
    else
        x1_28 = var_178
    
    uint64_t x2_14
    
    if (temp13_1 == 0)
        x2_14 = x8_54 u>> 1
    else
        x2_14 = var_180
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_145, x1_28, 
            x2_14), 
        "\n", 1)
    
    if ((zx.d(var_188) & 1) != 0)
        operator delete(var_178)

void* x0_153 = Botan::X509_Certificate::data()

if (*(x0_153 + 0x288) != *(x0_153 + 0x280))
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_155 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
        "Subject keyid: ", 0xf)
    void* x0_157 = Botan::X509_Certificate::data()
    uint8_t* x9_34 = *(x0_157 + 0x280)
    Botan::hex_encode(x9_34, *(x0_157 + 0x288) - x9_34, true)
    uint64_t x8_58 = zx.q(var_188)
    int32_t temp15_1 = x8_58.d & 1
    char* x1_30
    
    if (temp15_1 == 0)
        x1_30 = &var_188 | 1
    else
        x1_30 = var_178
    
    uint64_t x2_15
    
    if (temp15_1 == 0)
        x2_15 = x8_58 u>> 1
    else
        x2_15 = var_180
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_155, x1_30, 
            x2_15), 
        "\n", 1)
    
    if ((zx.d(var_188) & 1) != 0)
        operator delete(var_178)

Botan::X509_Certificate::load_subject_public_key()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_164 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Public Key [", 0xc)
int64_t* var_68
(*(*var_68 + 0x10))(var_68)
uint64_t x8_61 = zx.q(var_188)
int32_t temp14 = x8_61.d & 1
char* x1_31

if (temp14 == 0)
    x1_31 = &var_188 | 1
else
    x1_31 = var_178

uint64_t x2_16

if (temp14 == 0)
    x2_16 = x8_61 u>> 1
else
    x2_16 = var_180

uint64_t x0_168 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_164, x1_31, 
        x2_16), 
    "-", 1)
(*(*var_68 + 0x20))(var_68)
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_168), "]\n\n", 
    3)

if ((zx.d(var_188) & 1) != 0)
    operator delete(var_178)

Botan::X509::PEM_encode(var_68)
uint64_t x8_65 = zx.q(var_188)
int32_t temp16 = x8_65.d & 1
char* x1_33

if (temp16 == 0)
    x1_33 = &var_188 | 1
else
    x1_33 = var_178

uint64_t x2_17

if (temp16 == 0)
    x2_17 = x8_65 u>> 1
else
    x2_17 = var_180

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, x1_33, x2_17)

if ((zx.d(var_188) & 1) != 0)
    operator delete(var_178)

(*(*var_68 + 8))(var_68)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
void* x19_9 = var_1d8.q

if (x19_9 != 0)
    uint64_t x8_69 = var_1d0
    void* x0_180
    
    if (x8_69 == x19_9)
        x0_180 = x19_9
    else
        uint64_t x20_4 = x8_69
        
        do
            x20_4 -= 0x18
            
            if ((zx.d(*x20_4) & 1) != 0)
                operator delete(*(x8_69 - 8))
            
            x8_69 = x20_4
        while (x19_9 != x20_4)
        
        x0_180 = var_1d8.q
    
    void* var_1d0_3 = x19_9
    operator delete(x0_180)

var_100 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_170 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_168 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_128) & 1) != 0)
    operator delete(var_118)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
