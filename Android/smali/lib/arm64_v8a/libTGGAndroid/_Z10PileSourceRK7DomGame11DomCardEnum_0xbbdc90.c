// 函数: _Z10PileSourceRK7DomGame11DomCardEnum
// 地址: 0xbbdc90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x21 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x20 = arg2
int64_t x8_6

if (x9 != 0)
    while (*x9 != x20 || x9[1] != x21)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bbdcf0
    
    x8_6 = *(*(x9 + 8) + 0xc8)
    
    if ((x8_6 & 0x80) != 0)
        return 0x1128
else
label_bbdcf0:
    DomDefGetSlow(zx.q(x20), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x20
    x0_1[1] = x21
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    void* x0_3 = DomDefGetSlow(zx.q(x20), zx.q(x21))
    *(x0_1 + 8) = x0_3
    x8_6 = *(x0_3 + 0xc8)
    
    if ((x8_6 & 0x80) != 0)
        return 0x1128

if ((x8_6.d & 0x10000) != 0)
    return 0xc0a

if ((x8_6.d & 0x2000) != 0)
    return 0x91c

if ((x8_6.d & 0x8000) != 0)
    return 0x923

if ((x8_6 & 1) != 0)
    return 0x1019

if ((x8_6 & 2) != 0)
    return 0x101e

if ((x8_6 & 4) != 0)
    return 0x1023

if ((x8_6 & 8) != 0)
    return 0x1028

if ((x8_6 & 0x10) != 0)
    return 0x102d

if ((x8_6 & 0x20) != 0)
    return 0x1032

if ((x8_6 & 0x200) != 0)
    return 0x718

if ((x8_6.d & 0x800) != 0)
    return 0x70d

if ((x8_6.d & 0x2000000) != 0)
    return 0xd3d

if ((x8_6.d & 0x1000000) != 0)
    return 0xd30

uint64_t x8_7 = zx.q(x20 - 0xc05)

if (x8_7.d u> 0xc)
    if (x20 == 0x1306)
        return 0x1305
    
    goto label_bbde50

switch (x8_7)
    case 0
        return 0xc04
    case 1, 3, 5, 6, 8, 9, 0xa, 0xb
    label_bbde50:
        int32_t x8_8 = *(arg1 + 0x1288)
        
        if (x8_8 == 0)
            return zx.q(x20)
        
        if (x8_8 == 0xdc6 && *(arg1 + 0x1298) == x20)
            return zx.q(*(arg1 + 0x128c))
        
        int32_t x8_11 = *(arg1 + 0x129c)
        
        if (x8_11 == 0)
            return zx.q(x20)
        
        if (x8_11 == 0xdc6 && *(arg1 + 0x12ac) == x20)
            return zx.q(*(arg1 + 0x12a0))
        
        int32_t x8_13 = *(arg1 + 0x12b0)
        
        if (x8_13 == 0)
            return zx.q(x20)
        
        if (x8_13 == 0xdc6 && *(arg1 + 0x12c0) == x20)
            return zx.q(*(arg1 + 2 * 0x14 + 0x128c))
        
        int32_t x8_15 = *(arg1 + 0x12c4)
        
        if (x8_15 == 0)
            return zx.q(x20)
        
        if (x8_15 == 0xdc6 && *(arg1 + 0x12d4) == x20)
            return zx.q(*(arg1 + 3 * 0x14 + 0x128c))
        
        int32_t x8_17 = *(arg1 + 0x12d8)
        
        if (x8_17 == 0)
            return zx.q(x20)
        
        if (x8_17 == 0xdc6 && *(arg1 + 0x12e8) == x20)
            return zx.q(*(arg1 + 4 * 0x14 + 0x128c))
        
        int32_t x8_19 = *(arg1 + 0x12ec)
        
        if (x8_19 == 0)
            return zx.q(x20)
        
        if (x8_19 == 0xdc6 && *(arg1 + 0x12fc) == x20)
            return zx.q(*(arg1 + 5 * 0x14 + 0x128c))
        
        int32_t x8_21 = *(arg1 + 0x1300)
        
        if (x8_21 == 0)
            return zx.q(x20)
        
        if (x8_21 == 0xdc6 && *(arg1 + 0x1310) == x20)
            return zx.q(*(arg1 + 6 * 0x14 + 0x128c))
        
        int32_t x8_23 = *(arg1 + 0x1314)
        
        if (x8_23 == 0)
            return zx.q(x20)
        
        if (x8_23 == 0xdc6 && *(arg1 + 0x1324) == x20)
            return zx.q(*(arg1 + 7 * 0x14 + 0x128c))
        
        int32_t x8_25 = *(arg1 + 0x1328)
        
        if (x8_25 == 0)
            return zx.q(x20)
        
        if (x8_25 == 0xdc6 && *(arg1 + 0x1338) == x20)
            return zx.q(*(arg1 + 8 * 0x14 + 0x128c))
        
        int32_t x8_27 = *(arg1 + 0x133c)
        
        if (x8_27 == 0)
            return zx.q(x20)
        
        if (x8_27 == 0xdc6 && *(arg1 + 0x134c) == x20)
            return zx.q(*(arg1 + 9 * 0x14 + 0x128c))
        
        int32_t x8_29 = *(arg1 + 0x1350)
        
        if (x8_29 == 0)
            return zx.q(x20)
        
        if (x8_29 == 0xdc6 && *(arg1 + 0x1360) == x20)
            return zx.q(*(arg1 + 0xa * 0x14 + 0x128c))
        
        int32_t x8_31 = *(arg1 + 0x1364)
        
        if (x8_31 == 0)
            return zx.q(x20)
        
        if (x8_31 == 0xdc6 && *(arg1 + 0x1374) == x20)
            return zx.q(*(arg1 + 0xb * 0x14 + 0x128c))
        
        int32_t x8_33 = *(arg1 + 0x1378)
        
        if (x8_33 == 0)
            return zx.q(x20)
        
        if (x8_33 == 0xdc6 && *(arg1 + 0x1388) == x20)
            return zx.q(*(arg1 + 0xc * 0x14 + 0x128c))
        
        int32_t x8_35 = *(arg1 + 0x138c)
        
        if (x8_35 == 0)
            return zx.q(x20)
        
        if (x8_35 == 0xdc6 && *(arg1 + 0x139c) == x20)
            return zx.q(*(arg1 + 0xd * 0x14 + 0x128c))
        
        int32_t x8_37 = *(arg1 + 0x13a0)
        
        if (x8_37 == 0)
            return zx.q(x20)
        
        if (x8_37 == 0xdc6 && *(arg1 + 0x13b0) == x20)
            return zx.q(*(arg1 + 0xe * 0x14 + 0x128c))
        
        int32_t x8_39 = *(arg1 + 0x13b4)
        
        if (x8_39 == 0)
            return zx.q(x20)
        
        if (x8_39 == 0xdc6 && *(arg1 + 0x13c4) == x20)
            return zx.q(*(arg1 + 0xf * 0x14 + 0x128c))
        
        int32_t x8_41 = *(arg1 + 0x13c8)
        
        if (x8_41 == 0)
            return zx.q(x20)
        
        if (x8_41 == 0xdc6 && *(arg1 + 0x13d8) == x20)
            return zx.q(*(arg1 + 0x10 * 0x14 + 0x128c))
        
        int32_t x8_43 = *(arg1 + 0x13dc)
        
        if (x8_43 == 0)
            return zx.q(x20)
        
        if (x8_43 == 0xdc6 && *(arg1 + 0x13ec) == x20)
            return zx.q(*(arg1 + 0x11 * 0x14 + 0x128c))
        
        int32_t x8_45 = *(arg1 + 0x13f0)
        
        if (x8_45 == 0)
            return zx.q(x20)
        
        if (x8_45 == 0xdc6 && *(arg1 + 0x1400) == x20)
            return zx.q(*(arg1 + 0x12 * 0x14 + 0x128c))
        
        int32_t x8_47 = *(arg1 + 0x1404)
        
        if (x8_47 == 0)
            return zx.q(x20)
        
        if (x8_47 == 0xdc6 && *(arg1 + 0x1414) == x20)
            return zx.q(*(arg1 + 0x13 * 0x14 + 0x128c))
        
        int32_t x8_49 = *(arg1 + 0x1418)
        
        if (x8_49 == 0)
            return zx.q(x20)
        
        if (x8_49 == 0xdc6 && *(arg1 + 0x1428) == x20)
            return zx.q(*(arg1 + 0x14 * 0x14 + 0x128c))
        
        int32_t x8_51 = *(arg1 + 0x142c)
        
        if (x8_51 == 0)
            return zx.q(x20)
        
        if (x8_51 == 0xdc6 && *(arg1 + 0x143c) == x20)
            return zx.q(*(arg1 + 0x15 * 0x14 + 0x128c))
        
        int32_t x8_53 = *(arg1 + 0x1440)
        
        if (x8_53 == 0)
            return zx.q(x20)
        
        if (x8_53 == 0xdc6 && *(arg1 + 0x1450) == x20)
            return zx.q(*(arg1 + 0x16 * 0x14 + 0x128c))
        
        int32_t x8_55 = *(arg1 + 0x1454)
        
        if (x8_55 == 0)
            return zx.q(x20)
        
        if (x8_55 == 0xdc6 && *(arg1 + 0x1464) == x20)
            return zx.q(*(arg1 + 0x17 * 0x14 + 0x128c))
        
        int32_t x8_57 = *(arg1 + 0x1468)
        
        if (x8_57 == 0)
            return zx.q(x20)
        
        if (x8_57 == 0xdc6 && *(arg1 + 0x1478) == x20)
            return zx.q(*(arg1 + 0x18 * 0x14 + 0x128c))
        
        int32_t x8_59 = *(arg1 + 0x147c)
        
        if (x8_59 == 0)
            return zx.q(x20)
        
        if (x8_59 == 0xdc6 && *(arg1 + 0x148c) == x20)
            return zx.q(*(arg1 + 0x19 * 0x14 + 0x128c))
        
        int32_t x8_61 = *(arg1 + 0x1490)
        
        if (x8_61 == 0)
            return zx.q(x20)
        
        if (x8_61 == 0xdc6 && *(arg1 + 0x14a0) == x20)
            return zx.q(*(arg1 + 0x1a * 0x14 + 0x128c))
        
        int32_t x8_63 = *(arg1 + 0x14a4)
        
        if (x8_63 == 0)
            return zx.q(x20)
        
        if (x8_63 == 0xdc6 && *(arg1 + 0x14b4) == x20)
            return zx.q(*(arg1 + 0x1b * 0x14 + 0x128c))
        
        int32_t x8_65 = *(arg1 + 0x14b8)
        
        if (x8_65 == 0)
            return zx.q(x20)
        
        if (x8_65 == 0xdc6 && *(arg1 + 0x14c8) == x20)
            return zx.q(*(arg1 + 0x1c * 0x14 + 0x128c))
        
        int32_t x8_67 = *(arg1 + 0x14cc)
        
        if (x8_67 == 0)
            return zx.q(x20)
        
        if (x8_67 == 0xdc6 && *(arg1 + 0x14dc) == x20)
            return zx.q(*(arg1 + 0x1d * 0x14 + 0x128c))
        
        int32_t x8_69 = *(arg1 + 0x14e0)
        
        if (x8_69 == 0)
            return zx.q(x20)
        
        if (x8_69 == 0xdc6 && *(arg1 + 0x14f0) == x20)
            return zx.q(*(arg1 + 0x1e * 0x14 + 0x128c))
        
        if (*(arg1 + 0x14f4) != 0xdc6)
            return zx.q(x20)
        
        if (*(arg1 + 0x1504) != x20)
            return zx.q(x20)
        
        return zx.q(*(arg1 + 0x1f * 0x14 + 0x128c))
    case 2
        return 0xc06
    case 4
        return 0xc08
    case 7
        return 0xc0b
    case 0xc
        return 0xc10
