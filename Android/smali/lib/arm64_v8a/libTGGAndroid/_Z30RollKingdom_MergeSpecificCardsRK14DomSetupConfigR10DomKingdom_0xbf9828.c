// 函数: _Z30RollKingdom_MergeSpecificCardsRK14DomSetupConfigR10DomKingdom
// 地址: 0xbf9828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 != 1)
    if (*(arg1 + 0x10) == 1)
        goto label_bf9978
    
    goto label_bf984c

int64_t x9_16 = sx.q(*(gPregameContext + 4))
int32_t x10_6 = *(arg1 + 4)
*(gPregameContext + 4) = x9_16.d + 1
*(arg2 + (x9_16 << 2)) = x10_6

if (*(arg1 + 0x10) == 1)
label_bf9978:
    int64_t x9_18 = sx.q(*(gPregameContext + 4))
    int32_t x10_7 = *(arg1 + 0x14)
    *(gPregameContext + 4) = x9_18.d + 1
    *(arg2 + (x9_18 << 2)) = x10_7
    
    if (*(arg1 + 0x20) != 1)
        goto label_bf9858
    
    goto label_bf9998

label_bf984c:

if (*(arg1 + 0x20) != 1)
label_bf9858:
    
    if (*(arg1 + 0x30) == 1)
        goto label_bf99b8
    
    goto label_bf9864

label_bf9998:
int64_t x9_20 = sx.q(*(gPregameContext + 4))
int32_t x10_8 = *(arg1 + 0x24)
*(gPregameContext + 4) = x9_20.d + 1
*(arg2 + (x9_20 << 2)) = x10_8

if (*(arg1 + 0x30) == 1)
label_bf99b8:
    int64_t x9_22 = sx.q(*(gPregameContext + 4))
    int32_t x10_9 = *(arg1 + 0x34)
    *(gPregameContext + 4) = x9_22.d + 1
    *(arg2 + (x9_22 << 2)) = x10_9
    
    if (*(arg1 + 0x40) != 1)
        goto label_bf9870
    
    goto label_bf99d8

label_bf9864:

if (*(arg1 + 0x40) != 1)
label_bf9870:
    
    if (*(arg1 + 0x50) == 1)
        goto label_bf99f8
    
    goto label_bf987c

label_bf99d8:
int64_t x9_24 = sx.q(*(gPregameContext + 4))
int32_t x10_10 = *(arg1 + 0x44)
*(gPregameContext + 4) = x9_24.d + 1
*(arg2 + (x9_24 << 2)) = x10_10

if (*(arg1 + 0x50) == 1)
label_bf99f8:
    int64_t x9_26 = sx.q(*(gPregameContext + 4))
    int32_t x10_11 = *(arg1 + 0x54)
    *(gPregameContext + 4) = x9_26.d + 1
    *(arg2 + (x9_26 << 2)) = x10_11
    
    if (*(arg1 + 0x60) != 1)
        goto label_bf9888
    
    goto label_bf9a18

label_bf987c:

if (*(arg1 + 0x60) != 1)
label_bf9888:
    
    if (*(arg1 + 0x70) == 1)
        goto label_bf9a38
    
    goto label_bf9894

label_bf9a18:
int64_t x9_28 = sx.q(*(gPregameContext + 4))
int32_t x10_12 = *(arg1 + 0x64)
*(gPregameContext + 4) = x9_28.d + 1
*(arg2 + (x9_28 << 2)) = x10_12

if (*(arg1 + 0x70) == 1)
label_bf9a38:
    int64_t x9_30 = sx.q(*(gPregameContext + 4))
    int32_t x10_13 = *(arg1 + 0x74)
    *(gPregameContext + 4) = x9_30.d + 1
    *(arg2 + (x9_30 << 2)) = x10_13
    
    if (*(arg1 + 0x80) != 1)
        goto label_bf98a0
    
    goto label_bf9a58

label_bf9894:

if (*(arg1 + 0x80) != 1)
label_bf98a0:
    
    if (*(arg1 + 0x90) == 1)
        goto label_bf9a78
    
    goto label_bf98ac

