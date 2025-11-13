// 函数: _ZN5Botan9SCAN_NameC1ENSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xccde98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_result
uint64_t entry_result_2 = entry_result
char* entry_result_3
char* result_22 = entry_result_3
int128_t* result_6 = arg1
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1)
void* result_7 = result_6 + 0x18
__builtin_memset(result_7, 0, 0x30)
*(result_7 + 0x40) = 0
*(result_7 + 0x30) = zx.o(0)
uint64_t x8 = zx.q(*result_22)
uint64_t x8_1

if ((x8.d & 1) != 0)
    x8_1 = *(result_22 + 8)
else
    x8_1 = x8 u>> 1

int128_t var_a0

if (x8_1 == 0)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0_1
    x0_7, v0_1 = operator new(0x30)
    (*"got empty string")[0].o
    int64_t var_90 = x0_7
    v0_1 = data_71cbb0
    __builtin_strncpy(x0_7, "Expected algorithm name, got empty string", 0x2a)
    var_a0 = v0_1
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int128_t* result_4
__builtin_memset(&result_4, 0, 0x18)
var_a0.q = 0
var_a0:8.w = 0
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Bad SCAN name '", result_22)
char result_19
int128_t* result
size_t result_24
uint64_t x3
void* result_17
char* result_25
int128_t v0
result, result_24, x3, result_17, result_25, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &result_19)
uint64_t result_5 = result[1].q
v0 = *result
void* result_8 = &var_a0:8
int128_t var_c0 = v0
__builtin_memset(result, 0, 0x18)
void* result_1

if ((zx.d(result_19) & 1) != 0)
    result, result_24, x3, result_17, result_25, v0 = operator delete(result_1)

char* result_10 = nullptr
void* result_11 = nullptr
void* result_9 = &data_793a18

while (true)
label_ccdf8c:
    void* result_14 = zx.q(*result_22)
label_ccdf90:
    uint64_t result_13
    bool c_1
    bool z_1
    
    if ((result_14.d & 1) != 0)
    label_ccdfb4:
        result_14 = *(result_22 + 8)
    label_ccdfb8:
        z_1 = result_11 == result_14
    label_ccdfbc:
        
        if (z_1)
            goto label_cce0a4
        
    label_ccdfc0:
        result_14 = *(result_22 + 0x10)
    label_ccdfc4:
        result_13 = zx.q(*(result_14 + result_11))
    label_ccdfc8:
        result_14 = zx.q(result_13.d - 0x28)
    label_ccdfcc:
        c_1 = result_14.d u>= 7
        z_1 = result_14.d == 7
    label_ccdfd0:
        
        if (z_1 || not(c_1))
            goto label_ccdfd4
        
    label_ccdf80:
        result = &var_a0:8
    label_ccdf84:
        result, result_24, x3, result_17, result_25, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            result.b)
    label_ccdf88:
        result_11 += 1
        continue
    
label_ccdf94:
    z_1 = result_11 == result_14 u>> 1
label_ccdf98:
    result_14 = &result_22[1]
