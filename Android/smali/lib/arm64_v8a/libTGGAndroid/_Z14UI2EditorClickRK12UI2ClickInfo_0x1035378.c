// 函数: _Z14UI2EditorClickRK12UI2ClickInfo
// 地址: 0x1035378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString var_2060
XString::XString(&var_2060)
int32_t x0_2 = operator==(&var_2060, *(arg1 + 8))
int32_t x21 = *(gUI2Editor + 0x704c) s< 1 ? 1 : 0
XString::~XString()

if (((x21 | not.d(x0_2)) & 1) == 0)
    *(gUI2Editor + 0x7058) = -1
    *(gUI2Editor + 0x7058) = *(arg1 + 0x10)

XString::XString(&var_2060)
int32_t x0_5 = operator==(&var_2060, *(arg1 + 8))
XString::~XString()
int64_t x0_35
void* x1_13
int64_t (* const x9_15)()
void* x11_8

if ((x0_5 & 1) == 0)
label_1035550:
    XString::XString(&var_2060)
    int32_t x0_13 = operator==(&var_2060, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_13 & 1) == 0)
    label_103569c:
        XString::XString(&var_2060)
        int32_t x0_21 = operator==(&var_2060, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_21 & 1) == 0)
        label_10357e8:
            XString::XString(&var_2060)
            int32_t x0_29 = operator==(&var_2060, *(arg1 + 8))
            XString::~XString()
            
            if ((x0_29 & 1) == 0)
                goto label_1035a54
            
            *(gUI2Editor + 0x7058) = -1
            uint64_t i_7 = zx.q(*(gUI2Editor + 0x6000))
            
            if (i_7.d s>= 1)
                int64_t (* const x10_4)() = gUI2Editor
                uint64_t i
                
                do
                    if (*(x10_4 + 0xc) == *(arg1 + 0x10))
                        int32_t x20_8 = *(*x10_4 + 0x19a0)
                        
                        if ((AppIsKeyDown(0) & 1) == 0 || *(gUI2Editor + 0x704c) s< 1)
                            if ((AppIsKeyDown(0) & 1) != 0)
                                UI2ToggleSelection(zx.q(x20_8))
                                goto label_1035a54
                            
                            UI2EditorSyncSelection(zx.q(x20_8))
                            void* x8_15 = *gUI2 + zx.q(x20_8.w) * 0x19a8
                            *(gUI2Editor + 0x604c) = *(x8_15 + 0x1690)
                            *(gUI2Editor + 0x704c) = 1
                            uint64_t j_2 = zx.q(*(gUI2Editor + 0x6000))
                            
                            if (j_2.d s>= 1)
                                x9_15 = gUI2Editor
                                x11_8 = gUI2Editor
                                uint64_t j
                                
                                do
                                    if (*x11_8 == x8_15)
                                        goto label_1035a20
                                    
                                    j = j_2
                                    j_2 -= 1
                                    x11_8 += 0x18
                                while (j != 1)
                        else
                            int32_t x9_11 = *(arg1 + 0x10)
                            int32_t x8_11 = *(gUI2Editor + 0x7050)
                            int32_t x20_9
                            
                            x20_9 = x9_11 s< x8_11 ? x9_11 : x8_11
                            
                            int32_t x22_1
                            
                            x22_1 = x9_11 s> x8_11 ? x9_11 : x8_11
                            
                            if ((AppIsKeyDown(0) & 1) == 0)
                                *(gUI2Editor + 0x704c) = 0
                            
                            int64_t x9_12 = *gUI2
                        label_10358e4:
                            uint64_t j_3 = zx.q(*(gUI2Editor + 0x6000))
                            
                            if (j_3.d s>= 1)
                                int64_t (* const x15_3)() = gUI2Editor
                                uint64_t j_1
                                
                                do
                                    if (*(x15_3 + 0xc) == x20_9)
                                        uint64_t x14_2 = zx.q(*(gUI2Editor + 0x704c))
                                        uint64_t x15_5 = zx.q(*(*x15_3 + 0x19a0))
                                        
                                        if (x14_2.d s< 1)
                                        label_10358c4:
                                            int32_t x15_2 = *(x9_12 + x15_5 * 0x19a8 + 0x1690)
                                            *(gUI2Editor + 0x704c) = x14_2.d + 1
                                            *(gUI2Editor + (sx.q(x14_2.d) << 2) + 0x604c) = x15_2
                                        else
                                            int64_t (* x17_1)() = gUI2Editor + 0x604c
                                            uint64_t x0_32 = x14_2
                                            
                                            while (*(gUI2Editor + sx.q(*x17_1) * 0x18)
                                                    != x9_12 + x15_5 * 0x19a8)
                                                uint64_t temp9_1 = x0_32
                                                x0_32 -= 1
                                                x17_1 += 4
                                                
                                                if (temp9_1 == 1)
                                                    goto label_10358c4
                                        
                                        bool cond:14_1 = x20_9 == x22_1
                                        x20_9 += 1
                                        
                                        if (not(cond:14_1))
                                            goto label_10358e4
                                        
                                        x0_35 = gUI2Editor + sx.q(*(gUI2Editor + 0x88060)) * 0x1020
                                            + 0x6040
                                        x1_13 = gUI2Editor + 0x6048
                                        goto label_1035a44
                                    
                                    j_1 = j_3
                                    j_3 -= 1
                                    x15_3 += 0x18
                                while (j_1 != 1)
                        
                        break
                    
                    i = i_7
                    i_7 -= 1
                    x10_4 += 0x18
                while (i != 1)
        else
            *(gUI2Editor + 0x7058) = -1
            uint64_t x8_7 = zx.q(*(gUI2Editor + 0x6000))
            
            if (x8_7.d s>= 1)
                int64_t (* const x9_7)() = gUI2Editor
                
                while (true)
                    if (*(x9_7 + 0xc) == *(arg1 + 0x10))
                        UI2* x20_6 = *x9_7
                        int32_t x0_22 = AppIsKeyDown(0)
                        int32_t x0_23
                        
                        if ((x0_22 & 1) != 0)
                            x0_23 = AppIsKeyDown(0)
                        
                        int64_t x3_3
                        
                        if ((x0_22 & 1) == 0 || (x0_23 & 1) == 0)
                            if ((AppIsKeyDown(0) & 1) == 0)
                                if ((AppIsKeyDown(0) & 1) != 0)
                                    x3_3 = 2
                                else
                                    x3_3 = 0
                            else
                                x3_3 = 1
                        else
                            x3_3 = 3
                        
                        SetProperty(x20_6, 0x8b, (zx.d(*(x20_6 + 0x17)) == 0 ? 1 : 0).b, x3_3)
                        uint64_t x9_8 = zx.q(*(gUI2 + 8))
                        
                        if (x9_8.d != 0)
                            void* i_1 = *gUI2
                            int64_t x9_9 = i_1 + x9_8 * 0x19a8
                            
                            do
                                if (zx.d(*(i_1 + 0x19a2)) != 0)
                                    while (i_1 != 0xffffffff)
                                        *(i_1 + 0x1378) = 2
                                        i_1 += 0x19a8
                                        
                                        if (x9_9 u<= i_1)
                                            break
                                        
                                        while (zx.d(*(i_1 + 0x19a2)) == 0)
                                            i_1 += 0x19a8
                                            
                                            if (i_1 u>= x9_9)
                                                goto label_10357e8
                                    
                                    break
                                
                                i_1 += 0x19a8
                            while (i_1 u< x9_9)
                        
                        break
                    
                    uint64_t temp2_1 = x8_7
                    x8_7 -= 1
                    x9_7 += 0x18
                    
                    if (temp2_1 == 1)
                        goto label_1035a08
                
                goto label_10357e8
    else
        *(gUI2Editor + 0x7058) = -1
        uint64_t x8_5 = zx.q(*(gUI2Editor + 0x6000))
        
        if (x8_5.d s>= 1)
            int64_t (* const x9_4)() = gUI2Editor
            
            while (true)
                if (*(x9_4 + 0xc) == *(arg1 + 0x10))
                    UI2* x20_4 = *x9_4
                    int32_t x0_14 = AppIsKeyDown(0)
                    int32_t x0_15
                    
                    if ((x0_14 & 1) != 0)
                        x0_15 = AppIsKeyDown(0)
                    
                    int64_t x3_2
                    
                    if ((x0_14 & 1) == 0 || (x0_15 & 1) == 0)
                        if ((AppIsKeyDown(0) & 1) == 0)
                            if ((AppIsKeyDown(0) & 1) != 0)
                                x3_2 = 2
                            else
                                x3_2 = 0
                        else
                            x3_2 = 1
                    else
                        x3_2 = 3
                    
                    SetProperty(x20_4, 0x8a, (zx.d(*(x20_4 + 0x16)) == 0 ? 1 : 0).b, x3_2)
                    uint64_t x9_5 = zx.q(*(gUI2 + 8))
                    
                    if (x9_5.d != 0)
                        void* i_2 = *gUI2
                        int64_t x9_6 = i_2 + x9_5 * 0x19a8
                        
                        do
                            if (zx.d(*(i_2 + 0x19a2)) != 0)
                                while (i_2 != 0xffffffff)
                                    *(i_2 + 0x1378) = 2
                                    i_2 += 0x19a8
                                    
                                    if (x9_6 u<= i_2)
                                        break
                                    
                                    while (zx.d(*(i_2 + 0x19a2)) == 0)
                                        i_2 += 0x19a8
                                        
                                        if (i_2 u>= x9_6)
                                            goto label_103569c
                                
                                break
                            
                            i_2 += 0x19a8
                        while (i_2 u< x9_6)
                    
                    break
                
                uint64_t temp1_1 = x8_5
                x8_5 -= 1
                x9_4 += 0x18
                
                if (temp1_1 == 1)
                    goto label_1035a08
            
            goto label_103569c
