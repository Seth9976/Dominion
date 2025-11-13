// 函数: _ZN5Botan6BigIntrMEj
// 地址: 0xcdbd18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t entry_x1

if (entry_x1 == 0)
    void* x0_5 = __cxa_allocate_exception(0x20)
    Botan::BigInt::DivideByZero::DivideByZero()
    __cxa_throw(x0_5, _typeinfo_for_Botan::BigInt::DivideByZero, Botan::Exception::~Exception)
    noreturn

int64_t* x19 = arg1
int128_t v0_1

if (entry_x1 != 1)
    int128_t v0
    v0.q = float.d(zx.q(entry_x1))
    v0_1.w = vaddlv_u8(vcnt_s8(v0))

uint32_t x0

if (entry_x1 != 1 && v0_1.d u<= 1)
    int32_t* x9_3 = *x19
    
    if (x19[1] == x9_3)
        x0 = 0
    else
        x0 = *x9_3 & (entry_x1 - 1)
    
    goto label_cdbde8

int64_t x8_1 = x19[3]
uint32_t x20_1

if (x8_1 == -1)
    int64_t x9_5 = *x19
    int64_t x11_1 = x19[1]
    int64_t x10_2 = x11_1 - x9_5
    
    if (x11_1 == x9_5)
        x19[3] = 0
        x20_1 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_2 s>= 0 ? x10_2 : -1
        
        int64_t x11_2 = x9_5 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8_1 = x10_2 s>> 2
        int64_t x10_3
        
        x10_3 = x11_2 s> x10_2 ? x11_2 : x10_2
        
        int64_t i_2 = x12_2 * (x10_3 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_5 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        x19[3] = x8_1
        
        if (x8_1 != 0)
            goto label_cdbe0c
        
        x20_1 = 0
else if (x8_1 != 0)
label_cdbe0c:
    x0 = 0
    int64_t i_1 = x8_1 - 1
    
    do
        int64_t x8_3 = *x19
        uint32_t x1
        
        if (i_1 u< (x19[1] - x8_3) s>> 2)
            x1 = *(x8_3 + (i_1 << 2))
        else
            x1 = 0
        
        x0 = Botan::bigint_modop(x0, x1, entry_x1)
        i_1 -= 1
    while (i_1 != -1)
    
label_cdbde8:
    
    if (x0 == 0)
        x20_1 = 0
    else if (x19[4].d == 0)
        x20_1 = entry_x1 - x0
    else
        x20_1 = x0
else
    x20_1 = 0

int64_t x8_4 = x19[1]
int64_t x9_11 = x19[2]
int64_t x0_1 = *x19
size_t x10_5 = x9_11 - x0_1
size_t x2_2 = x8_4 - x0_1
int64_t x11_4 = x10_5 s>> 2
int64_t x12_5 = x2_2 s>> 2

if (x11_4 u> x12_5)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x19)
    x0_1 = *x19
    x8_4 = x19[1]
    x2_2 = x8_4 - x0_1
else if (x11_4 u< x12_5)
    x8_4 = x9_11
    x2_2 = x10_5
    x19[1] = x9_11

if (x2_2 != 0)
    memset(x0_1, 0, x2_2)
    x0_1 = *x19
    x8_4 = x19[1]

x19[3] = -1

if (x8_4 != x0_1)
    **x19 = x20_1
else if (x20_1 != 0)
    x19[2]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x19)
    **x19 = x20_1

x19[4].d = 1
return zx.q(x20_1)
