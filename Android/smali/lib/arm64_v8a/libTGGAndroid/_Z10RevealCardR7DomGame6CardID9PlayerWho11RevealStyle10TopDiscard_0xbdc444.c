// 函数: _Z10RevealCardR7DomGame6CardID9PlayerWho11RevealStyle10TopDiscard
// 地址: 0xbdc444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t fp = arg2 & 0xffff
int32_t x23 = arg5
int32_t x22 = arg4
int32_t x26 = arg3
int32_t var_64 = arg2

if (fp u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x12 = arg1 + mulu.dp.d(fp, 0x68)
*(x12 + 0x1aa0) = *(x12 + 0x1aa4)

if (x22 u<= 0xb)
    uint64_t x21_1 = zx.q(x26)
    uint64_t x11_2 = zx.q(fp)
    int32_t x8_29
    
    switch (x22)
        case 0
            int32_t x9_12 = *(arg1 + 0xd40)
            
            if (x9_12 s< 1)
            label_bdc73c:
                *(x12 + 0x1aa4) = 0
                return 
            
            if (fp u>= 0x320)
                int64_t i = 0
                
                do
                    void* x0_36 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_121 = x0_36 + sx.q(*(x0_36 + 0x13000)) * 0x98
                    *(*(x8_121 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_122 = *(x8_121 - 0x90)
                    *(x8_122 + 0x1a2c) = *(x8_122 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                    *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i << 2)) = 6
                    int32_t x8_123 = *(arg1 + 0x150c)
                    
                    if (x8_123 - 3 u>= 4)
                        int64_t var_78_20 = 0
                        int32_t var_80_20 = 0
                        int32_t var_88_20 = 0
                        int32_t var_90_18 = 0
                        DomNotifyEffect(zx.q(x8_123 == 2 ? 1 : 0), 0x28, zx.q(i.d), zx.q(var_64), 
                            6, 0, 0, 0)
                    
                    i += 1
                    x8_29 = 0
                while (i s< sx.q(*(arg1 + 0xd40)))
            else
                int64_t i_1 = 0
                
                do
                    *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_1 << 2)) = 6
                    int32_t x8_31 = *(arg1 + 0x150c)
                    
                    if (x8_31 - 3 u>= 4)
                        int64_t var_78_4 = 0
                        int32_t var_80_4 = 0
                        int32_t var_88_4 = 0
                        int32_t var_90_3 = 0
                        DomNotifyEffect(zx.q(x8_31 == 2 ? 1 : 0), 0x28, zx.q(i_1.d), zx.q(var_64), 
                            6, 0, 0, 0)
                        x9_12 = *(arg1 + 0xd40)
                    
                    i_1 += 1
                    x8_29 = 0
                while (i_1 s< sx.q(x9_12))
            
            *(x12 + 0x1aa4) = x8_29
            return 
        case 1
            if (*(arg1 + 0xd40) s< 1)
            label_bdcf9c:
                *(x12 + 0x1aa4) = 2
                return 
            
            if (fp u>= 0x320)
                int64_t i_2 = 0
                
                do
                    if (x21_1 == i_2
                            || (*(arg1 + 0x19d4) == x21_1.d && i_2 == zx.q(*(arg1 + 0x19d8))))
                        void* x0_40 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_130 = x0_40 + sx.q(*(x0_40 + 0x13000)) * 0x98
                        *(*(x8_130 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_131 = *(x8_130 - 0x90)
                        *(x8_131 + 0x1a2c) = *(x8_131 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_2 << 2)) = 6
                        int32_t x8_132 = *(arg1 + 0x150c)
                        
                        if (x8_132 - 3 u>= 4)
                            int64_t var_78_21 = 0
                            int32_t var_80_21 = 0
                            int32_t var_88_21 = 0
                            int32_t var_90_19 = 0
                            DomNotifyEffect(zx.q(x8_132 == 2 ? 1 : 0), 0x28, zx.q(i_2.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else
                        void* x0_42 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_135 = x0_42 + sx.q(*(x0_42 + 0x13000)) * 0x98
                        *(*(x8_135 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_136 = *(x8_135 - 0x90)
                        *(x8_136 + 0x1a2c) = *(x8_136 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_2 << 2)) = 0
                        int32_t x8_137 = *(arg1 + 0x150c)
                        
                        if (x8_137 - 3 u>= 4)
                            int64_t var_78_22 = 0
                            int32_t var_80_22 = 0
                            int32_t var_88_22 = 0
                            int32_t var_90_20 = 0
                            DomNotifyEffect(zx.q(x8_137 == 2 ? 1 : 0), 0x28, zx.q(i_2.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_2 += 1
                    x8_29 = 2
                while (i_2 s< sx.q(*(arg1 + 0xd40)))
            else
                int64_t i_3 = 0
                
                do
                    if (x21_1 == i_3
                            || (*(arg1 + 0x19d4) == x21_1.d && i_3 == zx.q(*(arg1 + 0x19d8))))
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_3 << 2)) = 6
                        int32_t x8_37 = *(arg1 + 0x150c)
                        
                        if (x8_37 - 3 u>= 4)
                            int64_t var_78_5 = 0
                            int32_t var_80_5 = 0
                            int32_t var_88_5 = 0
                            int32_t var_90_4 = 0
                            DomNotifyEffect(zx.q(x8_37 == 2 ? 1 : 0), 0x28, zx.q(i_3.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_3 << 2)) = 0
                        int32_t x8_38 = *(arg1 + 0x150c)
                        
                        if (x8_38 - 3 u>= 4)
                            int64_t var_78_6 = 0
                            int32_t var_80_6 = 0
                            int32_t var_88_6 = 0
                            int32_t var_90_5 = 0
                            DomNotifyEffect(zx.q(x8_38 == 2 ? 1 : 0), 0x28, zx.q(i_3.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_3 += 1
                    x8_29 = 2
                while (i_3 s< sx.q(*(arg1 + 0xd40)))
            
            *(x12 + 0x1aa4) = x8_29
            return 
        case 2
            if (*(arg1 + 0xd40) s>= 1)
                int64_t i_4 = 0
                
                do
                    if (x21_1 == i_4)
                    label_bdc980:
                        
                        if (fp u>= 0x320)
                            void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_47 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
                            *(*(x8_47 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_48 = *(x8_47 - 0x90)
                            *(x8_48 + 0x1a2c) = *(x8_48 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_4 << 2)) = 6
                        int32_t x8_49 = *(arg1 + 0x150c)
                        
                        if (x8_49 - 3 u>= 4)
                            int64_t var_78_7 = 0
                            int32_t var_80_7 = 0
                            int32_t var_88_7 = 0
                            int32_t var_90_6 = 0
                            DomNotifyEffect(zx.q(x8_49 == 2 ? 1 : 0), 0x28, zx.q(i_4.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else
                        if (*(arg1 + 0x19d4) != x21_1.d)
                            if ((*(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_4 << 2)) & 6) != 0)
                                goto label_bdc980
                        else if (i_4 == zx.q(*(arg1 + 0x19d8))
                                || (*(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_4 << 2)) & 6) != 0)
                            goto label_bdc980
                        
                        if (fp u>= 0x320)
                            void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_52 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
                            *(*(x8_52 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_53 = *(x8_52 - 0x90)
                            *(x8_53 + 0x1a2c) = *(x8_53 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_4 << 2)) = 0
                        int32_t x8_54 = *(arg1 + 0x150c)
                        
                        if (x8_54 - 3 u>= 4)
                            int64_t var_78_8 = 0
                            int32_t var_80_8 = 0
                            int32_t var_88_8 = 0
                            int32_t var_90_7 = 0
                            DomNotifyEffect(zx.q(x8_54 == 2 ? 1 : 0), 0x28, zx.q(i_4.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_4 += 1
                while (i_4 s< sx.q(*(arg1 + 0xd40)))
            
            goto label_bdcf9c
        case 3
            if (*(arg1 + 0xd40) s>= 1)
                int64_t i_5 = 0
                
                do
                    uint64_t x0_16
                    int64_t x4_3
                    
                    if (x21_1 == i_5
                            || (*(arg1 + 0x19d4) == x21_1.d && i_5 == zx.q(*(arg1 + 0x19d8))))
                        if (fp u>= 0x320)
                            void* x0_18 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_62 = x0_18 + sx.q(*(x0_18 + 0x13000)) * 0x98
                            *(*(x8_62 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_63 = *(x8_62 - 0x90)
                            *(x8_63 + 0x1a2c) = *(x8_63 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_5 << 2)) = 6
                        int32_t x8_64 = *(arg1 + 0x150c)
                        
                        if (x8_64 - 3 u>= 4)
                            x0_16 = zx.q(x8_64 == 2 ? 1 : 0)
                            x4_3 = 6
                            int64_t var_78_9 = 0
                            int32_t var_80_9 = 0
                            int32_t var_88_9 = 0
                        label_bdcad4:
                            int32_t var_90_8 = 0
                            DomNotifyEffect(x0_16, 0x28, zx.q(i_5.d), zx.q(var_64), x4_3, 0, 0, 0)
                    else if ((*(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_5 << 2)) & 6) == 0)
                        if (fp u>= 0x320)
                            void* x0_22 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_73 = x0_22 + sx.q(*(x0_22 + 0x13000)) * 0x98
                            *(*(x8_73 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_74 = *(x8_73 - 0x90)
                            *(x8_74 + 0x1a2c) = *(x8_74 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_5 << 2)) = 0
                        int32_t x8_75 = *(arg1 + 0x150c)
                        
                        if (x8_75 - 3 u>= 4)
                            int64_t var_78_11 = 0
                            int32_t var_80_11 = 0
                            int32_t var_88_11 = 0
                            int32_t var_90_9 = 0
                            DomNotifyEffect(zx.q(x8_75 == 2 ? 1 : 0), 0x28, zx.q(i_5.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    else
                        if (fp u>= 0x320)
                            void* x0_20 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_68 = x0_20 + sx.q(*(x0_20 + 0x13000)) * 0x98
                            *(*(x8_68 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_69 = *(x8_68 - 0x90)
                            *(x8_69 + 0x1a2c) = *(x8_69 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_5 << 2)) = 2
                        int32_t x8_70 = *(arg1 + 0x150c)
                        
                        if (x8_70 - 3 u>= 4)
                            x0_16 = zx.q(x8_70 == 2 ? 1 : 0)
                            int64_t var_78_10 = 0
                            int32_t var_80_10 = 0
                            int32_t var_88_10 = 0
                            x4_3 = 2
                            goto label_bdcad4
                    i_5 += 1
                while (i_5 s< sx.q(*(arg1 + 0xd40)))
            
            goto label_bdd1c4
        case 4
            if (*(arg1 + x11_2 * 0x68 + 0x1a74) == 0x3ea)
                RevealObscureHand(arg1, zx.q(x26))
            
            if (*(arg1 + 0xd40) s< 1)
                goto label_bdd1c4
            
            if (fp u>= 0x320)
                int64_t i_6 = 0
                
                do
                    if (x21_1 == i_6
                            || (*(arg1 + 0x19d4) == x21_1.d && i_6 == zx.q(*(arg1 + 0x19d8))))
                        void* x0_45 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_144 = x0_45 + sx.q(*(x0_45 + 0x13000)) * 0x98
                        *(*(x8_144 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_145 = *(x8_144 - 0x90)
                        *(x8_145 + 0x1a2c) = *(x8_145 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_6 << 2)) = 6
                        int32_t x8_146 = *(arg1 + 0x150c)
                        
                        if (x8_146 - 3 u>= 4)
                            int64_t var_78_23 = 0
                            int32_t var_80_23 = 0
                            int32_t var_88_23 = 0
                            int32_t var_90_21 = 0
                            DomNotifyEffect(zx.q(x8_146 == 2 ? 1 : 0), 0x28, zx.q(i_6.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else
                        void* x0_47 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_149 = x0_47 + sx.q(*(x0_47 + 0x13000)) * 0x98
                        *(*(x8_149 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_150 = *(x8_149 - 0x90)
                        *(x8_150 + 0x1a2c) = *(x8_150 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_6 << 2)) = 0
                        int32_t x8_151 = *(arg1 + 0x150c)
                        
                        if (x8_151 - 3 u>= 4)
                            int64_t var_78_24 = 0
                            int32_t var_80_24 = 0
                            int32_t var_88_24 = 0
                            int32_t var_90_22 = 0
                            DomNotifyEffect(zx.q(x8_151 == 2 ? 1 : 0), 0x28, zx.q(i_6.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_6 += 1
                    x8_29 = 1
                while (i_6 s< sx.q(*(arg1 + 0xd40)))
            else
                int64_t i_7 = 0
                
                do
                    if (x21_1 == i_7
                            || (*(arg1 + 0x19d4) == x21_1.d && i_7 == zx.q(*(arg1 + 0x19d8))))
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_7 << 2)) = 6
                        int32_t x8_83 = *(arg1 + 0x150c)
                        
                        if (x8_83 - 3 u>= 4)
                            int64_t var_78_12 = 0
                            int32_t var_80_12 = 0
                            int32_t var_88_12 = 0
                            int32_t var_90_10 = 0
                            DomNotifyEffect(zx.q(x8_83 == 2 ? 1 : 0), 0x28, zx.q(i_7.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_7 << 2)) = 0
                        int32_t x8_84 = *(arg1 + 0x150c)
                        
                        if (x8_84 - 3 u>= 4)
                            int64_t var_78_13 = 0
                            int32_t var_80_13 = 0
                            int32_t var_88_13 = 0
                            int32_t var_90_11 = 0
                            DomNotifyEffect(zx.q(x8_84 == 2 ? 1 : 0), 0x28, zx.q(i_7.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_7 += 1
                    x8_29 = 1
                while (i_7 s< sx.q(*(arg1 + 0xd40)))
            
            *(x12 + 0x1aa4) = x8_29
            return 
        case 5
            int32_t x9_32 = *(arg1 + 0xd40)
            
            if (x9_32 s< 1)
            label_bdd1c4:
                *(x12 + 0x1aa4) = 1
                return 
            
            if (fp u>= 0x320)
                int64_t i_8 = 0
                
                do
                    if (x21_1 == i_8)
                    label_bdd64c:
                        void* x0_49 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_158 = x0_49 + sx.q(*(x0_49 + 0x13000)) * 0x98
                        *(*(x8_158 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_159 = *(x8_158 - 0x90)
                        *(x8_159 + 0x1a2c) = *(x8_159 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_8 << 2)) = 6
                        int32_t x8_160 = *(arg1 + 0x150c)
                        
                        if (x8_160 - 3 u>= 4)
                            int64_t var_78_25 = 0
                            int32_t var_80_25 = 0
                            int32_t var_88_25 = 0
                            int32_t var_90_23 = 0
                            DomNotifyEffect(zx.q(x8_160 == 2 ? 1 : 0), 0x28, zx.q(i_8.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else if (*(arg1 + 0x19d4) == x21_1.d && i_8 == zx.q(*(arg1 + 0x19d8)))
                        goto label_bdd64c
                    
                    i_8 += 1
                    x8_29 = 1
                while (i_8 s< sx.q(*(arg1 + 0xd40)))
            else
                int64_t i_9 = 0
                
                do
                    if (x21_1 == i_9)
                    label_bdce2c:
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_9 << 2)) = 6
                        int32_t x8_88 = *(arg1 + 0x150c)
                        
                        if (x8_88 - 3 u>= 4)
                            int64_t var_78_14 = 0
                            int32_t var_80_14 = 0
                            int32_t var_88_14 = 0
                            int32_t var_90_12 = 0
                            DomNotifyEffect(zx.q(x8_88 == 2 ? 1 : 0), 0x28, zx.q(i_9.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                            x9_32 = *(arg1 + 0xd40)
                    else if (*(arg1 + 0x19d4) == x21_1.d && i_9 == zx.q(*(arg1 + 0x19d8)))
                        goto label_bdce2c
                    
                    i_9 += 1
                    x8_29 = 1
                while (i_9 s< sx.q(x9_32))
            
            *(x12 + 0x1aa4) = x8_29
            return 
        case 6, 7, 8, 9
            if (*(arg1 + 0xd40) s>= 1)
                int64_t i_10 = 0
                
                do
                    uint64_t x0_2
                    int64_t x4
                    
                    if (x21_1 == i_10)
                    label_bdc638:
                        
                        if (fp u>= 0x320)
                            void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_20 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                            *(*(x8_20 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_21 = *(x8_20 - 0x90)
                            *(x8_21 + 0x1a2c) = *(x8_21 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_10 << 2)) = 6
                        int32_t x8_22 = *(arg1 + 0x150c)
                        
                        if (x8_22 - 3 u>= 4)
                            x0_2 = zx.q(x8_22 == 2 ? 1 : 0)
                            x4 = 6
                            int64_t var_78_2 = 0
                            int32_t var_80_2 = 0
                            int32_t var_88_2 = 0
                        label_bdc54c:
                            int32_t var_90_1 = 0
                            DomNotifyEffect(x0_2, 0x28, zx.q(i_10.d), zx.q(var_64), x4, 0, 0, 0)
                    else
                        if (*(arg1 + 0x19d4) != x21_1.d)
                            if (x23 != 0)
                                goto label_bdc638
                        else if (x23 != 0 || i_10 == zx.q(*(arg1 + 0x19d8)))
                            goto label_bdc638
                        
                        if ((*(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_10 << 2)) & 2) != 0)
                            if (fp u>= 0x320)
                                void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
                                void* x8_25 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
                                *(*(x8_25 - 0x90) + 0x1a28) = 0xffffffff
                                void* x8_26 = *(x8_25 - 0x90)
                                *(x8_26 + 0x1a2c) = *(x8_26 + 0x1a24)
                                XTrace("game thread yield (error)")
                                xco_yield()
                                XTrace("game thread resume (error)")
                            
                            *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_10 << 2)) = 2
                            int32_t x8_27 = *(arg1 + 0x150c)
                            
                            if (x8_27 - 3 u>= 4)
                                x0_2 = zx.q(x8_27 == 2 ? 1 : 0)
                                int64_t var_78_3 = 0
                                int32_t var_80_3 = 0
                                int32_t var_88_3 = 0
                                x4 = 2
                                goto label_bdc54c
                        else
                            if (fp u>= 0x320)
                                void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                                void* x8_15 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                                *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
                                void* x8_16 = *(x8_15 - 0x90)
                                *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
                                XTrace("game thread yield (error)")
                                xco_yield()
                                XTrace("game thread resume (error)")
                            
                            *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_10 << 2)) = 0
                            int32_t x8_17 = *(arg1 + 0x150c)
                            
                            if (x8_17 - 3 u>= 4)
                                int64_t var_78_1 = 0
                                int32_t var_80_1 = 0
                                int32_t var_88_1 = 0
                                int32_t var_90_2 = 0
                                DomNotifyEffect(zx.q(x8_17 == 2 ? 1 : 0), 0x28, zx.q(i_10.d), 
                                    zx.q(var_64), 0, 0, 0, 0)
                    i_10 += 1
                while (i_10 s< sx.q(*(arg1 + 0xd40)))
            
            if (x23 != 0)
                goto label_bdc73c
            
            if (x22 - 6 u< 4)
                *(x12 + 0x1aa4) = *(&data_71b8d0 + (sx.q(x22 - 6) << 2))
                return 
        case 0xa
            if (*(arg1 + x11_2 * 0x68 + 0x1a74) == 0x3ea)
                RevealObscureHand(arg1, zx.q(x26))
            
            if (*(arg1 + 0xd40) s< 1)
                goto label_bdcf9c
            
            if (fp u>= 0x320)
                int64_t i_11 = 0
                
                do
                    if (x21_1 == i_11
                            || (*(arg1 + 0x19d4) == x21_1.d && i_11 == zx.q(*(arg1 + 0x19d8))))
                        void* x0_53 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_167 = x0_53 + sx.q(*(x0_53 + 0x13000)) * 0x98
                        *(*(x8_167 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_168 = *(x8_167 - 0x90)
                        *(x8_168 + 0x1a2c) = *(x8_168 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_11 << 2)) = 6
                        int32_t x8_169 = *(arg1 + 0x150c)
                        
                        if (x8_169 - 3 u>= 4)
                            int64_t var_78_26 = 0
                            int32_t var_80_26 = 0
                            int32_t var_88_26 = 0
                            int32_t var_90_24 = 0
                            DomNotifyEffect(zx.q(x8_169 == 2 ? 1 : 0), 0x28, zx.q(i_11.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else
                        void* x0_55 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_172 = x0_55 + sx.q(*(x0_55 + 0x13000)) * 0x98
                        *(*(x8_172 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_173 = *(x8_172 - 0x90)
                        *(x8_173 + 0x1a2c) = *(x8_173 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_11 << 2)) = 0
                        int32_t x8_174 = *(arg1 + 0x150c)
                        
                        if (x8_174 - 3 u>= 4)
                            int64_t var_78_27 = 0
                            int32_t var_80_27 = 0
                            int32_t var_88_27 = 0
                            int32_t var_90_25 = 0
                            DomNotifyEffect(zx.q(x8_174 == 2 ? 1 : 0), 0x28, zx.q(i_11.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_11 += 1
                    x8_29 = 2
                while (i_11 s< sx.q(*(arg1 + 0xd40)))
            else
                int64_t i_12 = 0
                
                do
                    if (x21_1 == i_12
                            || (*(arg1 + 0x19d4) == x21_1.d && i_12 == zx.q(*(arg1 + 0x19d8))))
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_12 << 2)) = 6
                        int32_t x8_96 = *(arg1 + 0x150c)
                        
                        if (x8_96 - 3 u>= 4)
                            int64_t var_78_15 = 0
                            int32_t var_80_15 = 0
                            int32_t var_88_15 = 0
                            int32_t var_90_13 = 0
                            DomNotifyEffect(zx.q(x8_96 == 2 ? 1 : 0), 0x28, zx.q(i_12.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else
                        *(arg1 + x11_2 * 0x68 + 0x1aa8 + (i_12 << 2)) = 0
                        int32_t x8_97 = *(arg1 + 0x150c)
                        
                        if (x8_97 - 3 u>= 4)
                            int64_t var_78_16 = 0
                            int32_t var_80_16 = 0
                            int32_t var_88_16 = 0
                            int32_t var_90_14 = 0
                            DomNotifyEffect(zx.q(x8_97 == 2 ? 1 : 0), 0x28, zx.q(i_12.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_12 += 1
                    x8_29 = 2
                while (i_12 s< sx.q(*(arg1 + 0xd40)))
            
            *(x12 + 0x1aa4) = x8_29
            return 
        case 0xb
            if (*(arg1 + 0xd40) s>= 1)
                int64_t x8_99 = arg1 + x11_2 * 0x68
                int64_t i_13 = 0
                
                do
                    if (x21_1 == i_13)
                        if (fp u>= 0x320)
                            void* x0_30 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_103 = x0_30 + sx.q(*(x0_30 + 0x13000)) * 0x98
                            *(*(x8_103 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_104 = *(x8_103 - 0x90)
                            *(x8_104 + 0x1a2c) = *(x8_104 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(x8_99 + (zx.q(x26) << 2) + 0x1aa8) = 6
                        int32_t x8_105 = *(arg1 + 0x150c)
                        
                        if (x8_105 - 3 u>= 4)
                            int64_t var_78_17 = 0
                            int32_t var_80_17 = 0
                            int32_t var_88_17 = 0
                            int32_t var_90_15 = 0
                            DomNotifyEffect(zx.q(x8_105 == 2 ? 1 : 0), 0x28, zx.q(x21_1.d), 
                                zx.q(var_64), 6, 0, 0, 0)
                    else if ((*(x8_99 + 0x1aa8 + (i_13 << 2)) & 2) != 0)
                        if (fp u>= 0x320)
                            void* x0_34 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_114 = x0_34 + sx.q(*(x0_34 + 0x13000)) * 0x98
                            *(*(x8_114 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_115 = *(x8_114 - 0x90)
                            *(x8_115 + 0x1a2c) = *(x8_115 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(x8_99 + 0x1aa8 + (i_13 << 2)) = 2
                        int32_t x8_116 = *(arg1 + 0x150c)
                        
                        if (x8_116 - 3 u>= 4)
                            int64_t var_78_19 = 0
                            int32_t var_80_19 = 0
                            int32_t var_88_19 = 0
                            int32_t var_90_17 = 0
                            DomNotifyEffect(zx.q(x8_116 == 2 ? 1 : 0), 0x28, zx.q(i_13.d), 
                                zx.q(var_64), 2, 0, 0, 0)
                    else
                        if (fp u>= 0x320)
                            void* x0_32 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_109 = x0_32 + sx.q(*(x0_32 + 0x13000)) * 0x98
                            *(*(x8_109 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_110 = *(x8_109 - 0x90)
                            *(x8_110 + 0x1a2c) = *(x8_110 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        *(x8_99 + 0x1aa8 + (i_13 << 2)) = 0
                        int32_t x8_111 = *(arg1 + 0x150c)
                        
                        if (x8_111 - 3 u>= 4)
                            int64_t var_78_18 = 0
                            int32_t var_80_18 = 0
                            int32_t var_88_18 = 0
                            int32_t var_90_16 = 0
                            DomNotifyEffect(zx.q(x8_111 == 2 ? 1 : 0), 0x28, zx.q(i_13.d), 
                                zx.q(var_64), 0, 0, 0, 0)
                    
                    i_13 += 1
                while (i_13 s< sx.q(*(arg1 + 0xd40)))
            
            goto label_bdd1c4

pthread_kill(pthread_self(), 6)
uint64_t x0_57
int64_t x1_2
x0_57, x1_2 = XNoReturn()
return MergeRevealStateForPossession(x0_57, x1_2) __tailcall
