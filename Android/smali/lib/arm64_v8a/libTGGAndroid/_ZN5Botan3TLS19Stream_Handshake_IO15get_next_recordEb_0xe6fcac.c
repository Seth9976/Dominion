// 函数: _ZN5Botan3TLS19Stream_Handshake_IO15get_next_recordEb
// 地址: 0xe6fcac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x30)
int64_t* x8
int64_t x11_1
void* x20_1
int64_t x23_1

if (x9 u>= 4)
    x11_1 = *(arg1 + 0x28)
    x8 = *(arg1 + 0x10)
    x20_1 = arg1
    int64_t x10_5 = (-0xff01
        & zx.q(*(*(x8 + ((x11_1 + 1) u>> 9 & 0x7ffffffffffff8)) + ((x11_1 + 1) & 0xfff))) << 0x10)
        | zx.q((*(x8 + ((x11_1 + 2) u>> 9 & 0x7ffffffffffff8)))[(x11_1 + 2) & 0xfff]) << 8
    x23_1 = (x10_5
        | zx.q(*(*(x8 + ((x11_1 + 3) u>> 9 & 0x7ffffffffffff8)) + ((x11_1 + 3) & 0xfff)))) + 4

int32_t* entry_x8

if (x9 u< 4 || x9 u< x23_1)
    *entry_x8 = 0xff
    __builtin_memset(&entry_x8[2], 0, 0x18)
    return 

void* x9_3 = x8 + (x11_1 u>> 9 & 0x7ffffffffffff8)
void* x10_7 = *x9_3
char* x11_3 = x10_7 + (x11_1 & 0xfff)
uint32_t x22_1 = zx.d(*x11_3)
int128_t var_50

if (x22_1 == 0xff)
    void** x0_5 = __cxa_allocate_exception(0x20)
    int64_t x0_6
    int128_t v0
    x0_6, v0 = operator new(0x20)
    int64_t var_40_1 = x0_6
    var_50 = data_71c370
    __builtin_strncpy(x0_6, "Invalid handshake message type", 0x1f)
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x12_4 = *(x20_1 + 0x18)
char* x13_8

x13_8 = x12_4 == x8 ? nullptr : x11_3

void* x13_9 = x13_8 - x10_7
void* x1_1

if (x13_9 s< -3)
    void* x13_13
    
    if (0xffb - x13_9 s< 0)
        x13_13 = 0x1ffa - x13_9
    else
        x13_13 = 0xffb - x13_9
    
    x1_1 = x9_3 - (x13_13 s>> 0xc << 3)
    *x1_1
else
    x1_1 = x9_3 + ((x13_9 + 4) u>> 9 & 0x7ffffffffffff8)
    *x1_1

char* x8_1

x8_1 = x12_4 == x8 ? nullptr : x11_3

void* x8_3 = x8_1 - x10_7 + x23_1

if (x8_3 s< 1)
    void* x8_6
    
    if (0xfff - x8_3 s< 0)
        x8_6 = 0x1ffe - x8_3
    else
        x8_6 = 0xfff - x8_3
    
    *(x9_3 - (x8_6 s>> 0xc << 3))
else
    *(x9_3 + (x8_3 u>> 9 & 0x7ffffffffffff8))

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::vector<std::__ndk1::__deque_iterator<uint8_t, uint8_t*, uint8_t&, uint8_t**, int64_t, 4096l> >(
    &var_50, x1_1)
int64_t x8_10 = *(x20_1 + 0x28)
void* x9_6 = *(x20_1 + 0x10)
int64_t* x1_2 = x9_6 + (x8_10 u>> 9 & 0x7ffffffffffff8)
int64_t x11_7 = *x1_2
int64_t x2_3

if (*(x20_1 + 0x18) == x9_6)
    x2_3 = 0
else
    x2_3 = x11_7 + (x8_10 & 0xfff)

int64_t x8_14 = x2_3 - x11_7 + x23_1

if (x8_14 s< 1)
    int64_t x8_17
    
    if (0xfff - x8_14 s< 0)
        x8_17 = 0x1ffe - x8_14
    else
        x8_17 = 0xfff - x8_14
    
    *(x1_2 - (x8_17 s>> 0xc << 3))
else
    *(x1_2 + (x8_14 u>> 9 & 0x7ffffffffffff8))

std::__ndk1::deque<uint8_t, std::__ndk1::allocator<uint8_t> >::erase(x20_1 + 8, x1_2)
void* x20_2 = var_50.q
int64_t x8_21 = var_50:8.q
*entry_x8 = x22_1
*(entry_x8 + 8) = 0
uint64_t x22_2 = x8_21 - x20_2
*(entry_x8 + 0x10) = 0
*(entry_x8 + 0x18) = 0

if (x8_21 != x20_2)
    if ((x22_2 & 0xffffffff80000000) != 0)
        int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* var_40
        
        if ((zx.d(var_50.b) & 1) != 0)
            operator delete(var_40)
        sub_1101e04(x0_10)
        noreturn
    
    int64_t x0_3 = operator new(x22_2)
    int64_t x21_4 = x0_3 + x22_2
    *(entry_x8 + 8) = x0_3
    *(entry_x8 + 0x10) = x0_3
    *(entry_x8 + 0x18) = x21_4
    memcpy(x0_3, x20_2, x22_2)
    *(entry_x8 + 0x10) = x21_4

if (x20_2 != 0)
    var_50:8.q = x20_2
    operator delete(x20_2)
