// 函数: _ZN5Botan17X509_Cert_OptionsC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj
// 地址: 0xebefc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
char* x24 = arg2
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x1f8) = 0
*(arg1 + 0x200) = _vtable_for_Botan::Extensions + 0x10
*(arg1 + 0x188) = 0xff00
*(arg1 + 0x1b0) = 0xff00
*(arg1 + 0x140) = zx.o(0)
*(arg1 + 0x150) = zx.o(0)
*(arg1 + 0x120) = zx.o(0)
*(arg1 + 0x130) = zx.o(0)
*(arg1 + 0x100) = zx.o(0)
*(arg1 + 0x110) = zx.o(0)
*(arg1 + 0xe0) = zx.o(0)
*(arg1 + 0xf0) = zx.o(0)
*(arg1 + 0xc0) = zx.o(0)
*(arg1 + 0xd0) = zx.o(0)
*(arg1 + 0xa0) = zx.o(0)
*(arg1 + 0xb0) = zx.o(0)
*(arg1 + 0x80) = zx.o(0)
*(arg1 + 0x90) = zx.o(0)
*(arg1 + 0x60) = zx.o(0)
*(arg1 + 0x70) = zx.o(0)
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x50) = zx.o(0)
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x20) = zx.o(0)
*arg1 = zx.o(0)
*(arg1 + 0x160) = 0
*(arg1 + 0x168) = _vtable_for_Botan::ASN1_Time + 0x10
*(arg1 + 0x178) = 0
*(arg1 + 0x180) = 0
*(arg1 + 0x170) = 0
*(arg1 + 0x190) = _vtable_for_Botan::ASN1_Time + 0x10
*(arg1 + 0x198) = 0
*(arg1 + 0x1a0) = 0
*(arg1 + 0x1a8) = 0
*(arg1 + 0x1d0) = 0
*(arg1 + 0x1d8) = 0
*(arg1 + 0x1e8) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x218) = 0
*(arg1 + 0x208) = 0
*(arg1 + 0x210) = 0
*(arg1 + 0x230) = 0
*(arg1 + 0x228) = 0
*(arg1 + 0x220) = arg1 + 0x228
*(arg1 + 0x1b8) = 0
*(arg1 + 0x1c0) = 0
*(arg1 + 0x1c8) = 0
*(arg1 + 0x1e0) = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    arg1 + 0x1c8)
int64_t var_b8 = std::__ndk1::chrono::system_clock::now()
time_t t = std::__ndk1::chrono::system_clock::to_time_t(&var_b8)
struct tm tp
int128_t v0
uint128_t v1
v0, v1 = gmtime_r(&t, &tp)
v0.d = tp.tm_mon
v0:4.d = tp.tm_year
int128_t v8
v8.q = 0x76c00000001
v1.d = tp.tm_sec
v1:4.d = tp.tm_min
v1:8.d = tp.tm_hour
v1:0xc.d = tp.tm_mday
int128_t v0_1 = v0 + v8
uint128_t v1_1 = vrev64q_s32(v1)
uint128_t v1_2 = vextq_s8(v1_1, v1_1, 8)
uint64_t v2 = vrev64_s32(v0_1)
int32_t x9_2

if (v0_1:4.d u> 0x801)
    x9_2 = 0x18
else
    x9_2 = 0x17

*(arg1 + 0x170) = v2
*(arg1 + 0x178) = v1_2
*(arg1 + 0x188) = x9_2
int32_t entry_x2
int64_t var_c0 = var_b8 + mulu.dp.d(entry_x2, 0xf4240)
t = std::__ndk1::chrono::system_clock::to_time_t(&var_c0)
struct tm* result
int128_t v0_2
uint128_t v1_3
result, v0_2, v1_3 = gmtime_r(&t, &tp)
v0_2.d = tp.tm_mon
v0_2:4.d = tp.tm_year
v1_3.d = tp.tm_sec
v1_3:4.d = tp.tm_min
v1_3:8.d = tp.tm_hour
v1_3:0xc.d = tp.tm_mday
int128_t v0_3 = v0_2 + v8
uint128_t v1_4 = vrev64q_s32(v1_3)
uint64_t v2_1 = vrev64_s32(v0_3)
uint128_t v1_5 = vextq_s8(v1_4, v1_4, 8)
int32_t x8_7

if (v0_3:4.d u> 0x801)
    x8_7 = 0x18
else
    x8_7 = 0x17

*(arg1 + 0x198) = v2_1
*(arg1 + 0x1a0) = v1_5
*(arg1 + 0x1b0) = x8_7
uint64_t x8_8 = zx.q(*x24)
uint64_t x8_9

if ((x8_8.d & 1) == 0)
    x8_9 = x8_8 u>> 1
else
    x8_9 = *(x24 + 8)

if (x8_9 != 0)
    tp.tm_sec = 0x117e3d8
    tp.tm_min = 0
    tp.tm_hour.b = 0x2f
    tp.tm_isdst.q = &tp
    Botan::split_on_pred(x24, &tp)
    result = tp.tm_isdst.q
    
    if (&tp == result)
        void* x8_12
        x8_12.d = result->tm_sec
        x8_12:4.d = result->tm_min
        result = (*(x8_12 + 0x20))()
    else if (result != 0)
        void* x8_10
        x8_10.d = result->tm_sec
        x8_10:4.d = result->tm_min
        result = (*(x8_10 + 0x28))()
    
    void* t_2 = t
    char* var_d0
    char* x8_13 = var_d0
    void* x9_4 = x8_13 - t_2
    
    if ((x9_4 s>> 3) * -0x5555555555555555 u>= 5)
        void** x0_14 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "X.509 cert options: Too many names: ", x24)
        *x0_14 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_14[1])
        *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    if (x9_4 != 0)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
            arg1)
        t_2 = t
        x8_13 = var_d0
        
        if (((x8_13 - t_2) s>> 3) * -0x5555555555555555 u>= 2)
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                arg1 + 0x18)
            t_2 = t
            x8_13 = var_d0
            
            if (((x8_13 - t_2) s>> 3) * -0x5555555555555555 u>= 3)
                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
                    arg1 + 0x30)
                t_2 = t
                x8_13 = var_d0
    
    if (x8_13 - t_2 == 0x60)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
            arg1 + 0x48)
        t_2 = t
    
    if (t_2 != 0)
        char* x8_15 = var_d0
        void* t_1
        
        if (x8_15 == t_2)
            t_1 = t_2
        else
            char* x19_1 = x8_15
            
            do
                x19_1 = &x19_1[-0x18]
                
                if ((zx.d(*x19_1) & 1) != 0)
                    operator delete(*(x8_15 - 8))
                
                x8_15 = x19_1
            while (t_2 != x19_1)
            
            t_1 = t
        
        void* t_3 = t_2
        result = operator delete(t_1)

if (*(x27 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
