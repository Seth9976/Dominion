// 函数: _ZN9STokenize13STokenizeIter8ParseStrE10StringSpan
// 地址: 0x9f1224
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

StringSpan* entry_x8
*(entry_x8 + 0x10) = 0
*(entry_x8 + 0x18) = 0
*entry_x8 = arg1
int64_t entry_x1
*(entry_x8 + 8) = entry_x1

if (arg1 == 0)
    return 

if (entry_x1.d s>= 1)
    int64_t x25_1 = arg1 << 1
    void* x20_1 = arg1
    int64_t x24_1 = 0
    int64_t x23_1 = entry_x1
    
    while (true)
        char* x0 = memchr("():,", zx.d(*(x20_1 + x24_1)), 5)
        
        if (x0 != 0)
            uint64_t x8_1 = zx.q(zx.d(*x0) - 0x28)
            
            if (x8_1.d u<= 0x12)
                int64_t x1_1 = entry_x1 - x24_1
                
                switch (x8_1)
                    case 0
                        void* x21_2 = x20_1 + entry_x1
                        *(entry_x8 + 8) = x24_1
                        void* x22_1
                        int64_t x23_2
                        
                        if (entry_x1.d - x24_1.d s< 1)
                        label_9f1390:
                            x23_2 = 0
                            x22_1 = nullptr
                        else
                            int64_t x8_5 = 0
                            
                            while (true)
                                uint64_t x12_2 = zx.q(*(x20_1 + x8_5 + x24_1))
                                
                                if (x12_2 u> 0x3f || (1 << x12_2 & 0x400130100002601) == 0)
                                    x23_2 = x23_1 - x8_5
                                    x22_1 = x25_1 - x20_1 + x24_1 + x8_5
                                    break
                                
                                x8_5 += 1
                                
                                if ((x1_1 & 0xffffffff) == x8_5)
                                    goto label_9f1390
                                
                                continue
                        
                        int32_t x24_2 = 1
                        void* x25_2 = x22_1
                        *(entry_x8 + 0x10) = x22_1
                        *(entry_x8 + 0x18) = x23_2
                        
                        while (x23_2.d s>= 1)
                            int32_t x26_2 = 0
                            int64_t x27_2 = x23_2 & 0xffffffff
                            void* x28_1 = x25_2
                            char* x0_2
                            
                            while (true)
                                x0_2 = memchr(&data_79b951, zx.d(*x28_1), 3)
                                
                                if (x0_2 != 0)
                                    break
                                
                                x26_2 += 1
                                int64_t temp1_1 = x27_2
                                x27_2 -= 1
                                x28_1 += 1
                                
                                if (temp1_1 == 1)
                                    goto label_9f1478
                            
                            uint32_t x9_6 = zx.d(*x0_2)
                            uint64_t x8_10 = zx.q(x26_2)
                            
                            if (x9_6 == 0x29)
                                x24_2 -= 1
                            else if (x9_6 == 0x28)
                                x24_2 += 1
                            
                            x25_2 = x25_2 + 1 + x8_10
                            x23_2 += not.q(x8_10)
                            
                            if (x24_2 s<= 0)
                                x21_2 = x25_2
                                break
                        
                    label_9f1478:
                        *(entry_x8 + 0x18) = x21_2 - x22_1
                        
                        if (x21_2 == x22_1)
                            *(entry_x8 + 0x10) = 0
                    case 1, 4
                        *(entry_x8 + 8) = x24_1
                    case 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11
                        goto label_9f14e0
                    case 0x12
                        *(entry_x8 + 8) = x24_1
                        int64_t x0_1
                        
                        if (entry_x1.d - x24_1.d s< 1)
                        label_9f1330:
                            x1_1 = 0
                            x0_1 = 0
                        else
                            void* x8_3 = x20_1 + x24_1
                            int64_t x9_1 = arg1 - x25_1 - x24_1
                            int64_t x11_2 = x1_1 & 0xffffffff
                            
                            while (true)
                                uint64_t x13_1 = zx.q(*x8_3)
                                
                                if (x13_1 u> 0x3f || (1 << x13_1 & 0x400130100002601) == 0)
                                    x0_1 = neg.q(x9_1)
                                    break
                                
                                x1_1 -= 1
                                x9_1 -= 1
                                int64_t temp0_1 = x11_2
                                x11_2 -= 1
                                x8_3 += 1
                                
                                if (temp0_1 == 1)
                                    goto label_9f1330
                                
                                continue
                        
                        *(entry_x8 + 0x10) = x0_1
                        *(entry_x8 + 0x18) = x1_1
                        STokenize::STokenizeIter::ParseStr(x0_1)
                        int64_t var_70
                        int64_t var_68
                        int64_t x8_7 = var_70 + var_68
                        int64_t var_80
                        int64_t var_78
                        int64_t x9_3 = var_80 + var_78
                        int64_t x8_8
                        
                        x8_8 = x8_7 u> x9_3 ? x8_7 : x9_3
                        
                        *(entry_x8 + 0x18) = x8_8 - *(entry_x8 + 0x10)
                
                break
            
        label_9f14e0:
            pthread_kill(pthread_self(), 6)
            int64_t var_a0 = XNoReturn()
            void* var_90 = x20_1
            StringSpan* var_88 = entry_x8
            *DOMSETUP_LATEST_VERSION_STR = *DOMSETUP_VERSION_2_STR
            *gCardLookup = zx.o(0)
            *(gCardLookup + 0x10) = zx.o(0)
            __cxa_atexit(CardLookup::~CardLookup, gCardLookup, &data_1122730)
            *UIS_BUNDLE_15_EXP = _vtable_for_UI2StateDecl + 0x10
            void* x0_7 = UI2StateDeclTryLookup("bundle_15exp")
            
            if (x0_7 == 0)
                (**UIS_BUNDLE_15_EXP)(UIS_BUNDLE_15_EXP, "bundle_15exp")
                uint32_t x10_5 = *UI2StateDeclI_counter
                uint64_t x11_4 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_BUNDLE_15_EXP
                *UI2StateDeclI_counter = x10_5 + 1
                *(UIS_BUNDLE_15_EXP + 8) = x11_4
            else
                (**UIS_BUNDLE_15_EXP)(UIS_BUNDLE_15_EXP, *(x0_7 + 0x10))
            
            data_11d5140 = _vtable_for_UI2StateDecl + 0x10
            void* x0_10 = UI2StateDeclTryLookup("bundle_16exp")
            
            if (x0_10 == 0)
                (*data_11d5140)(&data_11d5140, "bundle_16exp")
                uint32_t x10_7 = *UI2StateDeclI_counter
                uint64_t x11_5 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_11d5140
                *UI2StateDeclI_counter = x10_7 + 1
                data_11d5148 = x11_5
            else
                (*data_11d5140)(&data_11d5140, *(x0_10 + 0x10))
            
            *UIS_EXP_DOMINION = _vtable_for_UI2StateDecl + 0x10
            void* x0_11 = UI2StateDeclTryLookup("dominion")
            
            if (x0_11 == 0)
                (**UIS_EXP_DOMINION)(UIS_EXP_DOMINION, "dominion")
                uint32_t x10_9 = *UI2StateDeclI_counter
                uint64_t x11_6 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_DOMINION
                *UI2StateDeclI_counter = x10_9 + 1
                *(UIS_EXP_DOMINION + 8) = x11_6
            else
                (**UIS_EXP_DOMINION)(UIS_EXP_DOMINION, *(x0_11 + 0x10))
            
            *UIS_EXP_DOMINION_1E = _vtable_for_UI2StateDecl + 0x10
            void* x0_14 = UI2StateDeclTryLookup("dominion1e")
            
            if (x0_14 == 0)
                (**UIS_EXP_DOMINION_1E)(UIS_EXP_DOMINION_1E, "dominion1e")
                uint32_t x10_11 = *UI2StateDeclI_counter
                uint64_t x11_7 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_DOMINION_1E
                *UI2StateDeclI_counter = x10_11 + 1
                *(UIS_EXP_DOMINION_1E + 8) = x11_7
            else
                (**UIS_EXP_DOMINION_1E)(UIS_EXP_DOMINION_1E, *(x0_14 + 0x10))
            
            *UIS_EXP_INTRIGUE = _vtable_for_UI2StateDecl + 0x10
            void* x0_17 = UI2StateDeclTryLookup("intrigue")
            
            if (x0_17 == 0)
                (**UIS_EXP_INTRIGUE)(UIS_EXP_INTRIGUE, "intrigue")
                uint32_t x10_13 = *UI2StateDeclI_counter
                uint64_t x11_8 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_INTRIGUE
                *UI2StateDeclI_counter = x10_13 + 1
                *(UIS_EXP_INTRIGUE + 8) = x11_8
            else
                (**UIS_EXP_INTRIGUE)(UIS_EXP_INTRIGUE, *(x0_17 + 0x10))
            
            *UIS_EXP_INTRIGUE_1E = _vtable_for_UI2StateDecl + 0x10
            void* x0_20 = UI2StateDeclTryLookup("intrigue1e")
            
            if (x0_20 == 0)
                (**UIS_EXP_INTRIGUE_1E)(UIS_EXP_INTRIGUE_1E, "intrigue1e")
                uint32_t x10_15 = *UI2StateDeclI_counter
                uint64_t x11_9 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_INTRIGUE_1E
                *UI2StateDeclI_counter = x10_15 + 1
                *(UIS_EXP_INTRIGUE_1E + 8) = x11_9
            else
                (**UIS_EXP_INTRIGUE_1E)(UIS_EXP_INTRIGUE_1E, *(x0_20 + 0x10))
            
            *UIS_EXP_SEASIDE = _vtable_for_UI2StateDecl + 0x10
            void* x0_23 = UI2StateDeclTryLookup("seaside")
            
            if (x0_23 == 0)
                (**UIS_EXP_SEASIDE)(UIS_EXP_SEASIDE, "seaside")
                uint32_t x10_17 = *UI2StateDeclI_counter
                uint64_t x11_10 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_SEASIDE
                *UI2StateDeclI_counter = x10_17 + 1
                *(UIS_EXP_SEASIDE + 8) = x11_10
            else
                (**UIS_EXP_SEASIDE)(UIS_EXP_SEASIDE, *(x0_23 + 0x10))
            
            *UIS_EXP_SEASIDE_1E = _vtable_for_UI2StateDecl + 0x10
            void* x0_26 = UI2StateDeclTryLookup("seaside1e")
            
            if (x0_26 == 0)
                (**UIS_EXP_SEASIDE_1E)(UIS_EXP_SEASIDE_1E, "seaside1e")
                uint32_t x10_19 = *UI2StateDeclI_counter
                uint64_t x11_11 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_SEASIDE_1E
                *UI2StateDeclI_counter = x10_19 + 1
                *(UIS_EXP_SEASIDE_1E + 8) = x11_11
            else
                (**UIS_EXP_SEASIDE_1E)(UIS_EXP_SEASIDE_1E, *(x0_26 + 0x10))
            
            *UIS_EXP_ALCHEMY = _vtable_for_UI2StateDecl + 0x10
            void* x0_29 = UI2StateDeclTryLookup("alchemy")
            
            if (x0_29 == 0)
                (**UIS_EXP_ALCHEMY)(UIS_EXP_ALCHEMY, "alchemy")
                uint32_t x10_21 = *UI2StateDeclI_counter
                uint64_t x11_12 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_ALCHEMY
                *UI2StateDeclI_counter = x10_21 + 1
                *(UIS_EXP_ALCHEMY + 8) = x11_12
            else
                (**UIS_EXP_ALCHEMY)(UIS_EXP_ALCHEMY, *(x0_29 + 0x10))
            
            *UIS_EXP_PROSPERITY = _vtable_for_UI2StateDecl + 0x10
            void* x0_32 = UI2StateDeclTryLookup("prosperity")
            
            if (x0_32 == 0)
                (**UIS_EXP_PROSPERITY)(UIS_EXP_PROSPERITY, "prosperity")
                uint32_t x10_23 = *UI2StateDeclI_counter
                uint64_t x11_13 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_PROSPERITY
                *UI2StateDeclI_counter = x10_23 + 1
                *(UIS_EXP_PROSPERITY + 8) = x11_13
            else
                (**UIS_EXP_PROSPERITY)(UIS_EXP_PROSPERITY, *(x0_32 + 0x10))
            
            *UIS_EXP_PROSPERITY_1E = _vtable_for_UI2StateDecl + 0x10
            void* x0_35 = UI2StateDeclTryLookup("prosperity1e")
            
            if (x0_35 == 0)
                (**UIS_EXP_PROSPERITY_1E)(UIS_EXP_PROSPERITY_1E, "prosperity1e")
                uint32_t x10_25 = *UI2StateDeclI_counter
                uint64_t x11_14 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_PROSPERITY_1E
                *UI2StateDeclI_counter = x10_25 + 1
                *(UIS_EXP_PROSPERITY_1E + 8) = x11_14
            else
                (**UIS_EXP_PROSPERITY_1E)(UIS_EXP_PROSPERITY_1E, *(x0_35 + 0x10))
            
            *UIS_EXP_CORNUCOPIA = _vtable_for_UI2StateDecl + 0x10
            void* x0_38 = UI2StateDeclTryLookup("cornucopia")
            
            if (x0_38 == 0)
                (**UIS_EXP_CORNUCOPIA)(UIS_EXP_CORNUCOPIA, "cornucopia")
                uint32_t x10_27 = *UI2StateDeclI_counter
                uint64_t x11_15 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_CORNUCOPIA
                *UI2StateDeclI_counter = x10_27 + 1
                *(UIS_EXP_CORNUCOPIA + 8) = x11_15
            else
                (**UIS_EXP_CORNUCOPIA)(UIS_EXP_CORNUCOPIA, *(x0_38 + 0x10))
            
            *UIS_EXP_CORNUCOPIA_1E = _vtable_for_UI2StateDecl + 0x10
            void* x0_41 = UI2StateDeclTryLookup("cornucopia1e")
            
            if (x0_41 == 0)
                (**UIS_EXP_CORNUCOPIA_1E)(UIS_EXP_CORNUCOPIA_1E, "cornucopia1e")
                uint32_t x10_29 = *UI2StateDeclI_counter
                uint64_t x11_16 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_CORNUCOPIA_1E
                *UI2StateDeclI_counter = x10_29 + 1
                *(UIS_EXP_CORNUCOPIA_1E + 8) = x11_16
            else
                (**UIS_EXP_CORNUCOPIA_1E)(UIS_EXP_CORNUCOPIA_1E, *(x0_41 + 0x10))
            
            *UIS_EXP_HINTERLANDS = _vtable_for_UI2StateDecl + 0x10
            void* x0_44 = UI2StateDeclTryLookup("hinterlands")
            
            if (x0_44 == 0)
                (**UIS_EXP_HINTERLANDS)(UIS_EXP_HINTERLANDS, "hinterlands")
                uint32_t x10_31 = *UI2StateDeclI_counter
                uint64_t x11_17 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_HINTERLANDS
                *UI2StateDeclI_counter = x10_31 + 1
                *(UIS_EXP_HINTERLANDS + 8) = x11_17
            else
                (**UIS_EXP_HINTERLANDS)(UIS_EXP_HINTERLANDS, *(x0_44 + 0x10))
            
            *UIS_EXP_HINTERLANDS_1E = _vtable_for_UI2StateDecl + 0x10
            void* x0_47 = UI2StateDeclTryLookup("hinterlands1e")
            
            if (x0_47 == 0)
                (**UIS_EXP_HINTERLANDS_1E)(UIS_EXP_HINTERLANDS_1E, "hinterlands1e")
                uint32_t x10_33 = *UI2StateDeclI_counter
                uint64_t x11_18 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_HINTERLANDS_1E
                *UI2StateDeclI_counter = x10_33 + 1
                *(UIS_EXP_HINTERLANDS_1E + 8) = x11_18
            else
                (**UIS_EXP_HINTERLANDS_1E)(UIS_EXP_HINTERLANDS_1E, *(x0_47 + 0x10))
            
            *UIS_EXP_DARK_AGES = _vtable_for_UI2StateDecl + 0x10
            void* x0_50 = UI2StateDeclTryLookup("dark_ages")
            
            if (x0_50 == 0)
                (**UIS_EXP_DARK_AGES)(UIS_EXP_DARK_AGES, "dark_ages")
                uint32_t x10_35 = *UI2StateDeclI_counter
                uint64_t x11_19 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_DARK_AGES
                *UI2StateDeclI_counter = x10_35 + 1
                *(UIS_EXP_DARK_AGES + 8) = x11_19
            else
                (**UIS_EXP_DARK_AGES)(UIS_EXP_DARK_AGES, *(x0_50 + 0x10))
            
            *UIS_EXP_GUILDS = _vtable_for_UI2StateDecl + 0x10
            void* x0_53 = UI2StateDeclTryLookup("guilds")
            
            if (x0_53 == 0)
                (**UIS_EXP_GUILDS)(UIS_EXP_GUILDS, "guilds")
                uint32_t x10_37 = *UI2StateDeclI_counter
                uint64_t x11_20 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_GUILDS
                *UI2StateDeclI_counter = x10_37 + 1
                *(UIS_EXP_GUILDS + 8) = x11_20
            else
                (**UIS_EXP_GUILDS)(UIS_EXP_GUILDS, *(x0_53 + 0x10))
            
            *UIS_EXP_GUILDS_1E = _vtable_for_UI2StateDecl + 0x10
            void* x0_56 = UI2StateDeclTryLookup("guilds1e")
            
            if (x0_56 == 0)
                (**UIS_EXP_GUILDS_1E)(UIS_EXP_GUILDS_1E, "guilds1e")
                uint32_t x10_39 = *UI2StateDeclI_counter
                uint64_t x11_21 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_GUILDS_1E
                *UI2StateDeclI_counter = x10_39 + 1
                *(UIS_EXP_GUILDS_1E + 8) = x11_21
            else
                (**UIS_EXP_GUILDS_1E)(UIS_EXP_GUILDS_1E, *(x0_56 + 0x10))
            
            *UIS_EXP_ADVENTURES = _vtable_for_UI2StateDecl + 0x10
            void* x0_59 = UI2StateDeclTryLookup("adventures")
            
            if (x0_59 == 0)
                (**UIS_EXP_ADVENTURES)(UIS_EXP_ADVENTURES, "adventures")
                uint32_t x10_41 = *UI2StateDeclI_counter
                uint64_t x11_22 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_ADVENTURES
                *UI2StateDeclI_counter = x10_41 + 1
                *(UIS_EXP_ADVENTURES + 8) = x11_22
            else
                (**UIS_EXP_ADVENTURES)(UIS_EXP_ADVENTURES, *(x0_59 + 0x10))
            
            *UIS_EXP_EMPIRES = _vtable_for_UI2StateDecl + 0x10
            void* x0_62 = UI2StateDeclTryLookup("empires")
            
            if (x0_62 == 0)
                (**UIS_EXP_EMPIRES)(UIS_EXP_EMPIRES, "empires")
                uint32_t x10_43 = *UI2StateDeclI_counter
                uint64_t x11_23 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_EMPIRES
                *UI2StateDeclI_counter = x10_43 + 1
                *(UIS_EXP_EMPIRES + 8) = x11_23
            else
                (**UIS_EXP_EMPIRES)(UIS_EXP_EMPIRES, *(x0_62 + 0x10))
            
            *UIS_EXP_NOCTURNE = _vtable_for_UI2StateDecl + 0x10
            void* x0_65 = UI2StateDeclTryLookup("nocturne")
            
            if (x0_65 == 0)
                (**UIS_EXP_NOCTURNE)(UIS_EXP_NOCTURNE, "nocturne")
                uint32_t x10_45 = *UI2StateDeclI_counter
                uint64_t x11_24 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_NOCTURNE
                *UI2StateDeclI_counter = x10_45 + 1
                *(UIS_EXP_NOCTURNE + 8) = x11_24
            else
                (**UIS_EXP_NOCTURNE)(UIS_EXP_NOCTURNE, *(x0_65 + 0x10))
            
            *UIS_EXP_RENAISSANCE = _vtable_for_UI2StateDecl + 0x10
            void* x0_68 = UI2StateDeclTryLookup("renaissance")
            
            if (x0_68 == 0)
                (**UIS_EXP_RENAISSANCE)(UIS_EXP_RENAISSANCE, "renaissance")
                uint32_t x10_47 = *UI2StateDeclI_counter
                uint64_t x11_25 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_RENAISSANCE
                *UI2StateDeclI_counter = x10_47 + 1
                *(UIS_EXP_RENAISSANCE + 8) = x11_25
            else
                (**UIS_EXP_RENAISSANCE)(UIS_EXP_RENAISSANCE, *(x0_68 + 0x10))
            
            *UIS_EXP_MENAGERIE = _vtable_for_UI2StateDecl + 0x10
            void* x0_71 = UI2StateDeclTryLookup("menagerie")
            
            if (x0_71 == 0)
                (**UIS_EXP_MENAGERIE)(UIS_EXP_MENAGERIE, "menagerie")
                uint32_t x10_49 = *UI2StateDeclI_counter
                uint64_t x11_26 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_MENAGERIE
                *UI2StateDeclI_counter = x10_49 + 1
                *(UIS_EXP_MENAGERIE + 8) = x11_26
            else
                (**UIS_EXP_MENAGERIE)(UIS_EXP_MENAGERIE, *(x0_71 + 0x10))
            
            *UIS_EXP_ALLIES = _vtable_for_UI2StateDecl + 0x10
            void* x0_74 = UI2StateDeclTryLookup("allies")
            
            if (x0_74 == 0)
                (**UIS_EXP_ALLIES)(UIS_EXP_ALLIES, "allies")
                uint32_t x10_51 = *UI2StateDeclI_counter
                uint64_t x11_27 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_ALLIES
                *UI2StateDeclI_counter = x10_51 + 1
                *(UIS_EXP_ALLIES + 8) = x11_27
            else
                (**UIS_EXP_ALLIES)(UIS_EXP_ALLIES, *(x0_74 + 0x10))
            
            *UIS_EXP_PLUNDER = _vtable_for_UI2StateDecl + 0x10
            void* x0_77 = UI2StateDeclTryLookup("plunder")
            
            if (x0_77 == 0)
                (**UIS_EXP_PLUNDER)(UIS_EXP_PLUNDER, "plunder")
                uint32_t x10_53 = *UI2StateDeclI_counter
                uint64_t x11_28 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_PLUNDER
                *UI2StateDeclI_counter = x10_53 + 1
                *(UIS_EXP_PLUNDER + 8) = x11_28
            else
                (**UIS_EXP_PLUNDER)(UIS_EXP_PLUNDER, *(x0_77 + 0x10))
            
            *UIS_EXP_RISING_SUN = _vtable_for_UI2StateDecl + 0x10
            void* x0_80 = UI2StateDeclTryLookup("rising_sun")
            
            if (x0_80 == 0)
                (**UIS_EXP_RISING_SUN)(UIS_EXP_RISING_SUN, "rising_sun")
                uint32_t x10_55 = *UI2StateDeclI_counter
                uint64_t x11_29 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_RISING_SUN
                *UI2StateDeclI_counter = x10_55 + 1
                *(UIS_EXP_RISING_SUN + 8) = x11_29
            else
                (**UIS_EXP_RISING_SUN)(UIS_EXP_RISING_SUN, *(x0_80 + 0x10))
            
            *UIS_EXP_PROMO = _vtable_for_UI2StateDecl + 0x10
            void* x0_83 = UI2StateDeclTryLookup("promo")
            
            if (x0_83 == 0)
                (**UIS_EXP_PROMO)(UIS_EXP_PROMO, "promo")
                uint32_t x10_57 = *UI2StateDeclI_counter
                uint64_t x11_30 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_PROMO
                *UI2StateDeclI_counter = x10_57 + 1
                *(UIS_EXP_PROMO + 8) = x11_30
            else
                (**UIS_EXP_PROMO)(UIS_EXP_PROMO, *(x0_83 + 0x10))
            
            *UIS_EXP_CATEGORY = _vtable_for_UI2StateDecl + 0x10
            void* x0_86 = UI2StateDeclTryLookup("category")
            
            if (x0_86 == 0)
                (**UIS_EXP_CATEGORY)(UIS_EXP_CATEGORY, "category")
                uint32_t x10_59 = *UI2StateDeclI_counter
                uint64_t x11_31 = *UI2StateDeclI_head
                *UI2StateDeclI_head = UIS_EXP_CATEGORY
                *UI2StateDeclI_counter = x10_59 + 1
                *(UIS_EXP_CATEGORY + 8) = x11_31
            else
                (**UIS_EXP_CATEGORY)(UIS_EXP_CATEGORY, *(x0_86 + 0x10))
            
            data_11d5158 = _vtable_for_UI2StateDecl + 0x10
            void* x0_89 = UI2StateDeclTryLookup("BlackMarket")
            
            if (x0_89 == 0)
                (*data_11d5158)(&data_11d5158, "BlackMarket")
                uint32_t x10_61 = *UI2StateDeclI_counter
                uint64_t x11_32 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_11d5158
                *UI2StateDeclI_counter = x10_61 + 1
                data_11d5160 = x11_32
            else
                (*data_11d5158)(&data_11d5158, *(x0_89 + 0x10))
            
            data_11d5170 = _vtable_for_UI2StateDecl + 0x10
            void* x0_90 = UI2StateDeclTryLookup("PromoPack1")
            
            if (x0_90 == 0)
                (*data_11d5170)(&data_11d5170, "PromoPack1")
                uint32_t x10_63 = *UI2StateDeclI_counter
                uint64_t x11_33 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_11d5170
                *UI2StateDeclI_counter = x10_63 + 1
                data_11d5178 = x11_33
            else
                (*data_11d5170)(&data_11d5170, *(x0_90 + 0x10))
            
            data_11d5188 = _vtable_for_UI2StateDecl + 0x10
            void* x0_91 = UI2StateDeclTryLookup("PromoPack2")
            
            if (x0_91 == 0)
                (*data_11d5188)(&data_11d5188, "PromoPack2")
                uint32_t x10_65 = *UI2StateDeclI_counter
                uint64_t x11_34 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_11d5188
                *UI2StateDeclI_counter = x10_65 + 1
                data_11d5190 = x11_34
            else
                (*data_11d5188)(&data_11d5188, *(x0_91 + 0x10))
            
            data_11d51a0 = _vtable_for_UI2StateDecl + 0x10
            void* x0_92 = UI2StateDeclTryLookup("Base1E")
            
            if (x0_92 == 0)
                (*data_11d51a0)(&data_11d51a0, "Base1E")
                uint32_t x10_67 = *UI2StateDeclI_counter
                uint64_t x11_35 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_11d51a0
                *UI2StateDeclI_counter = x10_67 + 1
                data_11d51a8 = x11_35
            else
                (*data_11d51a0)(&data_11d51a0, *(x0_92 + 0x10))
            
            data_11d51b8 = _vtable_for_UI2StateDecl + 0x10
            void* x0_93 = UI2StateDeclTryLookup("Intrigue1E")
            
            if (x0_93 == 0)
                (*data_11d51b8)(&data_11d51b8, "Intrigue1E")
                uint32_t x10_69 = *UI2StateDeclI_counter
                uint64_t x11_36 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_11d51b8
                *UI2StateDeclI_counter = x10_69 + 1
                data_11d51c0 = x11_36
            else
                (*data_11d51b8)(&data_11d51b8, *(x0_93 + 0x10))
            
            data_11d51d0 = _vtable_for_UI2StateDecl + 0x10
            void* x0_94 = UI2StateDeclTryLookup("bundleLaunch2023")
            
            if (x0_94 == 0)
                (*data_11d51d0)(&data_11d51d0, "bundleLaunch2023")
                uint32_t x10_71 = *UI2StateDeclI_counter
                uint64_t x11_37 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_11d51d0
                *UI2StateDeclI_counter = x10_71 + 1
                data_11d51d8 = x11_37
            else
                (*data_11d51d0)(&data_11d51d0, *(x0_94 + 0x10))
            
            *UIS_PROMOS = _vtable_for_UI2StateDecl + 0x10
            void* x0_95 = UI2StateDeclTryLookup("promos")
            
            if (x0_95 != 0)
                (**UIS_PROMOS)(UIS_PROMOS, *(x0_95 + 0x10))
                return 
            
            (**UIS_PROMOS)(UIS_PROMOS, "promos")
            uint32_t x10_73 = *UI2StateDeclI_counter
            uint64_t x11_38 = *UI2StateDeclI_head
            *UI2StateDeclI_head = UIS_PROMOS
            *UI2StateDeclI_counter = x10_73 + 1
            *(UIS_PROMOS + 8) = x11_38
            return 
        
        x24_1 += 1
        x23_1 -= 1
        
        if ((entry_x1 & 0xffffffff) == x24_1)
            break

Trim(entry_x8)
Trim(entry_x8 + 0x10)
int64_t x8_12 = *(entry_x8 + 0x18)

if (x8_12 != 0 && zx.d(*(*(entry_x8 + 0x10) + x8_12 - 1)) == 0x29)
    *(entry_x8 + 0x18) = x8_12 - 1
