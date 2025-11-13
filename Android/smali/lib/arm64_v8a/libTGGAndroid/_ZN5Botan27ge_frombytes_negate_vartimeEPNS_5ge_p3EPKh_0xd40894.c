// 函数: _ZN5Botan27ge_frombytes_negate_vartimeEPNS_5ge_p3EPKh
// 地址: 0xd40894
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
uint128_t var_70

if ((zx.d(data_23ec9b0) & 1) == 0 && __cxa_guard_acquire(&data_23ec9b0) != 0)
    __builtin_memcpy(&var_70, 
        "\xb6\x78\x59\xff\x85\x72\xd3\x00\xbd\x6e\x15\xff\x0f\x0a\x6a\x00\x29\xc0\x01\x00\x98\xe8\x79\x"
    "ff\xbc\x3c\xa0\xff\x99\x71\xce\xff\x00\xb7\xe2\xfe\xb4\x0d\x48\xff", 
        0x28)
    Botan::FE_25519::FE_25519(0x23ecc98)
    __cxa_atexit(Botan::FE_25519::~FE_25519, 0x23ecc98, &data_1122730)
    __cxa_guard_release(&data_23ec9b0)

if ((zx.d(data_23ec9b8) & 1) == 0 && __cxa_guard_acquire(&data_23ec9b8) != 0)
    __builtin_memcpy(&var_70, 
        "\xb0\xa0\x0e\xfe\xd3\xc9\x86\xff\x9e\x18\x8f\x00\x7f\x69\x35\x00\x60\x0c\xbd\x00\xa7\xd7\xfb\x"
    "ff\x9f\x4c\x80\xfe\x6a\x65\xe1\xff\x1e\xfc\x04\x00\x92\x0c\xae\x00", 
        0x28)
    Botan::FE_25519::FE_25519(0x23eccc0)
    __cxa_atexit(Botan::FE_25519::~FE_25519, 0x23eccc0, &data_1122730)
    __cxa_guard_release(&data_23ec9b8)

