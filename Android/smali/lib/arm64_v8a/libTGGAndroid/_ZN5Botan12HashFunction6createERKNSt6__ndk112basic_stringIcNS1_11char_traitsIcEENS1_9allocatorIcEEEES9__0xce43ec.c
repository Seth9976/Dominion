// 函数: _ZN5Botan12HashFunction6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xce43ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg2)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x20 = arg1
uint64_t x9_1

if ((x9.d & 1) == 0)
    x9_1 = x9 u>> 1
else
    x9_1 = *(arg2 + 8)

if (x9_1 != 0 && x9_1 == 4)
    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg2, 0, -ffffffffffffffff, "base")

int64_t* entry_x8

if (x9_1 != 0 && (x9_1 != 4 || arg1.d != 0))
    *entry_x8 = 0
    return 

uint64_t x10_1 = zx.q(*x20)
uint64_t x8 = *(x20 + 8)
int32_t x9_2 = x10_1.d & 1
uint64_t x10_2 = x10_1 u>> 1
uint64_t x11_1

x11_1 = x9_2 == 0 ? x10_2 : x8

if (x11_1 != 7)
    goto label_ce449c

int64_t x20_2

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "SHA-160") == 0)
label_ce4d24:
    x20_2 = operator new(0x68)
    Botan::SHA_160::SHA_160()
    *entry_x8 = x20_2
    return 

uint64_t x10_3 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_3.d & 1
x10_2 = x10_3 u>> 1
label_ce449c:
uint64_t x11_2

if ((x9_2 & 0xff) == 0)
    x11_2 = x10_2
else
    x11_2 = x8

if (x11_2 == 5)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "SHA-1") == 0)
        goto label_ce4d24
    
    uint64_t x10_4 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_4.d & 1
    x10_2 = x10_4 u>> 1

uint64_t x11_3

if ((x9_2 & 0xff) == 0)
    x11_3 = x10_2
else
    x11_3 = x8

if (x11_3 == 4)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "SHA1") == 0)
        goto label_ce4d24
    
    uint64_t x10_5 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_5.d & 1
    x10_2 = x10_5 u>> 1

uint64_t x11_4

if ((x9_2 & 0xff) == 0)
    x11_4 = x10_2
else
    x11_4 = x8

if (x11_4 != 7)
    goto label_ce455c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "SHA-224") == 0)
    x20_2 = operator new(0x50)
    Botan::SHA_224::SHA_224()
    *entry_x8 = x20_2
    return 

uint64_t x10_6 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_6.d & 1
x10_2 = x10_6 u>> 1
label_ce455c:
uint64_t x11_5

if ((x9_2 & 0xff) == 0)
    x11_5 = x10_2
else
    x11_5 = x8

if (x11_5 != 7)
    goto label_ce459c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "SHA-256") == 0)
    x20_2 = operator new(0x50)
    Botan::SHA_256::SHA_256()
    *entry_x8 = x20_2
    return 

uint64_t x10_7 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_7.d & 1
x10_2 = x10_7 u>> 1
label_ce459c:
uint64_t x11_6

if ((x9_2 & 0xff) == 0)
    x11_6 = x10_2
else
    x11_6 = x8

if (x11_6 != 7)
    goto label_ce45dc

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "SHA-384") == 0)
    x20_2 = operator new(0x50)
    Botan::SHA_384::SHA_384()
    *entry_x8 = x20_2
    return 

uint64_t x10_8 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_8.d & 1
x10_2 = x10_8 u>> 1
label_ce45dc:
uint64_t x11_7

if ((x9_2 & 0xff) == 0)
    x11_7 = x10_2
else
    x11_7 = x8

if (x11_7 != 7)
    goto label_ce461c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "SHA-512") == 0)
    x20_2 = operator new(0x50)
    Botan::SHA_512::SHA_512()
    *entry_x8 = x20_2
    return 

uint64_t x10_9 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_9.d & 1
x10_2 = x10_9 u>> 1
label_ce461c:
uint64_t x11_8

