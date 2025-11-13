// 函数: _Z14DomAddLogEventRK7DomGame9PlayerWhoS2_15DomLogEventType11DomCardEnumPK6CardIDiiiii
// 地址: 0xc0e704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int32_t fp = arg2
int32_t x25 = *(gLog + 0x50)
int32_t x24 = arg8
CardID const* x19 = arg6
int32_t x26 = arg4
DomGame const& x20 = arg1
int32_t x8_1 = *gLog + 1
*gLog = x8_1
int32_t x9_10
uint128_t v0
uint128_t v1
uint128_t v2
int128_t v3
int128_t v4

if (arg4 s> 0x25)
    if (x26 != 0x3c)
        if (x26 == 0x2d)
            int32_t x10_1 = *(x20 + 0xd40)
            
            if (x10_1 s>= 1)
                if (x24 == 1)
                    uint64_t x9_5
                    
                    if (x10_1 s> 1)
                        x9_5 = zx.q(x10_1)
                    else
                        x9_5 = 1
                    
                    int64_t i_55
                    
                    if (x9_5.d u>= 8)
                        i_55 = x9_5 & 0x7ffffff8
                        v0.d = x8_1
                        v0:4.d = x8_1
                        v0:8.d = x8_1
                        v0:0xc.d = x8_1
                        uint128_t* x11_6 = gLog + 0x48
                        int64_t i_42 = i_55
                        int64_t i
                        
                        do
                            x11_6[-1] = v0
                            *x11_6 = v0
                            i = i_42
                            i_42 -= 8
                            x11_6 = &x11_6[2]
                        while (i != 8)
                        
                        if (i_55 != x9_5)
                            goto label_c0ea88
                    else
                        i_55 = 0
                    label_c0ea88:
                        void* x11_8 = gLog + (i_55 << 2) + 0x38
                        int64_t i_29 = x9_5 - i_55
                        int64_t i_1
                        
                        do
                            i_1 = i_29
                            i_29 -= 1
                            *x11_8 = x8_1
                            x11_8 += 4
                        while (i_1 != 1)
                else
                    if (x24 != 2)
                    label_c0f740:
                        pthread_kill(pthread_self(), 6)
                        XNoReturn()
                        return DomLogClear() __tailcall
                    
                    uint64_t x10_2
                    
                    if (x10_1 s> 1)
                        x10_2 = zx.q(x10_1)
                    else
                        x10_2 = 1
                    
                    uint64_t x9_3 = zx.q(fp)
                    uint64_t x11_1 = zx.q(x21)
                    int64_t i_62
                    
                    if (x10_2.d u>= 4)
                        v2 = data_71a9c0
                        i_62 = x10_2 & 0x7ffffffc
                        v3.q = 2
                        v3:8.q = 2
                        v0.q = x9_3
                        v0:8.q = x9_3
                        v1.q = x11_1
                        v1:8.q = x11_1
                        int64_t (* x13_2)() = gLog + 0x44
                        v4.q = 4
                        v4:8.q = 4
                        int64_t i_48 = i_62
                        int64_t i_2
                        
                        do
                            uint64_t v5_4 =
                                vmovn_s64(not.o(vceqq_u64(v2, v0)) & not.o(vceqq_u64(v2, v1)))
                            
                            if ((v5_4.d & 1) != 0)
                                *(x13_2 - 0xc) = x8_1
                            
                            if ((v5_4:4.d & 1) != 0)
                                *(x13_2 - 8) = x8_1
                            
                            uint128_t v5_5 = v2 + v3
                            uint64_t v5_8 =
                                vmovn_s64(not.o(vceqq_u64(v5_5, v0)) & not.o(vceqq_u64(v5_5, v1)))
                            
                            if ((v5_8.d & 1) != 0)
                                *(x13_2 - 4) = x8_1
                                
                                if ((v5_8:4.d & 1) != 0)
                                    *x13_2 = x8_1
                            else if ((v5_8:4.d & 1) != 0)
                                *x13_2 = x8_1
                            
                            v2 += v4
                            i_2 = i_48
                            i_48 -= 4
                            x13_2 += 0x10
                        while (i_2 != 4)
                        
                        if (i_62 != x10_2)
                            goto label_c0eaf8
                    else
                        i_62 = 0
                    label_c0eaf8:
                        int64_t x11_9 = x11_1 - i_62
                        int64_t x9_9 = x9_3 - i_62
                        void* x13_4 = gLog + (i_62 << 2) + 0x38
                        int64_t i_32 = x10_2 - i_62
                        int64_t i_3
                        
                        do
                            if (x9_9 != 0 && x11_9 != 0)
                                *x13_4 = x8_1
                            
                            x13_4 += 4
                            x11_9 -= 1
                            i_3 = i_32
                            i_32 -= 1
                            x9_9 -= 1
                        while (i_3 != 1)
                
                goto label_c0eaa8
        else
            if (x26 != 0x26)
                goto label_c0eaa8
            
            uint64_t x9_1 = zx.q(*(x20 + 0xd40))
            
            if (x9_1.d s>= 1)
                int64_t i_53
                
                if (x9_1.d u>= 8)
                    i_53 = x9_1 & 0xfffffff8
                    v0.d = x8_1
                    v0:4.d = x8_1
                    v0:8.d = x8_1
                    v0:0xc.d = x8_1
                    int64_t (* x11_2)() = gLog + 0x48
                    int64_t i_41 = i_53
                    int64_t i_4
                    
                    do
                        *(x11_2 - 0x10) = v0
                        *x11_2 = v0
                        i_4 = i_41
                        i_41 -= 8
                        x11_2 += 0x20
                    while (i_4 != 8)
                    
                    if (i_53 != x9_1)
                        goto label_c0e868
                else
                    i_53 = 0
                label_c0e868:
                    void* x11_4 = gLog + (i_53 << 2) + 0x38
                    int64_t i_27 = x9_1 - i_53
                    int64_t i_5
                    
                    do
                        i_5 = i_27
                        i_27 -= 1
                        *x11_4 = x8_1
                        x11_4 += 4
                    while (i_5 != 1)
                goto label_c0eaa8
        
        x9_10 = x26 - 0x27
    label_c0eca0:
        
        if (x26 - 0x29 u> 1)
            goto label_c0ee4c
        
        int32_t i_59 = *(x20 + 0xd40)
        
        if (i_59 s>= 1 && arg9 != 0)
            if (arg9 == 1)
                uint64_t i_66
                
                if (i_59 s> 1)
                    i_66 = zx.q(i_59)
                else
                    i_66 = 1
                
                int64_t i_60
                
                if (i_66.d u>= 8)
                    i_60 = i_66 & 0x7ffffff8
                    v0.d = x8_1
                    v0:4.d = x8_1
                    v0:8.d = x8_1
                    v0:0xc.d = x8_1
                    int64_t (* x12_10)() = gLog + 0x48
                    int64_t i_46 = i_60
                    int64_t i_6
                    
                    do
                        *(x12_10 - 0x10) = v0
                        *x12_10 = v0
                        i_6 = i_46
                        i_46 -= 8
                        x12_10 += 0x20
                    while (i_6 != 8)
                    
                    if (i_60 != i_66)
                        goto label_c0ee2c
                else
                    i_60 = 0
                label_c0ee2c:
                    void* x12_12 = gLog + (i_60 << 2) + 0x38
                    int64_t i_36 = i_66 - i_60
                    int64_t i_7
                    
                    do
                        i_7 = i_36
                        i_36 -= 1
                        *x12_12 = x8_1
                        x12_12 += 4
                    while (i_7 != 1)
            else if (arg9 != 2)
                int32_t i_35
                
                i_35 = i_59 s> 1 ? i_59 : 1
                
                int32_t i_8
                
                do
                    if (arg9 != 0)
                        goto label_c0f740
                    
                    i_8 = i_35
                    i_35 -= 1
                while (i_8 != 1)
            else
                uint64_t i_68
                
                if (i_59 s> 1)
                    i_68 = zx.q(i_59)
                else
                    i_68 = 1
                
                uint64_t x10_7 = zx.q(fp)
                uint64_t x12_8 = zx.q(x21)
                int64_t i_64
                
                if (i_68.d u>= 4)
                    v2 = data_71a9c0
                    i_64 = i_68 & 0x7ffffffc
                    v3.q = 2
                    v3:8.q = 2
                    v0.q = x10_7
                    v0:8.q = x10_7
                    v1.q = x12_8
                    v1:8.q = x12_8
                    int64_t (* x14_5)() = gLog + 0x44
                    v4.q = 4
                    v4:8.q = 4
                    int64_t i_50 = i_64
                    int64_t i_9
                    
                    do
                        uint64_t v5_20 =
                            vmovn_s64(not.o(vceqq_u64(v2, v0)) & not.o(vceqq_u64(v2, v1)))
                        
                        if ((v5_20.d & 1) != 0)
                            *(x14_5 - 0xc) = x8_1
                        
                        if ((v5_20:4.d & 1) != 0)
                            *(x14_5 - 8) = x8_1
                        
                        uint128_t v5_21 = v2 + v3
                        uint64_t v5_24 =
                            vmovn_s64(not.o(vceqq_u64(v5_21, v0)) & not.o(vceqq_u64(v5_21, v1)))
                        
                        if ((v5_24.d & 1) != 0)
                            *(x14_5 - 4) = x8_1
                            
                            if ((v5_24:4.d & 1) != 0)
                                *x14_5 = x8_1
                        else if ((v5_24:4.d & 1) != 0)
                            *x14_5 = x8_1
                        
                        v2 += v4
                        i_9 = i_50
                        i_50 -= 4
                        x14_5 += 0x10
                    while (i_9 != 4)
                    
                    if (i_64 != i_68)
                        goto label_c0f1c0
                else
                    i_64 = 0
                label_c0f1c0:
                    int64_t x12_20 = x12_8 - i_64
                    int64_t x10_20 = x10_7 - i_64
                    void* x14_8 = gLog + (i_64 << 2) + 0x38
                    int64_t i_40 = i_68 - i_64
                    int64_t i_10
                    
                    do
                        if (x10_20 != 0 && x12_20 != 0)
                            *x14_8 = x8_1
                        
                        x14_8 += 4
                        x12_20 -= 1
                        i_10 = i_40
                        i_40 -= 1
                        x10_20 -= 1
                    while (i_10 != 1)
        
        goto label_c0ee4c
    
    if (fp == 0xffffffff)
        uint64_t x9_4 = zx.q(*(x20 + 0xd40))
        
        if (x9_4.d s>= 1)
            int64_t i_54
            
            if (x9_4.d u>= 8)
                i_54 = x9_4 & 0xfffffff8
                v0.d = x8_1
                v0:4.d = x8_1
                v0:8.d = x8_1
                v0:0xc.d = x8_1
                uint128_t* x11_10 = gLog + 0x48
                int64_t i_43 = i_54
                int64_t i_11
                
                do
                    x11_10[-1] = v0
                    *x11_10 = v0
                    i_11 = i_43
                    i_43 -= 8
                    x11_10 = &x11_10[2]
                while (i_11 != 8)
                
                if (i_54 != x9_4)
                    goto label_c0eb8c
            else
                i_54 = 0
            label_c0eb8c:
                void* x11_12 = gLog + (i_54 << 2) + 0x38
                int64_t i_30 = x9_4 - i_54
                int64_t i_12
                
                do
                    i_12 = i_30
                    i_30 -= 1
                    *x11_12 = x8_1
                    x11_12 += 4
                while (i_12 != 1)
    else
        *(gLog + 0x38 + (sx.q(fp) << 2)) = x8_1
        *(gLog + 0x38 + (sx.q(x21) << 2)) = *gLog