label_bf9a58:
int64_t x9_32 = sx.q(*(gPregameContext + 4))
int32_t x10_14 = *(arg1 + 0x84)
*(gPregameContext + 4) = x9_32.d + 1
*(arg2 + (x9_32 << 2)) = x10_14

if (*(arg1 + 0x90) == 1)
label_bf9a78:
    int64_t x9_34 = sx.q(*(gPregameContext + 4))
    int32_t x10_15 = *(arg1 + 0x94)
    *(gPregameContext + 4) = x9_34.d + 1
    *(arg2 + (x9_34 << 2)) = x10_15
    
    if (*(arg1 + 0xa0) != 1)
        goto label_bf98b8
    
    goto label_bf9a98

label_bf98ac:

if (*(arg1 + 0xa0) != 1)
label_bf98b8:
    
    if (*(arg1 + 0xe8) == 1)
        goto label_bf9ae0
    
    goto label_bf98c4

label_bf9a98:
int64_t x9_36 = sx.q(*(gPregameContext + 8))
*(gPregameContext + 8) = x9_36.d + 1
void* x9_37 = arg2 + x9_36 * 0x3c
*(x9_37 + 0x28) = *(arg1 + 0xa4)
int128_t v1 = *(arg1 + 0xc0)
int128_t v0 = *(arg1 + 0xd0)
int128_t v2 = *(arg1 + 0xb0)
*(x9_37 + 0x5c) = *(arg1 + 0xe0)
*(x9_37 + 0x4c) = v0
*(x9_37 + 0x3c) = v1
*(x9_37 + 0x2c) = v2

if (*(arg1 + 0xe8) == 1)
label_bf9ae0:
    int64_t x9_39 = sx.q(*(gPregameContext + 8))
    *(gPregameContext + 8) = x9_39.d + 1
    void* x9_40 = arg2 + x9_39 * 0x3c
    *(x9_40 + 0x28) = *(arg1 + 0xec)
    int64_t x10_21 = *(arg1 + 0x128)
    v1 = *(arg1 + 0x108)
    v2 = *(arg1 + 0xf8)
    *(x9_40 + 0x4c) = *(arg1 + 0x118)
    *(x9_40 + 0x5c) = x10_21
    *(x9_40 + 0x3c) = v1
    *(x9_40 + 0x2c) = v2
    
    if (*(arg1 + 0x130) != 1)
        goto label_bf98d0
    
    goto label_bf9b34

label_bf98c4:

if (*(arg1 + 0x130) == 1)
label_bf9b34:
    int64_t x9_42 = sx.q(*(gPregameContext + 8))
    *(gPregameContext + 8) = x9_42.d + 1
    void* x9_43 = arg2 + x9_42 * 0x3c
    *(x9_43 + 0x28) = *(arg1 + 0x134)
    v1 = *(arg1 + 0x150)
    v0 = *(arg1 + 0x160)
    v2 = *(arg1 + 0x140)
    *(x9_43 + 0x5c) = *(arg1 + 0x170)
    *(x9_43 + 0x4c) = v0
    *(x9_43 + 0x3c) = v1
    *(x9_43 + 0x2c) = v2
    
    if (*(arg1 + 0x178) == 1)
    label_bf98d8:
        int64_t x9_13 = sx.q(*(gPregameContext + 8))
        *(gPregameContext + 8) = x9_13.d + 1
        void* x9_14 = arg2 + x9_13 * 0x3c
        *(x9_14 + 0x28) = *(arg1 + 0x17c)
        v0 = *(arg1 + 0x198)
        int64_t x10_3 = *(arg1 + 0x1b8)
        v2 = *(arg1 + 0x188)
        *(x9_14 + 0x4c) = *(arg1 + 0x1a8)
        *(x9_14 + 0x3c) = v0
        *(x9_14 + 0x5c) = x10_3
        *(x9_14 + 0x2c) = v2
else
label_bf98d0:
    
    if (*(arg1 + 0x178) == 1)
        goto label_bf98d8

for (int64_t i = 0; i != 0x1ac; i += 4)
    void* x10_4 = arg1 + (i << 2)
    
    if (*(x10_4 + 0x1c0) == 1)
        *(arg2 + 0x118 + i) = *(x10_4 + 0x1c4)
