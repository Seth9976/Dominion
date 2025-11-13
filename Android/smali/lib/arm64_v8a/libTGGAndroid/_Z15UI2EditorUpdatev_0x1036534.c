// 函数: _Z15UI2EditorUpdatev
// 地址: 0x1036534
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int128_t v2

if ((zx.d(data_24b4940) & 1) == 0)
    int32_t x0_111
    x0_111, v2 = __cxa_guard_acquire(&data_24b4940)
    
    if (x0_111 != 0)
        data_24b4938 = AssetPtrFromPath("sys/editor/ui2/editor_styles.ui2", 0x22)
        __cxa_guard_release(&data_24b4940)

v2.d = float.s(0x447a0000)
float v0 = *gSecondsPerUpdate f* v2.d
v2.d = fconvert.s(-0.5f)
float v1

if (v0 < 0f)
    v1 = v2.d
else
    v1 = fconvert.s(0.5f)

int32_t x9 = data_24b4c50
v2 = data_24b4c40
*(gUI2Editor + 0x6014) += vcvts_s32_f32(v0 + v1)
*(gUI2Editor + 0x6030) = x9
*(gUI2Editor + 0x6020) = v2
uint32_t x8_3 = zx.d(*(gUI2Editor + 0x88068))
int64_t x9_1 = *(gUI2 + 0x60)
*(gUI2 + 0x60) = data_24b4938
XString var_2088
int128_t var_2078
int32_t var_1080

if (x8_3 == 0)
    int32_t x0_2
    int128_t v0_1
    x0_2, v0_1 = GetCursorPosition(&var_2088)
    
    if ((x0_2 & 1) != 0)
        int32_t x8_4 = *(gUI2Editor + 0x6038)
        int32_t x8_6
        
        if (x8_4 == 0)
            v0_1 = data_24b4c40
            x8_6 = data_24b4c50
        else
            UI2HitTest(*gUI2 + zx.q(x8_4.w) * 0x19a8, 0xff, &var_2088, false)
            v0_1 = var_2078
            int32_t var_2068
            x8_6 = var_2068
        
        var_1080.o = v0_1
        v0_1 = var_1080.o
        int32_t var_1070_1 = x8_6
        *(gUI2Editor + 0x6030) = x8_6
        *(gUI2Editor + 0x6020) = v0_1
    
    ClickStateUpdate(gUI2Editor + 0x8c0b0, InputIsButtonDown(0) & 1, false, *(gUI2Editor + 0x6014), 
        gUI2Editor + 0x6018, &var_2088, V0)
else
    UI2DraggingUpdate()

UI2UpdateMouseState(gUI2Editor + 0x8c0b0, zx.q(*(gUI2Editor + 0x6020)), 0xffffffff, 0)
float v0_2 = *gSecondsPerUpdate
*(gUI2 + 0x60) = x9_1
UI2EditorResyncUIAsset(v0_2)
*(gUI2 + 0x60) = data_24b4938

if ((zx.d(data_24b4950) & 1) == 0 && __cxa_guard_acquire(&data_24b4950) != 0)
    data_24b4948 = AssetPtrFromPath("sys/editor/ui2/editor_main.ui2", 0x22)
    __cxa_guard_release(&data_24b4950)

XAsset* x19 = data_24b4948
int32_t v0_3
int32_t v1_1
int32_t v2_1
int32_t v3
v0_3, v1_1, v2_1, v3 = RectScreen()
int32_t var_2080 = v0_3
var_2078.d = v2_1
var_2078:4.d = v3
int32_t v0_4
int32_t v1_2
int32_t v2_2
int32_t v3_1
v0_4, v1_2, v2_2, v3_1 = RectScreen()
var_1080 = v0_4
int32_t var_107c = v1_2
int32_t var_1078 = v2_2
int32_t var_1074 = v3_1
UI2Begin("editor ui", gUI2Editor + 0x6038, x19, &var_2080, &var_1080, 0x61a8, 0, false)
*(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8 + 0x1990) = UI2EditorClick
*(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8 + 0x1998) = UI2EditorCommit
int64_t x19_2