if ((x9_2 & 0xff) == 0)
    x11_8 = x10_2
else
    x11_8 = x8

if (x11_8 != 0xb)
    goto label_ce465c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "SHA-512-256") == 0)
    x20_2 = operator new(0x50)
    Botan::SHA_512_256::SHA_512_256()
    *entry_x8 = x20_2
    return 

uint64_t x10_10 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_10.d & 1
x10_2 = x10_10 u>> 1
label_ce465c:
uint64_t x11_9

if ((x9_2 & 0xff) == 0)
    x11_9 = x10_2
else
    x11_9 = x8

if (x11_9 != 0xa)
    goto label_ce469c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "RIPEMD-160") == 0)
    x20_2 = operator new(0x68)
    Botan::RIPEMD_160::RIPEMD_160()
    *entry_x8 = x20_2
    return 

uint64_t x10_11 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_11.d & 1
x10_2 = x10_11 u>> 1
label_ce469c:
uint64_t x11_10

if ((x9_2 & 0xff) == 0)
    x11_10 = x10_2
else
    x11_10 = x8

if (x11_10 != 9)
    goto label_ce46dc

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "Whirlpool") == 0)
    x20_2 = operator new(0x68)
    Botan::Whirlpool::Whirlpool()
    *entry_x8 = x20_2
    return 

uint64_t x10_12 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_12.d & 1
x10_2 = x10_12 u>> 1
label_ce46dc:
uint64_t x11_11

if ((x9_2 & 0xff) == 0)
    x11_11 = x10_2
else
    x11_11 = x8

if (x11_11 != 3)
    goto label_ce471c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, &data_765085) == 0)
    x20_2 = operator new(0x68)
    Botan::MD5::MD5()
    *entry_x8 = x20_2
    return 

uint64_t x10_13 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_13.d & 1
x10_2 = x10_13 u>> 1
label_ce471c:
uint64_t x11_12

if ((x9_2 & 0xff) == 0)
    x11_12 = x10_2
else
    x11_12 = x8

if (x11_12 != 3)
    goto label_ce475c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, 0x79ee42) == 0)
    x20_2 = operator new(0x50)
    Botan::MD4::MD4()
    *entry_x8 = x20_2
    return 

uint64_t x10_14 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_14.d & 1
x10_2 = x10_14 u>> 1
label_ce475c:
uint64_t x11_13

if ((x9_2 & 0xff) == 0)
    x11_13 = x10_2
else
    x11_13 = x8

if (x11_13 != 0xf)
    goto label_ce479c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "GOST-R-34.11-94") == 0)
label_ce4dd8:
    x20_2 = operator new(0x98)
    Botan::GOST_34_11::GOST_34_11()
    *entry_x8 = x20_2
    return 

uint64_t x10_15 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_15.d & 1
x10_2 = x10_15 u>> 1
label_ce479c:
uint64_t x11_14

if ((x9_2 & 0xff) == 0)
    x11_14 = x10_2
else
    x11_14 = x8

if (x11_14 != 0xa)
    goto label_ce47dc

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "GOST-34.11") == 0)
    goto label_ce4dd8

uint64_t x10_16 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_16.d & 1
x10_2 = x10_16 u>> 1
label_ce47dc:
uint64_t x11_15

if ((x9_2 & 0xff) == 0)
    x11_15 = x10_2
else
    x11_15 = x8

if (x11_15 != 7)
    goto label_ce481c

struct vtable_for_Botan::CRC32* const x8_19
int32_t x9_7

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "Adler32") == 0)
    arg1 = operator new(0x10)
    x8_19 = _vtable_for_Botan::Adler32
    x9_7 = 1
label_ce4e58:
    *(arg1 + 8) = x9_7
    *arg1 = x8_19 + 0x10
    *entry_x8 = arg1
    return 

uint64_t x10_17 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_17.d & 1
x10_2 = x10_17 u>> 1
label_ce481c:
uint64_t x11_16

