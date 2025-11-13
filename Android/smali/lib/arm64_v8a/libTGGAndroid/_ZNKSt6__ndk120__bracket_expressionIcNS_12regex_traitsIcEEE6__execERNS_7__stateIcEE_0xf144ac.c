// 函数: _ZNKSt6__ndk120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE
// 地址: 0xf144ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
char* x8 = *(entry_x1 + 0x10)
int64_t x9 = *(entry_x1 + 0x18)
std::__ndk1::__state<char>& x20 = arg1
int64_t x8_8
int64_t x8_6

if (x8 == x9)
    x8_6 = 0
    
    if (zx.d(*(x20 + 0xa4)) == zx.d(*(x20 + 0xa4)))
        x8_8 = 0
        *entry_x1 = 0xfffffc1f
    else
    label_f1454c:
        int64_t x9_2 = *(entry_x1 + 0x10)
        *entry_x1 = 0xfffffc1d
        *(entry_x1 + 0x10) = x9_2 + x8_6
        x8_8 = *(x20 + 8)
else
    if (zx.d(*(x20 + 0xa7)) == 0 || &x8[1] == x9)
        goto label_f145b0
    
    char x1 = *x8
    char var_7c = x1
    uint32_t x21_1 = zx.d(x8[1])
    uint8_t var_7b_1 = x21_1.b
    
    if (zx.d(*(x20 + 0xa5)) != 0)
        var_7c = (*(**(x20 + 0x18) + 0x28))()
        int64_t* x0_2 = *(x20 + 0x18)
        var_7b_1 = ((*(*x0_2 + 0x28))(x0_2, zx.q(x21_1))).b
    else if (zx.d(*(x20 + 0xa6)) != 0)
        var_7c = x1
        var_7b_1 = x21_1.b
    
    char x22_1 = &var_7c | 2
    std::__ndk1::regex_traits<char>::__lookup_collatename<char*>(x20 + 0x10, &var_7c, x22_1)
    char var_78
    uint32_t x8_10 = zx.d(var_78)
    
    if ((x8_10 & 1) == 0)
        if (x8_10 u>= 2)
            goto label_f1471c
        
        goto label_f145ac
    
    void* var_68
    operator delete(var_68)
    uint64_t var_70
    char var_98
    uint64_t var_90
    void* var_88
    
    if (var_70 == 0)
    label_f145ac:
        x8 = *(entry_x1 + 0x10)
    label_f145b0:
        uint32_t x1_3 = zx.d(*x8)
        var_7c = x1_3.b
        
        if (zx.d(*(x20 + 0xa5)) != 0)
            arg1 = (*(**(x20 + 0x18) + 0x28))()
            x1_3 = arg1.d
            var_7c = (arg1.d).b
        else if (zx.d(*(x20 + 0xa6)) != 0)
            var_7c = x1_3.b
        
        void* x8_15 = *(x20 + 0x28)
        int64_t x9_3 = *(x20 + 0x30)
        int32_t x23_5
        
        if (x9_3 == x8_15)
        label_f14610:
            uint64_t x8_16 = zx.q(*(x20 + 0xa2))
            
            if (x8_16 != 0 || *(x20 + 0x40) != *(x20 + 0x48))
                int32_t x8_17
                char* x9_9
                char* x10_6
                
                if ((x1_3 & 0x80) != 0
                        || (*(*(*(x20 + 0x18) + 0x10) + (zx.q(x1_3.b) << 3)) & x8_16) == 0)
                    x8_17 = (sx.d((x8_16.d).w) s< 0 ? 1 : 0) & ((x1_3 & 0xff) == 0x5f ? 1 : 0)
                    x9_9 = *(x20 + 0x40)
                    x10_6 = *(x20 + 0x48)
                    
                    if (x9_9 != x10_6)
                    label_f14684:
                        
                        while (zx.d(*x9_9) != zx.d(x1_3.b))
                            x9_9 = &x9_9[1]
                            
                            if (x10_6 == x9_9)
                                x9_9 = x10_6
                                break
                else
                    x8_17 = 1
                    x9_9 = *(x20 + 0x40)
                    x10_6 = *(x20 + 0x48)
                    
                    if (x9_9 != x10_6)
                        goto label_f14684
                
                if (((x9_9 == x10_6 ? 1 : 0) & not.d(x8_17) & 1) == 0)
                    goto label_f146a8
                
            labelid_6:
                x23_5 = 1
            else
            label_f146a8:
                void* x8_32 = *(x20 + 0x58)
                int64_t x9_13 = *(x20 + 0x60)
                
                if (x8_32 == x9_13)
                    x23_5 = 0
                label_f149d8:
                    
                    if (*(x20 + 0x88) == *(x20 + 0x90))
                    label_f14ac8:
                        int32_t x8_37 = sx.d(var_7c)
                        
                        if ((x8_37 & 0x80000000) == 0)
                            uint64_t x9_36 = zx.q(x8_37.b)
                            uint64_t x8_38 = zx.q(*(x20 + 0xa0))
                            
                            if ((*(*(*(x20 + 0x18) + 0x10) + (x9_36 << 3)) & x8_38) != 0)
                            label_f14afc:
                                x23_5 = 1
                            else if (x9_36.d == 0x5f && (sx.d((x8_38.d).w) & 0x80000000) != 0)
                            label_f14afc_1:
                                x23_5 = 1
                    else
                        std::__ndk1::regex_traits<char>::__transform_primary<char*>(x20 + 0x10, 
                            &var_7c, &var_7c | 1)
                        void* x8_36 = *(x20 + 0x88)
                        int64_t x9_33 = *(x20 + 0x90)
                        uint64_t x10_17 = zx.q(var_78)
                        int32_t x21_5
                        
                        if (x9_33 == x8_36)
                            if ((x10_17.d & 1) == 0)
                                goto label_f14ac8
                            
                        label_f14ab8:
                            x21_5 = 0
                        else
                            uint64_t x9_34 = x10_17 u>> 1
                            int32_t x12_5 = x10_17.d & 1
                            void* x10_18 = &var_78 | 1
                            uint64_t x21_4
                            
                            x21_4 = x12_5 == 0 ? x9_34 : var_70
                            
                            void* x22_3
                            
                            x22_3 = x12_5 == 0 ? x10_18 : var_68
                            
                            int64_t x24_3 = ((x9_33 - x8_36) s>> 3) * -0x5555555555555555
                            
                            if (x12_5 == 0)
                                int64_t x11_9 = 0
                                
                                do
                                    char* x13_6 = x8_36 + x11_9 * 0x18
                                    uint64_t x14_2 = zx.q(*x13_6)
                                    uint64_t x15_2
                                    
                                    if ((x14_2.d & 1) == 0)
                                        x15_2 = x14_2 u>> 1
                                    else
                                        x15_2 = *(x13_6 + 8)
                                    
                                    if (x21_4 == x15_2)
                                        if (x21_4 == 0)
                                            goto label_f14afc_2
                                        
                                        void* x14_3 = x10_18
                                        void* x13_7
                                        
                                        if ((x14_2.d & 1) != 0)
                                            x13_7 = *(x8_36 + x11_9 * 0x18 + 0x10)
                                        else
                                            x13_7 = &x13_6[1]
                                        
                                        uint64_t x15_5 = x9_34
                                        
                                        while (zx.d(*x14_3) == zx.d(*x13_7))
                                            uint64_t temp6_1 = x15_5
                                            x15_5 -= 1
                                            x14_3 += 1
                                            x13_7 += 1
                                            
                                            if (temp6_1 == 1)
                                                goto label_f14afc_2
                                    
                                    x11_9 += 1
                                while (x11_9 u< x24_3)
                                
                                goto label_f14ac8
                            
                            if (x21_4 == 0)
                                int64_t x9_49 = 0
                                void* x8_44 = x8_36 + 8
                                
                                do
                                    uint64_t x10_27 = zx.q(*(x8_44 - 8))
                                    uint64_t x10_28
                                    
                                    if ((x10_27.d & 1) == 0)
                                        x10_28 = x10_27 u>> 1
                                    else
                                        x10_28 = *x8_44
                                    
                                    x21_5 = x10_28 == 0 ? 1 : 0
                                    
                                    if (x10_28 == 0)
                                        x23_5 = 1
                                        break
                                    
                                    x9_49 += 1
                                    x8_44 += 0x18
                                while (x9_49 u< x24_3)
                            else
                                int64_t x25_3 = 0
                                int64_t* x26_3 = x8_36 + 0x10
                                
                                while (true)
                                    uint64_t x8_42 = zx.q(x26_3[-2].b)
                                    uint64_t x9_42
                                    
                                    if ((x8_42.d & 1) == 0)
                                        x9_42 = x8_42 u>> 1
                                    else
                                        x9_42 = x26_3[-1]
                                    
                                    if (x21_4 == x9_42)
                                        void* x1_12
                                        
                                        if ((x8_42.d & 1) == 0)
                                            x1_12 = x26_3 - 0xf
                                        else
                                            x1_12 = *x26_3
                                        
                                        if (memcmp(x22_3, x1_12, x21_4) == 0)
                                            x23_5 = 1
                                            x21_5 = 1
                                            break
                                    
                                    x25_3 += 1
                                    x26_3 = &x26_3[3]
                                    
                                    if (x25_3 u>= x24_3)
                                        goto label_f14ab8
                        
                        operator delete(var_68)
                        
                        if ((x21_5 & 1) == 0)
                            goto label_f14ac8
                else
                    uint64_t x22_2
                    void* x9_16
                    
                    if (zx.d(*(x20 + 0xa6)) == 0)
                        uint8_t var_97_1 = x1_3.b
                        var_98 = 2
                        char var_96_1 = 0
                        x22_2 = 2
                        x9_16 = x9_13 - x8_32
                        
                        if (x9_13 == x8_32)
                        label_f149c0:
                            x23_5 = 0
                        else
                        label_f148f0:
                            int32_t temp2_1 = x22_2.d & 1
                            int64_t x23_6 = 0
                            uint64_t x25_2
                            
                            if (temp2_1 == 0)
                                x25_2 = x22_2 u>> 1
                            else
                                x25_2 = var_90
                            
                            void* x21_3
                            
                            if (temp2_1 == 0)
                                x21_3 = &var_98 | 1
                            else
                                x21_3 = var_88
                            
                            char* x26_2 = x8_32 + 0x18
                            
                            while (true)
                                uint64_t x8_33 = zx.q(x26_2[-0x18])
                                uint64_t x27_2
                                
                                if ((x8_33.d & 1) == 0)
                                    x27_2 = x8_33 u>> 1
                                else
                                    x27_2 = *(x26_2 - 0x10)
                                
                                uint64_t x2_6
                                
                                x2_6 = x27_2 u< x25_2 ? x27_2 : x25_2
                                
                                if (x2_6 != 0)
                                    void* x1_8
                                    
                                    if ((x8_33.d & 1) == 0)
                                        x1_8 = x26_2 - 0x17
                                    else
                                        x1_8 = *(x26_2 - 8)
                                    
                                    arg1 = memcmp(x21_3, x1_8, x2_6)
                                
                                if (x2_6 == 0 || arg1.d == 0)
                                    if (x25_2 u>= x27_2)
                                    label_f1497c:
                                        uint64_t x8_34 = zx.q(*x26_2)
                                        uint64_t x27_3
                                        
                                        if ((x8_34.d & 1) == 0)
                                            x27_3 = x8_34 u>> 1
                                        else
                                            x27_3 = *(x26_2 + 8)
                                        
                                        uint64_t x2_7
                                        
                                        x2_7 = x25_2 u< x27_3 ? x25_2 : x27_3
                                        
                                        if (x2_7 != 0)
                                            void* x0_14
                                            
                                            if ((x8_34.d & 1) != 0)
                                                x0_14 = *(x26_2 + 0x10)
                                            else
                                                x0_14 = &x26_2[1]
                                            
                                            arg1 = memcmp(x0_14, x21_3, x2_7)
                                        
                                        if (x2_7 == 0 || arg1.d == 0)
                                            if (x27_3 u>= x25_2)
                                                x23_5 = 1
                                                break
                                        else if ((arg1.d & 0x80000000) == 0)
                                            x23_5 = 1
                                            break
                                else if ((arg1.d & 0x80000000) == 0)
                                    goto label_f1497c
                                
                                x23_6 += 1
                                x26_2 = &x26_2[0x30]
                                
                                if (x23_6 u>= (x9_16 s>> 4) * -0x5555555555555555)
                                    goto label_f149c0_1
                    else
                        uint8_t var_77_1 = x1_3.b
                        var_78 = 2
                        char var_76_1 = 0
                        int64_t* x0_6 = *(x20 + 0x20)
                        (*(*x0_6 + 0x20))(x0_6, &var_78 | 1, &var_78 | 2)
                        
                        if ((zx.d(var_78) & 1) != 0)
                            operator delete(var_68)
                        
                        x8_32 = *(x20 + 0x58)
                        int64_t x9_15 = *(x20 + 0x60)
                        x22_2 = zx.q(var_98)
                        x9_16 = x9_15 - x8_32
                        
                        if (x9_15 != x8_32)
                            goto label_f148f0
                        
                    label_f149c0_1:
                        x23_5 = 0
                    
                    if ((x22_2.d & 1) != 0)
                        operator delete(var_88)
                    
                    if ((x23_5 & 1) == 0)
                        goto label_f149d8
        else
            int64_t x10_3 = 0
            
            while (zx.d(*(x8_15 + x10_3)) != zx.d(x1_3.b))
                x10_3 += 1
                
                if (x10_3 u>= x9_3 - x8_15)
                    goto label_f14610
            
        label_f14afc_2:
            x23_5 = 1
        
        x8_6 = 1
        
        if (x23_5 != zx.d(*(x20 + 0xa4)))
            goto label_f1454c
        
        x8_8 = 0
        *entry_x1 = 0xfffffc1f
    else
    label_f1471c:
        void* x12_1 = *(x20 + 0x70)
        int64_t x8_23 = *(x20 + 0x78)
        
        if (x8_23 != x12_1)
            int64_t i = 0
            char* x12_2 = x12_1 + 1
            
            do
                if (zx.d(var_7c) == zx.d(x12_2[-1]) && zx.d(var_7b_1) == zx.d(*x12_2))
                    goto label_f14e58_1
                
                i += 1
                x12_2 = &x12_2[2]
            while (i u< (x8_23 - x12_1) s>> 1)
        
        int32_t x23_4
        
        if (zx.d(*(x20 + 0xa6)) == 0 || *(x20 + 0x58) == *(x20 + 0x60))
            x23_4 = 0
        label_f14b5c:
            int32_t x8_46
            
            if (*(x20 + 0x88) == *(x20 + 0x90))
            label_f14da0:
                int32_t x8_47 = sx.d(var_7c)
                int32_t x9_53
                
                if ((x8_47 & 0x80000000) != 0)
                    x9_53 = zx.d(*(x20 + 0xa2))
                label_f14e1c:
                    int32_t x8_49 = sx.d(var_7b_1)
                    
                    if ((x8_49 & 0x80000000) != 0)
                    label_f14e58:
                        x8_46 = 1
                    else
                        uint64_t x10_34 = zx.q(x8_49.b)
                        
                        if ((zx.q(x9_53.w) & zx.q((*(*(*(x20 + 0x18) + 0x10) + (x10_34 << 3))).w))
                                != 0)
                            x8_46 = x23_4
                        else
                            x8_46 = 1
                            
                            if ((x9_53 & 0x8000) != 0 && x10_34.d == 0x5f)
                                x8_46 = x23_4
                else
                    uint64_t x8_48 = zx.q(x8_47.b)
                    uint64_t x10_31 = zx.q(*(x20 + 0xa0))
                    int64_t x11_15 = *(*(x20 + 0x18) + 0x10)
                    int64_t x9_52 = *(x11_15 + (x8_48 << 3))
                    
                    if ((x9_52 & x10_31) != 0
                            || (x8_48.d == 0x5f && (sx.d((x10_31.d).w) & 0x80000000) != 0))
                        int32_t x12_10 = sx.d(var_7b_1)
                        
                        if ((x12_10 & 0x80000000) != 0)
                            goto label_f14df8
                        
                        uint64_t x12_11 = zx.q(x12_10.b)
                        
                        if ((*(x11_15 + (x12_11 << 3)) & x10_31) == 0
                                && ((x10_31.d & 0x8000) == 0 || x12_11.d != 0x5f))
                            goto label_f14df8
                        
                    label_f14e58_1:
                        x8_46 = 1
                    else
                    label_f14df8:
                        uint64_t x10_32 = zx.q(*(x20 + 0xa2))
                        
                        if ((x9_52 & x10_32) != 0)
                            x8_46 = x23_4
                        else
                            x9_53 = sx.d((x10_32.d).w)
                            
                            if (x8_48.d != 0x5f || (x9_53 & 0x80000000) == 0)
                                goto label_f14e1c
                            
                            x8_46 = x23_4
            else
                std::__ndk1::regex_traits<char>::__transform_primary<char*>(x20 + 0x10, &var_7c, 
                    x22_1)
                void* x8_41 = *(x20 + 0x88)
                int64_t x9_39 = *(x20 + 0x90)
                uint64_t x10_21 = zx.q(var_78)
                int32_t x21_7
                
                if (x9_39 == x8_41)
                    if ((x10_21.d & 1) == 0)
                        goto label_f14da0
                    
                label_f14c9c:
                    x21_7 = 1
                else
                    uint64_t x9_40 = x10_21 u>> 1
                    int32_t x12_6 = x10_21.d & 1
                    void* x10_22 = &var_78 | 1
                    uint64_t x21_6
                    
                    x21_6 = x12_6 == 0 ? x9_40 : var_70
                    
                    void* x22_4
                    
                    x22_4 = x12_6 == 0 ? x10_22 : var_68
                    
                    int64_t x24_4 = ((x9_39 - x8_41) s>> 3) * -0x5555555555555555
                    
                    if (x12_6 == 0)
                        int64_t x11_12 = 0
                        
                        do
                            char* x13_9 = x8_41 + x11_12 * 0x18
                            uint64_t x14_5 = zx.q(*x13_9)
                            uint64_t x15_7
                            
                            if ((x14_5.d & 1) == 0)
                                x15_7 = x14_5 u>> 1
                            else
                                x15_7 = *(x13_9 + 8)
                            
                            if (x21_6 == x15_7)
                                if (x21_6 == 0)
                                    goto label_f14e58_1
                                
                                void* x14_6 = x10_22
                                void* x13_10
                                
                                if ((x14_5.d & 1) != 0)
                                    x13_10 = *(x8_41 + x11_12 * 0x18 + 0x10)
                                else
                                    x13_10 = &x13_9[1]
                                
                                uint64_t x15_10 = x9_40
                                
                                while (zx.d(*x14_6) == zx.d(*x13_10))
                                    uint64_t temp7_1 = x15_10
                                    x15_10 -= 1
                                    x14_6 += 1
                                    x13_10 += 1
                                    
                                    if (temp7_1 == 1)
                                        goto label_f14e58_1
                            
                            x11_12 += 1
                        while (x11_12 u< x24_4)
                        
                        goto label_f14da0
                    
                    if (x21_6 == 0)
                        int64_t x9_50 = 0
                        void* x8_45 = x8_41 + 8
                        uint64_t x10_30
                        
                        do
                            uint64_t x10_29 = zx.q(*(x8_45 - 8))
                            
                            if ((x10_29.d & 1) == 0)
                                x10_30 = x10_29 u>> 1
                            else
                                x10_30 = *x8_45
                            
                            if (x10_30 == 0)
                                x23_4 = 1
                                break
                            
                            x9_50 += 1
                            x8_45 += 0x18
                        while (x9_50 u< x24_4)
                        
                        x21_7 = x10_30 != 0 ? 1 : 0
                    else
                        int64_t x25_4 = 0
                        int64_t* x26_4 = x8_41 + 0x10
                        
                        while (true)
                            uint64_t x8_43 = zx.q(x26_4[-2].b)
                            uint64_t x9_46
                            
                            if ((x8_43.d & 1) == 0)
                                x9_46 = x8_43 u>> 1
                            else
                                x9_46 = x26_4[-1]
                            
                            if (x21_6 == x9_46)
                                void* x1_13
                                
                                if ((x8_43.d & 1) == 0)
                                    x1_13 = x26_4 - 0xf
                                else
                                    x1_13 = *x26_4
                                
                                if (memcmp(x22_4, x1_13, x21_6) == 0)
                                    x21_7 = 0
                                    x23_4 = 1
                                    break
                            
                            x25_4 += 1
                            x26_4 = &x26_4[3]
                            
                            if (x25_4 u>= x24_4)
                                goto label_f14c9c
                
                operator delete(var_68)
                x8_46 = x23_4
                
                if ((x21_7 & 1) != 0)
                    goto label_f14da0
            
            x23_4 = x8_46
        else
            int16_t x8_26 = var_7c.w
            var_78 = 4
            char var_75_1 = 0
            char var_77
            var_77.w = x8_26
            int64_t* x0_9 = *(x20 + 0x20)
            (*(*x0_9 + 0x20))(x0_9, &var_78 | 1, &var_78 | 3)
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
            
            void* x8_29 = *(x20 + 0x58)
            int64_t x9_20 = *(x20 + 0x60)
            uint64_t x24_1 = zx.q(var_98)
            
            if (x9_20 == x8_29)
            label_f14b40:
                x23_4 = 0
            else
                int32_t temp5_1 = x24_1.d & 1
                int64_t x25_1 = 0
                uint64_t x27_1
                
                if (temp5_1 == 0)
                    x27_1 = x24_1 u>> 1
                else
                    x27_1 = var_90
                
                void* x23_3
                
                if (temp5_1 == 0)
                    x23_3 = &var_98 | 1
                else
                    x23_3 = var_88
                
                char* x28_1 = x8_29 + 0x18
                
                while (true)
                    uint64_t x8_30 = zx.q(x28_1[-0x18])
                    uint64_t fp_1
                    
                    if ((x8_30.d & 1) == 0)
                        fp_1 = x8_30 u>> 1
                    else
                        fp_1 = *(x28_1 - 0x10)
                    
                    uint64_t x2_4
                    
                    x2_4 = fp_1 u< x27_1 ? fp_1 : x27_1
                    
                    if (x2_4 != 0)
                        void* x1_6
                        
                        if ((x8_30.d & 1) == 0)
                            x1_6 = x28_1 - 0x17
                        else
                            x1_6 = *(x28_1 - 8)
                        
                        arg1 = memcmp(x23_3, x1_6, x2_4)
                    
                    if (x2_4 == 0 || arg1.d == 0)
                        if (x27_1 u>= fp_1)
                        label_f14870:
                            uint64_t x8_31 = zx.q(*x28_1)
                            uint64_t fp_2
                            
                            if ((x8_31.d & 1) == 0)
                                fp_2 = x8_31 u>> 1
                            else
                                fp_2 = *(x28_1 + 8)
                            
                            uint64_t x2_5
                            
                            x2_5 = x27_1 u< fp_2 ? x27_1 : fp_2
                            
                            if (x2_5 != 0)
                                void* x0_12
                                
                                if ((x8_31.d & 1) != 0)
                                    x0_12 = *(x28_1 + 0x10)
                                else
                                    x0_12 = &x28_1[1]
                                
                                arg1 = memcmp(x0_12, x23_3, x2_5)
                            
                            if (x2_5 == 0 || arg1.d == 0)
                                if (fp_2 u>= x27_1)
                                    x23_4 = 1
                                    break
                            else if ((arg1.d & 0x80000000) == 0)
                                x23_4 = 1
                                break
                    else if ((arg1.d & 0x80000000) == 0)
                        goto label_f14870
                    
                    x25_1 += 1
                    x28_1 = &x28_1[0x30]
                    
                    if (x25_1 u>= ((x9_20 - x8_29) s>> 4) * -0x5555555555555555)
                        goto label_f14b40
            
            if ((x24_1.d & 1) != 0)
                operator delete(var_88)
            
            if ((x23_4 & 1) == 0)
                goto label_f14b5c
        
        x8_6 = 2
        
        if (x23_4 != zx.d(*(x20 + 0xa4)))
            goto label_f1454c
        
        x8_8 = 0
        *entry_x1 = 0xfffffc1f
*(entry_x1 + 0x50) = x8_8