if (*(gUI2Editor + 0x704c) s>= 1 && *(gUI2Editor + 0x6000) s>= 1)
    UI2* x0_8 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
    int64_t (* const x9_6)(UI2 const&)
    
    if (zx.d(*(gUI2Editor + 0x7056)) == 0)
        x9_6 = nullptr
    else
        x9_6 = UI2CroppingDraw
    
    *(*gUI2 + zx.q(*(x0_8 + 0x19a0)) * 0x19a8 + 0x1638) = x9_6
    int32_t x0_9 = GetPropDefs(x0_8, &var_1080, nullptr)
    UI2SetInt(zx.q(*(gUI2Editor + 0x6038)), &data_24b4980, x0_9, 0xffffffff)
    
    if (x0_9 s> 0)
        int64_t i = 0
        void var_2018
        void* var_20c0_1 = &var_2018
        void var_2030
        void* var_20b8_1 = &var_2030
        void var_2058
        void* var_20b0_1 = &var_2058
        void* var_20a8_1 = &var_2078:8
        
        do
            void* x27_1 = &(&var_1080)[i * 8]
            uint32_t x28_1 = *(x27_1 + 8)
            *(gUI2 + 0x60) = x9_1
            AttribMapCoerceToString(x0_8, zx.q(x28_1), i.d)
            
            if (x28_1 == 0x111)
                XString::operator=(&var_2088)
                AttribMap* x0_14 = UI2GetContribMap(x0_8, 0x110)
                int64_t* x0_16 =
                    AttribMapGetDef(*gUI2AttribTable, x0_14, *macro_ptr_SpineSlotMappings, 0x110)
                
                if (x0_16 != 0)
                    int64_t fp_1 = sx.q(x0_16[1].d)
                    
                    if (fp_1.d s>= 1)
                        int64_t x22_1 = *(&var_1080 + (i << 5) + 0x10)
                        int64_t x26_1 = 0
                        void* x23_1 = *x0_16 + 8
                        
                        do
                            if (strcmp(x22_1, *(x23_1 - 8)) == 0)
                                *x23_1
                                XString::operator=(&var_2088)
                                break
                            
                            x26_1 += 1
                            x23_1 += 0x10
                        while (x26_1 s< fp_1)
            
            int32_t x22_2 = *(gUI2Editor + 0x6038)
            *(x27_1 + 0x10)
            *(gUI2 + 0x60) = data_24b4938
            XString::XString(&var_2080)
            UI2SetText(zx.q(x22_2), &data_24b4998, &var_2080, i.d)
            XString::~XString()
            UI2SetText(zx.q(*(gUI2Editor + 0x6038)), &data_24b49b0, &var_2088, i.d)
            GetPropDefs(*gUI2 + zx.q(*(x0_8 + 0x19a0)) * 0x19a8, &var_2080, nullptr)
            void* x23_2 = &(&var_2080)[i * 8]
            int32_t x22_3 = *(x23_2 + 8)
            GetPropDefs(*gUI2 + zx.q(*(x0_8 + 0x19a0)) * 0x19a8, &var_2080, nullptr)
            
            if (*(x23_2 + 0x18) == 3)
                UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b49c8, i.d, 0, 
                    fconvert.s(1f))
                AttribMap* x0_27 = UI2GetContribMap(x0_8, zx.q(x28_1))
                DefMap* x0_29 = AttribTagGetDefMap(*gUI2AttribTable, x28_1)
                AttribTable* x0_30 = *gUI2AttribTable
                
                if (x0_29 == *macro_ptr_ColorRgbaI)
                    int32_t* x0_34 = AttribMapGetDef(x0_30, x0_27, x0_29, x28_1)
                    uint64_t x9_12 = zx.q(*(gUI2Editor + 0x6038))
                    int64_t x10_3 = *gUI2
                    void* j_1 = x10_3 + x9_12 * 0x19a8
                    uint64_t j_8 = zx.q(*(j_1 + 0x17a0))
                    int64_t* x0_35 = *(j_1 + 0x1798)
                    int64_t* x11_3
                    
                    if (j_8.d s>= 1)
                        x11_3 = x0_35
                        uint64_t j_6 = j_8
                        int32_t j
                        
                        do
                            if (i == zx.q(x11_3[1].d) && *x11_3 == &data_24b49e0)
                                goto label_1036c38
                            
                            j = j_6
                            j_6 -= 1
                            x11_3 = &x11_3[6]
                        while (j != 1)
                    
                    if (*(x10_3 + x9_12 * 0x19a8 + 0x17a4) == 0)
                        x0_35 = XPooledCalloc(0x3000)
                        j_8 = 0
                        *(j_1 + 0x1798) = x0_35
                        *(j_1 + 0x17a0) = 0x10000000000
                    
                    *(x0_35 + muls.dp.d(j_8.d, 0x30) + 8) = 0
                    int64_t x8_32 = sx.q(*(j_1 + 0x17a0))
                    *(j_1 + 0x17a0) = x8_32.d + 1
                    x11_3 = *(j_1 + 0x1798) + x8_32 * 0x30
                label_1036c38:
                    *x11_3 = &data_24b49e0
                    x11_3[1].d = i.d
                    *(x11_3 + 0xc) = 8
                    x11_3[4].d = 0
                    x11_3[5].d = *x0_34
                    
                    do
                        *(j_1 + 0x1378) = 2
                        j_1 = *(j_1 + 0x17d0)
                    while (j_1 != 0)
                else
                    int32_t* x0_32 = UI2ExprTreeDefEval(AttribMapGetDef(x0_30, x0_27, 
                        *macro_ptr_UI2ExprTreeDef, x28_1))
                    
                    if (*x0_32 != 3)
                        UI2ExpressionEvalTreeRT(x0_32, i.d, 0x8692b0)
                    else
                        UI2EvalResult::UI2EvalResult(&var_2080)
                    
                    int32_t var_1ff8
                    
                    if (var_1ff8 s<= 1)
                        int32_t x0_37 = EvalValEval<ColorRgbaI>(&var_2080, 0f)
                        uint64_t x9_13 = zx.q(*(gUI2Editor + 0x6038))
                        int64_t x10_4 = *gUI2
                        void* j_3 = x10_4 + x9_13 * 0x19a8
                        uint64_t j_9 = zx.q(*(j_3 + 0x17a0))
                        int64_t* x0_38 = *(j_3 + 0x1798)
                        int64_t* x11_4
                        
                        if (j_9.d s>= 1)
                            x11_4 = x0_38
                            uint64_t j_7 = j_9
                            uint64_t j_2
                            
                            do
                                if (i == zx.q(x11_4[1].d) && *x11_4 == &data_24b49e0)
                                    goto label_1036cb4
                                
                                j_2 = j_7
                                j_7 -= 1
                                x11_4 = &x11_4[6]
                            while (j_2 != 1)
                        
                        if (*(x10_4 + x9_13 * 0x19a8 + 0x17a4) == 0)
                            x0_38 = XPooledCalloc(0x3000)
                            j_9 = 0
                            *(j_3 + 0x1798) = x0_38
                            *(j_3 + 0x17a0) = 0x10000000000
                        
                        *(x0_38 + muls.dp.d(j_9.d, 0x30) + 8) = 0
                        int64_t x8_35 = sx.q(*(j_3 + 0x17a0))
                        *(j_3 + 0x17a0) = x8_35.d + 1
                        x11_4 = *(j_3 + 0x1798) + x8_35 * 0x30
                    label_1036cb4:
                        *x11_4 = &data_24b49e0
                        x11_4[1].d = i.d
                        *(x11_4 + 0xc) = 8
                        x11_4[5].d = x0_37
                        x11_4[4].d = 0
                        
                        do
                            *(j_3 + 0x1378) = 2
                            j_3 = *(j_3 + 0x17d0)
                        while (j_3 != 0)
                    
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
            
            if ((ValueIsInherited(x0_8, x22_3) & 1) != 0)
                UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b49f8, i.d, 0, 
                    fconvert.s(1f))
            
            XString::~XString()
            i += 1
        while (i != zx.q(x0_9))
    
    x19_2 = sx.q(*(gUI2Editor + 0x7058))
    
    if (x19_2.d == 0xffffffff || *(gUI2Editor + 0x6000) s< 1)
        goto label_1036f3c
    
    goto label_1036dbc

