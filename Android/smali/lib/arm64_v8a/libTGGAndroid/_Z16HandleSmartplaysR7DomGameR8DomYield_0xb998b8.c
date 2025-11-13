// 函数: _Z16HandleSmartplaysR7DomGameR8DomYield
// 地址: 0xb998b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x58)

if (x8 != *(arg2 + 0x54))
    return 

DomGame& x21_1 = arg1

if (*(arg1 + 0x19d8) == x8 && x8 != *(x21_1 + 0x19d4))
    return 

GameSave* x0 = ActiveGame()

if (*(GameGetPlayer(x0 + 8, zx.q(*(arg2 + 0x58))) + 0x14) == 3)
    return 

DomGame* x1_2
arg1, x1_2 = LogGet(x0, zx.q(*(arg2 + 0x58)))

if (*(arg1 + 0x14) s< *(arg1 + 0x10))
    return 

int32_t x8_3 = *(arg2 + 4)
int32_t x22_1 = *(arg2 + 0x58)

if (x8_3 == 5)
    int32_t x8_76
    
    if (*(arg2 + 0x10) == 7)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_30 = zx.q(*(arg1 + 0x228))
        
        if (x8_30.d s< 1)
        label_b99fb0:
            x8_76 = *(arg2 + 0x2c)
        label_b9a730:
            *(arg2 + 0x74) = x8_76
        labelid_4:
            return SubmitAutoplay(x0, x1_2, arg2) __tailcall
        
        void* __offset(DomGame, 0x2c) x9_12 = arg1 + 0x2c
        
        while (*(x9_12 - 4) != 0x1c)
            uint64_t temp0_1 = x8_30
            x8_30 -= 1
            x9_12 += 8
            
            if (temp0_1 == 1)
                goto label_b99fb0
        
        if (*x9_12 == 4)
            goto label_b99fb0
        
        x8_3 = *(arg2 + 4)
    label_b99fc4:
        
        if (x8_3 != 1 || *(arg2 + 0x10) != 1)
            goto label_b9a0e4
        
        void* x0_53
        x0_53, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_34 = zx.q(*(x0_53 + 0x228))
        
        if (x8_34.d s>= 1)
            void* x9_13 = x0_53 + 0x2c
            
            while (*(x9_13 - 4) != 5)
                uint64_t temp3_1 = x8_34
                x8_34 -= 1
                x9_13 += 8
                
                if (temp3_1 == 1)
                    goto label_b9a024
            
            if (*x9_13 != 6)
                arg1 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                uint64_t x8_38 = zx.q(*(arg1 + 0x228))
                
                if (x8_38.d s< 1)
                    goto label_b9a0e4
                
                void* __offset(DomGame, 0x2c) x9_14 = arg1 + 0x2c
                
                while (*(x9_14 - 4) != 5)
                    uint64_t temp10_1 = x8_38
                    x8_38 -= 1
                    x9_14 += 8
                    
                    if (temp10_1 == 1)
                        goto label_b9a0e4
                
                if (*x9_14 != 8)
                    goto label_b9a0e4
                
                if (*(arg2 + 0x74) s>= 1)
                    int64_t i = 0
                    
                    do
                        if ((CardIs(x21_1, zx.q(*(arg2 + 0x78 + (i << 2))), 0xc18).d & 1) == 0)
                            goto label_b9a0e4
                        
                        i += 1
                    while (i s< sx.q(*(arg2 + 0x74)))
                
                arg1, x1_2 = GetFirstWayCard()
                
                if (arg1.d == 0)
                    goto label_b9a364
                
                goto label_b9a0e4
        
    label_b9a024:
        
        if (*(arg2 + 0x74) s< 1)
            goto label_b9a364
        
        int64_t i_1 = 0
        
        do
            arg1, x1_2 = CardIs(x21_1, zx.q(*(arg2 + 0x78 + (i_1 << 2))), 0xc18)
            
            if ((arg1.d & 1) == 0)
                goto label_b9a0e4
            
            i_1 += 1
        while (i_1 s< sx.q(*(arg2 + 0x74)))
        
        goto label_b9a364
    
