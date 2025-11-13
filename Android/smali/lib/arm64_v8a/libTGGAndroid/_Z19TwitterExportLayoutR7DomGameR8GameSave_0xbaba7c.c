// 函数: _Z19TwitterExportLayoutR7DomGameR8GameSave
// 地址: 0xbaba7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_b590
memset(&var_b590, 0, 0xb530)
int32_t var_2e888[0x88d6]
CalcPlayerScoreInfo(arg1, &var_2e888)
int32_t x8 = *(arg1 + 0x159c)
int32_t i_31

if (x8 != 0)
    int64_t i_41 = sx.q(i_31)
    int32_t* x9_1 = &var_b590 + i_41 * 0x38
    i_31 = i_41.d + 1
    *x9_1 = x8
    x9_1[1].b = (*(arg1 + 0x15a4) == 0 ? 1 : 0).b

int32_t x8_3 = *(arg1 + 0x15ac)

if (x8_3 != 0)
    int64_t i_42 = sx.q(i_31)
    int32_t* x9_2 = &var_b590 + i_42 * 0x38
    i_31 = i_42.d + 1
    *x9_2 = x8_3
    x9_2[1].b = (*(arg1 + 0x15b4) == 0 ? 1 : 0).b

int32_t x8_6 = *(arg1 + 0x15bc)

if (x8_6 != 0)
    int64_t i_43 = sx.q(i_31)
    int32_t* x9_3 = &var_b590 + i_43 * 0x38
    i_31 = i_43.d + 1
    *x9_3 = x8_6
    x9_3[1].b = (*(arg1 + 0x15c4) == 0 ? 1 : 0).b

int32_t x8_9 = *(arg1 + 0x15cc)

if (x8_9 != 0)
    int64_t i_44 = sx.q(i_31)
    int32_t* x9_4 = &var_b590 + i_44 * 0x38
    i_31 = i_44.d + 1
    *x9_4 = x8_9
    x9_4[1].b = (*(arg1 + 0x15d4) == 0 ? 1 : 0).b

int32_t x8_12 = *(arg1 + 0x15dc)

if (x8_12 != 0)
    int64_t i_45 = sx.q(i_31)
    int32_t* x9_5 = &var_b590 + i_45 * 0x38
    i_31 = i_45.d + 1
    *x9_5 = x8_12
    x9_5[1].b = (*(arg1 + 0x15e4) == 0 ? 1 : 0).b

int32_t x8_15 = *(arg1 + 0x15ec)

if (x8_15 != 0)
    int64_t i_46 = sx.q(i_31)
    int32_t* x9_6 = &var_b590 + i_46 * 0x38
    i_31 = i_46.d + 1
    *x9_6 = x8_15
    x9_6[1].b = (*(arg1 + 0x15f4) == 0 ? 1 : 0).b

int32_t x8_18 = *(arg1 + 0x15fc)

if (x8_18 != 0)
    int64_t i_47 = sx.q(i_31)
    int32_t* x9_7 = &var_b590 + i_47 * 0x38
    i_31 = i_47.d + 1
    *x9_7 = x8_18
    x9_7[1].b = (*(arg1 + 0x1604) == 0 ? 1 : 0).b

int32_t x8_21 = *(arg1 + 0x160c)

if (x8_21 != 0)
    int64_t i_48 = sx.q(i_31)
    int32_t* x9_8 = &var_b590 + i_48 * 0x38
    i_31 = i_48.d + 1
    *x9_8 = x8_21
    x9_8[1].b = (*(arg1 + 0x1614) == 0 ? 1 : 0).b

int32_t x8_24 = *(arg1 + 0x161c)

if (x8_24 != 0)
    int64_t i_49 = sx.q(i_31)
    int32_t* x9_9 = &var_b590 + i_49 * 0x38
    i_31 = i_49.d + 1
    *x9_9 = x8_24
    x9_9[1].b = (*(arg1 + 0x1624) == 0 ? 1 : 0).b

int32_t x8_27 = *(arg1 + 0x162c)

if (x8_27 != 0)
    int64_t i_50 = sx.q(i_31)
    int32_t* x9_10 = &var_b590 + i_50 * 0x38
    i_31 = i_50.d + 1
    *x9_10 = x8_27
    x9_10[1].b = (*(arg1 + 0x1634) == 0 ? 1 : 0).b

int32_t x8_30 = *(arg1 + 0x163c)

if (x8_30 != 0)
    int64_t i_51 = sx.q(i_31)
    int32_t* x9_11 = &var_b590 + i_51 * 0x38
    i_31 = i_51.d + 1
    *x9_11 = x8_30
    x9_11[1].b = (*(arg1 + 0x1644) == 0 ? 1 : 0).b

bool (* var_2f508)(PileCount const&, PileCount const&) = TwitterSortStandard
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
v0, v1, v2, v3, v4, v5, v6, v7 =
    std::__ndk1::__sort<bool (*&)(PileCount const&, PileCount const&), PileCount*>(&var_b590, 
    &var_b590 + sx.q(i_31) * 0x38, &var_2f508)
int32_t x8_34 = *(arg1 + 0x165c)
int32_t var_b04c

if (x8_34 != 0)
    int64_t x9_12 = sx.q(var_b04c)
    void* x9_13 = &var_b590 + x9_12 * 0x38
    var_b04c = x9_12.d + 1
    *(x9_13 + 0x2a4) = x8_34
    *(x9_13 + 0x2a8) = (*(arg1 + 0x1664) == 0 ? 1 : 0).b

