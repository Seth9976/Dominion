// 函数: _ZN5Botan10hex_encodeEPKhmb
// 地址: 0xccf104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = arg2 << 1

if (x23 u>= -0x10)
    return Botan::OctetString::operator^=(
        std::__ndk1::__basic_string_common<true>::__throw_length_error()) __tailcall

uint8_t const* x19 = arg1
char* entry_x8
void* x24_1

if (x23 u< 0x17)
    char* x24 = entry_x8
    *x24 = (arg2.d << 2).b
    x24_1 = &x24[1]
    
    if (x23 != 0)
        goto label_ccf180
    
    *(x24_1 + x23) = 0
    
    if (arg2 != 0)
        goto label_ccf1a0
    
    return 

uint64_t x25_1 = (x23 + 0x10) & 0xfffffffffffffff0
void* x0_1 = operator new(x25_1)
x24_1 = x0_1
*(entry_x8 + 8) = x23
*(entry_x8 + 0x10) = x0_1
*entry_x8 = x25_1 | 1
label_ccf180:
int128_t v0
int128_t v1
int128_t v2
uint128_t v3
uint128_t v4
uint128_t v5
uint128_t v6
arg1, v0, v1, v2, v3, v4, v5, v6 = memset(x24_1, 0, x23)
*(x24_1 + x23) = 0

if (arg2 == 0)
    return 

label_ccf1a0:
void* x9_2

if ((zx.d(*entry_x8) & 1) != 0)
    x9_2 = *(entry_x8 + 0x10)
else
    x9_2 = &entry_x8[1]

char x8_4

if ((arg3.d & 1) != 0)
    x8_4 = 0x41
else
    x8_4 = 0x61

int64_t i_6

if (arg2 u< 8)
label_ccf200:
    i_6 = 0
label_ccf208:
    int64_t i_3 = arg2 - i_6
    void* x9_4 = x9_2 + (i_6 << 1) + 1
    void* x10_3 = &x19[i_6]
    int64_t i
    
    do
        uint32_t x12_3 = zx.d(*x10_3)
        x10_3 += 1
        i = i_3
        i_3 -= 1
        uint32_t x14_2 = x12_3 u>> 4
        int32_t x16_1 = (x14_2 - 0xa) s>> 7
        int32_t x16_2 = ((x12_3 & 0xf) - 0xa) s>> 7
        *(x9_4 - 1) = ((x14_2.b | 0x30) & x16_1.b) | (((x14_2 - 0xa).b + x8_4) & (not.d(x16_1)).b)
        *x9_4 = ((0x30 | (x12_3 & 0xf).b) & x16_2.b)
            | ((((x12_3 & 0xf) - 0xa).b + x8_4) & (not.d(x16_2)).b)
        x9_4 += 2
    while (i != 1)
    return 

int64_t x13_1 = (arg2 - 1) * 2
int32_t x11_2 = (arg2 - 1) * 2 u< arg2 - 1 ? 1 : 0
i_6 = 0

if (x9_2 + x13_1 u< x9_2 || (x11_2 & 1) != 0 || x9_2 + 1 + x13_1 u< x9_2 + 1 || (x11_2 & 1) != 0)
    goto label_ccf208

if (x9_2 u< &x19[arg2] && x9_2 + (arg2 << 1) u> x19)
    goto label_ccf200