if ((x9_2 & 0xff) == 0)
    x11_16 = x10_2
else
    x11_16 = x8

if (x11_16 == 5)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "CRC24") == 0)
        arg1 = operator new(0x10)
        x8_19 = _vtable_for_Botan::CRC24
        x9_7 = 0xce04b7
        goto label_ce4e58
    
    uint64_t x10_18 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_18.d & 1
    x10_2 = x10_18 u>> 1

uint64_t x8_1

if ((x9_2 & 0xff) == 0)
    x8_1 = x10_2
else
    x8_1 = x8

int32_t x0_34

if (x8_1 == 5)
    x0_34 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "CRC32")

if (x8_1 == 5 && x0_34 == 0)
    arg1 = operator new(0x10)
    x8_19 = _vtable_for_Botan::CRC32
    x9_7 = -1
    goto label_ce4e58

char var_a8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a8)
char var_90
Botan::SCAN_Name::SCAN_Name(&var_90)
void* var_98

if ((zx.d(var_a8) & 1) != 0)
    operator delete(var_98)
char var_78
uint64_t x10_19 = zx.q(var_78)
uint64_t var_70
uint64_t x8_3 = var_70
int32_t x9_3 = x10_19.d & 1
uint64_t x10_20 = x10_19 u>> 1
uint64_t x12_1

x12_1 = x9_3 == 0 ? x10_20 : x8_3

if (x12_1 != 5)
    goto label_ce4908

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_78, 0, -ffffffffffffffff, "Tiger")
char* var_60
char* var_58
uint64_t x20_3

if (arg1.d == 0)
    x20_3 = operator new(0x78)
    char* x8_22 = var_58
    char* x9_8
    uint64_t x21_2
    
    if (x8_22 == var_60)
        x21_2 = 0x18
        x9_8 = x8_22
    else
        x8_22 = var_60
        x9_8 = var_58
        x21_2 = zx.q(Botan::to_u32bit(var_60))
    
    if (((x9_8 - x8_22) s>> 3) * -0x5555555555555555 u>= 2)
        Botan::to_u32bit(&x8_22[0x18])
    
    Botan::Tiger::Tiger(x20_3, x21_2)
    *entry_x8 = x20_3
else
    uint64_t x10_21 = zx.q(var_78)
    x8_3 = var_70
    x9_3 = x10_21.d & 1
    x10_20 = x10_21 u>> 1