int32_t x8_37 = *(arg1 + 0x166c)

if (x8_37 != 0)
    int64_t x9_14 = sx.q(var_b04c)
    void* x9_15 = &var_b590 + x9_14 * 0x38
    var_b04c = x9_14.d + 1
    *(x9_15 + 0x2a4) = x8_37
    *(x9_15 + 0x2a8) = (*(arg1 + 0x1674) == 0 ? 1 : 0).b

int32_t x8_40 = *(arg1 + 0x167c)

if (x8_40 != 0)
    int64_t x9_16 = sx.q(var_b04c)
    void* x9_17 = &var_b590 + x9_16 * 0x38
    var_b04c = x9_16.d + 1
    *(x9_17 + 0x2a4) = x8_40
    *(x9_17 + 0x2a8) = (*(arg1 + 0x1684) == 0 ? 1 : 0).b

int32_t x8_43 = *(arg1 + 0x168c)

if (x8_43 != 0)
    int64_t x9_18 = sx.q(var_b04c)
    void* x9_19 = &var_b590 + x9_18 * 0x38
    var_b04c = x9_18.d + 1
    *(x9_19 + 0x2a4) = x8_43
    *(x9_19 + 0x2a8) = (*(arg1 + 0x1694) == 0 ? 1 : 0).b

int32_t x8_46 = *(arg1 + 0x169c)

if (x8_46 != 0)
    int64_t x9_20 = sx.q(var_b04c)
    void* x9_21 = &var_b590 + x9_20 * 0x38
    var_b04c = x9_20.d + 1
    *(x9_21 + 0x2a4) = x8_46
    *(x9_21 + 0x2a8) = (*(arg1 + 0x16a4) == 0 ? 1 : 0).b

int32_t x8_49 = *(arg1 + 0x16ac)

if (x8_49 != 0)
    int64_t x9_22 = sx.q(var_b04c)
    void* x9_23 = &var_b590 + x9_22 * 0x38
    var_b04c = x9_22.d + 1
    *(x9_23 + 0x2a4) = x8_49
    *(x9_23 + 0x2a8) = (*(arg1 + 0x16b4) == 0 ? 1 : 0).b

int32_t x8_52 = *(arg1 + 0x16bc)

if (x8_52 != 0)
    int64_t x9_24 = sx.q(var_b04c)
    void* x9_25 = &var_b590 + x9_24 * 0x38
    var_b04c = x9_24.d + 1
    *(x9_25 + 0x2a4) = x8_52
    *(x9_25 + 0x2a8) = (*(arg1 + 0x16c4) == 0 ? 1 : 0).b

int32_t x8_55 = *(arg1 + 0x16cc)

if (x8_55 != 0)
    int64_t x9_26 = sx.q(var_b04c)
    void* x9_27 = &var_b590 + x9_26 * 0x38
    var_b04c = x9_26.d + 1
    *(x9_27 + 0x2a4) = x8_55
    *(x9_27 + 0x2a8) = (*(arg1 + 0x16d4) == 0 ? 1 : 0).b

int32_t x8_58 = *(arg1 + 0x16dc)

if (x8_58 != 0)
    int64_t x9_28 = sx.q(var_b04c)
    void* x9_29 = &var_b590 + x9_28 * 0x38
    var_b04c = x9_28.d + 1
    *(x9_29 + 0x2a4) = x8_58
    *(x9_29 + 0x2a8) = (*(arg1 + 0x16e4) == 0 ? 1 : 0).b

int32_t x8_61 = *(arg1 + 0x16ec)

if (x8_61 != 0)
    int64_t x9_30 = sx.q(var_b04c)
    void* x9_31 = &var_b590 + x9_30 * 0x38
    var_b04c = x9_30.d + 1
    *(x9_31 + 0x2a4) = x8_61
    *(x9_31 + 0x2a8) = (*(arg1 + 0x16f4) == 0 ? 1 : 0).b

int32_t x8_64 = *(arg1 + 0x16fc)

if (x8_64 != 0)
    int64_t x9_32 = sx.q(var_b04c)
    void* x9_33 = &var_b590 + x9_32 * 0x38
    var_b04c = x9_32.d + 1
    *(x9_33 + 0x2a4) = x8_64
    *(x9_33 + 0x2a8) = (*(arg1 + 0x1704) == 0 ? 1 : 0).b

int32_t x8_67 = *(arg1 + 0x170c)

if (x8_67 != 0)
    int64_t x9_34 = sx.q(var_b04c)
    void* x9_35 = &var_b590 + x9_34 * 0x38
    var_b04c = x9_34.d + 1
    *(x9_35 + 0x2a4) = x8_67
    *(x9_35 + 0x2a8) = (*(arg1 + 0x1714) == 0 ? 1 : 0).b

int32_t x8_70 = *(arg1 + 0x171c)

if (x8_70 != 0)
    int64_t x9_36 = sx.q(var_b04c)
    void* x9_37 = &var_b590 + x9_36 * 0x38
    var_b04c = x9_36.d + 1
    *(x9_37 + 0x2a4) = x8_70
    *(x9_37 + 0x2a8) = (*(arg1 + 0x1724) == 0 ? 1 : 0).b