int128_t var_a0
__builtin_memset(&var_a0, 0, 0x28)
int128_t var_d0
__builtin_memset(&var_d0, 0, 0x28)
int128_t var_100
__builtin_memset(&var_100, 0, 0x28)
int128_t var_130
__builtin_memset(&var_130, 0, 0x28)
int128_t var_160
__builtin_memset(&var_160, 0, 0x28)
int128_t v0
int128_t v1
v0, v1 = Botan::FE_25519::from_bytes(arg1 + 0x28)
v0.q = 0
v0:8.q = 0
__builtin_memset(&var_70:4, 0, 0x24)
var_70.d = 1
v1 = var_70
int64_t var_50
*(arg1 + 0x70) = var_50
*(arg1 + 0x50) = v1
int128_t var_60
*(arg1 + 0x60) = var_60
memset(&var_70, 0, 0x28)
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = Botan::FE_25519::sqr_iter(arg1 + 0x28, 1)
var_a0 = var_70
memset(&var_70, 0, 0x28)
int128_t v0_2
int128_t v1_2
v0_2, v1_2 = Botan::FE_25519::mul(&var_a0, 0x23ecc98)
var_d0 = var_70
int128_t v0_3
int128_t v1_3
int128_t v2
v0_3, v1_3, v2 = memset(&var_70, 0, 0x28)
v1_3.q = var_50
int128_t v0_4 = var_60 - *(arg1 + 0x60)
var_70 = var_a0 - *(arg1 + 0x50)
int128_t var_60_1 = v0_4
v0_4.q = *(arg1 + 0x70)
int64_t var_50_1 = (v1_3 - v0_4).q
var_a0 = var_70
int128_t v0_6
int128_t v1_4
int128_t v2_1
v0_6, v1_4, v2_1 = memset(&var_70, 0, 0x28)
v1_4.q = var_50
int128_t v0_7 = *(arg1 + 0x60) + var_60
var_70 = *(arg1 + 0x50) + var_d0
int128_t var_60_2 = v0_7
v0_7.q = *(arg1 + 0x70)
int64_t var_50_2 = (v0_7 + v1_4).q
var_d0 = var_70
int128_t var_c0_1 = var_60_2
int64_t var_b0_1 = var_50_2
memset(&var_70, 0, 0x28)
int128_t v0_9
int128_t v1_5
v0_9, v1_5 = Botan::FE_25519::sqr_iter(&var_d0, 1)
var_100 = var_70
int128_t var_f0 = var_60_2
int64_t var_e0 = var_50_2
memset(&var_70, 0, 0x28)
int128_t v0_10
int128_t v1_6
v0_10, v1_6 = Botan::FE_25519::mul(&var_100, &var_d0)
var_100 = var_70
int128_t var_f0_1 = var_60_2
int64_t var_e0_1 = var_50_2
memset(&var_70, 0, 0x28)
int128_t v0_11
int128_t v1_7
v0_11, v1_7 = Botan::FE_25519::sqr_iter(&var_100, 1)
v1_7 = var_70
*(arg1 + 0x20) = var_50_2
*arg1 = v1_7
*(arg1 + 0x10) = var_60_2
memset(&var_70, 0, 0x28)
int128_t v0_12
int128_t v1_8
v0_12, v1_8 = Botan::FE_25519::mul(arg1, &var_d0)
v1_8 = var_70
*(arg1 + 0x20) = var_50_2
*arg1 = v1_8
*(arg1 + 0x10) = var_60_2
memset(&var_70, 0, 0x28)
int128_t v0_13
int128_t v1_9
v0_13, v1_9 = Botan::FE_25519::mul(arg1, &var_a0)
v1_9 = var_70
*(arg1 + 0x20) = var_50_2
*arg1 = v1_9
*(arg1 + 0x10) = var_60_2
memset(&var_70, 0, 0x28)
int128_t v0_14
int128_t v1_10
v0_14, v1_10 = Botan::FE_25519::pow_22523(arg1)
v1_10 = var_70
*(arg1 + 0x20) = var_50_2
*arg1 = v1_10
*(arg1 + 0x10) = var_60_2
memset(&var_70, 0, 0x28)
int128_t v0_15
int128_t v1_11
v0_15, v1_11 = Botan::FE_25519::mul(arg1, &var_100)
v1_11 = var_70
*(arg1 + 0x20) = var_50_2
*arg1 = v1_11
*(arg1 + 0x10) = var_60_2
memset(&var_70, 0, 0x28)
int128_t v0_16
int128_t v1_12
v0_16, v1_12 = Botan::FE_25519::mul(arg1, &var_a0)
v1_12 = var_70
*(arg1 + 0x20) = var_50_2
*arg1 = v1_12
*(arg1 + 0x10) = var_60_2
memset(&var_70, 0, 0x28)
int128_t v0_17
int128_t v1_13
v0_17, v1_13 = Botan::FE_25519::sqr_iter(arg1, 1)
var_130 = var_70
int128_t var_120 = var_60_2
int64_t var_110 = var_50_2
memset(&var_70, 0, 0x28)
int128_t v0_18
int128_t v1_14
v0_18, v1_14 = Botan::FE_25519::mul(&var_130, &var_d0)
var_130 = var_70
int128_t v0_19
int128_t v1_15
int128_t v2_2
int128_t v3_2
v0_19, v1_15, v2_2, v3_2 = memset(&var_70, 0, 0x28)
var_70 = var_130 - var_a0
uint128_t var_60_3 = var_60_2 - var_60_1
int64_t var_50_3 = var_50_2 - var_50_1
var_160 = var_70
int128_t var_150 = var_60_3
int64_t var_140 = var_50_3
memset(&var_70, 0, 0x28)
int128_t v0_21
int128_t v1_17
int128_t v2_4
int128_t v3_3
v0_21, v1_17, v2_4, v3_3 = Botan::FE_25519::to_bytes(&var_160)
uint32_t x8_27 = zx.d(var_70:1.b) | zx.d(var_70.b) | zx.d(var_70:2.b) | zx.d(var_70:3.b)
    | zx.d(var_70:4.b) | zx.d(var_70:5.b) | zx.d(var_70:6.b) | zx.d(var_70:7.b) | zx.d(var_70:8.b)
uint32_t x8_35 = x8_27 | zx.d(var_70:9.b) | zx.d(var_70:0xa.b) | zx.d(var_70:0xb.b)
    | zx.d(var_70:0xc.b) | zx.d(var_70:0xd.b) | zx.d(var_70:0xe.b) | zx.d(var_70:0xf.b)
    | zx.d(var_60_3.b)