UI2SetInt(zx.q(*(gUI2Editor + 0x6038)), &data_24b4980, 0, 0xffffffff)
x19_2 = sx.q(*(gUI2Editor + 0x7058))

if (x19_2.d != 0xffffffff && *(gUI2Editor + 0x6000) s>= 1)
label_1036dbc:
    UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4a10, x19_2.d, 0, 
        fconvert.s(1f))
    UI2* x0_49 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
    GetPropDefs(*gUI2 + zx.q(*(x0_49 + 0x19a0)) * 0x19a8, &var_2080, nullptr)
    void* x24_1 = &(&var_2080)[x19_2 * 8]
    int32_t x20_1 = *(x24_1 + 8)
    GetPropDefs(*gUI2 + zx.q(*(x0_49 + 0x19a0)) * 0x19a8, &var_2080, nullptr)
    uint64_t x8_41 = zx.q(*(x24_1 + 0x18))
    
    if (x8_41.d u<= 5)
        switch (x8_41)
            case 1
                UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4a40, x19_2.d, 
                    0, fconvert.s(1f))
            case 2, 5
                UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4a28, x19_2.d, 
                    0, fconvert.s(1f))
            case 3
                UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4a58, x19_2.d, 
                    0, fconvert.s(1f))
            case 4
                UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4a70, x19_2.d, 
                    0, fconvert.s(1f))
        
        if ((UndoAvailable(x0_49, x20_1) & 1) != 0)
            UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4a88, x19_2.d, 0, 
                fconvert.s(1f))
        
        if (x20_1 == 0x71 || x20_1 == 0x6f)
            UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4aa0, x19_2.d, 0, 
                fconvert.s(1f))
            UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4ab8, x19_2.d, 0, 
                fconvert.s(1f))
        
        goto label_1036f3c
    
    pthread_kill(pthread_self(), 6)
    XNoReturn()