int32_t x8_73 = *(arg1 + 0x172c)

if (x8_73 != 0)
    int64_t x9_38 = sx.q(var_b04c)
    void* x9_39 = &var_b590 + x9_38 * 0x38
    var_b04c = x9_38.d + 1
    *(x9_39 + 0x2a4) = x8_73
    *(x9_39 + 0x2a8) = (*(arg1 + 0x1734) == 0 ? 1 : 0).b

uint64_t x8_76 = zx.q(*(arg1 + 0xd40))
int32_t x12_24 = *(arg1 + 0x174c)
void var_b2ec
int32_t i_24
int32_t var_64

if (x8_76.d s<= 0)
    if (x12_24 != 0)
        int64_t i_32 = sx.q(i_24)
        i_24 = i_32.d + 1
        *(&var_b590 + i_32 * 0x38 + 0x548) = x12_24
    
    int32_t x8_78 = *(arg1 + 0x175c)
    
    if (x8_78 != 0)
        int64_t i_33 = sx.q(i_24)
        i_24 = i_33.d + 1
        *(&var_b590 + i_33 * 0x38 + 0x548) = x8_78
    
    int32_t x8_79 = *(arg1 + 0x176c)
    
    if (x8_79 != 0)
        int64_t i_34 = sx.q(i_24)
        i_24 = i_34.d + 1
        *(&var_b590 + i_34 * 0x38 + 0x548) = x8_79
    
    int32_t x8_80 = *(arg1 + 0x177c)
    
    if (x8_80 != 0)
        int64_t i_35 = sx.q(i_24)
        i_24 = i_35.d + 1
        *(&var_b590 + i_35 * 0x38 + 0x548) = x8_80
