// 函数: _ZNK5Botan5EMSA115config_for_x509ERKNS_11Private_KeyERKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// 地址: 0xd5fedc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 8) + 0x40))()
char* entry_x2
uint64_t x9_2 = zx.q(*entry_x2)
char var_120
uint64_t x23 = zx.q(var_120)
uint64_t i_1 = x9_2 u>> 1
uint64_t i_2

if ((x9_2.d & 1) == 0)
    i_2 = i_1
else
    i_2 = *(entry_x2 + 8)

uint64_t x10_1
uint64_t var_118

if ((x23.d & 1) == 0)
    x10_1 = x23 u>> 1
else
    x10_1 = var_118
int32_t x22_1
char* var_110

if (i_2 != x10_1)
    x22_1 = 1
    
    if ((x23.d & 1) != 0)
        operator delete(var_110)
else
    char* x1
    
    if ((x23.d & 1) == 0)
        x1 = &var_120 | 1
    else
        x1 = var_110
    
    if ((x9_2.d & 1) == 0)
        if (i_2 == 0)
            goto label_d603d4
        
        void* x9_4 = &entry_x2[1]
        uint32_t x10_2
        uint32_t x11_2
        uint64_t i
        
        do
            x10_2 = zx.d(*x9_4)
            x11_2 = zx.d(*x1)
            
            if (x10_2 != x11_2)
                break
            
            i = i_1
            i_1 -= 1
            x9_4 += 1
            x1 = &x1[1]
        while (i != 1)
        x22_1 = x10_2 != x11_2 ? 1 : 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_110)
    else if (i_2 == 0)
    label_d603d4:
        x22_1 = 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_110)
    else
        x22_1 = memcmp() != 0 ? 1 : 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_110)

if (x22_1 != 0)
    void** x0_41 = __cxa_allocate_exception(0x20)
    int64_t x0_42
    int128_t v0_2
    x0_42, v0_2 = operator new(0x50)
    v0_2 = data_71cfd0
    int64_t var_110_2 = x0_42
    __builtin_strncpy(x0_42, "Hash function from opts and hash_fn argument need to be identical", 
        0x42)
    var_120.o = v0_2
    *x0_41 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_41[1])
    *x0_41 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_41, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

(*(*(arg2 + *(*arg2 - 0x88)) + 0x10))()
char var_70
__builtin_strcpy(&var_70, "\nEMSA1")
char var_58
int32_t x0_4 = Botan::sig_algo_and_pad_ok(&var_58, &var_70)
void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
void* __offset(vtable_for_Botan::OID, 0x10) var_90

if ((x0_4 & 1) == 0)
    void** x0_46 = __cxa_allocate_exception(0x20)
    void* x9_11 = arg2 + *(*arg2 - 0x88)
    (*(*x9_11 + 0x10))(x9_11)
    int128_t* x0_49
    int128_t v0_3
    x0_49, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_90, nullptr)
    int64_t var_110_3 = x0_49[1].q
    var_120.o = *x0_49
    __builtin_memset(x0_49, 0, 0x18)
    *x0_46 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_46[1])
    *x0_46 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_46, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

(*(*(arg2 + *(*arg2 - 0x88)) + 0x10))()
char var_c8
int128_t* x0_8
int128_t v0
x0_8, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_c8)
void* x8_7 = x0_8[1].q
int128_t var_b0 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
Botan::EMSA1::name()
char var_e0
uint64_t var_d0
uint64_t x1_3

if ((zx.d(var_e0) & 1) == 0)
    x1_3 = &var_e0 | 1
else
    x1_3 = var_d0

int128_t* x0_11
int128_t v0_1
x0_11, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_b0, x1_3)
void* x8_9 = x0_11[1].q
var_120.o = *x0_11
__builtin_memset(x0_11, 0, 0x18)
Botan::OID::from_string(&var_120)

if ((zx.d(var_120) & 1) == 0)
    if ((zx.d(var_e0) & 1) != 0)
        goto label_d6039c
    
    goto label_d600c4

operator delete(x8_9)

if ((zx.d(var_e0) & 1) != 0)
label_d6039c:
    operator delete(var_d0)
    
    if ((zx.d(var_b0.b) & 1) == 0)
        goto label_d600cc
    
    goto label_d603ac

label_d600c4:
void* var_b8

if ((zx.d(var_b0.b) & 1) != 0)
label_d603ac:
    operator delete(x8_7)
    
    if ((zx.d(var_c8) & 1) != 0)
        operator delete(var_b8)
else
label_d600cc:
    
    if ((zx.d(var_c8) & 1) != 0)
        operator delete(var_b8)