label_ccdf9c:
    void* result_20
    uint64_t entry_result_1
    void* result_21
    void* result_15
    uint64_t result_16
    
    if (z_1)
    label_cce0a4:
        result_14 = zx.q(var_a0:8.b)
    label_cce0a8:
        result_15 = result_20
    label_cce0ac:
        result_9 = result_7 + 0x18
    label_cce0b0:
        result_16 = result_14 u>> 1
    label_cce0b4:
        z_1 = (result_14.d & 1) == 0
    label_cce0b8:
        
        result_14 = z_1 ? result_16 : result_15
        
    label_cce0bc:
        
        if (result_14 != 0)
        label_cce0e0:
            entry_result = entry_result_1
            result_14 = result_21
        label_cce0e4:
            z_1 = entry_result == result_14
        label_cce0e8:
            
            if (z_1)
            label_cce10c:
                result = &result_4
            label_cce114:
                std::__ndk1::vector<std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__push_back_slow_path<std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&>(
                    result)
            else
            label_cce0ec:
                result_14 = var_a0.q
            label_cce0f0:
                result = entry_result
            label_cce0f4:
                *result = result_14
                result += 8
            label_cce0fc:
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    result)
            label_cce100:
                result_14 = entry_result + 0x20
            label_cce104:
                entry_result_1 = result_14
        else
        label_cce0c0:
            x3 = "FlanimEvent"
        label_cce0c4:
            x3 += 0xa18
        label_cce0c8:
            result_24 = -1
        label_cce0cc:
            result = &var_a0:8
        label_cce0d0:
            result_13 = 0
        label_cce0d8:
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                result, result_13, result_24, x3)
        label_cce0dc:
            
            if (result.d != 0)
                goto label_cce0e0
        
    label_cce118:
        
        if (result_10 != 0)
            void** x0_11 = __cxa_allocate_exception(0x20)
            uint64_t x8_7 = zx.q(var_c0.b)
            int32_t temp2_1 = x8_7.d & 1
            size_t x23
            
            if (temp2_1 == 0)
                x23 = x8_7 u>> 1
            else
                x23 = var_c0:8.q
            
            int64_t x8_8 = x23 + 0x13
            void** x24_1 = x0_11
            uint64_t result_18
            
            if (temp2_1 == 0)
                result_18 = &var_c0 | 1
            else
                result_18 = result_5
            
            result_19.q = 0
            int64_t var_d0_2 = 0
            int64_t var_c8_1 = 0
            
            if (x8_8 u< -0x10)
            label_cce4ec:
                int64_t x26
                
                if (x8_8 u>= 0x17)
                    uint64_t x27 = (x23 + 0x23) & 0xfffffffffffffff0
                    int64_t x0_14 = operator new(x27)
                    x26 = x0_14
                    size_t var_d0_4 = x23
                    int64_t var_c8_3 = x0_14
                    result_19.q = x27 | 1
                    memcpy(x26, result_18, x23)
                else
                    x26 = &result_19 | 1
                    result_19 = (x23.d << 1).b
                    
                    if (x23 != 0)
                        memcpy(x26, result_18, x23)
                
                *(x26 + x23) = 0
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &result_19, "Missing close paren")
                *x24_1 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x24_1[1])
                *x24_1 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x24_1, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
        label_cce4a4:
            void** x0_12 = __cxa_allocate_exception(0x20)
            uint64_t x8_9 = zx.q(var_c0.b)
            int32_t temp3_1 = x8_9.d & 1
            
            if (temp3_1 == 0)
                x23 = x8_9 u>> 1
            else
                x23 = var_c0:8.q
            
            x24_1 = x0_12
            
            if (temp3_1 == 0)
                result_18 = &var_c0 | 1
            else
                result_18 = result_5
            
            result_19.q = 0
            int64_t var_d0_3 = 0
            int64_t var_c8_2 = 0
            
            if (x23 + 0xa u>= -0x10)
                x8_8 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
                goto label_cce4ec
            
            int64_t x26_1
            
            if (x23 + 0xa u>= 0x17)
                uint64_t x27_1 = (x23 + 0x1a) & 0xfffffffffffffff0
                int64_t x0_21 = operator new(x27_1)
                x26_1 = x0_21
                size_t var_d0_5 = x23
                int64_t var_c8_4 = x0_21
                result_19.q = x27_1 | 1
                memcpy(x26_1, result_18, x23)
            else
                x26_1 = &result_19 | 1
                result_19 = (x23.d << 1).b
                
                if (x23 != 0)
                    memcpy(x26_1, result_18, x23)
            
            *(x26_1 + x23) = 0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &result_19, "Empty name")
            *x24_1 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x24_1[1])
            *x24_1 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x24_1, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
    label_cce11c:
        result_14 = result_4
        result_15 = entry_result_1
    label_cce120:
        z_1 = result_15 == result_14
    label_cce124:
        
        if (z_1)
            goto label_cce4a4
        
    label_cce12c:
        result = result_7
    label_cce130:
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
            result)
    label_cce134:
        result_15 = result_4
        result_14 = entry_result_1
    label_cce138:
        result_14 -= result_15
    label_cce13c:
        z_1 = result_14 == 0x20
    label_cce140:
        
        if (not(z_1))
        label_cce160:
            result_14 = nullptr
        label_cce164:
            result_22 = 1
        label_cce168:
            result_8 = 0x20
            goto label_cce1a4
        
    label_cce144:
        result_14 = zx.q(var_c0.b)
    label_cce148:
        
        if ((result_14.d & 1) != 0)
        label_cce254:
            result = result_5
        label_cce258:
            result = operator delete(result)
        label_cce25c:
            result_14 = zx.q(var_a0:8.b)
        label_cce260:
            
            if ((result_14.d & 1) == 0)
                goto label_cce154
            
            goto label_cce264
        
    label_cce14c:
        result_14 = zx.q(var_a0:8.b)
    label_cce150:
        
        if ((result_14.d & 1) != 0)
        label_cce264:
            int128_t* result_3
            result = result_3
        label_cce268:
            result = operator delete(result)
        label_cce26c:
            result_6 = result_4
        label_cce270:
            
            if (result_6 == 0)
                return result
        else
        label_cce154:
            result_6 = result_4
        label_cce158:
            
            if (result_6 == 0)
                return result
        
    label_cce274:
        result_14 = entry_result_1
    label_cce278:
        z_1 = result_14 == result_6
    else
    label_ccdfa0:
        result_13 = zx.q(*(result_14 + result_11))
    label_ccdfa4:
        result_14 = zx.q(result_13.d - 0x28)
    label_ccdfa8:
        c_1 = result_14.d u>= 7
        z_1 = result_14.d == 7
        
        while (true)
            if (not(z_1) && c_1)
                goto label_ccdf80
            
        label_ccdfd4:
            result_15 = &data_ccdf80
        label_ccdfd8:
            result_16 = zx.q(*(&data_8285aa + result_14))
        label_ccdfdc:
            result_15 += result_16 << 2
        label_ccdfe0:
            
            switch (result_15)
                case 0xccdf84
                    goto label_ccdf84
                case 0xccdf8c
                    goto label_ccdf8c
                case 0xccdf90
                    goto label_ccdf90
                case 0xccdf94
                    goto label_ccdf94
                case 0xccdf98
                    goto label_ccdf98
                case 0xccdf9c
                    goto label_ccdf9c
                case 0xccdfa0
                    goto label_ccdfa0
                case 0xccdfa4
                    goto label_ccdfa4
                case 0xccdfa8
                    goto label_ccdfa8
                case 0xccdfac
                    continue
                case 0xccdfb0
                    goto label_ccdf80
                case 0xccdfb4
                    goto label_ccdfb4
                case 0xccdfb8
                    goto label_ccdfb8
                case 0xccdfbc
                    goto label_ccdfbc
                case 0xccdfc0
                    goto label_ccdfc0
                case 0xccdfc4
                    goto label_ccdfc4
                case 0xccdfc8
                    goto label_ccdfc8
                case 0xccdfcc
                    goto label_ccdfcc
                case 0xccdfd0
                    goto label_ccdfd0
                case 0xccdfd4
                    goto label_ccdfd4
                case 0xccdfd8
                    goto label_ccdfd8
                case 0xccdfdc
                    goto label_ccdfdc
                case 0xccdfe0
                    goto label_ccdfe0
                case 0xccdfe4
                    z_1 = result_13.d == 0x2f
                label_ccdfe8:
                    
                    if (z_1 && result_10 != 0)
                        goto label_cce018
                    
                    goto label_cce024
                case 0xccdfe8
                    goto label_ccdfe8
                case 0xccdff0
                    if (result_10 == 0)
                        goto label_cce2dc
                    
                    goto label_ccdff4
                case 0xccdff4
                label_ccdff4:
                    result_10 -= 1
                label_ccdff8:
                    z_1 = result_13.d == 0x2f
                label_ccdffc:
                    
                    if (z_1 && result_10 != 0)
                        goto label_cce018
                    
                    goto label_cce024
                case 0xccdff8
                    goto label_ccdff8
                case 0xccdffc
                    goto label_ccdffc
                case 0xcce000
                label_cce024:
                    result_14 = zx.q(var_a0:8.b)
                label_cce028:
                    result_15 = result_20
                label_cce02c:
                    result_16 = result_14 u>> 1
                label_cce030:
                    z_1 = (result_14.d & 1) == 0
                label_cce034:
                    
                    if (not(z_1))
                        result_14 = result_15
                        goto label_cce038
                    
                    result_14 = result_16
                label_cce038:
                    
                    if (result_14 != 0)
                        goto label_cce058
                    
                    goto label_cce03c
                case 0xcce004
                    result_10 = &result_10[1]
                label_cce008:
                    z_1 = result_13.d == 0x2f
                label_cce00c:
                    
                    if (not(z_1) || result_10 == 0)
                        goto label_cce024
                    
                    goto label_cce018
                case 0xcce008
                    goto label_cce008
                case 0xcce00c
                    goto label_cce00c
                case 0xcce010
                    if (result_10 == 0)
                        goto label_cce024
                    
                    goto label_cce018
                case 0xcce014
                label_cce018:
                    result, result_24, x3, result_17, result_25, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        (&var_a0:8).b)
                    goto label_ccdf88
                case 0xcce01c
                    result, result_24, x3, result_17, result_25, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        result.b)
                    goto label_ccdf88
                case 0xcce028
                    goto label_cce028
                case 0xcce02c
                    goto label_cce02c
                case 0xcce030
                    goto label_cce030
                case 0xcce034
                    goto label_cce034
                case 0xcce038
                    goto label_cce038
                case 0xcce03c
                label_cce03c:
                    result_24 = -1
                label_cce040:
                    result = &var_a0:8
                label_cce044:
                    result_13 = 0
                label_cce048:
                    x3 = &data_793a18
                label_cce050:
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        result, result_13, result_24, x3)
                label_cce054:
                    
                    if (result.d == 0)
                        goto label_cce090
                    
                    goto label_cce058
                case 0xcce040
                    goto label_cce040
                case 0xcce044
                    goto label_cce044
                case 0xcce048
                    goto label_cce048
                case 0xcce04c
                    goto label_cce050
                case 0xcce054
                    goto label_cce054
                case 0xcce058
                label_cce058:
                    entry_result = entry_result_1
                    result_14 = result_21
                label_cce05c:
                    z_1 = entry_result == result_14
                label_cce060:
                    
                    if (z_1)
                        goto label_cce084
                    
                    goto label_cce064
                case 0xcce05c
                    goto label_cce05c
                case 0xcce060
                    goto label_cce060
                case 0xcce064
                label_cce064:
                    result_14 = var_a0.q
                label_cce068:
                    result = entry_result
                label_cce06c:
                    *result = result_14
                    result += 8
                label_cce074:
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        result)
                label_cce078:
                    result_14 = entry_result + 0x20
                label_cce07c:
                    entry_result_1 = result_14
                label_cce090:
                    var_a0.q = result_10
                label_cce094:
                    result, result_24, x3, result_17, result_25, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                        &var_a0:8)
                    goto label_ccdf88
                case 0xcce068
                    goto label_cce068
                case 0xcce06c
                    goto label_cce06c
                case 0xcce070
                    goto label_cce074
                case 0xcce078
                    goto label_cce078
                case 0xcce07c
                    goto label_cce07c
                case 0xcce080
                    goto label_cce090
                case 0xcce084
                label_cce084:
                    result = &result_4
                label_cce08c:
                    std::__ndk1::vector<std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__push_back_slow_path<std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&>(
                        result)
                    goto label_cce090
                case 0xcce088
                    goto label_cce08c
                case 0xcce094
                    goto label_cce094
                case 0xcce098
                    result, result_24, x3, result_17, result_25, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                        result)
                    goto label_ccdf88
                case 0xcce0a0
                    goto label_ccdf88
                case 0xcce0a4
                    goto label_cce0a4
                case 0xcce0a8
                    goto label_cce0a8
                case 0xcce0ac
                    goto label_cce0ac
                case 0xcce0b0
                    goto label_cce0b0
                case 0xcce0b4
                    goto label_cce0b4
                case 0xcce0b8
                    goto label_cce0b8
                case 0xcce0bc
                    goto label_cce0bc
                case 0xcce0c0
                    goto label_cce0c0
                case 0xcce0c4
                    goto label_cce0c4
                case 0xcce0c8
                    goto label_cce0c8
                case 0xcce0cc
                    goto label_cce0cc
                case 0xcce0d0
                    goto label_cce0d0
                case 0xcce0d4
                    goto label_cce0d8
                case 0xcce0dc
                    goto label_cce0dc
                case 0xcce0e0
                    goto label_cce0e0
                case 0xcce0e4
                    goto label_cce0e4
                case 0xcce0e8
                    goto label_cce0e8
                case 0xcce0ec
                    goto label_cce0ec
                case 0xcce0f0
                    goto label_cce0f0
                case 0xcce0f4
                    goto label_cce0f4
                case 0xcce0f8
                    goto label_cce0fc
                case 0xcce100
                    goto label_cce100
                case 0xcce104
                    goto label_cce104
                case 0xcce108
                    goto label_cce118
                case 0xcce10c
                    goto label_cce10c
                case 0xcce110
                    goto label_cce114
                case 0xcce11c
                    goto label_cce11c
                case 0xcce120
                    goto label_cce120
                case 0xcce124
                    goto label_cce124
                case 0xcce128
                    goto label_cce12c
                case 0xcce130
                    goto label_cce130
                case 0xcce134
                    goto label_cce134
                case 0xcce138
                    goto label_cce138
                case 0xcce13c
                    goto label_cce13c
                case 0xcce140
                    goto label_cce140
                case 0xcce144
                    goto label_cce144
                case 0xcce148
                    goto label_cce148
                case 0xcce14c
                    goto label_cce14c
                case 0xcce150
                    goto label_cce150
                case 0xcce154
                    goto label_cce154
                case 0xcce158
                    goto label_cce158
                case 0xcce15c
                    return result
                case 0xcce160
                    goto label_cce160
                case 0xcce164
                    goto label_cce164
                case 0xcce168
                    goto label_cce168
                case 0xcce16c
                    goto label_cce1a4
                case 0xcce170
                    goto label_cce170
                case 0xcce174
                    goto label_cce174
                case 0xcce178
                    goto label_cce178
                case 0xcce17c
                    goto label_cce17c
                case 0xcce180
                    goto label_cce180
                case 0xcce184
                    goto label_cce184
                case 0xcce190
                    goto label_cce190
                case 0xcce194
                    goto label_cce194
                case 0xcce198
                    goto label_cce198
                case 0xcce19c
                    goto label_cce19c
                case 0xcce1a0
                    goto label_cce1a0
                case 0xcce1a8
                    goto label_cce1a8
                case 0xcce1ac
                    goto label_cce1ac
                case 0xcce1b0
                    goto label_cce1b0
                case 0xcce1b4
                    goto label_cce1b4
                case 0xcce1b8
                    goto label_cce1b8
                case 0xcce1bc
                    goto label_cce1bc
                case 0xcce1c0
                    goto label_cce1c0
                case 0xcce1c4
                    goto label_cce1c4
                case 0xcce1c8
                    goto label_cce1c8
                case 0xcce1cc
                    goto label_cce1cc
                case 0xcce1d0
                    goto label_cce1d0
                case 0xcce1d4
                    goto label_cce1d4
                case 0xcce1d8
                    goto label_cce1d8
                case 0xcce1dc
                    goto label_cce1dc
                case 0xcce1e0
                    goto label_cce1e0
                case 0xcce1e4
                    goto label_cce1e4
                case 0xcce1e8
                    goto label_cce1e8
                case 0xcce1ec
                    goto label_cce1ec
                case 0xcce1f0
                    goto label_cce24c
                case 0xcce1f4
                    goto label_cce1f4
                case 0xcce1f8
                    goto label_cce1f8
                case 0xcce1fc
                    goto label_cce1fc
                case 0xcce200
                    goto label_cce200
                case 0xcce204
                    goto label_cce204
                case 0xcce208
                    goto label_cce208
                case 0xcce20c
                    goto label_cce20c
                case 0xcce210
                    goto label_cce214
                case 0xcce218
                    goto label_cce218
                case 0xcce21c
                    goto label_cce21c
                case 0xcce220
                    goto label_cce220
                case 0xcce224
                    goto label_cce224
                case 0xcce228
                    goto label_cce228
                case 0xcce22c
                    goto label_cce188
                case 0xcce230
                    goto label_cce234
                case 0xcce238
                    goto label_cce238
                case 0xcce23c
                    goto label_cce23c
                case 0xcce240
                    goto label_cce240
                case 0xcce244
                    goto label_cce244
                case 0xcce248
                    goto label_cce248
                case 0xcce250
                label_cce18c:
                    
                    while (true)
                        result_15 = result_4
                        result_16 = entry_result_1
                    label_cce190:
                        result_22 = &result_22[1]
                    label_cce194:
                        result_8 += 0x20
                    label_cce198:
                        result_16 -= result_15
                    label_cce19c:
                        z_1 = result_22 == result_16 s>> 5
                    label_cce1a0:
                        
                        if (z_1)
                            goto label_cce144
                        
                    label_cce1a4:
                        result_15 = *(result_15 + result_8)
                    label_cce1a8:
                        
                        if (result_15 == 0)
                        label_cce1f4:
                            result = &result_19
                        label_cce1f8:
                            result_13 = &result_4
                        label_cce1fc:
                            result_24 = result_22
                        label_cce200:
                            result, v0 = sub_cce8c0(result, result_13, result_24)
                        label_cce204:
                            result_14 = result_6[5].q
                            result_15 = *(result_6 + 0x58)
                        label_cce208:
                            c_1 = result_14 u>= result_15
                        label_cce20c:
                            
                            if (not(c_1))
                            label_cce170:
                                result_15 = result_1
                            label_cce174:
                                v0 = result_19.o
                            label_cce178:
                                result_16 = result_14 + 0x18
                            label_cce17c:
                                *(result_14 + 0x10) = result_15
                            label_cce180:
                                *result_14 = v0
                            label_cce184:
                                result_6[5].q = result_16
                            else
                            label_cce214:
                                result = result_7 + 0x30
                            label_cce218:
                                result = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                                    result)
                            label_cce21c:
                                result_14 = zx.q(result_19)
                            label_cce220:
                                
                                if ((result_14.d & 1) != 0)
                                label_cce224:
                                    result = result_1
                                label_cce228:
                                    result = operator delete(result)
                            
                        label_cce188:
                            result_14 = 1
                        else
                        label_cce1ac:
                            z_1 = result_15 == 1
                        label_cce1b0:
                            result_15 = zx.q(not(z_1) ? 1 : 0)
                        label_cce1b4:
                            result_15 = zx.q(result_14.d) | zx.q(result_15.d)
                        label_cce1b8:
                            
                            if ((result_15.d & 1) == 0)
                                break
                    
                label_cce1bc:
                    result = &result_19
                label_cce1c0:
                    result_13 = &result_4
                label_cce1c4:
                    result_24 = result_22
                label_cce1c8:
                    result, v0 = sub_cce8c0(result, result_13, result_24)
                label_cce1cc:
                    result_14 = *(result_6 + 0x38)
                    result_15 = result_6[4].q
                label_cce1d0:
                    c_1 = result_14 u>= result_15
                label_cce1d4:
                    
                    if (c_1)
                    label_cce234:
                        result = result_9
                    label_cce238:
                        result = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                            result)
                    label_cce23c:
                        result_14 = zx.q(result_19)
                    label_cce240:
                        
                        if ((result_14.d & 1) != 0)
                        label_cce244:
                            result = result_1
                        label_cce248:
                            result = operator delete(result)
                    else
                    label_cce1d8:
                        result_15 = result_1
                    label_cce1dc:
                        v0 = result_19.o
                    label_cce1e0:
                        result_16 = result_14 + 0x18
                    label_cce1e4:
                        *(result_14 + 0x10) = result_15
                    label_cce1e8:
                        *result_14 = v0
                    label_cce1ec:
                        *(result_6 + 0x38) = result_16
                    
                label_cce24c:
                    result_14 = nullptr
                    goto label_cce18c
                case 0xcce254
                    goto label_cce254
                case 0xcce258
                    goto label_cce258
                case 0xcce25c
                    goto label_cce25c
                case 0xcce260
                    goto label_cce260
                case 0xcce264
                    goto label_cce264
                case 0xcce268
                    goto label_cce268
                case 0xcce26c
                    goto label_cce26c
                case 0xcce270
                    goto label_cce270
                case 0xcce274
                    goto label_cce274
                case 0xcce278
                    goto label_cce278
                case 0xcce27c
                    break
                case 0xcce280
                    goto label_cce280
                case 0xcce284
                    goto label_cce2b0
                case 0xcce28c
                    goto label_cce28c
                case 0xcce290
                    goto label_cce290
                case 0xcce294
                    goto label_cce294
                case 0xcce298
                    goto label_cce298
                case 0xcce29c
                    while (true)
                        if ((result_15.d & 1) != 0)
                        label_cce2a0:
                            result = *(result_14 - 8)
                        label_cce2a4:
                            operator delete(result)
                        
                    label_cce288:
                        z_1 = result_6 == result_7
                    label_cce28c:
                        result_14 = result_7
                    label_cce290:
                        
                        if (z_1)
                            break
                        
                    label_cce294:
                        result_15 = zx.q(*(result_14 - 0x18))
                    label_cce298:
                        result_7 = result_14 - 0x20
                    
                    result = result_4
                    goto label_cce2b0
                case 0xcce2a0
                    goto label_cce2a0
                case 0xcce2a4
                    goto label_cce2a4
                case 0xcce2a8
                    goto label_cce288
                case 0xcce2ac
                    result = result_4
                    goto label_cce2b0
                case 0xcce2b4
                    goto label_cce2b4
                case 0xcce2d8
                label_cce2dc:
                    result = __cxa_allocate_exception()
                label_cce2e0:
                    result_14 = zx.q(var_c0.b)
                label_cce2e4:
                    result_15 = var_c0:8.q
                    result_16 = result_5
                label_cce2e8:
                    result_17 = &var_c0
                label_cce2ec:
                    result_17 |= 1
                label_cce2f0:
                    result_25 = result_14 u>> 1
                label_cce2f4:
                    z_1 = (result_14.d & 1) == 0
                label_cce2f8:
                    
                    if (not(z_1))
                        result_22 = result_15
                        goto label_cce2fc
                    
                    result_22 = result_25
                label_cce2fc:
                    result_14 = &result_22[0x11]
                label_cce300:
                    result_8 = result
                label_cce304:
                    
                    if (not(z_1))
                        result_9 = result_16
                        goto label_cce308
                    
                    result_9 = result_17
                label_cce308:
                    c_1 = result_14 u>= -0x10
                label_cce30c:
                    result_19.q = 0
                    int64_t var_d0_1 = 0
                label_cce310:
                    int64_t var_c8 = 0
                label_cce314:
                    
                    if (not(c_1))
                        goto label_cce320
                    
                    goto label_cce31c
                case 0xcce2e0
                    goto label_cce2e0
                case 0xcce2e4
                    goto label_cce2e4
                case 0xcce2e8
                    goto label_cce2e8
                case 0xcce2ec
                    goto label_cce2ec
                case 0xcce2f0
                    goto label_cce2f0
                case 0xcce2f4
                    goto label_cce2f4
                case 0xcce2f8
                    goto label_cce2f8
                case 0xcce2fc
                    goto label_cce2fc
                case 0xcce300
                    goto label_cce300
                case 0xcce304
                    goto label_cce304
                case 0xcce308
                    goto label_cce308
                case 0xcce30c
                    goto label_cce30c
                case 0xcce310
                    goto label_cce310
                case 0xcce314
                    goto label_cce314
                case 0xcce318
                label_cce31c:
                    result_14 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
                label_cce320:
                    c_1 = result_14 u>= 0x17
                label_cce324:
                    
                    if (c_1)
                        goto label_cce340
                    
                    goto label_cce328
                case 0xcce320
                    goto label_cce320
                case 0xcce324
                    goto label_cce324
                case 0xcce328
                label_cce328:
                    result_15 = &result_19
                label_cce32c:
                    result_14 = zx.q(result_22.d << 1)
                label_cce330:
                    result_10 = result_15 | 1
                label_cce334:
                    result_19 = (result_14.d).b
                label_cce338:
                    
                    if (result_22 != 0)
                        goto label_cce360
                    
                    goto label_cce370
                case 0xcce32c
                    goto label_cce32c
                case 0xcce330
                    goto label_cce330
                case 0xcce334
                    goto label_cce334
                case 0xcce338
                    goto label_cce338
                case 0xcce33c
                    goto label_cce370
                case 0xcce340
                label_cce340:
                    result_14 = &result_22[0x21]
                label_cce344:
                    result_11 = result_14 & 0xfffffffffffffff0
                label_cce348:
                    result = result_11
                label_cce34c:
                    result = operator new(result)
                label_cce350:
                    result_14 = result_11 | 1
                label_cce354:
                    result_10 = result
                label_cce358:
                    char* result_23 = result_22
                    int128_t* result_2 = result
                label_cce35c:
                    result_19.q = result_14
                label_cce360:
                    result = result_10
                label_cce364:
                    result_13 = result_9
                label_cce368:
                    result_24 = result_22
                label_cce36c:
                    memcpy(result, result_13, result_24)
                label_cce370:
                    *(result_10 + result_22) = 0
                label_cce374:
                    result_13 = "xture"
                label_cce378:
                    result_13 += 0x6a7
                label_cce384:
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                        &result_19, result_13)
                    *result_8 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        result_8 + 8)
                    *result_8 = _vtable_for_Botan::Decoding_Error + 0x10
                    __cxa_throw(result_8, _typeinfo_for_Botan::Decoding_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                case 0xcce344
                    goto label_cce344
                case 0xcce348
                    goto label_cce348
                case 0xcce34c
                    goto label_cce34c
                case 0xcce350
                    goto label_cce350
                case 0xcce354
                    goto label_cce354
                case 0xcce358
                    goto label_cce358
                case 0xcce35c
                    goto label_cce35c
                case 0xcce360
                    goto label_cce360
                case 0xcce364
                    goto label_cce364
                case 0xcce368
                    goto label_cce368
                case 0xcce36c
                    goto label_cce36c
                case 0xcce374
                    goto label_cce374
                case 0xcce378
                    goto label_cce378
                case 0xcce37c
                    goto label_cce384
    
    if (not(z_1))
        break
    
label_cce280:
    result = result_6
label_cce2b0:
    int128_t* result_12 = result_6
label_cce2b4:
    return operator delete(result)

goto label_cce294