else
    if (x12_24 != 0)
        int64_t i_36 = sx.q(i_24)
        i_24 = i_36.d + 1
        *(&var_b590 + i_36 * 0x38 + 0x548) = x12_24
        int64_t i_27
        
        if (x8_76.d u>= 9)
            int64_t x12_29
            
            if ((x8_76 & 7) == 0)
                x12_29 = 8
            else
                x12_29 = x8_76 & 7
            
            void* __offset(DomGame, 0x60cfc) x13_2 = arg1 + 0x60cfc
            i_27 = x8_76 - x12_29
            void* x14_3 = &var_b590 + i_36 * 0x38 + 0x560
            int64_t i_20 = i_27
            int64_t i
            
            do
                v0.d = *x13_2
                v1.d = *(x13_2 + 4)
                v2.d = *(x13_2 + 8)
                v3.d = *(x13_2 + 0xc)
                v0:4.d = *(x13_2 + 0x10)
                v1:4.d = *(x13_2 + 0x14)
                v2:4.d = *(x13_2 + 0x18)
                v3:4.d = *(x13_2 + 0x1c)
                v0:8.d = *(x13_2 + 0x20)
                v1:8.d = *(x13_2 + 0x24)
                v2:8.d = *(x13_2 + 0x28)
                v3:8.d = *(x13_2 + 0x2c)
                v0:0xc.d = *(x13_2 + 0x30)
                v1:0xc.d = *(x13_2 + 0x34)
                v2:0xc.d = *(x13_2 + 0x38)
                v3:0xc.d = *(x13_2 + 0x3c)
                v4.d = *(x13_2 - 0x40)
                v5.d = *(x13_2 - 0x3c)
                v6.d = *(x13_2 - 0x38)
                v7.d = *(x13_2 - 0x34)
                v4:4.d = *(x13_2 - 0x30)
                v5:4.d = *(x13_2 - 0x2c)
                v6:4.d = *(x13_2 - 0x28)
                v7:4.d = *(x13_2 - 0x24)
                v4:8.d = *(x13_2 - 0x20)
                v5:8.d = *(x13_2 - 0x1c)
                v6:8.d = *(x13_2 - 0x18)
                v7:8.d = *(x13_2 - 0x14)
                v4:0xc.d = *(x13_2 - 0x10)
                v5:0xc.d = *(x13_2 - 0xc)
                v6:0xc.d = *(x13_2 - 8)
                v7:0xc.d = *(x13_2 - 4)
                x13_2 += 0x80
                i = i_20
                i_20 -= 8
                *(x14_3 - 0x10) = v4
                *x14_3 = v0
                x14_3 += 0x20
            while (i != 8)
        else
            i_27 = 0
        
        void* x13_4 = arg1 + 0x60cbc + (i_27 << 4)
        int32_t* x10_3 = &var_b590 + i_36 * 0x38 + (i_27 << 2) + 0x550
        int64_t i_16 = x8_76 - i_27
        int64_t i_1
        
        do
            int32_t x12_30 = *x13_4
            x13_4 += 0x10
            i_1 = i_16
            i_16 -= 1
            *x10_3 = x12_30
            x10_3 = &x10_3[1]
        while (i_1 != 1)
    
    int32_t x12_31 = *(arg1 + 0x175c)
    
    if (x12_31 != 0)
        int64_t i_37 = sx.q(i_24)
        i_24 = i_37.d + 1
        *(&var_b590 + i_37 * 0x38 + 0x548) = x12_31
        int64_t i_28
        
        if (x8_76.d u>= 9)
            int64_t x12_33
            
            if ((x8_76 & 7) == 0)
                x12_33 = 8
            else
                x12_33 = x8_76 & 7
            
            void* __offset(DomGame, 0x60d00) x13_6 = arg1 + 0x60d00
            i_28 = x8_76 - x12_33
            void* x14_6 = &var_b590 + i_37 * 0x38 + 0x560
            int64_t i_21 = i_28
            int64_t i_2
            
            do
                v0.d = *x13_6
                v1.d = *(x13_6 + 4)
                v2.d = *(x13_6 + 8)
                v3.d = *(x13_6 + 0xc)
                v0:4.d = *(x13_6 + 0x10)
                v1:4.d = *(x13_6 + 0x14)
                v2:4.d = *(x13_6 + 0x18)
                v3:4.d = *(x13_6 + 0x1c)
                v0:8.d = *(x13_6 + 0x20)
                v1:8.d = *(x13_6 + 0x24)
                v2:8.d = *(x13_6 + 0x28)
                v3:8.d = *(x13_6 + 0x2c)
                v0:0xc.d = *(x13_6 + 0x30)
                v1:0xc.d = *(x13_6 + 0x34)
                v2:0xc.d = *(x13_6 + 0x38)
                v3:0xc.d = *(x13_6 + 0x3c)
                v4.d = *(x13_6 - 0x40)
                v5.d = *(x13_6 - 0x3c)
                v6.d = *(x13_6 - 0x38)
                v7.d = *(x13_6 - 0x34)
                v4:4.d = *(x13_6 - 0x30)
                v5:4.d = *(x13_6 - 0x2c)
                v6:4.d = *(x13_6 - 0x28)
                v7:4.d = *(x13_6 - 0x24)
                v4:8.d = *(x13_6 - 0x20)
                v5:8.d = *(x13_6 - 0x1c)
                v6:8.d = *(x13_6 - 0x18)
                v7:8.d = *(x13_6 - 0x14)
                v4:0xc.d = *(x13_6 - 0x10)
                v5:0xc.d = *(x13_6 - 0xc)
                v6:0xc.d = *(x13_6 - 8)
                v7:0xc.d = *(x13_6 - 4)
                x13_6 += 0x80
                i_2 = i_21
                i_21 -= 8
                *(x14_6 - 0x10) = v4
                *x14_6 = v0
                x14_6 += 0x20
            while (i_2 != 8)
        else
            i_28 = 0
        
        int64_t i_17 = x8_76 - i_28
        int32_t* x10_6 = &var_b590 + i_37 * 0x38 + (i_28 << 2) + 0x550
        void* x11_5 = 0x60cbc + (i_28 << 4) + arg1 + 4
        int64_t i_3
        
        do
            int32_t x12_34 = *x11_5
            x11_5 += 0x10
            i_3 = i_17
            i_17 -= 1
            *x10_6 = x12_34
            x10_6 = &x10_6[1]
        while (i_3 != 1)
    
    int32_t x12_35 = *(arg1 + 0x176c)
    
    if (x12_35 != 0)
        int64_t i_38 = sx.q(i_24)
        i_24 = i_38.d + 1
        *(&var_b590 + i_38 * 0x38 + 0x548) = x12_35
        int64_t i_29
        
        if (x8_76.d u>= 9)
            int64_t x12_37
            
            if ((x8_76 & 7) == 0)
                x12_37 = 8
            else
                x12_37 = x8_76 & 7
            
            void* __offset(DomGame, 0x60d04) x13_8 = arg1 + 0x60d04
            i_29 = x8_76 - x12_37
            void* x14_9 = &var_b590 + i_38 * 0x38 + 0x560
            int64_t i_22 = i_29
            int64_t i_4
            
            do
                v0.d = *x13_8
                v1.d = *(x13_8 + 4)
                v2.d = *(x13_8 + 8)
                v3.d = *(x13_8 + 0xc)
                v0:4.d = *(x13_8 + 0x10)
                v1:4.d = *(x13_8 + 0x14)
                v2:4.d = *(x13_8 + 0x18)
                v3:4.d = *(x13_8 + 0x1c)
                v0:8.d = *(x13_8 + 0x20)
                v1:8.d = *(x13_8 + 0x24)
                v2:8.d = *(x13_8 + 0x28)
                v3:8.d = *(x13_8 + 0x2c)
                v0:0xc.d = *(x13_8 + 0x30)
                v1:0xc.d = *(x13_8 + 0x34)
                v2:0xc.d = *(x13_8 + 0x38)
                v3:0xc.d = *(x13_8 + 0x3c)
                v4.d = *(x13_8 - 0x40)
                v5.d = *(x13_8 - 0x3c)
                v6.d = *(x13_8 - 0x38)
                v7.d = *(x13_8 - 0x34)
                v4:4.d = *(x13_8 - 0x30)
                v5:4.d = *(x13_8 - 0x2c)
                v6:4.d = *(x13_8 - 0x28)
                v7:4.d = *(x13_8 - 0x24)
                v4:8.d = *(x13_8 - 0x20)
                v5:8.d = *(x13_8 - 0x1c)
                v6:8.d = *(x13_8 - 0x18)
                v7:8.d = *(x13_8 - 0x14)
                v4:0xc.d = *(x13_8 - 0x10)
                v5:0xc.d = *(x13_8 - 0xc)
                v6:0xc.d = *(x13_8 - 8)
                v7:0xc.d = *(x13_8 - 4)
                x13_8 += 0x80
                i_4 = i_22
                i_22 -= 8
                *(x14_9 - 0x10) = v4
                *x14_9 = v0
                x14_9 += 0x20
            while (i_4 != 8)
        else
            i_29 = 0
        
        int64_t i_18 = x8_76 - i_29
        int32_t* x10_9 = &var_b590 + i_38 * 0x38 + (i_29 << 2) + 0x550
        void* x11_7 = 0x60cbc + (i_29 << 4) + arg1 + 8
        int64_t i_5
        
        do
            int32_t x12_38 = *x11_7
            x11_7 += 0x10
            i_5 = i_18
            i_18 -= 1
            *x10_9 = x12_38
            x10_9 = &x10_9[1]
        while (i_5 != 1)
    
    int32_t x12_39 = *(arg1 + 0x177c)
    
    if (x12_39 != 0)
        int64_t i_39 = sx.q(i_24)
        i_24 = i_39.d + 1
        *(&var_b590 + i_39 * 0x38 + 0x548) = x12_39
        int64_t i_30
        
        if (x8_76.d u>= 9)
            int64_t x12_41
            
            if ((x8_76 & 7) == 0)
                x12_41 = 8
            else
                x12_41 = x8_76 & 7
            
            void* __offset(DomGame, 0x60d08) x13_10 = arg1 + 0x60d08
            i_30 = x8_76 - x12_41
            void* x14_12 = &var_b590 + i_39 * 0x38 + 0x560
            int64_t i_23 = i_30
            int64_t i_6
            
            do
                v0.d = *x13_10
                v1.d = *(x13_10 + 4)
                v2.d = *(x13_10 + 8)
                v3.d = *(x13_10 + 0xc)
                v0:4.d = *(x13_10 + 0x10)
                v1:4.d = *(x13_10 + 0x14)
                v2:4.d = *(x13_10 + 0x18)
                v3:4.d = *(x13_10 + 0x1c)
                v0:8.d = *(x13_10 + 0x20)
                v1:8.d = *(x13_10 + 0x24)
                v2:8.d = *(x13_10 + 0x28)
                v3:8.d = *(x13_10 + 0x2c)
                v0:0xc.d = *(x13_10 + 0x30)
                v1:0xc.d = *(x13_10 + 0x34)
                v2:0xc.d = *(x13_10 + 0x38)
                v3:0xc.d = *(x13_10 + 0x3c)
                v4.d = *(x13_10 - 0x40)
                v5.d = *(x13_10 - 0x3c)
                v6.d = *(x13_10 - 0x38)
                v7.d = *(x13_10 - 0x34)
                v4:4.d = *(x13_10 - 0x30)
                v5:4.d = *(x13_10 - 0x2c)
                v6:4.d = *(x13_10 - 0x28)
                v7:4.d = *(x13_10 - 0x24)
                v4:8.d = *(x13_10 - 0x20)
                v5:8.d = *(x13_10 - 0x1c)
                v6:8.d = *(x13_10 - 0x18)
                v7:8.d = *(x13_10 - 0x14)
                v4:0xc.d = *(x13_10 - 0x10)
                v5:0xc.d = *(x13_10 - 0xc)
                v6:0xc.d = *(x13_10 - 8)
                v7:0xc.d = *(x13_10 - 4)
                x13_10 += 0x80
                i_6 = i_23
                i_23 -= 8
                *(x14_12 - 0x10) = v4
                *x14_12 = v0
                x14_12 += 0x20
            while (i_6 != 8)
        else
            i_30 = 0
        
        int64_t i_19 = x8_76 - i_30
        int32_t* x9_45 = &var_b590 + i_39 * 0x38 + (i_30 << 2) + 0x550
        void* x10_11 = 0x60cbc + (i_30 << 4) + arg1 + 0xc
        int64_t i_7
        
        do
            int32_t x11_9 = *x10_11
            x10_11 += 0x10
            i_7 = i_19
            i_19 -= 1
            *x9_45 = x11_9
            x9_45 = &x9_45[1]
        while (i_7 != 1)
    
    if (x8_76.d s>= 1)
        int64_t i_8 = 0
        
        do
            int32_t x0_4 = CardsOwned(arg1, zx.q(i_8.d), &var_2f508)
            void var_af64
            
            if (x0_4 s>= 1)
                int64_t j = 0
                
                do
                    int64_t x0_6 = CardWhat(arg1, zx.q(*(&var_2f508 + (j << 2))))
                    int32_t k_1 = x0_6.d
                    
                    if ((IsLandscape(x0_6, zx.q(*(arg1 + 0xd50))) & 1) == 0)
                        int32_t k = BoardPileSource(arg1, zx.q(k_1), false)
                        uint64_t i_40 = zx.q(i_31)
                        void* x9_50
                        
                        if (i_40.d s< 1)
                        label_bac518:
                            uint64_t x10_12 = zx.q(var_b04c)
                            
                            if (x10_12.d s< 1)
                            label_bac540:
                                uint64_t x10_13 = zx.q(var_64)
                                
                                if (x10_13.d s< 1)
                                label_bac588:
                                    x9_50 = nullptr
                                else
                                    x9_50 = &var_af64
                                    uint64_t x11_12 = x10_13
                                    
                                    while (*x9_50 != k)
                                        uint64_t temp13_1 = x11_12
                                        x11_12 -= 1
                                        x9_50 += 0x38
                                        
                                        if (temp13_1 == 1)
                                            x9_50 = &var_af64
                                            
                                            while (*x9_50 != k_1)
                                                uint64_t temp14_1 = x10_13
                                                x10_13 -= 1
                                                x9_50 += 0x38
                                                
                                                if (temp14_1 == 1)
                                                    goto label_bac588
                                            
                                            break
                            else
                                x9_50 = &var_b2ec
                                
                                while (*x9_50 != k)
                                    uint64_t temp12_1 = x10_12
                                    x10_12 -= 1
                                    x9_50 += 0x38
                                    
                                    if (temp12_1 == 1)
                                        goto label_bac540
                        else
                            x9_50 = &var_b590
                            uint64_t i_53 = i_40
                            
                            while (*x9_50 != k)
                                uint64_t i_56 = i_53
                                i_53 -= 1
                                x9_50 += 0x38
                                
                                if (i_56 == 1)
                                    goto label_bac518
                        
                        int32_t* x8_85
                        int64_t x8_87
                        uint64_t x9_53
                        
                        if (k == 0)
                            x9_53 = zx.q(var_64)
                            
                            if (x9_53.d s< 1)
                            label_bac61c:
                                x8_87 = sx.q(x9_53.d)
                                var_64 = x9_53.d + 1
                                *(&var_b590 + x8_87 * 0x38 + 0x62c) = k_1
                                x8_85 = &var_b590 + x8_87 * 0x38 + (i_8 << 2) + 0x634
                            else
                                x8_87 = 0
                                void* x10_15 = &var_af64
                                
                                while (*x10_15 != k_1)
                                    x8_87 += 1
                                    x10_15 += 0x38
                                    
                                    if (x9_53 == x8_87)
                                        goto label_bac61c
                                
                                x8_85 = &var_b590 + x8_87 * 0x38 + (i_8 << 2) + 0x634
                        else if (k == k_1 || x9_50 == 0)
                            void* x9_47
                            
                            if (i_40.d s< 1)
                            label_bac664:
                                uint64_t x8_88 = zx.q(var_b04c)
                                
                                if (x8_88.d s< 1)
                                label_bac68c:
                                    uint64_t k_5 = zx.q(var_64)
                                    
                                    if (k_5.d s>= 1)
                                        x9_47 = &var_af64
                                        uint64_t k_6 = k_5
                                        
                                        while (true)
                                            if (*x9_47 == k)
                                                goto label_bac49c
                                            
                                            uint64_t k_7 = k_6
                                            k_6 -= 1
                                            x9_47 += 0x38
                                            
                                            if (k_7 == 1)
                                                x9_47 = &var_af64
                                                uint64_t k_4 = k_5
                                                uint64_t k_2
                                                
                                                do
                                                    if (*x9_47 == k_1)
                                                        goto label_bac49c
                                                    
                                                    k_2 = k_4
                                                    k_4 -= 1
                                                    x9_47 += 0x38
                                                while (k_2 != 1)
                                                break
                                    
                                    var_64 = k_5.d + 1
                                    void* x8_83 = &var_b590 + sx.q(k_5.d) * 0x38
                                    x9_47 = x8_83 + 0x62c
                                    *(x8_83 + 0x62c) = k_1
                                else
                                    x9_47 = &var_b2ec
                                    
                                    while (*x9_47 != k)
                                        uint64_t temp16_1 = x8_88
                                        x8_88 -= 1
                                        x9_47 += 0x38
                                        
                                        if (temp16_1 == 1)
                                            goto label_bac68c
                            else
                                x9_47 = &var_b590
                                
                                while (*x9_47 != k)
                                    uint64_t i_55 = i_40
                                    i_40 -= 1
                                    x9_47 += 0x38
                                    
                                    if (i_55 == 1)
                                        goto label_bac664
                            
                        label_bac49c:
                            x8_85 = x9_47 + (i_8 << 2) + 8
                        else
                            void* x8_86 = x9_50 + (i_8 << 2)
                            *(x8_86 + 8) += 1
                            x9_53 = zx.q(var_64)
                            
                            if (x9_53.d s< 1)
                                goto label_bac61c
                            
                            x8_87 = 0
                            void* x10_14 = &var_af64
                            
                            while (*x10_14 != k_1)
                                x8_87 += 1
                                x10_14 += 0x38
                                
                                if (x9_53 == x8_87)
                                    goto label_bac61c
                            
                            x8_85 = &var_b590 + x8_87 * 0x38 + (i_8 << 2) + 0x634
                        *x8_85 += 1
                    
                    j += 1
                while (j != zx.q(x0_4))
            
            for (int64_t j_1 = 0; j_1 != 0x19; )
                int32_t x23_1 = *(arg1 + i_8 * 0xc8 + (j_1 << 3) + 0x6080c)
                
                if (x23_1 == 0)
                    break
                
                int32_t k_3 = BoardPileSource(arg1, zx.q(x23_1), false)
                uint64_t i_52 = zx.q(i_31)
                void* x8_91
                
                if (i_52.d s< 1)
                label_bac788:
                    uint64_t x9_60 = zx.q(var_b04c)
                    
                    if (x9_60.d s< 1)
                    label_bac7b0:
                        uint64_t x9_61 = zx.q(var_64)
                        x8_91 = &var_af64
                        
                        while (*x8_91 != k_3)
                            uint64_t temp10_1 = x9_61
                            x9_61 -= 1
                            x8_91 += 0x38
                            
                            if (temp10_1 == 1)
                                void var_af9c
                                x8_91 = &var_af9c
                                
                                do
                                    x8_91 += 0x38
                                while (*x8_91 != x23_1)
                                
                                break
                    else
                        x8_91 = &var_b2ec
                        
                        while (*x8_91 != k_3)
                            uint64_t temp11_1 = x9_60
                            x9_60 -= 1
                            x8_91 += 0x38
                            
                            if (temp11_1 == 1)
                                goto label_bac7b0
                else
                    x8_91 = &var_b590
                    
                    while (*x8_91 != k_3)
                        uint64_t i_54 = i_52
                        i_52 -= 1
                        x8_91 += 0x38
                        
                        if (i_54 == 1)
                            goto label_bac788
                
                void* x8_92 = x8_91 + (i_8 << 2)
                int32_t x9_58 = *(arg1 + i_8 * 0xc8 + (j_1 << 3) + 0x60810)
                j_1 += 1
                *(x8_92 + 0x20) += x9_58
            
            i_8 += 1
        while (i_8 s< sx.q(*(arg1 + 0xd40)))