else
    *(gUI2Editor + 0x7058) = -1
    uint64_t x8_3 = zx.q(*(gUI2Editor + 0x6000))
    
    if (x8_3.d s>= 1)
        int64_t (* const x9_1)() = gUI2Editor
        
        while (true)
            if (*(x9_1 + 0xc) == *(arg1 + 0x10))
                UI2* x20_2 = *x9_1
                int32_t x0_6 = AppIsKeyDown(0)
                int32_t x0_7
                
                if ((x0_6 & 1) != 0)
                    x0_7 = AppIsKeyDown(0)
                
                int64_t x3_1
                
                if ((x0_6 & 1) == 0 || (x0_7 & 1) == 0)
                    if ((AppIsKeyDown(0) & 1) == 0)
                        if ((AppIsKeyDown(0) & 1) != 0)
                            x3_1 = 2
                        else
                            x3_1 = 0
                    else
                        x3_1 = 1
                else
                    x3_1 = 3
                
                SetProperty(x20_2, 0x89, (zx.d(*(x20_2 + 0x15)) == 0 ? 1 : 0).b, x3_1)
                uint64_t x9_2 = zx.q(*(gUI2 + 8))
                
                if (x9_2.d != 0)
                    void* i_3 = *gUI2
                    int64_t x9_3 = i_3 + x9_2 * 0x19a8
                    
                    do
                        if (zx.d(*(i_3 + 0x19a2)) != 0)
                            while (i_3 != 0xffffffff)
                                *(i_3 + 0x1378) = 2
                                i_3 += 0x19a8
                                
                                if (x9_3 u<= i_3)
                                    break
                                
                                while (zx.d(*(i_3 + 0x19a2)) == 0)
                                    i_3 += 0x19a8
                                    
                                    if (i_3 u>= x9_3)
                                        goto label_1035550
                            
                            break
                        
                        i_3 += 0x19a8
                    while (i_3 u< x9_3)
                
                break
            
            uint64_t temp0_1 = x8_3
            x8_3 -= 1
            x9_1 += 0x18
            
            if (temp0_1 == 1)
                goto label_1035a08
        
        goto label_1035550

