// 函数: _Z27CollectActiveExpansions_OldiP12DomExpansion
// 地址: 0x9e6198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8

if ((arg1 & 1) != 0)
    *arg2 = 2
    x8 = 1
    
    if ((arg1 & 2) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 3
        x8 += 1
else
    x8 = 0
    
    if ((arg1 & 2) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 3
        x8 += 1

if ((arg1 & 4) == 0)
    if ((arg1 & 8) != 0)
        goto label_9e622c
    
    goto label_9e61d0

*(arg2 + (zx.q(x8) << 2)) = 4
x8 += 1

if ((arg1 & 8) != 0)
label_9e622c:
    *(arg2 + (zx.q(x8) << 2)) = 5
    x8 += 1
    
    if ((arg1 & 0x10) == 0)
        goto label_9e61d4
    
    goto label_9e6240

label_9e61d0:

if ((arg1 & 0x10) == 0)
label_9e61d4:
    
    if ((arg1 & 0x20) != 0)
        goto label_9e6254
    
    goto label_9e61d8

label_9e6240:
*(arg2 + (zx.q(x8) << 2)) = 6
x8 += 1

if ((arg1 & 0x20) != 0)
label_9e6254:
    *(arg2 + (zx.q(x8) << 2)) = 7
    x8 += 1
    
    if ((arg1 & 0x40) == 0)
        goto label_9e61dc
    
    goto label_9e6268

label_9e61d8:

if ((arg1 & 0x40) == 0)
label_9e61dc:
    
    if ((arg1 & 0x80) != 0)
        goto label_9e627c
    
    goto label_9e61e0

label_9e6268:
*(arg2 + (zx.q(x8) << 2)) = 8
x8 += 1

if ((arg1 & 0x80) != 0)
label_9e627c:
    *(arg2 + (zx.q(x8) << 2)) = 9
    x8 += 1
    
    if ((arg1 & 0x100) == 0)
        goto label_9e61e4
    
    goto label_9e6290

label_9e61e0:

if ((arg1 & 0x100) == 0)
label_9e61e4:
    
    if ((arg1 & 0x200) != 0)
        goto label_9e62a4
    
    goto label_9e61e8

label_9e6290:
*(arg2 + (zx.q(x8) << 2)) = 0xa
x8 += 1

if ((arg1 & 0x200) != 0)
label_9e62a4:
    *(arg2 + (zx.q(x8) << 2)) = 0xb
    x8 += 1
    
    if ((arg1 & 0x400) == 0)
        goto label_9e61ec
    
    goto label_9e62b8

label_9e61e8:

if ((arg1 & 0x400) == 0)
label_9e61ec:
    
    if ((arg1 & 0x800) != 0)
        goto label_9e62cc
    
    goto label_9e61f0

label_9e62b8:
*(arg2 + (zx.q(x8) << 2)) = 0xc
x8 += 1

if ((arg1 & 0x800) != 0)
label_9e62cc:
    *(arg2 + (zx.q(x8) << 2)) = 0xd
    x8 += 1
    
    if ((arg1 & 0x1000) == 0)
        goto label_9e61f4
    
    goto label_9e62e0

label_9e61f0:

if ((arg1 & 0x1000) == 0)
label_9e61f4:
    
    if ((arg1 & 0x2000) != 0)
        goto label_9e62f4
    
    goto label_9e61f8

label_9e62e0:
*(arg2 + (zx.q(x8) << 2)) = 0xe
x8 += 1

if ((arg1 & 0x2000) != 0)
label_9e62f4:
    *(arg2 + (zx.q(x8) << 2)) = 0xf
    x8 += 1
    
    if ((arg1 & 0x4000) == 0)
        goto label_9e61fc
    
    goto label_9e6308

label_9e61f8:

if ((arg1 & 0x4000) == 0)
label_9e61fc:
    
    if ((arg1 & 0x8000) != 0)
        goto label_9e631c
    
    goto label_9e6200

label_9e6308:
*(arg2 + (zx.q(x8) << 2)) = 0x10
x8 += 1

if ((arg1 & 0x8000) != 0)
label_9e631c:
    *(arg2 + (zx.q(x8) << 2)) = 0x11
    x8 += 1
    
    if ((arg1 & 0x10000) == 0)
        goto label_9e6204
    
    goto label_9e6330

label_9e6200:

if ((arg1 & 0x10000) != 0)
label_9e6330:
    *(arg2 + (zx.q(x8) << 2)) = 0x12
    x8 += 1
    
    if ((arg1 & 0x20000) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 0x13
        return zx.q(x8 + 1)
else
label_9e6204:
    
    if ((arg1 & 0x20000) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 0x13
        return zx.q(x8 + 1)

return zx.q(x8)