void* entry_x8
void* x24 = entry_x8
memset(x24, 0, 0x10a0)
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
void* result
int128_t v0_1
result, v0_1 = XString::XString()
int32_t x8_95 = *(arg1 + 0xd40)
*(x24 + 0x90) = x8_95

if (x8_95 s> 0)
    int64_t i_9 = 0
    
    do
        PlayerAvatarType var_2f50c
        PlayerGetNameAvatar(arg2 + 8, GameGetPlayer(arg2 + 8, zx.q(i_9.d)), &var_2f50c)
        XString::operator=(x24 + i_9 * 0x18)
        XString::~XString()
        ActiveGame()
        int32_t fp_2 = *(gDomClient + i_9 * 0x4d48 + 0x70)
        int32_t x0_23 = PlayerResigned(arg2, zx.q(i_9.d))
        
        if (*(arg2 + 0x11b4) s>= 1 && (x0_23 & 1) == 0)
            int64_t j_2 = 0
            
            do
                PlayerResigned(arg2, zx.q(j_2.d))
                j_2 += 1
            while (j_2 s< sx.q(*(arg2 + 0x11b4)))
        
        int32_t* x8_96 = &var_2e888 + i_9 * 0x5dd4
        x24 = entry_x8
        int32_t x8_97 = x8_96[1]
        void* x21_1 = x24 + i_9 * 0x18
        *(x21_1 + 8) = *x8_96
        *(x21_1 + 0xc) = fp_2
        *(x21_1 + 0x10) = (x8_97 == 0 ? 1 : 0).b & (zx.d(*(arg1 + 0x1a0c)) != 0 ? 1 : 0).b
        result, v0_1 = PlayerResigned(arg2, zx.q(i_9.d))
        *(x21_1 + 0x11) = result.b & 1
        i_9 += 1
    while (i_9 s< sx.q(*(x24 + 0x90)))