label_ce4908:
    uint64_t x11_17
    
    if ((x9_3 & 0xff) == 0)
        x11_17 = x10_20
    else
        x11_17 = x8_3
    
    if (x11_17 != 9)
        goto label_ce4948
    
    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_78, 0, -ffffffffffffffff, "Skein-512")
    int16_t var_d8
    void* var_c8
    char var_c0
    void* var_b0
    
    if (arg1.d == 0)
        uint64_t x0_77 = operator new(0x68)
        char* x8_23 = var_58
        char* x9_9
        uint64_t x21_3
        
        if (x8_23 == var_60)
            x21_3 = 0x200
            x9_9 = x8_23
        else
            x8_23 = var_60
            x9_9 = var_58
            x21_3 = zx.q(Botan::to_u32bit(var_60))
        
        var_d8 = 0
        
        if (((x9_9 - x8_23) s>> 3) * -0x5555555555555555 u<= 1)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_c0)
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_c0)
        
        Botan::Skein_512::Skein_512(x0_77, x21_3)
        uint32_t x8_26 = zx.d(var_c0)
        *entry_x8 = x0_77
        
        if ((x8_26 & 1) != 0)
            operator delete(var_b0)
        
        if ((zx.d(var_d8.b) & 1) != 0)
            operator delete(var_c8)
    else
        uint64_t x10_22 = zx.q(var_78)
        x8_3 = var_70
        x9_3 = x10_22.d & 1
        x10_20 = x10_22 u>> 1
    label_ce4948:
        uint64_t x11_18
        
        if ((x9_3 & 0xff) == 0)
            x11_18 = x10_20
        else
            x11_18 = x8_3
        
        if (x11_18 != 7)
            goto label_ce4988
        
        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_78, 0, -ffffffffffffffff, "Blake2b")
        
        if (arg1.d == 0)
        label_ce4e70:
            x20_3 = operator new(0x68)
            
            if (var_58 != var_60)
                Botan::to_u32bit(var_60)
            
            Botan::BLAKE2b::BLAKE2b(x20_3)
            *entry_x8 = x20_3
        else
            uint64_t x10_23 = zx.q(var_78)
            x8_3 = var_70
            x9_3 = x10_23.d & 1
            x10_20 = x10_23 u>> 1
        label_ce4988:
            uint64_t x11_19
            
            if ((x9_3 & 0xff) == 0)
                x11_19 = x10_20
            else
                x11_19 = x8_3
            
            if (x11_19 != 7)
                goto label_ce49c8
            
            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "BLAKE2b")
            
            if (arg1.d == 0)
                goto label_ce4e70
            
            uint64_t x10_24 = zx.q(var_78)
            x8_3 = var_70
            x9_3 = x10_24.d & 1
            x10_20 = x10_24 u>> 1
        label_ce49c8:
            uint64_t x11_20
            
            if ((x9_3 & 0xff) == 0)
                x11_20 = x10_20
            else
                x11_20 = x8_3
            
            if (x11_20 != 0xb)
                goto label_ce4a08
            
            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_78, 0, -ffffffffffffffff, "Keccak-1600")
            
            if (arg1.d == 0)
                x20_3 = operator new(0x38)
                
                if (var_58 != var_60)
                    Botan::to_u32bit(var_60)
                
                Botan::Keccak_1600::Keccak_1600(x20_3)
                *entry_x8 = x20_3
            else
                uint64_t x10_25 = zx.q(var_78)
                x8_3 = var_70
                x9_3 = x10_25.d & 1
                x10_20 = x10_25 u>> 1
            label_ce4a08:
                uint64_t x11_21
                
                if ((x9_3 & 0xff) == 0)
                    x11_21 = x10_20
                else
                    x11_21 = x8_3
                
                if (x11_21 != 5)
                    goto label_ce4a48
                
                arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_78, 0, -ffffffffffffffff, "SHA-3")
                
                if (arg1.d == 0)
                    x20_3 = operator new(0x38)
                    
                    if (var_58 != var_60)
                        Botan::to_u32bit(var_60)
                    
                    Botan::SHA_3::SHA_3(x20_3)
                    *entry_x8 = x20_3
                else
                    uint64_t x10_26 = zx.q(var_78)
                    x8_3 = var_70
                    x9_3 = x10_26.d & 1
                    x10_20 = x10_26 u>> 1
                label_ce4a48:
                    uint64_t x11_22
                    
                    if ((x9_3 & 0xff) == 0)
                        x11_22 = x10_20
                    else
                        x11_22 = x8_3
                    
                    if (x11_22 != 9)
                        goto label_ce4a88
                    
                    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_78, 0, -ffffffffffffffff, "SHAKE-128")
                    
                    if (arg1.d == 0)
                        x20_3 = operator new(0x30)
                        
                        if (var_58 != var_60)
                            Botan::to_u32bit(var_60)
                        
                        Botan::SHAKE_128::SHAKE_128(x20_3)
                        *entry_x8 = x20_3
                    else
                        uint64_t x10_27 = zx.q(var_78)
                        x8_3 = var_70
                        x9_3 = x10_27.d & 1
                        x10_20 = x10_27 u>> 1
                    label_ce4a88:
                        uint64_t x8_4
                        
                        if ((x9_3 & 0xff) == 0)
                            x8_4 = x10_20
                        else
                            x8_4 = x8_3
                        
                        if (x8_4 == 9)
                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                &var_78, 0, -ffffffffffffffff, "SHAKE-256")
                        
                        if (x8_4 == 9 && arg1.d == 0)
                            x20_3 = operator new(0x30)
                            
                            if (var_58 != var_60)
                                Botan::to_u32bit(var_60)
                            
                            Botan::SHAKE_256::SHAKE_256(x20_3)
                            *entry_x8 = x20_3
                        else
                            uint64_t x10_28 = zx.q(*x20)
                            uint64_t x8_5 = *(x20 + 8)
                            int32_t x9_4 = x10_28.d & 1
                            uint64_t x10_29 = x10_28 u>> 1
                            uint64_t x11_23
                            
                            x11_23 = x9_4 == 0 ? x10_29 : x8_5
                            
                            if (x11_23 != 0xc)
                                goto label_ce4b04
                            
                            arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                x20, 0, -ffffffffffffffff, "Streebog-256")
                            
                            if (arg1.d == 0)
                                void** x0_101 = operator new(0x68)
                                Botan::Streebog::Streebog(x0_101)
                                *x0_101 = _vtable_for_Botan::Streebog_256 + 0x10
                                *entry_x8 = x0_101
                            else
                                uint64_t x10_30 = zx.q(*x20)
                                x8_5 = *(x20 + 8)
                                x9_4 = x10_30.d & 1
                                x10_29 = x10_30 u>> 1
                            label_ce4b04:
                                uint64_t x11_24
                                
                                if ((x9_4 & 0xff) == 0)
                                    x11_24 = x10_29
                                else
                                    x11_24 = x8_5
                                
                                if (x11_24 != 0xc)
                                    goto label_ce4b44
                                
                                arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                    x20, 0, -ffffffffffffffff, "Streebog-512")
                                
                                if (arg1.d == 0)
                                    uint64_t x0_103 = operator new(0x68)
                                    void** x20_5 = x0_103
                                    Botan::Streebog::Streebog(x0_103)
                                    *x20_5 = _vtable_for_Botan::Streebog_512 + 0x10
                                    *entry_x8 = x20_5
                                else
                                    uint64_t x10_31 = zx.q(*x20)
                                    x8_5 = *(x20 + 8)
                                    x9_4 = x10_31.d & 1
                                    x10_29 = x10_31 u>> 1
                                label_ce4b44:
                                    uint64_t x8_6
                                    
                                    if ((x9_4 & 0xff) == 0)
                                        x8_6 = x10_29
                                    else
                                        x8_6 = x8_5
                                    
                                    if (x8_6 == 3)
                                        arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                            x20, 0, -ffffffffffffffff, &data_7585af)
                                    
                                    if (x8_6 == 3 && arg1.d == 0)
                                        x20_3 = operator new(0x50)
                                        Botan::SM3::SM3()
                                        *entry_x8 = x20_3
                                    else
                                        uint64_t x10_32 = zx.q(var_78)
                                        uint64_t x8_7 = var_70
                                        int32_t x9_5 = x10_32.d & 1
                                        uint64_t x10_33 = x10_32 u>> 1
                                        uint64_t x11_25
                                        
                                        x11_25 = x9_5 == 0 ? x10_33 : x8_7
                                        
                                        if (x11_25 != 9)
                                            goto label_ce4bc0
                                        
                                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                &var_78, 0, -ffffffffffffffff, "Whirlpool").d == 0)
                                            x20_3 = operator new(0x68)
                                            Botan::Whirlpool::Whirlpool()
                                            *entry_x8 = x20_3
                                        else
                                            uint64_t x10_34 = zx.q(var_78)
                                            x8_7 = var_70
                                            x9_5 = x10_34.d & 1
                                            x10_33 = x10_34 u>> 1
                                        label_ce4bc0:
                                            uint64_t x11_26
                                            
                                            if ((x9_5 & 0xff) == 0)
                                                x11_26 = x10_33
                                            else
                                                x11_26 = x8_7
                                            
                                            if (x11_26 != 8)
                                                goto label_ce4c00
                                            
                                            int16_t var_f0
                                            int64_t* var_28
                                            
                                            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                    &var_78, 0, -ffffffffffffffff, "Parallel").d == 0)
                                                __builtin_memset(&var_c0, 0, 0x18)
                                                void* var_b8_1
                                                
                                                if (var_58 == var_60)
                                                label_ce52a0:
                                                    std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >
                                                        * x0_121 = operator new(0x20)
                                                    Botan::Parallel::Parallel(x0_121)
                                                    *entry_x8 = x0_121
                                                else
                                                    int64_t x20_8 = 0
                                                    
                                                    while (true)
                                                        Botan::SCAN_Name::arg(&var_90)
                                                        var_f0 = 0
                                                        Botan::HashFunction::create(&var_d8, 
                                                            &var_f0)
                                                        
                                                        if ((zx.d(var_f0.b) & 1) == 0)
                                                            if ((zx.d(var_d8.b) & 1) != 0)
                                                                goto label_ce524c
                                                            
                                                            goto label_ce522c
                                                        
                                                        void* var_e0
                                                        operator delete(var_e0)
                                                        int64_t* x8_44
                                                        
                                                        if ((zx.d(var_d8.b) & 1) == 0)
                                                        label_ce522c:
                                                            x8_44 = var_28
                                                            
                                                            if (x8_44 == 0)
                                                                *entry_x8 = 0
                                                                break
                                                        else
                                                        label_ce524c:
                                                            operator delete(var_c8)
                                                            x8_44 = var_28
                                                            
                                                            if (x8_44 == 0)
                                                                *entry_x8 = 0
                                                                break
                                                        
                                                        int64_t** x9_20 = var_b8_1
                                                        int64_t var_b0_1
                                                        
                                                        if (x9_20 u>= var_b0_1)
                                                            std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >::__push_back_slow_path<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > >(
                                                                &var_c0)
                                                        else
                                                            var_28 = nullptr
                                                            *x9_20 = x8_44
                                                            var_b8_1 = &x9_20[1]
                                                        
                                                        int64_t* x0_120 = var_28
                                                        var_28 = nullptr
                                                        
                                                        if (x0_120 != 0)
                                                            (*(*x0_120 + 0x10))()
                                                        
                                                        x20_8 += 1
                                                        
                                                        if (x20_8 == ((var_58 - var_60) s>> 3)
                                                                * -0x5555555555555555)
                                                            goto label_ce52a0
                                                
                                                void* x19_3 = var_c0.q
                                                
                                                if (x19_3 != 0)
                                                    void* x20_10 = var_b8_1
                                                    void* x0_122
                                                    
                                                    if (x20_10 != x19_3)
                                                        do
                                                            x20_10 -= 8
                                                            int64_t* x0_123 = *x20_10
                                                            *x20_10 = 0
                                                            
                                                            if (x0_123 != 0)
                                                                (*(*x0_123 + 0x10))()
                                                        while (x19_3 != x20_10)
                                                        
                                                        x0_122 = var_c0.q
                                                    else
                                                        x0_122 = x19_3
                                                    
                                                    void* var_b8_2 = x19_3
                                                    operator delete(x0_122)
                                            else
                                                uint64_t x10_35 = zx.q(var_78)
                                                x8_7 = var_70
                                                x9_5 = x10_35.d & 1
                                                x10_33 = x10_35 u>> 1
                                            label_ce4c00:
                                                uint64_t x8_8
                                                
                                                if ((x9_5 & 0xff) == 0)
                                                    x8_8 = x10_33
                                                else
                                                    x8_8 = x8_7
                                                
                                                if (x8_8 != 6)
                                                    *entry_x8 = 0
                                                else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                        &var_78, 0, -ffffffffffffffff, "Comb4P").d != 0
                                                        || var_58 - var_60 != 0x30)
                                                    *entry_x8 = 0
                                                else
                                                    Botan::SCAN_Name::arg(&var_90)
                                                    var_d8 = 0
                                                    Botan::HashFunction::create(&var_c0, &var_d8)
                                                    
                                                    if ((zx.d(var_d8.b) & 1) != 0)
                                                        operator delete(var_c8)
                                                    
                                                    if ((zx.d(var_c0) & 1) != 0)
                                                        operator delete(var_b0)
                                                    
                                                    Botan::SCAN_Name::arg(&var_90)
                                                    var_d8 = 0
                                                    Botan::HashFunction::create(&var_c0, &var_d8)
                                                    
                                                    if ((zx.d(var_d8.b) & 1) == 0)
                                                        if ((zx.d(var_c0) & 1) != 0)
                                                            goto label_ce5320
                                                        
                                                        goto label_ce4cb4
                                                    
                                                    operator delete(var_c8)
                                                    int64_t* x20_1
                                                    Botan::HashFunction* x21_1
                                                    
                                                    if ((zx.d(var_c0) & 1) != 0)
                                                    label_ce5320:
                                                        operator delete(var_b0)
                                                        x21_1 = var_f0.q
                                                        x20_1 = var_28
                                                        
                                                        if (x21_1 != 0)
                                                            goto label_ce4cc0
                                                        
                                                        goto label_ce5330
                                                    
                                                label_ce4cb4:
                                                    x21_1 = var_f0.q
                                                    x20_1 = var_28
                                                    
                                                    if (x21_1 == 0)
                                                    label_ce5330:
                                                        int64_t var_28_3 = 0
                                                        
                                                        if (x20_1 == 0)
                                                            *entry_x8 = 0
                                                        else
                                                            (*(*x20_1 + 0x10))(x20_1)
                                                            x21_1 = var_f0.q
                                                            var_f0.q = 0
                                                            
                                                            if (x21_1 != 0)
                                                                (*(*x21_1 + 0x10))(x21_1)
                                                                *entry_x8 = 0
                                                            else
                                                                *entry_x8 = 0
                                                    else
                                                    label_ce4cc0:
                                                        
                                                        if (x20_1 == 0)
                                                            var_f0.q = 0
                                                            (*(*x21_1 + 0x10))(x21_1)
                                                            *entry_x8 = 0
                                                        else
                                                            Botan::HashFunction* x0_58 =
                                                                operator new(0x18)
                                                            var_f0.q = 0
                                                            int64_t* var_28_1 = nullptr
                                                            Botan::Comb4P::Comb4P(x0_58, x21_1)
                                                            *entry_x8 = x0_58
                                                            int64_t var_28_2 = 0
                                                            
                                                            if (var_28_1 != 0)
                                                                (*(*var_28_1 + 0x10))()
                                                            
                                                            arg1 = var_f0.q
                                                            var_f0.q = 0
                                                            
                                                            if (arg1 != 0)
                                                                (*(*arg1 + 0x10))()
void* var_48

if (var_48 != 0)
    char* var_40
    char* x8_32 = var_40
    void* x0_110
    
    if (x8_32 == var_48)
        x0_110 = var_48
    else
        char* x20_6 = x8_32
        
        do
            x20_6 = &x20_6[-0x18]
            
            if ((zx.d(*x20_6) & 1) != 0)
                operator delete(*(x8_32 - 8))
            
            x8_32 = x20_6
        while (var_48 != x20_6)
        
        x0_110 = var_48
    
    void* var_40_1 = var_48
    operator delete(x0_110)

if (var_60 != 0)
    char* x8_33 = var_58
    char* x0_112
    
    if (x8_33 == var_60)
        x0_112 = var_60
    else
        char* x20_7 = x8_33
        
        do
            x20_7 = &x20_7[-0x18]
            
            if ((zx.d(*x20_7) & 1) != 0)
                operator delete(*(x8_33 - 8))
            
            x8_33 = x20_7
        while (var_60 != x20_7)
        
        x0_112 = var_60
    
    char* var_58_1 = var_60
    operator delete(x0_112)

void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)
void* var_80

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)
