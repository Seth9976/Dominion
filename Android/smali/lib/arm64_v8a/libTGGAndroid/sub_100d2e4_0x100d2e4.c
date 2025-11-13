// 函数: sub_100d2e4
// 地址: 0x100d2e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x12 = *arg1
arg2 = arg1[4] f+ arg2
arg3 = arg1[5] f+ arg3
arg4 = arg2 + arg4
arg5 = arg3 + arg5
uint32_t temp0 = vcvts_s32_f32(arg2)
uint32_t temp0_1 = vcvts_s32_f32(arg3)
arg2 = arg4 + arg6
arg3 = arg5 + arg7
uint32_t temp0_2 = vcvts_s32_f32(arg4)
uint32_t temp0_3 = vcvts_s32_f32(arg2)
uint32_t temp0_4 = vcvts_s32_f32(arg3)
uint32_t temp0_5 = vcvts_s32_f32(arg5)
arg1[4] = arg2
arg1[5] = arg3

if (x12 == 0)
    uint16_t* x12_3 = *(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe
    x12_3[6].b = 4
    *x12_3 = temp0_3.w
    x12_3[1] = temp0_4.w
    x12_3[2] = temp0.w
    x12_3[3] = temp0_1.w
    *(*(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe + 8) = temp0_2.w
    *(*(arg1 + 0x28) + sx.q(arg1[0xc]) * 0xe + 0xa) = temp0_5.w
    arg1[0xc] += 1
    return arg2

uint32_t x12_1 = arg1[7]
uint32_t x13_2

if (x12_1 s>= temp0_3 && arg1[1] != 0)
    x13_2 = arg1[9]
    
    if (x13_2 s>= temp0_4 && arg1[1] != 0)
        goto label_100d364
    
    goto label_100d374

x12_1 = temp0_3
arg1[7] = temp0_3
x13_2 = arg1[9]
uint32_t x14_2

if (x13_2 s>= temp0_4 && arg1[1] != 0)
label_100d364:
    x14_2 = arg1[6]
    
    if (x14_2 s<= temp0_3 && arg1[1] != 0)
        goto label_100d390
    
    goto label_100d3a0

label_100d374:
x13_2 = temp0_4
arg1[9] = temp0_4
x14_2 = arg1[6]
uint32_t x15_1

if (x14_2 s<= temp0_3 && arg1[1] != 0)
label_100d390:
    x15_1 = arg1[8]
    
    if (x15_1 s<= temp0_4 && arg1[1] != 0)
        goto label_100d3c4
    
    goto label_100d420

label_100d3a0:
x14_2 = temp0_3
arg1[6] = temp0_3
x15_1 = arg1[8]

if (x15_1 s<= temp0_4 && arg1[1] != 0)
label_100d3c4:
    arg1[1] = 1
    
    if (x12_1 s< temp0)
        goto label_100d438
    
    goto label_100d3cc

label_100d420:
x15_1 = temp0_4
arg1[8] = temp0_4
arg1[1] = 1

if (x12_1 s< temp0)
label_100d438:
    x12_1 = temp0
    arg1[7] = temp0
    
    if (x13_2 s>= temp0_1)
        goto label_100d3d4
    
    goto label_100d448

label_100d3cc:

if (x13_2 s>= temp0_1)
label_100d3d4:
    
    if (x14_2 s> temp0)
        goto label_100d458
    
    goto label_100d3dc

label_100d448:
x13_2 = temp0_1
arg1[9] = temp0_1

if (x14_2 s> temp0)
label_100d458:
    x14_2 = temp0
    arg1[6] = temp0
    
    if (x15_1 s<= temp0_1)
        goto label_100d3e4
    
    goto label_100d468

label_100d3dc:

if (x15_1 s<= temp0_1)
label_100d3e4:
    
    if (x12_1 s< temp0_2)
        goto label_100d478
    
    goto label_100d3ec

label_100d468:
x15_1 = temp0_1
arg1[8] = temp0_1

if (x12_1 s< temp0_2)
label_100d478:
    arg1[7] = temp0_2
    
    if (x13_2 s>= temp0_5)
        goto label_100d3f4
    
    goto label_100d484

label_100d3ec:

if (x13_2 s>= temp0_5)
label_100d3f4:
    
    if (x14_2 s> temp0_2)
        goto label_100d490
    
    goto label_100d3fc

label_100d484:
arg1[9] = temp0_5

if (x14_2 s<= temp0_2)
label_100d3fc:
    
    if (x15_1 s> temp0_5)
        arg1[8] = temp0_5
else
label_100d490:
    arg1[6] = temp0_2
    
    if (x15_1 s> temp0_5)
        arg1[8] = temp0_5

arg1[1] = 1
arg1[0xc] += 1
return arg2