if (arg2 u>= 0x10)
    i_6 = arg2 & 0xfffffffffffffff0
    v0.b = x8_4
    v0:1.b = x8_4
    v0:2.b = x8_4
    v0:3.b = x8_4
    v0:4.b = x8_4
    v0:5.b = x8_4
    v0:6.b = x8_4
    v0:7.b = x8_4
    v0:8.b = x8_4
    v0:9.b = x8_4
    v0:0xa.b = x8_4
    v0:0xb.b = x8_4
    v0:0xc.b = x8_4
    v0:0xd.b = x8_4
    v0:0xe.b = x8_4
    v0:0xf.b = x8_4
    v1.b = 0xf
    v1:1.b = 0xf
    v1:2.b = 0xf
    v1:3.b = 0xf
    v1:4.b = 0xf
    v1:5.b = 0xf
    v1:6.b = 0xf
    v1:7.b = 0xf
    v1:8.b = 0xf
    v1:9.b = 0xf
    v1:0xa.b = 0xf
    v1:0xb.b = 0xf
    v1:0xc.b = 0xf
    v1:0xd.b = 0xf
    v1:0xe.b = 0xf
    v1:0xf.b = 0xf
    v2.b = 0xf6
    v2:1.b = 0xf6
    v2:2.b = 0xf6
    v2:3.b = 0xf6
    v2:4.b = 0xf6
    v2:5.b = 0xf6
    v2:6.b = 0xf6
    v2:7.b = 0xf6
    v2:8.b = 0xf6
    v2:9.b = 0xf6
    v2:0xa.b = 0xf6
    v2:0xb.b = 0xf6
    v2:0xc.b = 0xf6
    v2:0xd.b = 0xf6
    v2:0xe.b = 0xf6
    v2:0xf.b = 0xf6
    v3.b = 0x30
    v3:1.b = 0x30
    v3:2.b = 0x30
    v3:3.b = 0x30
    v3:4.b = 0x30
    v3:5.b = 0x30
    v3:6.b = 0x30
    v3:7.b = 0x30
    v3:8.b = 0x30
    v3:9.b = 0x30
    v3:0xa.b = 0x30
    v3:0xb.b = 0x30
    v3:0xc.b = 0x30
    v3:0xd.b = 0x30
    v3:0xe.b = 0x30
    v3:0xf.b = 0x30
    int64_t i_4 = i_6
    void* x12_8 = x9_2
    uint8_t const* x13_5 = x19
    int64_t i_1
    
    do
        v4 = *x13_5
        x13_5 = &x13_5[0x10]
        v5.b = 0xf6
        v5:1.b = 0xf6
        v5:2.b = 0xf6
        v5:3.b = 0xf6
        v5:4.b = 0xf6
        v5:5.b = 0xf6
        v5:6.b = 0xf6
        v5:7.b = 0xf6
        v5:8.b = 0xf6
        v5:9.b = 0xf6
        v5:0xa.b = 0xf6
        v5:0xb.b = 0xf6
        v5:0xc.b = 0xf6
        v5:0xd.b = 0xf6
        v5:0xe.b = 0xf6
        v5:0xf.b = 0xf6
        i_1 = i_4
        i_4 -= 0x10
        v6.b = v4.b u>> 4
        v6:1.b = v4:1.b u>> 4
        v6:2.b = v4:2.b u>> 4
        v6:3.b = v4:3.b u>> 4
        v6:4.b = v4:4.b u>> 4
        v6:5.b = v4:5.b u>> 4
        v6:6.b = v4:6.b u>> 4
        v6:7.b = v4:7.b u>> 4
        v6:8.b = v4:8.b u>> 4
        v6:9.b = v4:9.b u>> 4
        v6:0xa.b = v4:0xa.b u>> 4
        v6:0xb.b = v4:0xb.b u>> 4
        v6:0xc.b = v4:0xc.b u>> 4
        v6:0xd.b = v4:0xd.b u>> 4
        v6:0xe.b = v4:0xe.b u>> 4
        v6:0xf.b = v4:0xf.b u>> 4
        uint128_t v7_1 = v4 & v1
        unimplemented  {usra v5.16b, v4.16b, #0x4}
        int128_t v16_1 = v7_1 + v2
        v4 = vbslq_s8(sx.o(-1), vorrq_s8(v6, v3), v5 + v0)
        v6.b = v16_1.b s>> 7
        v6:1.b = v16_1:1.b s>> 7
        v6:2.b = v16_1:2.b s>> 7
        v6:3.b = v16_1:3.b s>> 7
        v6:4.b = v16_1:4.b s>> 7
        v6:5.b = v16_1:5.b s>> 7
        v6:6.b = v16_1:6.b s>> 7
        v6:7.b = v16_1:7.b s>> 7
        v6:8.b = v16_1:8.b s>> 7
        v6:9.b = v16_1:9.b s>> 7
        v6:0xa.b = v16_1:0xa.b s>> 7
        v6:0xb.b = v16_1:0xb.b s>> 7
        v6:0xc.b = v16_1:0xc.b s>> 7
        v6:0xd.b = v16_1:0xd.b s>> 7
        v6:0xe.b = v16_1:0xe.b s>> 7
        v6:0xf.b = v16_1:0xf.b s>> 7
        v5 = vbslq_s8(v6, vorrq_s8(v7_1, v3), v16_1 + v0)
        *x12_8 = v4.b
        *(x12_8 + 1) = v5.b
        *(x12_8 + 2) = v4:1.b
        *(x12_8 + 3) = v5:1.b
        *(x12_8 + 4) = v4:2.b
        *(x12_8 + 5) = v5:2.b
        *(x12_8 + 6) = v4:3.b
        *(x12_8 + 7) = v5:3.b
        *(x12_8 + 8) = v4:4.b
        *(x12_8 + 9) = v5:4.b
        *(x12_8 + 0xa) = v4:5.b
        *(x12_8 + 0xb) = v5:5.b
        *(x12_8 + 0xc) = v4:6.b
        *(x12_8 + 0xd) = v5:6.b
        *(x12_8 + 0xe) = v4:7.b
        *(x12_8 + 0xf) = v5:7.b
        *(x12_8 + 0x10) = v4:8.b
        *(x12_8 + 0x11) = v5:8.b
        *(x12_8 + 0x12) = v4:9.b
        *(x12_8 + 0x13) = v5:9.b
        *(x12_8 + 0x14) = v4:0xa.b
        *(x12_8 + 0x15) = v5:0xa.b
        *(x12_8 + 0x16) = v4:0xb.b
        *(x12_8 + 0x17) = v5:0xb.b
        *(x12_8 + 0x18) = v4:0xc.b
        *(x12_8 + 0x19) = v5:0xc.b
        *(x12_8 + 0x1a) = v4:0xd.b
        *(x12_8 + 0x1b) = v5:0xd.b
        *(x12_8 + 0x1c) = v4:0xe.b
        *(x12_8 + 0x1d) = v5:0xe.b
        *(x12_8 + 0x1e) = v4:0xf.b
        *(x12_8 + 0x1f) = v5:0xf.b
        x12_8 += 0x20
    while (i_1 != 0x10)
    
    if (i_6 != arg2)
        if ((arg2.d & 8) == 0)
            goto label_ccf208
        
        goto label_ccf304
else
    i_6 = 0
label_ccf304:
    int64_t i_7 = i_6
    i_6 = arg2 & 0xfffffffffffffff8
    v0.b = x8_4
    v0:1.b = x8_4
    v0:2.b = x8_4
    v0:3.b = x8_4
    v0:4.b = x8_4
    v0:5.b = x8_4
    v0:6.b = x8_4
    v0:7.b = x8_4
    void* x11_3 = &x19[i_7]
    void* x12_9 = x9_2 + (i_7 << 1)
    v1.b = 0xf
    v1:1.b = 0xf
    v1:2.b = 0xf
    v1:3.b = 0xf
    v1:4.b = 0xf
    v1:5.b = 0xf
    v1:6.b = 0xf
    v1:7.b = 0xf
    v2.b = 0xf6
    v2:1.b = 0xf6
    v2:2.b = 0xf6
    v2:3.b = 0xf6
    v2:4.b = 0xf6
    v2:5.b = 0xf6
    v2:6.b = 0xf6
    v2:7.b = 0xf6
    int64_t i_5 = i_7 - i_6
    v3.b = 0x30
    v3:1.b = 0x30
    v3:2.b = 0x30
    v3:3.b = 0x30
    v3:4.b = 0x30
    v3:5.b = 0x30
    v3:6.b = 0x30
    v3:7.b = 0x30
    int64_t i_2
    
    do
        v4.q = *x11_3
        x11_3 += 8
        v5.b = 0xf6
        v5:1.b = 0xf6
        v5:2.b = 0xf6
        v5:3.b = 0xf6
        v5:4.b = 0xf6
        v5:5.b = 0xf6
        v5:6.b = 0xf6
        v5:7.b = 0xf6
        i_2 = i_5
        i_5 += 8
        v6.b = v4.b u>> 4
        v6:1.b = v4:1.b u>> 4
        v6:2.b = v4:2.b u>> 4
        v6:3.b = v4:3.b u>> 4
        v6:4.b = v4:4.b u>> 4
        v6:5.b = v4:5.b u>> 4
        v6:6.b = v4:6.b u>> 4
        v6:7.b = v4:7.b u>> 4
        int128_t v7_3 = v4 & v1
        int128_t v5_3 = vsra_n_u8(v5, v4, 4)
        v4.b = v5_3.b s>> 7
        v4:1.b = v5_3:1.b s>> 7
        v4:2.b = v5_3:2.b s>> 7
        v4:3.b = v5_3:3.b s>> 7
        v4:4.b = v5_3:4.b s>> 7
        v4:5.b = v5_3:5.b s>> 7
        v4:6.b = v5_3:6.b s>> 7
        v4:7.b = v5_3:7.b s>> 7
        int128_t v16_3 = v7_3 + v2
        v4 = vbsl_s8(v4, vorr_s8(v6, v3), v5_3 + v0)
        v6.b = v16_3.b s>> 7
        v6:1.b = v16_3:1.b s>> 7
        v6:2.b = v16_3:2.b s>> 7
        v6:3.b = v16_3:3.b s>> 7
        v6:4.b = v16_3:4.b s>> 7
        v6:5.b = v16_3:5.b s>> 7
        v6:6.b = v16_3:6.b s>> 7
        v6:7.b = v16_3:7.b s>> 7
        int128_t v5_4
        v5_4.q = v6.q
        v5 = vbsl_s8(v5_4, vorr_s8(v7_3, v3), v16_3 + v0)
        *x12_9 = v4.b
        *(x12_9 + 1) = v5.b
        *(x12_9 + 2) = v4:1.b
        *(x12_9 + 3) = v5:1.b
        *(x12_9 + 4) = v4:2.b
        *(x12_9 + 5) = v5:2.b
        *(x12_9 + 6) = v4:3.b
        *(x12_9 + 7) = v5:3.b
        *(x12_9 + 8) = v4:4.b
        *(x12_9 + 9) = v5:4.b
        *(x12_9 + 0xa) = v4:5.b
        *(x12_9 + 0xb) = v5:5.b
        *(x12_9 + 0xc) = v4:6.b
        *(x12_9 + 0xd) = v5:6.b
        *(x12_9 + 0xe) = v4:7.b
        *(x12_9 + 0xf) = v5:7.b
        x12_9 += 0x10
    while (i_2 != -8)
    
    if (i_6 != arg2)
        goto label_ccf208