(*(*(arg2 + *(*arg2 - 0x88)) + 0x10))()
uint64_t x10_4 = zx.q(var_b0.b)
uint64_t x8_17 = var_b0:8.q
__builtin_memset(&var_c8, 0, 0x18)
int32_t x9_9 = x10_4.d & 1
uint64_t x10_5 = x10_4 u>> 1
uint64_t x11_4

x11_4 = x9_9 == 0 ? x10_5 : x8_17

if (x11_4 != 3)
    goto label_d6014c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_b0, 0, -ffffffffffffffff, &data_72065f) != 0)
    uint64_t x10_6 = zx.q(var_b0.b)
    x8_17 = var_b0:8.q
    x9_9 = x10_6.d & 1
    x10_5 = x10_6 u>> 1
label_d6014c:
    uint64_t x11_5
    
    if ((x9_9 & 0xff) == 0)
        x11_5 = x10_5
    else
        x11_5 = x8_17
    
    if (x11_5 != 5)
        goto label_d6018c
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_b0, 0, -ffffffffffffffff, "ECDSA") != 0)
        uint64_t x10_7 = zx.q(var_b0.b)
        x8_17 = var_b0:8.q
        x9_9 = x10_7.d & 1
        x10_5 = x10_7 u>> 1
    label_d6018c:
        uint64_t x11_6
        
        if ((x9_9 & 0xff) == 0)
            x11_6 = x10_5
        else
            x11_6 = x8_17
        
        if (x11_6 != 6)
            goto label_d601cc
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_b0, 0, -ffffffffffffffff, "ECGDSA") != 0)
            uint64_t x10_8 = zx.q(var_b0.b)
            x8_17 = var_b0:8.q
            x9_9 = x10_8.d & 1
            x10_5 = x10_8 u>> 1
        label_d601cc:
            uint64_t x11_7
            
            if ((x9_9 & 0xff) == 0)
                x11_7 = x10_5
            else
                x11_7 = x8_17
            
            if (x11_7 != 7)
                goto label_d6020c
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_b0, 0, -ffffffffffffffff, "ECKCDSA") != 0)
                uint64_t x10_9 = zx.q(var_b0.b)
                x8_17 = var_b0:8.q
                x9_9 = x10_9.d & 1
                x10_5 = x10_9 u>> 1
            label_d6020c:
                uint64_t x11_8
                
                if ((x9_9 & 0xff) == 0)
                    x11_8 = x10_5
                else
                    x11_8 = x8_17
                
                if (x11_8 != 0xa)
                    goto label_d6024c
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_b0, 0, -ffffffffffffffff, "GOST-34.10") != 0)
                    uint64_t x10_10 = zx.q(var_b0.b)
                    x8_17 = var_b0:8.q
                    x9_9 = x10_10.d & 1
                    x10_5 = x10_10 u>> 1
                label_d6024c:
                    uint64_t x11_9
                    
                    if ((x9_9 & 0xff) == 0)
                        x11_9 = x10_5
                    else
                        x11_9 = x8_17
                    
                    if (x11_9 != 0x13)
                        goto label_d6028c
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_b0, 0, -ffffffffffffffff, "GOST-34.10-2012-256") != 0)
                        uint64_t x10_11 = zx.q(var_b0.b)
                        x8_17 = var_b0:8.q
                        x9_9 = x10_11.d & 1
                        x10_5 = x10_11 u>> 1
                    label_d6028c:
                        uint64_t x8_18
                        
                        if ((x9_9 & 0xff) == 0)
                            x8_18 = x10_5
                        else
                            x8_18 = x8_17
                        
                        int32_t x0_28
                        
                        if (x8_18 == 0x13)
                            x0_28 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_b0, 0, -ffffffffffffffff, "GOST-34.10-2012-512")
                        
                        if (x8_18 != 0x13 || x0_28 != 0)
                            (*(*(arg2 + *(*arg2 - 0x88)) + 0x38))()
                            uint8_t* var_f8
                            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(
                                &var_c8, var_f8)
                            var_120.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
                            
                            if (var_f8 != 0)
                                uint8_t* var_f0_1 = var_f8
                                operator delete(var_f8)
                            
                            void* __offset(vtable_for_Botan::OID, 0x10) var_118_1 =
                                _vtable_for_Botan::OID + 0x10
                            
                            if (x8_9 != 0)
                                void* var_108_1 = x8_9
                                operator delete(x8_9)

Botan::OID* entry_x8
Botan::AlgorithmIdentifier::AlgorithmIdentifier(entry_x8, &var_90)
void* x0_34 = var_c8.q

if (x0_34 != 0)
    void* var_c0_1 = x0_34
    operator delete(x0_34)

if ((zx.d(var_b0.b) & 1) != 0)
    operator delete(x8_7)

var_90 = _vtable_for_Botan::OID + 0x10
void* result

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
