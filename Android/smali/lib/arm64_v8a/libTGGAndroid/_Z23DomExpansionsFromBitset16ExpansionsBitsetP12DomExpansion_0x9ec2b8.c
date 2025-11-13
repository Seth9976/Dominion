// 函数: _Z23DomExpansionsFromBitset16ExpansionsBitsetP12DomExpansion
// 地址: 0x9ec2b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8

if ((arg1 & 2) != 0)
    *arg2 = 2
    x8 = 1
    
    if ((arg1 & 4) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 3
        x8 += 1
else
    x8 = 0
    
    if ((arg1 & 4) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 3
        x8 += 1

if ((arg1 & 8) == 0)
    if ((arg1 & 0x10) != 0)
        goto label_9ec34c
    
    goto label_9ec2f0

*(arg2 + (zx.q(x8) << 2)) = 4
x8 += 1

if ((arg1 & 0x10) != 0)
label_9ec34c:
    *(arg2 + (zx.q(x8) << 2)) = 5
    x8 += 1
    
    if ((arg1 & 0x20) == 0)
        goto label_9ec2f4
    
    goto label_9ec360

label_9ec2f0:

if ((arg1 & 0x20) == 0)
label_9ec2f4:
    
    if ((arg1 & 0x40) != 0)
        goto label_9ec374
    
    goto label_9ec2f8

label_9ec360:
*(arg2 + (zx.q(x8) << 2)) = 6
x8 += 1

if ((arg1 & 0x40) != 0)
label_9ec374:
    *(arg2 + (zx.q(x8) << 2)) = 7
    x8 += 1
    
    if ((arg1 & 0x80) == 0)
        goto label_9ec2fc
    
    goto label_9ec388

label_9ec2f8:

if ((arg1 & 0x80) == 0)
label_9ec2fc:
    
    if ((arg1 & 0x100) != 0)
        goto label_9ec39c
    
    goto label_9ec300

label_9ec388:
*(arg2 + (zx.q(x8) << 2)) = 8
x8 += 1

if ((arg1 & 0x100) != 0)
label_9ec39c:
    *(arg2 + (zx.q(x8) << 2)) = 9
    x8 += 1
    
    if ((arg1 & 0x200) == 0)
        goto label_9ec304
    
    goto label_9ec3b0

label_9ec300:

if ((arg1 & 0x200) == 0)
label_9ec304:
    
    if ((arg1 & 0x400) != 0)
        goto label_9ec3c4
    
    goto label_9ec308

label_9ec3b0:
*(arg2 + (zx.q(x8) << 2)) = 0xa
x8 += 1

if ((arg1 & 0x400) != 0)
label_9ec3c4:
    *(arg2 + (zx.q(x8) << 2)) = 0xb
    x8 += 1
    
    if ((arg1 & 0x800) == 0)
        goto label_9ec30c
    
    goto label_9ec3d8

label_9ec308:

if ((arg1 & 0x800) == 0)
label_9ec30c:
    
    if ((arg1 & 0x1000) != 0)
        goto label_9ec3ec
    
    goto label_9ec310

label_9ec3d8:
*(arg2 + (zx.q(x8) << 2)) = 0xc
x8 += 1

if ((arg1 & 0x1000) != 0)
label_9ec3ec:
    *(arg2 + (zx.q(x8) << 2)) = 0xd
    x8 += 1
    
    if ((arg1 & 0x2000) == 0)
        goto label_9ec314
    
    goto label_9ec400

label_9ec310:

if ((arg1 & 0x2000) == 0)
label_9ec314:
    
    if ((arg1 & 0x4000) != 0)
        goto label_9ec414
    
    goto label_9ec318

label_9ec400:
*(arg2 + (zx.q(x8) << 2)) = 0xe
x8 += 1

if ((arg1 & 0x4000) != 0)
label_9ec414:
    *(arg2 + (zx.q(x8) << 2)) = 0xf
    x8 += 1
    
    if ((arg1 & 0x8000) == 0)
        goto label_9ec31c
    
    goto label_9ec428

label_9ec318:

if ((arg1 & 0x8000) == 0)
label_9ec31c:
    
    if ((arg1 & 0x10000) != 0)
        goto label_9ec43c
    
    goto label_9ec320

label_9ec428:
*(arg2 + (zx.q(x8) << 2)) = 0x10
x8 += 1

if ((arg1 & 0x10000) != 0)
label_9ec43c:
    *(arg2 + (zx.q(x8) << 2)) = 0x11
    x8 += 1
    
    if ((arg1 & 0x20000) == 0)
        goto label_9ec324
    
    goto label_9ec450

label_9ec320:

if ((arg1 & 0x20000) != 0)
label_9ec450:
    *(arg2 + (zx.q(x8) << 2)) = 0x12
    x8 += 1
    
    if ((arg1 & 1) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 0x13
        return zx.q(x8 + 1)
else
label_9ec324:
    
    if ((arg1 & 1) != 0)
        *(arg2 + (zx.q(x8) << 2)) = 0x13
        return zx.q(x8 + 1)

return zx.q(x8)
