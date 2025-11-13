// 函数: _ZN5Botan3TLS12Client_HelloC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe48c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 8) = 0
*arg1 = _vtable_for_Botan::TLS::Client_Hello + 0x10
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x70) = zx.o(0)
*(arg1 + 0x90) = 0
*(arg1 + 0x88) = arg1 + 0x90
*(arg1 + 0x98) = 0
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x50) = zx.o(0)
*(arg1 + 0x60) = zx.o(0)
*(arg1 + 0x80) = 0
int128_t var_80
int64_t* entry_x1

if (entry_x1[1] - *entry_x1 u<= 0x28)
    void** x0_24 = __cxa_allocate_exception(0x20, v0)
    int64_t x0_25
    int128_t v0_5
    x0_25, v0_5 = operator new(0x20)
    int64_t var_70_4 = x0_25
    var_80 = data_71c370
    __builtin_strncpy(x0_25, "Client_Hello: Packet corrupted", 0x1f)
    *x0_24 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_24[1])
    *x0_24 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_24, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

var_80.q = "ClientHello"
var_80:8.q = entry_x1
int64_t var_70 = 0
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_80)
char x21 = (*var_80:8.q)[var_70]
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_80)
*(arg1 + 8) = zx.w((*var_80:8.q)[var_70 + 1]) | (zx.d(x21) << 8).w
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_80)
char* x0_3 = operator new(0x20)
int64_t* x9_4 = var_80:8.q
__builtin_memset(x0_3, 0, 0x20)
*x0_3 = (*x9_4)[var_70 + 2]
x0_3[1] = *(*x9_4 + var_70 + 2 + 1)
x0_3[2] = *(*x9_4 + var_70 + 2 + 2)
x0_3[3] = *(*x9_4 + var_70 + 2 + 3)
x0_3[4] = *(*x9_4 + var_70 + 2 + 4)
x0_3[5] = *(*x9_4 + var_70 + 2 + 5)
x0_3[6] = *(*x9_4 + var_70 + 2 + 6)
x0_3[7] = *(*x9_4 + var_70 + 2 + 7)
x0_3[8] = *(*x9_4 + var_70 + 2 + 8)
x0_3[9] = *(*x9_4 + var_70 + 2 + 9)
x0_3[0xa] = *(*x9_4 + var_70 + 2 + 0xa)
x0_3[0xb] = *(*x9_4 + var_70 + 2 + 0xb)
x0_3[0xc] = *(*x9_4 + var_70 + 2 + 0xc)
x0_3[0xd] = *(*x9_4 + var_70 + 2 + 0xd)
x0_3[0xe] = *(*x9_4 + var_70 + 2 + 0xe)
x0_3[0xf] = *(*x9_4 + var_70 + 2 + 0xf)
x0_3[0x10] = *(*x9_4 + var_70 + 2 + 0x10)
x0_3[0x11] = *(*x9_4 + var_70 + 2 + 0x11)
x0_3[0x12] = *(*x9_4 + var_70 + 2 + 0x12)
x0_3[0x13] = *(*x9_4 + var_70 + 2 + 0x13)
x0_3[0x14] = *(*x9_4 + var_70 + 2 + 0x14)
x0_3[0x15] = *(*x9_4 + var_70 + 2 + 0x15)
x0_3[0x16] = *(*x9_4 + var_70 + 2 + 0x16)
x0_3[0x17] = *(*x9_4 + var_70 + 2 + 0x17)
x0_3[0x18] = *(*x9_4 + var_70 + 2 + 0x18)
x0_3[0x19] = *(*x9_4 + var_70 + 2 + 0x19)
x0_3[0x1a] = *(*x9_4 + var_70 + 2 + 0x1a)
x0_3[0x1b] = *(*x9_4 + var_70 + 2 + 0x1b)
x0_3[0x1c] = *(*x9_4 + var_70 + 2 + 0x1c)
x0_3[0x1d] = *(*x9_4 + var_70 + 2 + 0x1d)
x0_3[0x1e] = *(*x9_4 + var_70 + 2 + 0x1e)
int64_t var_70_3 = var_70 + 0x22
x0_3[0x1f] = *(*x9_4 + var_70 + 2 + 0x1f)
void* x0_4 = *(arg1 + 0x28)

if (x0_4 != 0)
    *(arg1 + 0x30) = x0_4
    operator delete(x0_4)
    __builtin_memset(arg1 + 0x28, 0, 0x18)

*(arg1 + 0x28) = x0_3
*(arg1 + 0x30) = &x0_3[0x20]
*(arg1 + 0x38) = &x0_3[0x20]
Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_80, 1, 0)
void* x0_6 = *(arg1 + 0x10)