uint64_t x8_105 = zx.q(var_b04c)
int32_t x9_66

x9_66 = x8_105.d == 0xb ? 6 : 5

*(x24 + 0x94) = x9_66

if (x8_105.d s>= 1)
    int64_t x9_67 = 0
    void* x10_22 = &var_b2ec
    
    do
        int64_t x11_18 = sx.q(*(x24 + 0x109c))
        int32_t x15_3 = *x10_22
        v0_1 = *(x10_22 + 8)
        void* x11_19 = x24 + (x11_18 << 6)
        int32_t x13_12
        
        if (x9_67 u< 5)
            x13_12 = x9_67.d
        else
            x13_12 = x9_67.d - 5
        
        *(x24 + 0x109c) = x11_18.d + 1
        char x14_14 = *(x10_22 + 4)
        *(x11_19 + 0x9c) = x9_67 u< 5 ? 1 : 0
        *(x11_19 + 0xa0) = x13_12
        *(x11_19 + 0xa4) = x15_3
        int64_t x12_44 = *(x10_22 + 0x18)
        *(x11_19 + 0xac) = v0_1
        v0_1 = *(x10_22 + 0x20)
        int64_t x13_13 = *(x10_22 + 0x30)
        x9_67 += 1
        x10_22 += 0x38
        *(x11_19 + 0xa8) = x14_14
        *(x11_19 + 0xbc) = x12_44
        *(x11_19 + 0xd4) = x13_13
        *(x11_19 + 0xc4) = v0_1
    while (x8_105 != x9_67)

