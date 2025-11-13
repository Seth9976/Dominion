// 函数: _Z16IsOnlyRealPlayeri
// 地址: 0x9b98f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveGameSetup()
int32_t x8 = *(x0 + 0x60)
void* x0_1
int32_t x8_2
int32_t x21

if (x8 != 0 && (x8 != 2 || *(x0 + 0x64) != 1))
    x21 = 0
    x0_1 = GetActiveGameSetup()
    x8_2 = *(x0_1 + 0x28c)
    
    if (x8_2 == 0 || (x8_2 == 2 && *(x0_1 + 0x290) == 1))
        goto label_9b9968
    
    goto label_9b997c

x21 = 1
x0_1 = GetActiveGameSetup()
x8_2 = *(x0_1 + 0x28c)
void* x0_2
int32_t x8_4
int32_t x20

if (x8_2 != 0 && (x8_2 != 2 || *(x0_1 + 0x290) != 1))
label_9b997c:
    x20 = 0
    x0_2 = GetActiveGameSetup()
    x8_4 = *(x0_2 + 0x4b8)
    
    if (x8_4 == 0 || (x8_4 == 2 && *(x0_2 + 0x4bc) == 1))
        goto label_9b99a0
    
    goto label_9b99b4

label_9b9968:
x20 = 1
x0_2 = GetActiveGameSetup()
x8_4 = *(x0_2 + 0x4b8)
void* x0_3
int32_t x8_6
int32_t x22

if (x8_4 != 0 && (x8_4 != 2 || *(x0_2 + 0x4bc) != 1))
label_9b99b4:
    x22 = 0
    x0_3 = GetActiveGameSetup()
    x8_6 = *(x0_3 + 0x6e4)
    
    if (x8_6 == 0 || (x8_6 == 2 && *(x0_3 + 0x6e8) == 1))
        goto label_9b99d8
    
    goto label_9b99ec

label_9b99a0:
x22 = 1
x0_3 = GetActiveGameSetup()
x8_6 = *(x0_3 + 0x6e4)
void* x0_4
int32_t x8_8
int32_t x23

if (x8_6 != 0 && (x8_6 != 2 || *(x0_3 + 0x6e8) != 1))
label_9b99ec:
    x23 = 0
    x0_4 = GetActiveGameSetup()
    x8_8 = *(x0_4 + 0x910)
    
    if (x8_8 == 0 || (x8_8 == 2 && *(x0_4 + 0x914) == 1))
        goto label_9b9a10
    
    goto label_9b9a24

label_9b99d8:
x23 = 1
x0_4 = GetActiveGameSetup()
x8_8 = *(x0_4 + 0x910)
void* x0_5
int32_t x8_10
int32_t x24

if (x8_8 != 0 && (x8_8 != 2 || *(x0_4 + 0x914) != 1))
label_9b9a24:
    x24 = 0
    x0_5 = GetActiveGameSetup()
    x8_10 = *(x0_5 + 0xb3c)
    
    if (x8_10 == 0 || (x8_10 == 2 && *(x0_5 + 0xb40) == 1))
        goto label_9b9a48
    
    goto label_9b9a5c

label_9b9a10:
x24 = 1
x0_5 = GetActiveGameSetup()
x8_10 = *(x0_5 + 0xb3c)
void* x0_6
int32_t x8_12
int32_t x25

if (x8_10 != 0 && (x8_10 != 2 || *(x0_5 + 0xb40) != 1))
label_9b9a5c:
    x25 = 0
    x0_6 = GetActiveGameSetup()
    x8_12 = *(x0_6 + 0xd68)
    
    if (x8_12 == 0 || (x8_12 == 2 && *(x0_6 + 0xd6c) == 1))
        goto label_9b9a80
    
    goto label_9b9a98

label_9b9a48:
x25 = 1
x0_6 = GetActiveGameSetup()
x8_12 = *(x0_6 + 0xd68)
int32_t x8_15
int32_t x26
uint128_t v1
uint128_t v2
void* x0_7
int32_t x8_14
uint128_t v0

if (x8_12 != 0 && (x8_12 != 2 || *(x0_6 + 0xd6c) != 1))
label_9b9a98:
    x26 = 0
    x0_7, v0, v1, v2 = GetActiveGameSetup()
    x8_14 = *(x0_7 + 0xf94)
    
    if (x8_14 != 0)
        goto label_9b9aac
    
    x8_15 = 1
else
label_9b9a80:
    x26 = 1
    x0_7, v0, v1, v2 = GetActiveGameSetup()
    x8_14 = *(x0_7 + 0xf94)
    
    if (x8_14 != 0)
    label_9b9aac:
        
        if (x8_14 == 2)
            x8_15 = *(x0_7 + 0xf98)
        
        if (x8_14 != 2 || x8_15 != 1)
            x8_15 = 0
    else
        x8_15 = 1
v1 = data_71c940
v2.d = arg1
v2:4.d = arg1
v2:8.d = arg1
v2:0xc.d = arg1
uint128_t v0_1 = vceqq_u32(v2, data_71ae50)
uint128_t v1_1 = vceqq_u32(v2, v1)
v2.d = float.s(x21)
v2:1.b = x20
v2:2.b = x22
v2:3.b = x23
v2:4.b = x24
vmovn_s32(v1_1)
v2:5.b = x25
v2:6.b = x26
v2:7.b = x8_15
int128_t v1_4 = vmovn_s16(vmovn_high_s32(v0_1))
v0_1.b = 1
v0_1:1.b = 1
v0_1:2.b = 1
v0_1:3.b = 1
v0_1:4.b = 1
v0_1:5.b = 1
v0_1:6.b = 1
v0_1:7.b = 1
int128_t v0_2 = vorr_s8(v1_4, v2) ^ v0_1
v2.d = 1
v2:4.d = 1
v2:8.d = 1
v2:0xc.d = 1
int128_t v1_6
v1_6.d = zx.d(vzip2_s8(v0_2, v0_2).w)
v1_6:4.d = zx.d(v1_6:2.w)
v1_6:8.d = zx.d(v1_6:4.w)
v1_6:0xc.d = zx.d(v1_6:6.w)
int128_t v0_3
v0_3.d = zx.d(vzip1_s8(v0_2, v0_2).w)
v0_3:4.d = zx.d(v0_3:2.w)
v0_3:8.d = zx.d(v0_3:4.w)
v0_3:0xc.d = zx.d(v0_3:6.w)
uint128_t v0_5
v0_5.d = vaddvq_u32((v0_3 & v2) + (v1_6 & v2))
return zx.q(v0_5.d u< 2 ? 1 : 0)