if (x0_6 != 0)
    *(arg1 + 0x18) = x0_6
    operator delete(x0_6)
    __builtin_memset(arg1 + 0x10, 0, 0x18)

uint32_t x8_12 = zx.d(*(arg1 + 9))
int128_t var_a0
*(arg1 + 0x10) = var_a0
int64_t var_90
*(arg1 + 0x20) = var_90

if (x8_12 u>= 0xfb)
    Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_80, 1, 0)
    void* x0_8 = *(arg1 + 0x70)
    
    if (x0_8 != 0)
        *(arg1 + 0x78) = x0_8
        operator delete(x0_8)
        __builtin_memset(arg1 + 0x70, 0, 0x18)
    
    *(arg1 + 0x70) = var_a0
    *(arg1 + 0x80) = var_90

Botan::TLS::TLS_Data_Reader::get_num_elems(&var_80, 2, 2, 1)
Botan::TLS::TLS_Data_Reader::get_elem<uint16_t, std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> > >(
    &var_80)
void* x0_12 = *(arg1 + 0x40)

if (x0_12 != 0)
    *(arg1 + 0x48) = x0_12
    operator delete(x0_12)
    __builtin_memset(arg1 + 0x40, 0, 0x18)

*(arg1 + 0x40) = var_a0
*(arg1 + 0x50) = var_90
Botan::TLS::TLS_Data_Reader::get_range_vector<uint8_t>(&var_80, 1, 1)
void* x0_14 = *(arg1 + 0x58)

if (x0_14 != 0)
    *(arg1 + 0x60) = x0_14
    operator delete(x0_14)
    __builtin_memset(arg1 + 0x58, 0, 0x18)

*(arg1 + 0x58) = var_a0
*(arg1 + 0x68) = var_90
void* result = Botan::TLS::Extensions::deserialize(arg1 + 0x88, &var_80)
int16_t* x8_16 = *(arg1 + 0x40)
int64_t x10_92 = *(arg1 + 0x48)
void* x9_9 = x10_92 - x8_16

if (x10_92 != x8_16)
    void* x11_1
    
    x11_1 = x9_9 s>= 0 ? x9_9 : -ffffffffffffffff
    
    void* x10_93 = x8_16 - x10_92
    void* x11_2
    
    x11_2 = x11_1 s< 1 ? x11_1 : 1
    
    void* x9_10
    
    x9_10 = x10_93 s> x9_9 ? x10_93 : x9_9
    
    int64_t i_1 = x11_2 * (x9_10 u>> 1)
    int64_t i
    
    do
        if (zx.d(*x8_16) == 0xff)
            void* j = *(arg1 + 0x90)
            
            if (j == 0)
            label_e491c0:
                int64_t* x0_22 = operator new(0x20)
                x0_22[2] = 0
                x0_22[3] = 0
                *x0_22 = _vtable_for_Botan::TLS::Renegotiation_Extension + 0x10
                x0_22[1] = 0
                return Botan::TLS::Extensions::add(arg1 + 0x88)
            
            void* __offset(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, 0x90) 
                j_1 = arg1 + 0x90
            
            do
                int32_t x11_3 = *(j + 0x20)
                
                if (x11_3 s>= 0xff01)
                    j_1 = j
                
                j = *(j + (zx.q(x11_3 s< 0xff01 ? 1 : 0) << 3))
            while (j != 0)
            
            if (j_1 == arg1 + 0x90 || *(j_1 + 0x20) s> 0xff01)
                goto label_e491c0
            
            int64_t x0_16 = *(j_1 + 0x28)
            
            if (x0_16 == 0)
                goto label_e491c0
            
            result = __dynamic_cast(x0_16, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Renegotiation_Extension, 0)
            
            if (result == 0)
                goto label_e491c0
            
            if (*(result + 8) == *(result + 0x10))
                break
            
            void** x0_17 = __cxa_allocate_exception(0x28)
            int64_t x0_18
            int128_t v2
            x0_18, v2 = operator new(0x40)
            (*"nd non-empty extension")[0].o
            int64_t var_90_1 = x0_18
            v2 = data_71bff0
            __builtin_strncpy(x0_18, "Client sent renegotiation SCSV and non-empty extension", 0x37)
            int128_t var_a0_1 = v2
            *x0_17 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_17[1])
            x0_17[4].d = 0x28
            *x0_17 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_17, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
        
        i = i_1
        i_1 -= 1
        x8_16 = &x8_16[1]
    while (i != 1)

return result
