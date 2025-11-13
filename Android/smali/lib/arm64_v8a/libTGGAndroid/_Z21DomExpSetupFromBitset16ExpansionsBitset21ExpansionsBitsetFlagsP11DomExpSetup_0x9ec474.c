// 函数: _Z21DomExpSetupFromBitset16ExpansionsBitset21ExpansionsBitsetFlagsP11DomExpSetup
// 地址: 0x9ec474
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8

if ((arg1 & 2) != 0)
    *(arg3 + 8) = 0xa00000000
    x8 = 1
    *arg3 = -0xfffffffe
    
    if ((arg1 & 4) != 0)
    label_9ec4a8:
        void* x9_1 = arg3 + (zx.q(x8) << 4)
        x8 += 1
        *x9_1 = -0xfffffffd
        *(x9_1 + 8) = 0xa00000000
else
    x8 = 0
    
    if ((arg1 & 4) != 0)
        goto label_9ec4a8

if ((arg1 & 8) == 0)
    if ((arg1 & 0x10) != 0)
        goto label_9ec52c
    
    goto label_9ec4c4

void* x9_2 = arg3 + (zx.q(x8) << 4)
x8 += 1
*x9_2 = -0xfffffffc
*(x9_2 + 8) = 0xa00000000

if ((arg1 & 0x10) != 0)
label_9ec52c:
    void* x9_3 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_3 = -0xfffffffb
    *(x9_3 + 8) = 0xa00000000
    
    if ((arg1 & 0x20) == 0)
        goto label_9ec4c8
    
    goto label_9ec54c

label_9ec4c4:

if ((arg1 & 0x20) == 0)
label_9ec4c8:
    
    if ((arg1 & 0x40) != 0)
        goto label_9ec56c
    
    goto label_9ec4cc

label_9ec54c:
void* x9_4 = arg3 + (zx.q(x8) << 4)
x8 += 1
*x9_4 = -0xfffffffa
*(x9_4 + 8) = 0xa00000000

if ((arg1 & 0x40) != 0)
label_9ec56c:
    void* x9_5 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_5 = -0xfffffff9
    *(x9_5 + 8) = 0xa00000000
    
    if ((arg1 & 0x80) == 0)
        goto label_9ec4d0
    
    goto label_9ec58c

label_9ec4cc:

if ((arg1 & 0x80) == 0)
label_9ec4d0:
    
    if ((arg1 & 0x100) != 0)
        goto label_9ec5ac
    
    goto label_9ec4d4

label_9ec58c:
void* x9_6 = arg3 + (zx.q(x8) << 4)
x8 += 1
*x9_6 = -0xfffffff8
*(x9_6 + 8) = 0xa00000000

if ((arg1 & 0x100) != 0)
label_9ec5ac:
    void* x9_7 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_7 = -0xfffffff7
    *(x9_7 + 8) = 0xa00000000
    
    if ((arg1 & 0x200) == 0)
        goto label_9ec4d8
    
    goto label_9ec5cc

label_9ec4d4:

if ((arg1 & 0x200) == 0)
label_9ec4d8:
    
    if ((arg1 & 0x400) != 0)
        goto label_9ec5ec
    
    goto label_9ec4dc

label_9ec5cc:
void* x9_8 = arg3 + (zx.q(x8) << 4)
x8 += 1
*x9_8 = -0xfffffff6
*(x9_8 + 8) = 0xa00000000

if ((arg1 & 0x400) != 0)
label_9ec5ec:
    void* x9_9 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_9 = -0xfffffff5
    *(x9_9 + 8) = 0xa00000000
    
    if ((arg1 & 0x800) == 0)
        goto label_9ec4e0
    
    goto label_9ec60c

label_9ec4dc:

if ((arg1 & 0x800) == 0)
label_9ec4e0:
    
    if ((arg1 & 0x1000) != 0)
        goto label_9ec62c
    
    goto label_9ec4e4

label_9ec60c:
void* x9_10 = arg3 + (zx.q(x8) << 4)
x8 += 1
*x9_10 = -0xfffffff4
*(x9_10 + 8) = 0xa00000000

if ((arg1 & 0x1000) != 0)
label_9ec62c:
    void* x9_11 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_11 = -0xfffffff3
    *(x9_11 + 8) = 0xa00000000
    
    if ((arg1 & 0x2000) == 0)
        goto label_9ec4e8
    
    goto label_9ec64c

label_9ec4e4:

if ((arg1 & 0x2000) == 0)
label_9ec4e8:
    
    if ((arg1 & 0x4000) != 0)
        goto label_9ec66c
    
    goto label_9ec4ec

label_9ec64c:
void* x9_12 = arg3 + (zx.q(x8) << 4)
x8 += 1
*x9_12 = -0xfffffff2
*(x9_12 + 8) = 0xa00000000

if ((arg1 & 0x4000) != 0)
label_9ec66c:
    void* x9_13 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_13 = -0xfffffff1
    *(x9_13 + 8) = 0xa00000000
    
    if ((arg1 & 0x8000) == 0)
        goto label_9ec4f0
    
    goto label_9ec68c

label_9ec4ec:

if ((arg1 & 0x8000) == 0)
label_9ec4f0:
    
    if ((arg1 & 0x10000) != 0)
        goto label_9ec6ac
    
    goto label_9ec4f4

label_9ec68c:
void* x9_14 = arg3 + (zx.q(x8) << 4)
x8 += 1
*x9_14 = -0xfffffff0
*(x9_14 + 8) = 0xa00000000

if ((arg1 & 0x10000) != 0)
label_9ec6ac:
    void* x9_15 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_15 = -0xffffffef
    *(x9_15 + 8) = 0xa00000000
    
    if ((arg1 & 0x20000) == 0)
        goto label_9ec4f8
    
    goto label_9ec6cc

label_9ec4f4:

if ((arg1 & 0x20000) != 0)
label_9ec6cc:
    void* x9_16 = arg3 + (zx.q(x8) << 4)
    x8 += 1
    *x9_16 = -0xffffffee
    *(x9_16 + 8) = 0xa00000000
    
    if (arg2 != 0)
    label_9ec6e4:
        
        if ((arg1 & 1) != 0)
            void* x9_17 = arg3 + (zx.q(x8) << 4)
            *x9_17 = 0x13
            *(x9_17 + 4) = arg2
            *(x9_17 + 8) = 0xa00000000
            return zx.q(x8 + 1)
else
label_9ec4f8:
    
    if (arg2 != 0)
        goto label_9ec6e4

return zx.q(x8)