label_b9a0e4:
    int32_t x8_44 = *(arg2 + 0x10)
    
    if (x8_44 == 0x94)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_42 = zx.q(*(arg1 + 0x228))
        
        if (x8_42.d s< 1)
        label_b9a72c:
            x8_76 = 1
            goto label_b9a730
        
        void* __offset(DomGame, 0x2c) x9_15 = arg1 + 0x2c
        
        while (*(x9_15 - 4) != 0x18)
            uint64_t temp1_1 = x8_42
            x8_42 -= 1
            x9_15 += 8
            
            if (temp1_1 == 1)
                goto label_b9a72c
        
        if (*x9_15 == 4)
            goto label_b9a72c
        
        x8_44 = *(arg2 + 0x10)
    
    if (x8_44 == 0x99)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_45 = zx.q(*(arg1 + 0x228))
        
        if (x8_45.d s< 1)
        label_b9a18c:
            int32_t x8_47 = *(x21_1 + 0xd40)
            
            if (x8_47 s< 1)
                goto label_b9a364
            
            int32_t x23_2 = *(arg2 + 0x54)
            int32_t x22_2 = 0
            
            while (true)
                if (x23_2 != x22_2)
                    int32_t x0_63
                    x0_63, x1_2 = CountCardsWhere(x21_1, zx.q(x22_2), 0x3ea)
                    
                    if (x0_63 s> 3)
                        break
                    
                    x8_47 = *(x21_1 + 0xd40)
                
                x22_2 += 1
                
                if (x22_2 s>= x8_47)
                    goto label_b9a364
            
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_16 = arg1 + 0x2c
        
        while (*(x9_16 - 4) != 0x19)
            uint64_t temp2_1 = x8_45
            x8_45 -= 1
            x9_16 += 8
            
            if (temp2_1 == 1)
                goto label_b9a18c
        
        if (*x9_16 == 4)
            goto label_b9a18c
        
        x8_44 = *(arg2 + 0x10)
    
    if (x8_44 == 0x9e)
        if (TokenGetCount(x21_1, 
                zx.q(FindToken(x21_1, 0xffffffff, 0x601, 
                    zx.q(CardWhere(x21_1, zx.q(FindCardAnywhere(x21_1, 0xc33)))), 0, 0))).d == 0)
            arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
            uint64_t x8_49 = zx.q(*(arg1 + 0x228))
            
            if (x8_49.d s< 1)
                goto label_b9a364
            
            void* __offset(DomGame, 0x2c) x9_18 = arg1 + 0x2c
            
            while (*(x9_18 - 4) != 1)
                uint64_t temp5_1 = x8_49
                x8_49 -= 1
                x9_18 += 8
                
                if (temp5_1 == 1)
                    goto label_b9a364
            
            if (*x9_18 == 5)
                goto label_b9a364
        
        x8_44 = *(arg2 + 0x10)
    
    if (x8_44 == 0x21)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_48 = zx.q(*(arg1 + 0x228))
        
        if (x8_48.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_17 = arg1 + 0x2c
        
        while (*(x9_17 - 4) != 0xa)
            uint64_t temp4_1 = x8_48
            x8_48 -= 1
            x9_17 += 8
            
            if (temp4_1 == 1)
                goto label_b9a72c
        
        if (*x9_17 == 4)
            goto label_b9a72c
        
        x8_44 = *(arg2 + 0x10)
    
    if (x8_44 - 0x125 u<= 1)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_51 = zx.q(*(arg1 + 0x228))
        
        if (x8_51.d s< 1)
        labelid_4:
            return SubmitAutoplay(x0, x1_2, arg2) __tailcall
        
        void* __offset(DomGame, 0x2c) x9_20 = arg1 + 0x2c
        
        while (*(x9_20 - 4) != 0x1b)
            uint64_t temp8_1 = x8_51
            x8_51 -= 1
            x9_20 += 8
            
            if (temp8_1 == 1)
                goto label_b9a754_2
        
        if (*x9_20 == 5)
        label_b9a754:
            return SubmitAutoplay(x0, x1_2, arg2) __tailcall
        
        x8_44 = *(arg2 + 0x10)
    
    if (x8_44 == 0xcb)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_53 = zx.q(*(arg1 + 0x228))
        
        if (x8_53.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_21 = arg1 + 0x2c
        
        while (*(x9_21 - 4) != 6)
            uint64_t temp9_1 = x8_53
            x8_53 -= 1
            x9_21 += 8
            
            if (temp9_1 == 1)
                goto label_b9a72c
        
        if (*x9_21 == 4)
            goto label_b9a72c
        
        x8_44 = *(arg2 + 0x10)
    
    if (x8_44 == 0x90)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_56 = zx.q(*(arg1 + 0x228))
        
        if (x8_56.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_22 = arg1 + 0x2c
        
        while (*(x9_22 - 4) != 0x15)
            uint64_t temp12_1 = x8_56
            x8_56 -= 1
            x9_22 += 8
            
            if (temp12_1 == 1)
                goto label_b9a72c
        
        if (*x9_22 == 4)
            goto label_b9a72c
        
        x8_44 = *(arg2 + 0x10)
    
    if (x8_44 == 0xbc && TokenGetCount(x21_1, 
            zx.q(FindToken(x21_1, zx.q(*(arg2 + 0x54)), 0xe01, 
                zx.q(CardWhere(x21_1, zx.q(FindLandscape(x21_1, 0xe26)))), 0, 0))).d == 1)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_58 = zx.q(*(arg1 + 0x228))
        
        if (x8_58.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_23 = arg1 + 0x2c
        
        while (*(x9_23 - 4) != 0xf)
            uint64_t temp17_1 = x8_58
            x8_58 -= 1
            x9_23 += 8
            
            if (temp17_1 == 1)
                goto label_b9a72c
        
        if (*x9_23 == 4)
            goto label_b9a72c
    
    int32_t x8_62 = *(arg2 + 0x10)
    
    if (x8_62 == 0x4a)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_60 = zx.q(*(arg1 + 0x228))
        
        if (x8_60.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_24 = arg1 + 0x2c
        
        while (*(x9_24 - 4) != 0xb)
            uint64_t temp16_1 = x8_60
            x8_60 -= 1
            x9_24 += 8
            
            if (temp16_1 == 1)
                goto label_b9a72c
        
        if (*x9_24 == 4)
            goto label_b9a72c
        
        x8_62 = *(arg2 + 0x10)
    
    if (x8_62 == 0x91)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_63 = zx.q(*(arg1 + 0x228))
        
        if (x8_63.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_25 = arg1 + 0x2c
        
        while (*(x9_25 - 4) != 0xe)
            uint64_t temp19_1 = x8_63
            x8_63 -= 1
            x9_25 += 8
            
            if (temp19_1 == 1)
                goto label_b9a72c
        
        if (*x9_25 == 4)
            goto label_b9a72c
        
        x8_62 = *(arg2 + 0x10)
    
    if (x8_62 == 0x92)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_65 = zx.q(*(arg1 + 0x228))
        
        if (x8_65.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_26 = arg1 + 0x2c
        
        while (*(x9_26 - 4) != 2)
            uint64_t temp22_1 = x8_65
            x8_65 -= 1
            x9_26 += 8
            
            if (temp22_1 == 1)
                goto label_b9a72c
        
        if (*x9_26 == 4)
            goto label_b9a72c
        
        x8_62 = *(arg2 + 0x10)
    
    if (x8_62 == 0x50)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_67 = zx.q(*(arg1 + 0x228))
        
        if (x8_67.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_27 = arg1 + 0x2c
        
        while (*(x9_27 - 4) != 0x11)
            uint64_t temp23_1 = x8_67
            x8_67 -= 1
            x9_27 += 8
            
            if (temp23_1 == 1)
                goto label_b9a72c
        
        if (*x9_27 == 4)
            goto label_b9a72c
        
        x8_62 = *(arg2 + 0x10)
    
    if (x8_62 == 0x52)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_69 = zx.q(*(arg1 + 0x228))
        
        if (x8_69.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_28 = arg1 + 0x2c
        
        while (*(x9_28 - 4) != 0x14)
            uint64_t temp24_1 = x8_69
            x8_69 -= 1
            x9_28 += 8
            
            if (temp24_1 == 1)
                goto label_b9a72c
        
        if (*x9_28 == 4)
            goto label_b9a72c
        
        x8_62 = *(arg2 + 0x10)
    
    int64_t v0_1
    
    if (x8_62 == 0x36)
        if (BoardPileTop(x21_1, zx.q(BoardPileWhere(x21_1, 0x100))).d != 0)
            goto label_b9a638
        
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_73 = zx.q(*(arg1 + 0x228))
        
        if (x8_73.d s>= 1)
            void* __offset(DomGame, 0x2c) x9_30 = arg1 + 0x2c
            
            while (*(x9_30 - 4) != 0x10)
                uint64_t temp25_1 = x8_73
                x8_73 -= 1
                x9_30 += 8
                
                if (temp25_1 == 1)
                    goto label_b9a768
            
            if (*x9_30 != 4)
                goto label_b9a638
        
    label_b9a768:
        v0_1 = 0x2900000001
    label_b9a824:
        *(arg2 + 0x74) = v0_1
    label_b9a754_1:
        return SubmitAutoplay(x0, x1_2, arg2) __tailcall
    
label_b9a638:
    int32_t x8_71 = *(arg2 + 0x10)
    
    if (x8_71 == 0x133)
        if (BoardPileTop(x21_1, zx.q(BoardPileWhere(x21_1, 0x100))).d == 0)
            arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
            uint64_t x8_74 = zx.q(*(arg1 + 0x228))
            
            if (x8_74.d s>= 1)
                void* __offset(DomGame, 0x2c) x9_31 = arg1 + 0x2c
                
                while (*(x9_31 - 4) != 0x10)
                    uint64_t temp27_1 = x8_74
                    x8_74 -= 1
                    x9_31 += 8
                    
                    if (temp27_1 == 1)
                        goto label_b9a820
                
                if (*x9_31 != 4)
                    goto label_b9a660
            
        label_b9a820:
            v0_1 = 0xd700000001
            goto label_b9a824
        
    label_b9a660:
        x8_71 = *(arg2 + 0x10)
    
    if (x8_71 == 0xb6)
        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
        uint64_t x8_72 = zx.q(*(arg1 + 0x228))
        
        if (x8_72.d s< 1)
            goto label_b9a72c
        
        void* __offset(DomGame, 0x2c) x9_29 = arg1 + 0x2c
        
        while (*(x9_29 - 4) != 0xc)
            uint64_t temp26_1 = x8_72
            x8_72 -= 1
            x9_29 += 8
            
            if (temp26_1 == 1)
                goto label_b9a72c
        
        if (*x9_29 == 4)
            goto label_b9a72c
        
        x8_71 = *(arg2 + 0x10)
    
    if (x8_71 == 0xc8)
        arg1 = CardWhat(x21_1, zx.q(*(arg2 + 0x60)))
        
        if (arg1.d s<= 0xb00)
            if (arg1.d s<= 0x811)
                if (arg1.d != 0x418 && arg1.d != 0x507)
                    goto label_b9a85c
            else if (arg1.d != 0x812 && arg1.d != 0x905 && arg1.d != 0x909)
                goto label_b9a85c
        else if (arg1.d s<= 0xc19)
            uint64_t x8_79 = zx.q(arg1.d - 0xb01)
            
            if (x8_79.d u> 0x38 || (1 << x8_79 & 0x1fe000000000003) == 0)
            label_b9a85c:
                arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                uint64_t x8_82 = zx.q(*(arg1 + 0x228))
                
                if (x8_82.d s< 1)
                    goto label_b9a72c
                
                void* __offset(DomGame, 0x2c) x9_33 = arg1 + 0x2c
                
                while (*(x9_33 - 4) != 0x13)
                    uint64_t temp28_1 = x8_82
                    x8_82 -= 1
                    x9_33 += 8
                    
                    if (temp28_1 == 1)
                        goto label_b9a72c
                
                if (*x9_33 == 4)
                    goto label_b9a72c
        else if (arg1.d s<= 0xdff)
            if (arg1.d != 0xc1a && arg1.d != 0xd05)
                goto label_b9a85c
        else if (arg1.d != 0xe00 && arg1.d != 0x1305 && arg1.d != 0x1307)
            goto label_b9a85c
else
    if (x8_3 != 6)
        goto label_b99fc4
    
    if (*(arg2 + 0x74) s< 1)
    label_b9a364:
        *(arg2 + 0x74) = 0
    label_b9a754_2:
        return SubmitAutoplay(x0, x1_2, arg2) __tailcall
    
    int64_t i_2 = 0
    int32_t x28_1 = 1
    
    do
        uint64_t x24_1 = zx.q(*(arg2 + (i_2 << 2) + 0x78))
        int32_t x0_4 = AbilitySource(x21_1, x24_1)
        
        if (x0_4 s> 0xe1f)
            if (x0_4 == 0xe20)
            label_b99a98:
                void* x0_13 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                uint64_t x8_9 = zx.q(*(x0_13 + 0x228))
                
                if (x8_9.d s>= 1)
                    void* x9_6 = x0_13 + 0x2c
                    
                    while (*(x9_6 - 4) != 0xd)
                        uint64_t temp6_1 = x8_9
                        x8_9 -= 1
                        x9_6 += 8
                        
                        if (temp6_1 == 1)
                            goto label_b99b10
                    
                    if (*x9_6 != 4)
                        goto label_b99b44
                    
                    goto label_b99b10
                
            label_b99b10:
                int32_t x25_1 = *(arg2 + 0x54)
                int32_t x0_17
                x0_17, x1_2 = CountResource(x21_1, zx.q(x25_1), 0)
                
                if (x0_17 s> 2)
                    goto label_b99f94
                
                int32_t x0_19
                x0_19, x1_2 = CountCardsWhereWhat(x21_1, zx.q(x25_1), 0x461, 0xb1c)
                
                if (x0_19 == 0)
                    goto label_b99f94
                
            label_b99b44:
                
                if (x0_4 s<= 0xd00)
                    goto label_b99b4c
                
                if (x0_4 != 0xf47)
                    goto label_b999c8
                
                goto label_b99c9c
            
            if (x0_4 == 0xf47)
            label_b99c9c:
                int32_t x0_35 = CardWhat(x21_1, zx.q(AbilityTriggerCard(x21_1, x24_1)))
                
                if (x0_35 s<= 0x70b)
                    if (x0_35 s<= 0x208)
                        if (x0_35 - 0x100 u< 5 || x0_35 == 0x130e)
                            goto label_b99ce0
                        
                        goto label_b99d24
                    
                    if (x0_35 s> 0x501)
                        if (x0_35 == 0x502 || x0_35 == 0x601 || x0_35 == 0x130e)
                            goto label_b99ce0
                        
                        goto label_b99d24
                    
                    if (x0_35 == 0x209 || x0_35 == 0x311 || x0_35 == 0x130e)
                        goto label_b99ce0
                    
                    goto label_b99d24
                
                if (x0_35 s> 0x923)
                    if (x0_35 - 0x924 u>= 5 && x0_35 != 0x1022 && x0_35 != 0xd0e && x0_35 != 0x130e)
                        goto label_b99d24
                    
                    goto label_b99ce0
                
                if (x0_35 != 0x70c && x0_35 != 0x80b && x0_35 != 0x130e)
                    goto label_b99d24
                
            label_b99ce0:
                arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                uint64_t x8_21 = zx.q(*(arg1 + 0x228))
                
                if (x8_21.d s>= 1)
                    void* __offset(DomGame, 0x2c) x9_9 = arg1 + 0x2c
                    
                    while (*(x9_9 - 4) != 7)
                        uint64_t temp13_1 = x8_21
                        x8_21 -= 1
                        x9_9 += 8
                        
                        if (temp13_1 == 1)
                            goto label_b9998c
                    
                    if (*x9_9 != 5)
                        goto label_b99d24
            else
                if (x0_4 == 0x1134)
                    goto label_b99a30
                
            label_b99d24:
                arg1, x1_2 = CardInSmartplay(0x17, zx.q(x0_4))
                
                if ((arg1.d & 1) == 0)
                label_b99e5c:
                    void* __offset(DomGame, 0x2c) x9_11
                    
                    if (x0_4 == 0x909)
                        arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                        uint64_t x8_27 = zx.q(*(arg1 + 0x228))
                        
                        if (x8_27.d s< 1)
                        labelid_9:
                            x28_1 = 0
                        else
                            x9_11 = arg1 + 0x2c
                            
                            while (*(x9_11 - 4) != 0x12)
                                uint64_t temp14_1 = x8_27
                                x8_27 -= 1
                                x9_11 += 8
                                
                                if (temp14_1 == 1)
                                    goto label_b99984_2
                            
                        label_b99ef4:
                            
                            if (*x9_11 != 5)
                            labelid_9:
                                x28_1 = 0
                    else if (x0_4 != 0xd06)
                    label_b99984:
                        x28_1 = 0
                    else
                        arg1, x1_2 = DomContextStackIsAllPlayer(zx.q(*(arg2 + 0x54)))
                        
                        if ((arg1.d & 1) == 0)
                        label_b99984_1:
                            x28_1 = 0
                        else
                            arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                            uint64_t x8_26 = zx.q(*(arg1 + 0x228))
                            
                            if (x8_26.d s>= 1)
                                x9_11 = arg1 + 0x2c
                                
                                while (*(x9_11 - 4) != 3)
                                    uint64_t temp20_1 = x8_26
                                    x8_26 -= 1
                                    x9_11 += 8
                                    
                                    if (temp20_1 == 1)
                                        goto label_b99984_2
                                
                                goto label_b99ef4
                            
                        label_b99984_2:
                            x28_1 = 0
                else
                    int32_t x25_3 = *(arg2 + 0x54)
                    arg1, x1_2 = CardWhat(x21_1, zx.q(AbilityTriggerCard(x21_1, x24_1)))
                    
                    if (arg1.d s<= 0x501)
                        if (arg1.d s> 0x101)
                            if (arg1.d - 0x102 u< 3 || arg1.d == 0x209 || arg1.d == 0x311)
                                goto label_b99e20
                            
                            goto label_b99e5c
                        
                        if (arg1.d == 0x100)
                            goto label_b99e20
                        
                        if (arg1.d != 0x101)
                            goto label_b99e5c
                        
                        arg1, x1_2 = PlayerHasInheritance(x21_1, zx.q(x25_3))
                        
                        if ((arg1.d & 1) == 0)
                            goto label_b99e20
                        
                        goto label_b99e5c
                    
                    if (arg1.d s> 0x80a)
                        if (arg1.d s> 0x1021)
                            if (arg1.d == 0x1022 || arg1.d == 0x130e)
                                goto label_b99e20
                            
                            goto label_b99e5c
                        
                        if (arg1.d == 0x80b || arg1.d == 0xd0e)
                            goto label_b99e20
                        
                        goto label_b99e5c
                    
                    if (arg1.d != 0x502 && arg1.d != 0x601 && arg1.d != 0x70c)
                        goto label_b99e5c
                    
                label_b99e20:
                    arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                    uint64_t x8_24 = zx.q(*(arg1 + 0x228))
                    
                    if (x8_24.d s>= 1)
                        void* __offset(DomGame, 0x2c) x9_10 = arg1 + 0x2c
                        
                        while (*(x9_10 - 4) != 0x17)
                            uint64_t temp21_1 = x8_24
                            x8_24 -= 1
                            x9_10 += 8
                            
                            if (temp21_1 == 1)
                                goto label_b9998c
                        
                        if (*x9_10 != 5)
                            goto label_b99e5c
        else
            if (x0_4 == 0x202)
            label_b99a30:
                void* x0_10
                x0_10, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                uint64_t x8_7 = zx.q(*(x0_10 + 0x228))
                
                if (x8_7.d s< 1)
                label_b99f94:
                    int32_t x8_31 = *(arg2 + (i_2 << 2) + 0x78)
                    *(arg2 + 0x74) = 1
                    *(arg2 + 0x78) = x8_31
                    goto label_b9a754_2
                
                void* x9_5 = x0_10 + 0x2c
                
                while (*(x9_5 - 4) != 9)
                    uint64_t temp7_1 = x8_7
                    x8_7 -= 1
                    x9_5 += 8
                    
                    if (temp7_1 == 1)
                        goto label_b99f94
                
                if (*x9_5 == 4)
                    goto label_b99f94
                
                if (x0_4 s> 0xd00)
                    if (x0_4 == 0xd01)
                        goto label_b999dc
                    
                    if (x0_4 == 0xf47)
                        goto label_b99c9c
                    
                    if (x0_4 != 0xe20)
                        goto label_b99d24
                    
                    goto label_b99a98
                
            label_b99b4c:
                
                if (x0_4 != 0x202)
                label_b99bb0:
                    
                    if (x0_4 != 0xb00)
                        goto label_b99d24
                    
                    goto label_b99bb8
                
            label_b99b60:
                arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                uint64_t x8_12 = zx.q(*(arg1 + 0x228))
                
                if (x8_12.d s< 1)
                    goto label_b99d24
                
                void* __offset(DomGame, 0x2c) x9_7 = arg1 + 0x2c
                
                while (true)
                    if (*(x9_7 - 4) == 9)
                        if (*x9_7 == 5)
                            goto label_b9998c
                        
                        goto label_b99ba8
                    
                    uint64_t temp18_1 = x8_12
                    x8_12 -= 1
                    x9_7 += 8
                    
                    if (temp18_1 == 1)
                    label_b99ba8:
                        
                        if (x0_4 == 0xf47)
                            goto label_b99c9c
                        
                        break
                
                goto label_b99bb0
            
            if (x0_4 != 0xb00)
            label_b999c8:
                
                if (x0_4 != 0xd01)
                    goto label_b99d24
                
            label_b999dc:
                void* x0_7 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
                uint64_t x8_6 = zx.q(*(x0_7 + 0x228))
                
                if (x8_6.d s>= 1)
                    void* x9_4 = x0_7 + 0x2c
                    
                    while (*(x9_4 - 4) != 8)
                        uint64_t temp11_1 = x8_6
                        x8_6 -= 1
                        x9_4 += 8
                        
                        if (temp11_1 == 1)
                            goto label_b99adc
                    
                    if (*x9_4 != 4)
                        goto label_b99ae8
                    
                    goto label_b99adc
                
            label_b99adc:
                int32_t x0_15
                x0_15, x1_2 = AbilityGetIndex(x21_1, x24_1)
                
                if (x0_15 == 0xa)
                    goto label_b99f94
                
            label_b99ae8:
                
                if (x0_4 == 0xf47)
                    goto label_b99c9c
                
                if (x0_4 == 0xb00)
                    goto label_b99bb8
                
                if (x0_4 == 0x202)
                    goto label_b99b60
                
                goto label_b99d24
            
        label_b99bb8:
            int32_t x25_2 = *(arg2 + 0x54)
            
            if (*(x21_1 + 0x19d4) != x25_2)
                goto label_b99d24
            
            int32_t x0_23
            
            if (*(x21_1 + 0x19f4) != 1)
                x0_23 = CountCardsWhereWhat(x21_1, zx.q(x25_2), 0x3ea, 0x70f)
            
            if (*(x21_1 + 0x19f4) != 1 && x0_23 != 0)
                goto label_b99d24
            
            int32_t x0_25 = CountCardsWhereType(x21_1, zx.q(x25_2), 0x3ea, 4)
            int32_t x8_16 = CountCardsWhereType(x21_1, zx.q(x25_2), 0x3eb, 0x100000000000) + x0_25
            int32_t x0_29
            
            if (x8_16 s>= 1)
                x0_29 = CountResource(x21_1, zx.q(x25_2), 1)
            
            if (x8_16 s>= 1 && x0_29 == 0)
                goto label_b99d24
            
            arg1, x1_2 = GameGetPlayer(ActiveGame() + 8, zx.q(x22_1))
            uint64_t x8_17 = zx.q(*(arg1 + 0x228))
            
            if (x8_17.d s>= 1)
                void* __offset(DomGame, 0x2c) x9_8 = arg1 + 0x2c
                
                while (*(x9_8 - 4) != 4)
                    uint64_t temp15_1 = x8_17
                    x8_17 -= 1
                    x9_8 += 8
                    
                    if (temp15_1 == 1)
                        goto label_b9998c
                
                if (*x9_8 != 3)
                    if (x0_4 != 0xf47)
                        goto label_b99d24
                    
                    goto label_b99c9c
        
    label_b9998c:
        i_2 += 1
    while (i_2 s< sx.q(*(arg2 + 0x74)))
    
    if ((x28_1 & 1) != 0)
        goto label_b9a364