if (i_24 == 4)
    *(x24 + 0x94) = 6

int32_t i_25 = i_31
int32_t x8_109
int32_t x9_71
int32_t i_26

if (i_25 s< 1)
label_bacb90:
    x9_71 = 0
label_bacba0:
    i_26 = var_64
    
    x8_109 = i_26 != 0 ? 3 : 2
    
    if (i_26 != 0)
        x9_71 = 0
    
    if (i_26 s>= 1)
    label_bacbc4:
        uint64_t i_14 = zx.q(i_26)
        void var_af44
        void* x11_21 = &var_af44
        uint64_t i_10
        
        do
            int32_t x12_49 = *(x24 + 0x94)
            int64_t x13_16 = sx.q(*(x24 + 0x109c))
            v0_1 = *(x11_21 - 0x18)
            int32_t x15_5 = *(x11_21 - 0x20)
            *(x24 + 0x109c) = x13_16.d + 1
            int64_t x12_51 = *(x11_21 - 8)
            void* x13_17 = x24 + (x13_16 << 6)
            *(x13_17 + 0xac) = v0_1
            int32_t x14_16
            
            x14_16 = x9_71 s< x12_49 ? x9_71 : 0
            
            *(x13_17 + 0xbc) = x12_51
            int64_t x12_52 = *(x11_21 + 0x10)
            v0_1 = *x11_21
            x11_21 += 0x38
            
            if (x9_71 s>= x12_49)
                x8_109 += 1
            
            i_10 = i_14
            i_14 -= 1
            x9_71 = x14_16 + 1
            *(x13_17 + 0xd4) = x12_52
            *(x13_17 + 0xc4) = v0_1
            *(x13_17 + 0x9c) = x8_109
            *(x13_17 + 0xa0) = x14_16
            *(x13_17 + 0xa4) = x15_5
        while (i_10 != 1)