label_1035a08:

while (true)
    pthread_kill(pthread_self(), 6)
    x9_15, x11_8 = XNoReturn()
label_1035a20:
    *(x9_15 + 0x7050) = *(x11_8 + 0xc)
    x1_13 = x9_15 + 0x6048
    x0_35 = x9_15 + sx.q(*(x9_15 + 0x88060)) * 0x1020 + 0x6040
label_1035a44:
    memcpy(x0_35, x1_13, 0x1018)
label_1035a54:
    XString::XString(&var_2060)
    int32_t x0_40 = operator==(&var_2060, *(arg1 + 8))
    int32_t x21_1 = *(gUI2Editor + 0x704c) s< 1 ? 1 : 0
    XString::~XString()
    
    if (((x21_1 | not.d(x0_40)) & 1) == 0)
        *(gUI2Editor + 0x7058) = -1
        *(gUI2Editor + 0x7058) = *(arg1 + 0x10)
    
    XString::XString(&var_2060)
    int32_t x0_43 = operator==(&var_2060, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_43 & 1) != 0)
        *(gUI2Editor + 0x7058) = *(arg1 + 0x10)
        int32_t x9_16 = *(arg1 + 0x10)
        int32_t x8_24
        
        if (*(gUI2Editor + 0x705c) != x9_16)
            x8_24 = x9_16
        else
            x8_24 = -1
        
        *(gUI2Editor + 0x705c) = x8_24
    
    XString::XString(&var_2060)
    int32_t x0_46 = operator==(&var_2060, *(arg1 + 8))
    XString::~XString()
    int32_t var_58
    
    if ((x0_46 & 1) != 0)
        UI2* x0_48 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        *(x0_48 + 0x1370) = 0
        int64_t x24_1 = sx.q(*(gUI2Editor + 0x7058))
        GetPropDefs(*gUI2 + zx.q(*(x0_48 + 0x19a0)) * 0x19a8, &var_2060, nullptr)
        
        if (*(&var_2060 + (x24_1 << 5) + 8) != 0x6f)
            UI2AddTransition(x0_48)
        else
            int64_t* x0_51 = TryGetEditorOverride(x0_48)
            
            if (x0_51 == 0)
                XString::XString(&var_58)
                int32_t i_12 = GetLinkedElements(x0_48, &var_2060, 0x400)
                
                if (i_12 s>= 1)
                    uint64_t i_10 = zx.q(i_12)
                    UI2** x24_3 = &var_2060
                    uint64_t i_4
                    
                    do
                        UI2EditorAddStateSingle(*x24_3, &var_58)
                        i_4 = i_10
                        i_10 -= 1
                        x24_3 = &x24_3[1]
                    while (i_4 != 1)
                
                UI2CreateUndoCheckpoint(true)
            else
                *x0_51
                XString::XString(&var_58)
                char var_2068
                XString::XString(&var_2068)
                int32_t i_11 = GetLinkedElements(x0_48, &var_2060, 0x400)
                
                if (i_11 s>= 1)
                    uint64_t i_9 = zx.q(i_11)
                    void* x24_2 = &var_2060
                    uint64_t i_5
                    
                    do
                        UI2EditorAddAndCopyStateSingle(*x24_2, &var_58, &var_2068)
                        i_5 = i_9
                        i_9 -= 1
                        x24_2 += 8
                    while (i_5 != 1)
                
                UI2CreateUndoCheckpoint(true)
                XString::~XString()
            
            XString::~XString()
            XString::XString(&var_2060)
            UI2EditorSetEditorState(x0_48, &var_2060)
            XString::~XString()
            UI2CreateUndoCheckpoint(true)
            int64_t x0_63 =
                UI2SelectByName(zx.q(*(gUI2Editor + 0x6038)), "propValue", *(arg1 + 0x10))
            UI2SetFocus(x0_63, nullptr, false)
            XString::operator=(*gUI2 + mulu.dp.d(zx.d(x0_63.w), 0x19a8) + 0x17e0)
            UITextBox::SelectAll()
    
    XString::XString(&var_2060)
    int32_t x0_68 = operator==(&var_2060, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_68 & 1) != 0)
        UI2* x0_70 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        *(x0_70 + 0x1370) = 0
        int64_t x22_2 = sx.q(*(gUI2Editor + 0x7058))
        GetPropDefs(*gUI2 + zx.q(*(x0_70 + 0x19a0)) * 0x19a8, &var_2060, nullptr)
        
        if (*(&var_2060 + (x22_2 << 5) + 8) != 0x6f)
            int32_t x22_4 = *(gUI2Editor + 0x7058)
            AttribMap* x0_82 = GetEdittedMap(x0_70, 0x71)
            *(x0_70 + 0x1368) = 0
            GetPropDefs(x0_70, &var_2060, &var_58)
            DefinitionVariableArrayDeleteItem(
                AttribMapGetDef(*gUI2AttribTable, x0_82, *macro_ptr_UI2Transition, 0x71), 
                DefFindField(*macro_ptr_UI2Transition, 8), (x22_4 - var_58) s/ 5, nullptr)
            UI2CreateUndoCheckpoint(true)
        else
            int64_t* x0_73 = TryGetEditorOverride(x0_70)
            
            if (x0_73 != 0)
                *x0_73
                XString::XString(&var_58)
                
                if ((operator==(&var_58, &data_793a18) & 1) == 0)
                    int32_t i_13 = GetLinkedElements(x0_70, &var_2060, 0x400)
                    
                    if (i_13 s>= 1)
                        uint64_t i_8 = zx.q(i_13)
                        XString* x22_3 = &var_2060
                        uint64_t i_6
                        
                        do
                            UI2EditorDeleteStateSingle(*x22_3, &var_58)
                            i_6 = i_8
                            i_8 -= 1
                            x22_3 += 8
                        while (i_6 != 1)
                    
                    UI2CreateUndoCheckpoint(true)
                
                XString::XString(&var_2060)
                UI2EditorSetEditorState(x0_70, &var_2060)
                XString::~XString()
                UI2CreateUndoCheckpoint(true)
                XString::~XString()
    
    XString::XString(&var_2060)
    int32_t x0_91 = operator==(&var_2060, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_91 & 1) != 0)
        UI2* x0_93 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        *(x0_93 + 0x1370) = 0
        int64_t x22_5 = sx.q(*(gUI2Editor + 0x7058))
        GetPropDefs(*gUI2 + zx.q(*(x0_93 + 0x19a0)) * 0x19a8, &var_2060, nullptr)
        uint32_t x21_4 = *(&var_2060 + (x22_5 << 5) + 8)
        AttribMap* x0_96 = GetEdittedMap(x0_93, zx.q(x21_4))
        AttribMapRemoveTag(*gUI2AttribTable, x0_96, x21_4)
        UI2CreateUndoCheckpoint(true)
    
    XString::XString(&var_2060)
    int32_t x0_100 = operator==(&var_2060, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_100 & 1) != 0)
        void* x0_102 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        *(x0_102 + 0x1370) = 0
        int64_t x20_22 = sx.q(*(gUI2Editor + 0x7058))
        GetPropDefs(*gUI2 + zx.q(*(x0_102 + 0x19a0)) * 0x19a8, &var_2060, nullptr)
        int32_t x8_43 = *(&var_2060 + (x20_22 << 5) + 8)
        uint64_t x9_19 = zx.q(x8_43 - 0x8c)
        
        if (x9_19.d u> 0x3c || (1 << x9_19 & 0x10000000000c0011) == 0)
            uint64_t x8_44 = zx.q(x8_43 - 0xd6)
            
            if (x8_44.d u> 0x3d)
                continue
            else if ((1 << x8_44 & 0x20a0200000000001) == 0)
                continue
        
        XString::XString()
        XString::~XString()
    
    XString::XString(&var_2060)
    int32_t x0_106 = operator==(&var_2060, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_106 & 1) == 0)
        return 0
    
    UI2* x0_108 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
    *(x0_108 + 0x1370) = 0
    int64_t x21_5 = sx.q(*(gUI2Editor + 0x705c))
    GetPropDefs(*gUI2 + zx.q(*(x0_108 + 0x19a0)) * 0x19a8, &var_2060, nullptr)
    uint32_t x22_6 = *(&var_2060 + (x21_5 << 5) + 8)
    AttribMap* x0_111 = GetEdittedMap(x0_108, zx.q(x22_6))
    int64_t x26_1 = sx.q(*(gUI2Editor + 0x705c))
    GetPropDefs(*gUI2 + zx.q(*(x0_108 + 0x19a0)) * 0x19a8, &var_2060, nullptr)
    int32_t x8_50 = *(&var_2060 + (x26_1 << 5) + 0x18)
    
    if (x8_50 == 2)
        int32_t* x0_118 = FieldGetSymbols(zx.q(*(x0_108 + 0x19a0)), *(gUI2Editor + 0x705c))
        
        if (x22_6 - 0x72 u> 3)
            AttribMapSetInt(*gUI2AttribTable, x0_111, x22_6, x0_118[sx.q(*(arg1 + 0x10)) * 4])
            goto label_103620c
        
        UI2CommitAnimation(x0_108, x0_111, zx.q(x22_6), *(gUI2Editor + 0x705c), 
            *(x0_118 + (sx.q(*(arg1 + 0x10)) << 4) + 8))
        break
    
    if (x8_50 == 5)
        char* x19_1 = *(FieldGetComboOptions(zx.q(*(x0_108 + 0x19a0)), *(gUI2Editor + 0x705c))
            + (sx.q(*(arg1 + 0x10)) << 3))
        
        if (x22_6 == 0x111)
            int64_t x20_25 = sx.q(*(gUI2Editor + 0x705c))
            UI2* x0_122
            int64_t x2_12
            x0_122, x2_12 =
                GetPropDefs(*gUI2 + zx.q(*(x0_108 + 0x19a0)) * 0x19a8, &var_2060, nullptr)
            UI2CommitBinding(x0_122, x0_111, x2_12, *(&var_2060 + (x20_25 << 5) + 0x10), x19_1)
        else if (x22_6 != 0x6f)
            AttribMapSetString(*gUI2AttribTable, x0_111, x22_6, x19_1)
        else
            XString::XString(&var_2060)
            UI2EditorSetEditorState(x0_108, &var_2060)
            XString::~XString()
        
    label_103620c:
        UI2CreateUndoCheckpoint(true)
    label_1036218:
        *(gUI2Editor + 0x705c) = 0xffffffff
        return 0

goto label_1036218