else if (x26 != 0)
    if (x26 != 1)
    label_c0eaa8:
        x9_10 = x26 - 0x27
        
        if (x9_10 u> 1)
            goto label_c0eca0
        
        int32_t i_57 = *(x20 + 0xd40)
        
        if (i_57 s>= 1 && arg10 != 0)
            if (arg10 == 1)
                uint64_t i_65
                
                if (i_57 s> 1)
                    i_65 = zx.q(i_57)
                else
                    i_65 = 1
                
                int64_t i_58
                
                if (i_65.d u>= 8)
                    i_58 = i_65 & 0x7ffffff8
                    v0.d = x8_1
                    v0:4.d = x8_1
                    v0:8.d = x8_1
                    v0:0xc.d = x8_1
                    uint128_t* x12_5 = gLog + 0x48
                    int64_t i_45 = i_58
                    int64_t i_13
                    
                    do
                        x12_5[-1] = v0
                        *x12_5 = v0
                        i_13 = i_45
                        i_45 -= 8
                        x12_5 = &x12_5[2]
                    while (i_13 != 8)
                    
                    if (i_58 != i_65)
                        goto label_c0ec7c
                else
                    i_58 = 0
                label_c0ec7c:
                    void* x12_7 = gLog + (i_58 << 2) + 0x38
                    int64_t i_34 = i_65 - i_58
                    int64_t i_14
                    
                    do
                        i_14 = i_34
                        i_34 -= 1
                        *x12_7 = x8_1
                        x12_7 += 4
                    while (i_14 != 1)
            else if (arg10 != 2)
                int32_t i_33
                
                i_33 = i_57 s> 1 ? i_57 : 1
                
                int32_t i_15
                
                do
                    if (arg10 != 0)
                        goto label_c0f740
                    
                    i_15 = i_33
                    i_33 -= 1
                while (i_15 != 1)
            else
                uint64_t i_67
                
                if (i_57 s> 1)
                    i_67 = zx.q(i_57)
                else
                    i_67 = 1
                
                uint64_t x10_5 = zx.q(fp)
                uint64_t x12_4 = zx.q(x21)
                int64_t i_63
                
                if (i_67.d u>= 4)
                    v2 = data_71a9c0
                    i_63 = i_67 & 0x7ffffffc
                    v3.q = 2
                    v3:8.q = 2
                    v0.q = x10_5
                    v0:8.q = x10_5
                    v1.q = x12_4
                    v1:8.q = x12_4
                    int64_t (* x14_2)() = gLog + 0x44
                    v4.q = 4
                    v4:8.q = 4
                    int64_t i_49 = i_63
                    int64_t i_16
                    
                    do
                        uint64_t v5_12 =
                            vmovn_s64(not.o(vceqq_u64(v2, v0)) & not.o(vceqq_u64(v2, v1)))
                        
                        if ((v5_12.d & 1) != 0)
                            *(x14_2 - 0xc) = x8_1
                        
                        if ((v5_12:4.d & 1) != 0)
                            *(x14_2 - 8) = x8_1
                        
                        uint128_t v5_13 = v2 + v3
                        uint64_t v5_16 =
                            vmovn_s64(not.o(vceqq_u64(v5_13, v0)) & not.o(vceqq_u64(v5_13, v1)))
                        
                        if ((v5_16.d & 1) != 0)
                            *(x14_2 - 4) = x8_1
                            
                            if ((v5_16:4.d & 1) != 0)
                                *x14_2 = x8_1
                        else if ((v5_16:4.d & 1) != 0)
                            *x14_2 = x8_1
                        
                        v2 += v4
                        i_16 = i_49
                        i_49 -= 4
                        x14_2 += 0x10
                    while (i_16 != 4)
                    
                    if (i_63 != i_67)
                        goto label_c0ed1c
                else
                    i_63 = 0
                label_c0ed1c:
                    int64_t x12_9 = x12_4 - i_63
                    int64_t x10_8 = x10_5 - i_63
                    void* x14_4 = gLog + (i_63 << 2) + 0x38
                    int64_t i_39 = i_67 - i_63
                    int64_t i_17
                    
                    do
                        if (x10_8 != 0 && x12_9 != 0)
                            *x14_4 = x8_1
                        
                        x14_4 += 4
                        x12_9 -= 1
                        i_17 = i_39
                        i_39 -= 1
                        x10_8 -= 1
                    while (i_17 != 1)
            
            goto label_c0eca0
        
    label_c0ee4c:
        
        if (x26 == 0x2b || x26 == 0x33)
            uint64_t x10_9 = zx.q(*(x20 + 0xd40))
            
            if (x10_9.d s>= 1)
                int64_t i_61
                
                if (x10_9.d u>= 8)
                    i_61 = x10_9 & 0xfffffff8
                    v0.d = x8_1
                    v0:4.d = x8_1
                    v0:8.d = x8_1
                    v0:0xc.d = x8_1
                    int64_t (* x12_13)() = gLog + 0x48
                    int64_t i_47 = i_61
                    int64_t i_18
                    
                    do
                        *(x12_13 - 0x10) = v0
                        *x12_13 = v0
                        i_18 = i_47
                        i_47 -= 8
                        x12_13 += 0x20
                    while (i_18 != 8)
                    
                    if (i_61 != x10_9)
                        goto label_c0eec8
                else
                    i_61 = 0
                label_c0eec8:
                    void* x12_15 = gLog + (i_61 << 2) + 0x38
                    int64_t i_37 = x10_9 - i_61
                    int64_t i_19
                    
                    do
                        i_19 = i_37
                        i_37 -= 1
                        *x12_15 = x8_1
                        x12_15 += 4
                    while (i_19 != 1)
            
            goto label_c0eee4
        
        if (x26 != 0x54)
        label_c0eee4:
            
            if ((x26 & 0xfffffffe) == 0x30)
                uint64_t x10_11 = zx.q(*(x20 + 0xd40))
                
                if (x10_11.d s>= 1)
                    uint64_t x11_13 = zx.q(x21)
                    int64_t x12_16
                    
                    if (x10_11.d != 1)
                        int64_t x13_5 = 0
                        int64_t (* x14_6)() = gLog + 0x3c
                        x12_16 = x10_11 & 0xfffffffe
                        uint64_t x15_7 = x11_13
                        
                        do
                            if (x15_7 != 0)
                                *(x14_6 - 4) = x8_1
                            
                            if ((x13_5 | 1) != x11_13)
                                *x14_6 = x8_1
                            
                            x13_5 += 2
                            x14_6 += 8
                            x15_7 -= 2
                        while (x13_5 != x12_16)
                        
                        if (x12_16 != x10_11)
                            goto label_c0f09c
                    else
                        x12_16 = 0
                    label_c0f09c:
                        int64_t x11_17 = x11_13 - x12_16
                        void* x13_7 = gLog + (x12_16 << 2) + 0x38
                        int64_t i_38 = x10_11 - x12_16
                        int64_t i_20
                        
                        do
                            if (x11_17 != 0)
                                *x13_7 = x8_1
                            
                            x11_17 -= 1
                            i_20 = i_38
                            i_38 -= 1
                            x13_7 += 4
                        while (i_20 != 1)
            
            int32_t x8_14
            int32_t x10_14
            int32_t* x21_1
            uint64_t x22_2
            
            if (x26 u> 0x2f)
            label_c0f0e4:
                
                if (x26 - 0x11 u<= 2)
                    *(gLog + 0x50) += 1
                    
                    if (x26 != 0x13)
                        int32_t x27_1 = *x19
                        
                        if ((CardIs(x20, zx.q(x27_1), 2).d & 1) != 0
                                && (CardIs(x20, zx.q(x27_1), 0xc18).d & 1) == 0)
                            if (x26 != 0x12)
                                x24 = -1
                            
                            x26 = x26 == 0x12 ? 0x53 : 0x52
                    else
                        x26 = 0x13
                    
                    x22_2 = zx.q(*(gLog + 0x10))
                    x10_14 = x22_2.d != 0 ? 1 : 0
                    goto label_c0f258
                
                x22_2 = sx.q(*(gLog + 0x10))
                x10_14 = x22_2 != 0 ? 1 : 0
                
                if (x24 != 0 || x26 != 0xa || x22_2.d == 0)
                label_c0f258:
                    
                    if (x10_14 == 0 || x26 != 0x22)
                        if ((x10_14 & (x26 == 0x1e ? 1 : 0) & 1) == 0)
                            x9_10 = x26 - 0x27
                            x8_14 = x9_10 u< 2 ? 1 : 0
                            
                            if (x10_14 != 0 && x9_10 u<= 1 && (x24 & 0xfffffffe) == 0x3ea)
                                goto label_c0efd8
                            
                            goto label_c0f370
                        
                        if (*(*(gLog + 8) + (sx.q(x22_2.d) << 6) - 0x38) == 6)
                            x8_14 = 0
                            x26 = 0x1e
                        label_c0f414:
                            
                            if (x22_2.d == 0)
                            label_c0f508:
                                int32_t x8_51 = *(gLog + 0x14)
                                int64_t x27_3
                                
                                if (x22_2.d s>= x8_51)
                                    int32_t x23_2
                                    
                                    if (x8_51 == 0)
                                        x23_2 = 0x10
                                    else
                                        x23_2 = x8_51 << 1
                                    
                                    int64_t x0_12 = XPooledCalloc(x23_2 << 6)
                                    int64_t x1_9 = *(gLog + 8)
                                    x27_3 = x0_12
                                    
                                    if (x1_9 != 0)
                                        memcpy(x27_3, x1_9, sx.q(x22_2.d << 6))
                                        XPooledFree(*(gLog + 8), *(gLog + 0x14) << 6)
                                    
                                    x22_2 = zx.q(*(gLog + 0x10))
                                    *(gLog + 0x14) = x23_2
                                    *(gLog + 8) = x27_3
                                else
                                    x27_3 = *(gLog + 8)
                                
                                int64_t x8_55 = sx.q(x22_2.d)
                                arg1 = x27_3 + (x8_55 << 6)
                                *(gLog + 0x10) = x22_2.d + 1
                                *arg1 = fp
                                *(arg1 + 4) = x21
                                *(arg1 + 8) = x26
                                *(arg1 + 0x18) = x25
                                *(arg1 + 0x1c) = x24
                                *(arg1 + 0x20) = arg9
                                *(arg1 + 0x24) = arg10
                                *(arg1 + 0x28) = arg11
                                *(arg1 + 0x2c) = arg5
                                *(arg1 + 0x3c) = *gLog
                                int32_t x11_39 = *(gLog + 0x20)
                                int32_t i_21 = x11_39 - 1
                                *(arg1 + 0x30) = i_21
                                
                                if (x11_39 s>= 2)
                                    do
                                        i_21 -= 1
                                        
                                        if (*(*(gLog + 0x18) + (zx.q(i_21) << 4) + 8)
                                                != *(gLog + 0x10) - 1)
                                            break
                                        
                                        *(arg1 + 0x30) = i_21
                                    while (i_21 s> 0)
                                
                                if (x26 != 9 && x26 != 0x49 && x26 != 0x3e)
                                    return AllocCards(arg1, x20, x19, arg7, zx.q(x26)) __tailcall
                                
                                int32_t x9_44 = *(gLog + 0x30)
                                *(x27_3 + (x8_55 << 6) + 0x14) = 0
                                *(x27_3 + (x8_55 << 6) + 0x10) = x9_44
                                
                                if (arg7 s>= 1)
                                    uint64_t i_52 = zx.q(arg7)
                                    uint64_t i_22
                                    
                                    do
                                        int32_t x25_2 = *(gLog + 0x30)
                                        int32_t x8_60 = *(gLog + 0x34)
                                        DomGame const& x20_2
                                        
                                        if (x25_2 s< x8_60)
                                            x20_2 = *(gLog + 0x28)
                                        else
                                            int32_t x26_1
                                            
                                            if (x8_60 == 0)
                                                x26_1 = 0x10
                                            else
                                                x26_1 = x8_60 << 1
                                            
                                            arg1 = XPooledCalloc(x26_1 << 3)
                                            int64_t x1_11 = *(gLog + 0x28)
                                            x20_2 = arg1
                                            
                                            if (x1_11 != 0)
                                                memcpy(x20_2, x1_11, sx.q(x25_2 << 3))
                                                XPooledFree(*(gLog + 0x28), *(gLog + 0x34) << 3)
                                            
                                            x25_2 = *(gLog + 0x30)
                                            *(gLog + 0x28) = x20_2
                                            *(gLog + 0x34) = x26_1
                                        
                                        *(gLog + 0x30) = x25_2 + 1
                                        int32_t x8_57 = *x19
                                        x19 += 4
                                        void* x9_45 = x20_2 + (sx.q(x25_2) << 3)
                                        i_22 = i_52
                                        i_52 -= 1
                                        *x9_45 = x8_57
                                        *(x9_45 + 4) = 1
                                        *(x27_3 + (x8_55 << 6) + 0x14) += 1
                                    while (i_22 != 1)
                            else
                                uint64_t x9_34 = zx.q(x26 - 0x22)
                                
                                if (x9_34.d u> 0x31 || (1 << x9_34 & 0x30000010c3de3) == 0)
                                    goto label_c0f508
                                
                                int64_t x9_36 = *(gLog + 8)
                                int32_t* x27_2 = x9_36 + ((sx.q(x22_2.d) - 1) << 6)
                                
                                if (x27_2[2] != x26 || *x27_2 != fp
                                        || x25 != *(x9_36 + ((sx.q(x22_2.d) - 1) << 6) + 0x18))
                                    goto label_c0f508
                                
                                int32_t x8_48
                                
                                if (x26 != 0x52
                                        && *(x9_36 + ((sx.q(x22_2.d) - 1) << 6) + 0x1c) != x24)
                                    if (x8_14 == 0)
                                        goto label_c0f508
                                    
                                    x8_48 = 1
                                    goto label_c0f4ac
                                
                                if ((x8_14 & 1) != 0)
                                    x8_48 = 0
                                label_c0f4ac:
                                    int32_t x11_37 = *(x9_36 + ((sx.q(x22_2.d) - 1) << 6) + 0x20)
                                    
                                    if ((x8_48 & 1) != 0 || ((x11_37 == arg9 ? 1 : 0)
                                            | ((arg9 s> 0 ? 1 : 0) & (x11_37 s> 0 ? 1 : 0))) == 0)
                                        goto label_c0f508
                                    
                                    goto label_c0f4d8
                                
                            label_c0f4d8:
                                
                                if (arg7 s>= 1)
                                    uint64_t i_51 = zx.q(arg7)
                                    uint64_t i_23
                                    
                                    do
                                        uint64_t x1_7 = zx.q(*x19)
                                        x19 += 4
                                        AppendCard(x27_2, zx.q(CardWhat(x20, x1_7)))
                                        i_23 = i_51
                                        i_51 -= 1
                                    while (i_23 != 1)
                    else
                        int32_t* x10_21 = *(gLog + 8)
                        x8_14 = 0
                        
                        if (arg7 != 1 || x10_21[(sx.q(x22_2.d) - 1) * 0x10 + 2] != 0x21)
                            goto label_c0f414
                        
                        void* x8_35
                        
                        if (x10_21[(sx.q(x22_2.d) - 1) * 0x10 + 5] == 1
                                && x10_21[(sx.q(x22_2.d) - 1) * 0x10] == fp)
                            x8_35 = &x10_21[(sx.q(x22_2.d) - 1) * 0x10]
                        
                        if (x10_21[(sx.q(x22_2.d) - 1) * 0x10 + 5] != 1
                                || x10_21[(sx.q(x22_2.d) - 1) * 0x10] != fp
                                || x25 - 1 != *(x8_35 + 0x18) || *(x8_35 + 0xc) != *x19)
                            x8_14 = 0
                            x26 = 0x22
                            goto label_c0f414
                        
                        x10_21[(sx.q(x22_2.d) - 1) * 0x10 + 2] = 0x24
                        int64_t x8_37 = sx.q(*(gLog + 0x10))
                        
                        if (x8_37.d s>= 2)
                            x21_1 = *(gLog + 8) + ((x8_37 - 2) << 6)
                            
                            if (x21_1[2] == 0x24)
                                AppendCard(x21_1, zx.q(CardWhat(x20, zx.q(*x19))))
                                *(gLog + 0x10) -= 1
                else
                    int64_t x8_29 = *(gLog + 8)
                    void* x10_18 = x8_29 + ((x22_2 - 1) << 6)
                    
                    if (*(x10_18 + 8) != 0x52 || *(x10_18 + 0x24) != arg10)
                        x8_14 = 0
                        x24 = 0
                        x10_14 = 1
                        x26 = 0xa
                    label_c0f370:
                        
                        if (x10_14 == 0 || (x26 & 0xfffffffe) != 0xa)
                            goto label_c0f414
                        
                        int32_t* x9_31 = *(gLog + 8)
                        
                        if (x9_31[(sx.q(x22_2.d) - 1) * 0x10 + 2] != x26
                                || x9_31[(sx.q(x22_2.d) - 1) * 0x10] != fp)
                            goto label_c0f414
                        
                        void* x11_28 = &x9_31[(sx.q(x22_2.d) - 1) * 0x10]
                        
                        if (*(x11_28 + 0x1c) != x24 || *(x11_28 + 0x24) != arg10)
                            goto label_c0f414
                        
                        void* x9_32 = &x9_31[(sx.q(x22_2.d) - 1) * 0x10]
                        
                        if (*(x9_32 + 0x28) != arg11)
                            goto label_c0f414
                        
                        int32_t x10_28 = *(x9_32 + 0x20)
                        
                        if (x10_28 * arg9 s< 1)
                            goto label_c0f414
                        
                        *(x9_32 + 0x20) = x10_28 + arg9
                    else
                        void* x8_30 = x8_29 + ((x22_2 - 1) << 6)
                        int32_t x9_20 = *(x8_30 + 0x1c)
                        int32_t x9_21
                        
                        x9_21 = x9_20 == 0xffffffff ? 0 : x9_20
                        
                        *(x8_30 + 0x1c) = x9_21 + arg9
            else
                uint64_t x10_12 = zx.q(x26)
                
                if ((1 << x10_12 & 0xd00000000000) != 0)
                    *(gLog + 0x38 + (sx.q(x21) << 2)) = x8_1
                    *(gLog + 0x38 + (sx.q(fp) << 2)) = *gLog
                    x22_2 = zx.q(*(gLog + 0x10))
                    x10_14 = x22_2.d != 0 ? 1 : 0
                    x8_14 = x9_10 u< 2 ? 1 : 0
                    
                    if (x10_14 == 0 || x9_10 u> 1 || (x24 & 0xfffffffe) != 0x3ea)
                        goto label_c0f370
                    
                label_c0efd8:
                    int32_t* x9_13 = *(gLog + 8)
                    x8_14 = 1
                    
                    if (arg7 != 1 || x9_13[(sx.q(x22_2.d) - 1) * 0x10 + 2] != 0x22)
                        x10_14 = 1
                        goto label_c0f370
                    
                    void* x8_21
                    
                    if (x9_13[(sx.q(x22_2.d) - 1) * 0x10 + 5] == 1
                            && x9_13[(sx.q(x22_2.d) - 1) * 0x10] == fp)
                        x8_21 = &x9_13[(sx.q(x22_2.d) - 1) * 0x10]
                    
                    if (x9_13[(sx.q(x22_2.d) - 1) * 0x10 + 5] != 1
                            || x9_13[(sx.q(x22_2.d) - 1) * 0x10] != fp || x25 != *(x8_21 + 0x18)
                            || *(x8_21 + 0xc) != *x19)
                        x8_14 = 1
                        x10_14 = 1
                        goto label_c0f370
                    
                    x9_13[(sx.q(x22_2.d) - 1) * 0x10 + 2] = 0x23
                    x9_13[(sx.q(x22_2.d) - 1) * 0x10 + 7] = x24
                    int64_t x9_15 = sx.q(*(gLog + 0x10))
                    
                    if (x9_15.d s>= 2)
                        int64_t x8_23 = *(gLog + 8)
                        x21_1 = x8_23 + ((x9_15 - 2) << 6)
                        
                        if (x21_1[2] == 0x23 && *x21_1 == fp
                                && x25 == *(x8_23 + ((x9_15 - 2) << 6) + 0x18))
                            AppendCard(x21_1, zx.q(CardWhat(x20, zx.q(*x19))))
                            *(gLog + 0x10) -= 1
                else if ((1 << x10_12 & 0x100800000) == 0)
                    if (x10_12 != 0x1f)
                        goto label_c0f0e4
                    
                    *(gLog + 0x50) += 1
                else
                    *(gLog + 0x50) -= 1
        else
            uint64_t x9_11 = zx.q(*(x20 + 0xd40))
            
            if (x9_11.d s>= 1)
                int64_t i_56
                
                if (x9_11.d u>= 8)
                    i_56 = x9_11 & 0xfffffff8
                    v0.d = x8_1
                    v0:4.d = x8_1
                    v0:8.d = x8_1
                    v0:0xc.d = x8_1
                    int64_t (* x11_18)() = gLog + 0x48
                    int64_t i_44 = i_56
                    int64_t i_24
                    
                    do
                        *(x11_18 - 0x10) = v0
                        *x11_18 = v0
                        i_24 = i_44
                        i_44 -= 8
                        x11_18 += 0x20
                    while (i_24 != 8)
                    
                    if (i_56 != x9_11)
                        goto label_c0f148
                else
                    i_56 = 0
                label_c0f148:
                    void* x11_20 = gLog + (i_56 << 2) + 0x38
                    int64_t i_31 = x9_11 - i_56
                    int64_t i_25
                    
                    do
                        i_25 = i_31
                        i_31 -= 1
                        *x11_20 = x8_1
                        x11_20 += 4
                    while (i_25 != 1)
    else
        if (arg9 == 0)
            int32_t x22_1 = *(gLog + 0x20)
            int32_t x8_2 = *(gLog + 0x24)
            DomGame const& x19_1
            
            if (x22_1 s>= x8_2)
                int32_t x24_1
                
                if (x8_2 == 0)
                    x24_1 = 0x10
                else
                    x24_1 = x8_2 << 1
                
                arg1 = XPooledCalloc(x24_1 << 4)
                int64_t x1_1 = *(gLog + 0x18)
                x19_1 = arg1
                
                if (x1_1 != 0)
                    memcpy(x19_1, x1_1, sx.q(x22_1 << 4))
                    XPooledFree(*(gLog + 0x18), *(gLog + 0x24) << 4)
                
                x22_1 = *(gLog + 0x20)
                *(gLog + 0x24) = x24_1
                *(gLog + 0x18) = x19_1
            else
                x19_1 = *(gLog + 0x18)
            
            int32_t* x9_7 = x19_1 + (sx.q(x22_1) << 4)
            *(gLog + 0x20) = x22_1 + 1
            *x9_7 = x21
            x9_7[1] = x24
            x9_7[3] = *gLog
            x9_7[2] = *(gLog + 0x10)
        
        uint64_t x9_8 = zx.q(*(x20 + 0xd40))
        
        if (x9_8.d s>= 1)
            int32_t x8_9 = *gLog
            uint64_t x10_3 = zx.q(x21)
            int64_t x11_5
            
            if (x9_8.d != 1)
                int64_t x12_1 = 0
                int64_t (* x13_1)() = gLog + 0x3c
                x11_5 = x9_8 & 0xfffffffe
                uint64_t x14_1 = x10_3
                
                do
                    if (x14_1 != 0)
                        *(x13_1 - 4) = x8_9
                    
                    if ((x12_1 | 1) != x10_3)
                        *x13_1 = x8_9
                    
                    x12_1 += 2
                    x13_1 += 8
                    x14_1 -= 2
                while (x12_1 != x11_5)
                
                if (x11_5 != x9_8)
                    goto label_c0e984
            else
                x11_5 = 0
            label_c0e984:
                int64_t x10_4 = x10_3 - x11_5
                void* x12_3 = gLog + (x11_5 << 2) + 0x38
                int64_t i_28 = x9_8 - x11_5
                int64_t i_26
                
                do
                    if (x10_4 != 0)
                        *x12_3 = x8_9
                    
                    x10_4 -= 1
                    i_26 = i_28
                    i_28 -= 1
                    x12_3 += 4
                while (i_26 != 1)