else
    int32_t x19_1 = 0
    
    do
        result = &var_b590 + muls.dp.d(x19_1, 0x38)
        
        if (*(result + 8) == 0)
            int64_t x9_69 = sx.q(x19_1)
            
            if (*(&var_b590 + x9_69 * 0x38 + 0x20) == 0 && *(&var_b590 + x9_69 * 0x38 + 0xc) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x24) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x10) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x28) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x14) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x2c) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x18) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x30) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x1c) == 0
                    && *(&var_b590 + x9_69 * 0x38 + 0x34) == 0
                    && zx.d(*(&var_b590 + x9_69 * 0x38 + 4)) == 0)
                result, v0_1 = memmove(result, &var_b590 + x9_69 * 0x38 + 0x38, 
                    muls.dp.d(i_25 + not.d(x19_1), 0x38))
                x19_1 -= 1
                i_25 = i_31 - 1
                i_31 = i_25
        
        x19_1 += 1
    while (x19_1 s< i_25)
    
    if (i_25 == 6)
        *(x24 + 0x94) = i_25
    else if (i_25 s< 1)
        goto label_bacb90
    
    x9_71 = 0
    uint64_t i_13 = zx.q(i_25)
    x8_109 = 2
    void* x11_20 = &var_b590
    uint64_t i_11
    
    do
        int32_t x12_45 = *(x24 + 0x94)
        int64_t x13_14 = sx.q(*(x24 + 0x109c))
        v0_1 = *(x11_20 + 8)
        int32_t x16_5 = *x11_20
        *(x24 + 0x109c) = x13_14.d + 1
        int64_t x12_47 = *(x11_20 + 0x18)
        void* x13_15 = x24 + (x13_14 << 6)
        char x15_4 = *(x11_20 + 4)
        *(x13_15 + 0xac) = v0_1
        *(x13_15 + 0xbc) = x12_47
        int64_t x12_48 = *(x11_20 + 0x30)
        v0_1 = *(x11_20 + 0x20)
        int32_t x14_15
        
        x14_15 = x9_71 s< x12_45 ? x9_71 : 0
        
        if (x9_71 s>= x12_45)
            x8_109 += 1
        
        i_11 = i_13
        i_13 -= 1
        x9_71 = x14_15 + 1
        x11_20 += 0x38
        *(x13_15 + 0xa8) = x15_4
        *(x13_15 + 0xd4) = x12_48
        *(x13_15 + 0xc4) = v0_1
        *(x13_15 + 0x9c) = x8_109
        *(x13_15 + 0xa0) = x14_15
        *(x13_15 + 0xa4) = x16_5
    while (i_11 != 1)
    
    if (x8_109 == 2)
        goto label_bacba0
    
    i_26 = var_64
    
    if (i_26 s>= 1)
        goto label_bacbc4
uint64_t i_15 = zx.q(i_24)

if (x9_71 != 0)
    if (i_15.d != 0)
        x8_109 += 1
    
    if (i_15.d != 0)
        x9_71 = 0

if (i_15.d s>= 1)
    void var_b028
    void* x11_22 = &var_b028
    uint64_t i_12
    
    do
        int64_t x12_53 = sx.q(*(x24 + 0x109c))
        v0_1 = *(x11_22 - 0x18)
        int32_t x13_18 = *(x11_22 - 0x20)
        int64_t x14_17 = *(x11_22 - 8)
        void* x12_54 = x24 + (x12_53 << 6)
        *(x24 + 0x109c) = x12_53.d + 1
        int64_t x15_7 = *(x11_22 + 0x10)
        *(x12_54 + 0xac) = v0_1
        v0_1 = *x11_22
        x11_22 += 0x38
        *(x12_54 + 0xa0) = x9_71
        *(x12_54 + 0xa4) = x13_18
        x9_71 += 1
        i_12 = i_15
        i_15 -= 1
        *(x12_54 + 0xbc) = x14_17
        *(x12_54 + 0xd4) = x15_7
        *(x12_54 + 0xc4) = v0_1
        *(x12_54 + 0x9c) = x8_109
    while (i_12 != 1)

*(x24 + 0x98) = x8_109 + 1
return result