uint32_t x8_43 = x8_35 | zx.d(var_60_3:1.b) | zx.d(var_60_3:2.b) | zx.d(var_60_3:3.b)
    | zx.d(var_60_3:4.b) | zx.d(var_60_3:5.b) | zx.d(var_60_3:6.b) | zx.d(var_60_3:7.b)
    | zx.d(var_60_3:8.b)

if ((x8_43 | zx.d(var_60_3:9.b) | zx.d(var_60_3:0xa.b) | zx.d(var_60_3:0xb.b) | zx.d(var_60_3:0xc.b)
        | zx.d(var_60_3:0xd.b) | zx.d(var_60_3:0xe.b) | zx.d(var_60_3:0xf.b)) == 0)
    goto label_d40f54

var_70 = var_a0 + var_130
var_60_3 = var_60_1 + var_60_2
var_50_3 = var_50_1 + var_50_2
var_160 = var_70
int128_t var_150_1 = var_60_3
int64_t var_140_1 = var_50_3
memset(&var_70, 0, 0x28)
Botan::FE_25519::to_bytes(&var_160)
uint32_t x8_60 = zx.d(var_70:1.b) | zx.d(var_70.b) | zx.d(var_70:2.b) | zx.d(var_70:3.b)
    | zx.d(var_70:4.b) | zx.d(var_70:5.b) | zx.d(var_70:6.b) | zx.d(var_70:7.b) | zx.d(var_70:8.b)
uint32_t x8_68 = x8_60 | zx.d(var_70:9.b) | zx.d(var_70:0xa.b) | zx.d(var_70:0xb.b)
    | zx.d(var_70:0xc.b) | zx.d(var_70:0xd.b) | zx.d(var_70:0xe.b) | zx.d(var_70:0xf.b)
    | zx.d(var_60_3.b)
uint32_t x8_76 = x8_68 | zx.d(var_60_3:1.b) | zx.d(var_60_3:2.b) | zx.d(var_60_3:3.b)
    | zx.d(var_60_3:4.b) | zx.d(var_60_3:5.b) | zx.d(var_60_3:6.b) | zx.d(var_60_3:7.b)
    | zx.d(var_60_3:8.b)
int32_t x19_1

if ((x8_76 | zx.d(var_60_3:9.b) | zx.d(var_60_3:0xa.b) | zx.d(var_60_3:0xb.b) | zx.d(var_60_3:0xc.b)
        | zx.d(var_60_3:0xd.b) | zx.d(var_60_3:0xe.b) | zx.d(var_60_3:0xf.b)) == 0)
    int128_t v0_23
    int128_t v1_19
    v0_23, v1_19 = Botan::FE_25519::mul(arg1, 0x23eccc0)
    v1_19 = var_70
    *(arg1 + 0x20) = var_50_3
    *arg1 = v1_19
    *(arg1 + 0x10) = var_60_3
    memset(&var_70, 0, 0x28)
label_d40f54:
    Botan::FE_25519::to_bytes(arg1)
    
    if ((zx.d(var_70.b) & 1) == zx.d(arg2[0x1f]) u>> 7)
        uint128_t v1_20 = vnegq_s32(*arg1)
        uint128_t v0_25 = vnegq_s32(*(arg1 + 0x10))
        var_70 = v1_20
        var_60_3 = v0_25
        v0_25.q = *(arg1 + 0x20)
        var_50_3 = vneg_s32(v0_25).q
        v1_20 = var_70
        *(arg1 + 0x20) = var_50_3
        *arg1 = v1_20
        *(arg1 + 0x10) = var_60_3
        memset(&var_70, 0, 0x28)
    
    int128_t v0_27
    int128_t v1_21
    v0_27, v1_21 = Botan::FE_25519::mul(arg1, arg1 + 0x28)
    v1_21 = var_70
    *(arg1 + 0x98) = var_50_3
    *(arg1 + 0x88) = var_60_3
    *(arg1 + 0x78) = v1_21
    memset(&var_70, 0, 0x28)
    x19_1 = 0
else
    x19_1 = -1

memset(&var_160, 0, 0x28)
memset(&var_130, 0, 0x28)
memset(&var_100, 0, 0x28)
memset(&var_d0, 0, 0x28)
memset(&var_a0, 0, 0x28)

if (*(x22 + 0x28) == x8)
    return zx.q(x19_1)

__stack_chk_fail()
noreturn