label_1037860:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    pthread_kill(pthread_self(), 6)
    XNoReturn()
else
label_1036f3c:
    int64_t x19_3 = sx.q(*(gUI2Editor + 0x705c))
    
    if (x19_3.d != 0xffffffff)
        UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4ad0, x19_3.d, 0, 
            fconvert.s(1f))
        void* x0_60 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        GetPropDefs(*gUI2 + zx.q(*(x0_60 + 0x19a0)) * 0x19a8, &var_2080, nullptr)
        int32_t x8_49 = (&var_2080)[x19_3 * 8 + 6]
        
        if (x8_49 == 5)
            *(gUI2 + 0x60) = x9_1
            int64_t* x0_67 = FieldGetComboOptions(zx.q(*(x0_60 + 0x19a0)), *(gUI2Editor + 0x705c))
            *(gUI2 + 0x60) = data_24b4938
            int64_t x19_5
            
            if (*x0_67 == 0)
                x19_5 = 0
            else
                x19_5 = 0
                int64_t i_1
                
                do
                    int32_t x21_4 = *(gUI2Editor + 0x6038)
                    XString::XString(&var_2080)
                    UI2SetText(zx.q(x21_4), &data_24b4ae8, &var_2080, x19_5.d)
                    XString::~XString()
                    i_1 = x0_67[1 + x19_5]
                    x19_5 += 1
                while (i_1 != 0)
            
            UI2SetInt(zx.q(*(gUI2Editor + 0x6038)), &data_24b4b00, x19_5.d, *(gUI2Editor + 0x7058))
        else if (x8_49 == 2)
            void* x0_63 = FieldGetSymbols(zx.q(*(x0_60 + 0x19a0)), *(gUI2Editor + 0x705c))
            int32_t x19_4
            
            if (*(x0_63 + 8) == 0)
                x19_4 = 0
            else
                x19_4 = 0
                void* x22_4 = x0_63 + 0x18
                int64_t i_2
                
                do
                    int32_t x21_3 = *(gUI2Editor + 0x6038)
                    XString::XString(&var_2080)
                    UI2SetText(zx.q(x21_3), &data_24b4ae8, &var_2080, x19_4)
                    XString::~XString()
                    i_2 = *x22_4
                    x22_4 += 0x10
                    x19_4 += 1
                while (i_2 != 0)
            
            UI2SetInt(zx.q(*(gUI2Editor + 0x6038)), &data_24b4b00, x19_4, *(gUI2Editor + 0x7058))
    
    UI2SetInt(zx.q(*(gUI2Editor + 0x6038)), &data_24b4b18, *(gUI2Editor + 0x6004), 0xffffffff)
    int32_t x8_52 = *(gUI2Editor + 0x6000)
    
    if (x8_52 s>= 1)
        int64_t i_3 = 0
        int32_t x19_6 = 0
        
        do
            if (*(gUI2Editor + i_3 * 0x18 + 0x10) != 2)
                UI2** fp_5 = gUI2Editor + i_3 * 0x18
                UI2* x24_2 = *fp_5
                XString::XString(&var_2080)
                
                if (fp_5[1].d s>= 1)
                    int32_t j_4 = 0
                    
                    do
                        XString::operator+=(&var_2080)
                        j_4 += 1
                    while (j_4 s< fp_5[1].d)
                
                XString::GetString()
                XString::GetString()
                XFormatString("%s%s")
                UI2SetText(zx.q(*(gUI2Editor + 0x6038)), &data_24b4b30, &var_1080, x19_6)
                uint64_t x8_55 = zx.q(*(gUI2Editor + 0x704c))
                
                if (x8_55.d s>= 1)
                    int32_t j_5 = *(x24_2 + 0x1690)
                    int64_t x11_6
                    
                    if (j_5 != *(gUI2Editor + 0x604c))
                        int64_t x12_1 = 0
                        
                        do
                            x11_6 = x12_1
                            
                            if (x8_55 - 1 == x12_1)
                                break
                            
                            x12_1 = x11_6 + 1
                        while (j_5 != *(gUI2Editor + (x11_6 << 2) + 0x6050))
                    
                    if (j_5 == *(gUI2Editor + 0x604c) || x11_6 + 1 u< x8_55)
                        UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4b48, 
                            x19_6, 0, fconvert.s(1f))
                
                XAsset* fp_8 = *(x24_2 + 0x1688)
                int64_t* x8_57 = *fp_8
                
                if (x8_57 == 0)
                    if (*(fp_8 + 8) == 0x15)
                        XString::GetString()
                        XTrace("Unpreloaded sound %s")
                    
                    AssetCatalogLoadAsset(fp_8, false, true)
                    x8_57 = *fp_8
                
                if (*(**x8_57 + sx.q(*(x24_2 + 0x1690)) * 0x18 + 0x10) s> 0
                        || *(x24_2 + 0x167c) == 6)
                    UI2* x0_82 = *gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8
                    
                    if (*(gUI2Editor + i_3 * 0x18 + 0x10) == 0)
                        UI2SetState(x0_82, &data_24b4bc0, x19_6, 0, fconvert.s(1f))
                    else
                        UI2SetState(x0_82, &data_24b4bd8, x19_6, 0, fconvert.s(1f))
                
                char* fp_10
                
                if (*(x24_2 + 0x17d0) == 0)
                    fp_10 = nullptr
                else
                    int64_t* fp_9 = *(x24_2 + 0x1688)
                    int64_t* x8_66 = *fp_9
                    
                    if (x8_66 == 0)
                        if (fp_9[1].d == 0x15)
                            XString::GetString()
                            XTrace("Unpreloaded sound %s")
                        
                        AssetCatalogLoadAsset(fp_9, false, true)
                        x8_66 = *fp_9
                    
                    fp_10 = AttribMapGetString(*gUI2AttribTable, 
                        **x8_66 + sx.q(*(x24_2 + 0x1690)) * 0x18, 0x6f)
                
                char var_2090
                
                if (LayerDivergence(x24_2, &var_2088) != 2)
                    if (LayerDivergence(x24_2, &var_2088) == 1)
                        UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4ba8, 
                            x19_6, 0, fconvert.s(1f))
                    else if (zx.d(*fp_10) != 0)
                        int32_t x28_7 = *(gUI2Editor + 0x6038)
                        XString::XString(&var_2090)
                        UI2SetText(zx.q(x28_7), &data_24b4bf0, &var_2090, x19_6)
                        XString::~XString()
                else
                    if (zx.d(*fp_10) != 0)
                        int32_t x28_6 = *(gUI2Editor + 0x6038)
                        XString::XString(&var_2090)
                        UI2SetText(zx.q(x28_6), &data_24b4bf0, &var_2090, x19_6)
                        XString::~XString()
                    
                    UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4b90, 
                        x19_6, 0, fconvert.s(1f))
                
                if (zx.d(*(x24_2 + 0x15)) != 0)
                    UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4b60, 
                        x19_6, 0, fconvert.s(1f))
                
                if (zx.d(*(x24_2 + 0x16)) != 0)
                    UI2SetState(*gUI2 + zx.q(*(gUI2Editor + 0x6038)) * 0x19a8, &data_24b4b78, 
                        x19_6, 0, fconvert.s(1f))
                
                x19_6 += 1
                XString::~XString()
                XString::~XString()
                x8_52 = *(gUI2Editor + 0x6000)
            
            i_3 += 1
        while (i_3 s< sx.q(x8_52))
    
    *(gUI2Editor + 0x6008)
    XString::XString(&var_1080)
    UI2SetText(zx.q(*(gUI2Editor + 0x6038)), &data_24b4c08, &var_1080, 0xffffffff)
    SymbolMapLookupName(0x1180e28, *(gUI2Editor + 0x8c3e0))
    int32_t x19_7 = *(gUI2Editor + 0x6038)
    XFormatString("%s")
    UI2SetText(zx.q(x19_7), &data_24b4c20, &var_2080, 0xffffffff)
    XString::~XString()
    UI2UpdateRoot(zx.q(*(gUI2Editor + 0x6038)), false, *gSecondsPerUpdate)
    
    if (*(gUI2Editor + 0x6000) == 0)
        XSetCursor(1)
    label_1037684:
        *(gUI2 + 0x60) = x9_1
        *(gUI2Editor + 0x88069) = 0
        int64_t result = XString::~XString()
        
        if (*(x8 + 0x28) == x8_1)
            return result
    else
        if ((zx.d(*(gUI2Editor + 0x7056)) | zx.d(*(gUI2Editor + 0x7054))) != 0)
            int64_t x0_106
            int128_t v0_15
            int128_t v1_3
            x0_106, v0_15, v1_3 = GetCursorPosition(&var_2080)
            v0_15.d = var_2080
            v1_3.d = v1_1
            uint64_t x8_82 = zx.q(UI2TransformCorner(x0_106) + 1)
            
            if (x8_82.d u> 8)
                goto label_1037860
            
            switch (x8_82)
                case 0
                    XSetCursor(1)
                case 1
                    XSetCursor(5)
                case 2
                    XSetCursor(3)
                case 3
                    XSetCursor(6)
                case 4, 5
                    XSetCursor(4)
                case 6
                    XSetCursor(6)
                case 7
                    XSetCursor(3)
                case 8
                    XSetCursor(5)
            
            goto label_1037684
        
        if (zx.d(*(gUI2Editor + 0x7055)) == 0)
            XSetCursor(1)
            goto label_1037684
        
        int64_t x0_109
        int128_t v0_16
        int128_t v1_4
        x0_109, v0_16, v1_4 = GetCursorPosition(&var_2080)
        v0_16.d = var_2080
        v1_4.d = v1_1
        uint64_t x8_87 = zx.q(UI2BoundaryCorner(x0_109) + 1)
        
        if (x8_87.d u<= 8)
            switch (x8_87)
                case 0
                    XSetCursor(1)
                case 1
                    XSetCursor(5)
                case 2
                    XSetCursor(3)
                case 3
                    XSetCursor(6)
                case 4, 5
                    XSetCursor(4)
                case 6
                    XSetCursor(6)
                case 7
                    XSetCursor(3)
                case 8
                    XSetCursor(5)
            
            goto label_1037684
        
        pthread_kill(pthread_self(), 6)
        XNoReturn()

__stack_chk_fail()
noreturn
