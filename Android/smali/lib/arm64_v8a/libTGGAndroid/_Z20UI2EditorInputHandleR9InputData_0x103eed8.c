// 函数: _Z20UI2EditorInputHandleR9InputData
// 地址: 0x103eed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v10
int64_t var_50 = entry_v10.q
int64_t v9
int64_t var_40 = v9
int128_t entry_v8
int64_t var_38 = entry_v8.q
uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
bool var_94
int32_t x0
int128_t v0
int128_t v1
int128_t v2
int128_t v3
x0, v0, v1, v2, v3 = UI2FocusHandlesInput(arg1, &var_94)
int32_t x19_1

if ((x0 & 1) == 0)
    int32_t x8_2 = *arg1
    
    if (x8_2 == 9)
        v0.d = *(arg1 + 0xc)
        v9.d = *(gUI2Editor + 0x603c)
        v1.d = float.s(0x3b03126f)
        v0.d = float.s(v0.d)
        entry_v8.d = fconvert.s(1f)
        v0.d = v0.d f* v1.d
        v0.d = v0.d f+ entry_v8.d
        v0.d = v9.d f* v0.d
        *(gUI2Editor + 0x603c) = v0.d
        int128_t v0_1
        float v1_1
        int128_t v2_1
        int32_t v3_1
        int128_t v4_1
        v0_1, v1_1, v2_1, v3_1, v4_1 = RectEditor(zx.q(*(gUI2Editor + 0x8c3e0)))
        v4_1.q = *(gUI2Editor + 0x6040)
        uint64_t x0_2 = zx.q(*(gUI2Editor + 0x8c3e0))
        v0_1:4.d = v1_1
        v2_1:4.d = v3_1
        entry_v10.d = 0x3f000000
        entry_v10:4.d = 0x3f000000
        v1_1 = entry_v8.d f/ v9.d
        int128_t v0_3
        v0_3.d = vmul_f32(vadd_f32(v0_1, v2_1), entry_v10, 0).d f* v1_1
        v0_3:4.d = v0_3:4.d f* v1_1
        entry_v8 = vsub_f32(v4_1, v0_3)
        int128_t v0_4
        v0_4, v1, v2, v3 = RectEditor(x0_2)
        int32_t v4_2 = *(gUI2Editor + 0x603c)
        v0_4:4.d = v1.d
        v2:4.d = v3.d
        v0.d = vadd_f32(entry_v8, vmul_f32(vadd_f32(v0_4, v2), entry_v10, 0)).d f* v4_2
        v0:4.d = v0:4.d f* v4_2
        *(gUI2Editor + 0x6040) = v0.q
        x8_2 = *arg1
    
    if (x8_2 == 0x1c)
        AssetPathFromFullPath(XString::operator char const*())
        OnlyFilename(arg1 + 0x18)
        int64_t* x19_3 = *(gUI2Editor + 0x6008)
        
        if (*x19_3 == 0)
            if (x19_3[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x19_3, false, true)
        
        if (*8 == 3)
            if (*(gUI2Editor + 0x704c) != 0)
                void* x0_87 =
                    UI2GetIndex(zx.q(*(gUI2Editor + 0x604c + (sx.q(*(gUI2Editor + 0x604c)) << 2))))
                int64_t* x20_4 = *(x0_87 + 0x1688)
                int64_t* x8_82 = *x20_4
                
                if (x8_82 == 0)
                    if (x20_4[1].d == 0x15)
                        XString::GetString()
                        XTrace("Unpreloaded sound %s")
                    
                    AssetCatalogLoadAsset(x20_4, false, true)
                    x8_82 = *x20_4
                
                void* x8_86 = **x8_82 + sx.q(*(x0_87 + 0x1690)) * 0x18
                *(x8_86 + 0x10) += 1
            
            XString::GetString()
            XFormatString("img_%s")
            trap(1)
        
        XString::~XString()
        XString::~XString()
        x19_1 = 0
    else
        uint64_t var_90
        
        if (x8_2 == 3)
            void var_a0
            int32_t x0_4
            int128_t v0_7
            x0_4, v0_7 = GetCursorPosition(&var_a0)
            
            if ((x0_4 & 1) != 0)
                int32_t x8_7 = *(gUI2Editor + 0x6038)
                int32_t x8_9
                
                if (x8_7 == 0)
                    v0_7 = data_24b4c40
                    x8_9 = data_24b4c50
                else
                    UI2HitTest(*gUI2 + zx.q(x8_7.w) * 0x19a8, 0xff, &var_a0, false)
                    int128_t var_88
                    v0_7 = var_88
                    int32_t var_78
                    x8_9 = var_78
                
                int32_t var_60_1 = x8_9
                *(gUI2Editor + 0x6030) = x8_9
                *(gUI2Editor + 0x6020) = v0_7
            
            int64_t x0_13 = (**(gUI2Editor + 0x6018))(gUI2Editor + 0x6018)
            
            if (x0_13 == (*data_24b4c38)(&data_24b4c38))
                x0_13(gUI2Editor + 0x6018, &data_24b4c38)
            
            int64_t x0_17 = (**(gUI2Editor + 0x6018))(gUI2Editor + 0x6018)
            
            if (x0_17 != (*data_24b4c38)(&data_24b4c38))
                x19_1 = 1
            else if ((x0_17(gUI2Editor + 0x6018, &data_24b4c38) & 1) == 0)
                x19_1 = 1
            else
                uint64_t x0_21 = zx.q(*(gUI2 + 0x50))
                
                if (x0_21.d != 0)
                    int64_t x19_4 = x0_21 & 0xffff
                    
                    if (x19_4.d u< *(gUI2 + 8))
                        int64_t x23_1 = *gUI2
                        
                        if (*(x23_1 + x19_4 * 0x19a8 + 0x19a0) == x0_21.d)
                            AndroidDisplayKeyboard(false)
                            InputClearKeyboardButtons()
                            void* x8_29 = x23_1 + x19_4 * 0x19a8
                            *(x8_29 + 0x17f0) = *(x8_29 + 0x17e8)
                            *(x8_29 + 0x1859) = 0
                            x0_21 = zx.q(*(gUI2 + 0x50))
                
                UI2ClearFocus(x0_21, false, true)
                *(gUI2Editor + 0x7058) = -1
                
                if ((AppIsKeyDown(0x20) & 1) != 0)
                    *(gUI2Editor + 0x88068) = 1
                    *(gUI2Editor + 0x8806c) = 1
                    GetCursorPosition(&var_90)
                    *(gUI2Editor + 0x88070) = var_90
                    *(gUI2Editor + 0x88080) = 0
                    x19_1 = 1
                    *(gUI2Editor + 0x88078) = *(gUI2Editor + 0x88070)
                else if ((zx.d(*(gUI2Editor + 0x7056)) | zx.d(*(gUI2Editor + 0x7054))) == 0)
                    int32_t x0_28 = UI2IsOverAnyItem(&var_90)
                    int32_t x0_29 = AppIsKeyDown(0)
                    
                    if ((x0_28 & 1) == 0)
                        if ((x0_29 & 1) == 0)
                            *(gUI2Editor + 0x704c) = 0
                            memcpy(gUI2Editor + sx.q(*(gUI2Editor + 0x88060)) * 0x1020 + 0x6040, 
                                gUI2Editor + 0x6048, 0x1018)
                        
                        x19_1 = 1
                    else
                        int32_t x19_6 = var_90.d
                        char x8_55
                        
                        if ((x0_29 & 1) == 0)
                            uint64_t x8_54 = zx.q(*(gUI2Editor + 0x704c))
                            int32_t i
                            int64_t x12_10
                            
                            if (x8_54.d s>= 1)
                                i = *(*gUI2 + zx.q(x19_6.w) * 0x19a8 + 0x1690)
                                
                                if (*(gUI2Editor + 0x604c) != i)
                                    int64_t x13_1 = 0
                                    
                                    do
                                        x12_10 = x13_1
                                        
                                        if (x8_54 - 1 == x13_1)
                                            break
                                        
                                        x13_1 = x12_10 + 1
                                    while (*(gUI2Editor + (x12_10 << 2) + 0x6050) != i)
                            
                            if (x8_54.d s>= 1
                                    && (*(gUI2Editor + 0x604c) == i || x12_10 + 1 u< x8_54))
                                x8_55 = 0
                                goto label_103fa28
                            
                            if ((AppIsKeyDown(0) & 1) == 0 || *(gUI2Editor + 0x704c) s<= 0)
                                UI2ClickActiveElement(zx.q(x19_6))
                                goto label_103fa1c
                            
                            UI2DragActiveStart(false)
                            x19_1 = 1
                        else
                            UI2ToggleSelection(zx.q(x19_6))
                        label_103fa1c:
                            x8_55 = 1
                        label_103fa28:
                            *(gUI2Editor + 0x88089) = x8_55
                            
                            if (*(gUI2Editor + 0x704c) s>= 1)
                                UI2DragActiveStart(false)
                                x19_1 = 1
                            else
                                x19_1 = 1
                else
                    UI2DragActiveStart(false)
                    x19_1 = 1
        else if (x8_2 != 1)
            x19_1 = 1
        else
            uint32_t x9_1 = zx.d(*(gUI2Editor + 0x7054))
            
            if ((zx.d(*(gUI2Editor + 0x7056)) | zx.d(x9_1.b) | zx.d(*(gUI2Editor + 0x7055))) == 0
                    || *(arg1 + 4) != 0x42)
                int32_t x8_40 = *(arg1 + 4)
                uint64_t x9_3
                
                if (x9_1 != 0)
                    x9_3 = zx.q(x8_40 - 0xf700)
                
                if (x9_1 != 0 && x9_3.d u<= 3)
                    switch (x9_3)
                        case 0
                            if (*(gUI2Editor + 0x704c) s< 1)
                                x19_1 = 1
                            else
                                v1.q = -0x4080000000000000
                                v2.q = -0x3ee0000000000000
                            label_103f498:
                                v0.d = 0f
                                var_90 = v1.q
                                v3.d = float.s(*(arg1 + 8) & 1)
                                var_90 = vbsl_s8(vdup_laneq_s32(vceq_u32(v3, v0), 0), v1, v2)
                                UI2OffsetActiveSet(&var_90)
                                x19_1 = 1
                                UI2CreateUndoCheckpoint(true)
                        case 1
                            if (*(gUI2Editor + 0x704c) s>= 1)
                                v1.q = 0x3f80000000000000
                                v2.q = 0x4120000000000000
                                goto label_103f498
                            
                            x19_1 = 1
                        case 2
                            if (*(gUI2Editor + 0x704c) s>= 1)
                                v1.q = 0xbf800000
                                v2.q = 0xc1200000
                                goto label_103f498
                            
                            x19_1 = 1
                        case 3
                            if (*(gUI2Editor + 0x704c) s>= 1)
                                v1.q = 0x3f800000
                                v2.q = 0x41200000
                                goto label_103f498
                            
                            x19_1 = 1
                else if (x8_40 == 0)
                    if ((AppIsKeyDown(0) & 1) == 0)
                        x8_40 = *(arg1 + 4)
                    label_103f554:
                        
                        if (x8_40 != 0)
                            goto label_103f5b0
                        
                        if ((AppIsKeyDown(0) & 1) == 0)
                            x8_40 = *(arg1 + 4)
                        label_103f5b0:
                            
                            if (x8_40 s<= 0xf701)
                                if (x8_40 == 0)
                                    x19_1 = 1
                                    UI2EditorChangeStateIdx(1)
                                else
                                    if (x8_40 != 0x4d)
                                        goto label_103f8fc
                                    
                                    if ((AppIsKeyDown(0) & 1) == 0)
                                        x8_40 = *(arg1 + 4)
                                    label_103f8fc:
                                        
                                        if (x8_40 != 0x53)
                                        label_103f91c:
                                            int32_t x8_56 = *(arg1 + 4)
                                            
                                            if (x8_56 != 0x53)
                                                goto label_103f938
                                            
                                            if ((AppIsKeyDown(0) & 1) != 0)
                                                x19_1 = 1
                                            else
                                                x8_56 = *(arg1 + 4)
                                            label_103f938:
                                                
                                                if (x8_56 == 0x54)
                                                    if ((AppIsKeyDown(0) & 1) == 0)
                                                        x8_56 = *(arg1 + 4)
                                                    label_103fa58:
                                                        
                                                        if (x8_56 != 0x43)
                                                            goto label_103fa70
                                                        
                                                        if ((AppIsKeyDown(0) & 1) != 0)
                                                            x19_1 = 1
                                                        else
                                                            x8_56 = *(arg1 + 4)
                                                        label_103fa70:
                                                            
                                                            if (x8_56 != 0x3d)
                                                            label_103fa90:
                                                                int32_t x8_60 = *(arg1 + 4)
                                                                
                                                                if (x8_60 != 0x3d)
                                                                    goto label_103faac
                                                                
                                                                if ((AppIsKeyDown(0) & 1) != 0)
                                                                    x19_1 = 1
                                                                else
                                                                    x8_60 = *(arg1 + 4)
                                                                label_103faac:
                                                                    
                                                                    if (x8_60 != 0x4f)
                                                                        goto label_103fb28
                                                                    
                                                                    if ((AppIsKeyDown(0) & 1) == 0)
                                                                        x8_60 = *(arg1 + 4)
                                                                    label_103fb28:
                                                                        
                                                                        if (x8_60 != 0)
                                                                            goto label_103fc34
                                                                        
                                                                        int32_t x0_60 = AppIsKeyDown(0)
                                                                        int32_t x0_61
                                                                        
                                                                        if ((x0_60 & 1) != 0)
                                                                            x0_61 = AppIsKeyDown(0)
                                                                        
                                                                        if ((x0_60 & 1) == 0
                                                                                || (x0_61 & 1) == 0)
                                                                            x8_60 = *(arg1 + 4)
                                                                            
                                                                            if (x8_60 != 0)
                                                                                goto label_103fc34
                                                                            
                                                                            int32_t x0_62 = AppIsKeyDown(0)
                                                                            int32_t x0_63
                                                                            
                                                                            if ((x0_62 & 1) != 0)
                                                                                x0_63 = AppIsKeyDown(0)
                                                                            
                                                                            if ((x0_62 & 1) == 0
                                                                                    || (x0_63 & 1) == 0)
                                                                                x8_60 = *(arg1 + 4)
                                                                                
                                                                                if (x8_60 != 0)
                                                                                    goto label_103fc34
                                                                                
                                                                                if ((AppIsKeyDown(0) & 1) == 0)
                                                                                    x8_60 = *(arg1 + 4)
                                                                                    
                                                                                    if (x8_60 != 0)
                                                                                        goto label_103fc34
                                                                                    
                                                                                    if ((AppIsKeyDown(0) & 1) == 0)
                                                                                        x8_60 = *(arg1 + 4)
                                                                                    label_103fc34:
                                                                                        
                                                                                        if (x8_60 != 0x43)
                                                                                            goto label_103fc4c
                                                                                        
                                                                                        if ((AppIsKeyDown(0) & 1) == 0)
                                                                                            *(gUI2Editor + 0x7054) = 0
                                                                                            x19_1 = 1
                                                                                            
                                                                                            if (*(gUI2Editor + 0x704c) == 1)
                                                                                                *(gUI2Editor + 0x7056) = 1
                                                                                        else
                                                                                            x8_60 = *(arg1 + 4)
                                                                                        label_103fc4c:
                                                                                            
                                                                                            if (x8_60 != 0x47)
                                                                                                goto label_103fc98
                                                                                            
                                                                                            if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                x8_60 = *(arg1 + 4)
                                                                                            label_103fc98:
                                                                                                
                                                                                                if (x8_60 != 0x52)
                                                                                                    goto label_103fcbc
                                                                                                
                                                                                                if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                    x8_60 = *(arg1 + 4)
                                                                                                label_103fcbc:
                                                                                                    
                                                                                                    if (x8_60 != 0x4a)
                                                                                                        goto label_103fd20
                                                                                                    
                                                                                                    if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                        x8_60 = *(arg1 + 4)
                                                                                                    label_103fd20:
                                                                                                        
                                                                                                        if (x8_60 == 0)
                                                                                                            if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                                x8_60 = *(arg1 + 4)
                                                                                                                
                                                                                                                if (x8_60 != 0)
                                                                                                                    goto label_103fe18
                                                                                                                
                                                                                                                if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                                    x8_60 = *(arg1 + 4)
                                                                                                                label_103fe18:
                                                                                                                    
                                                                                                                    if (x8_60 != 0x5a)
                                                                                                                        goto label_103fe78
                                                                                                                    
                                                                                                                    void* x8_69
                                                                                                                    int64_t x9_29
                                                                                                                    
                                                                                                                    if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                                        x8_60 = *(arg1 + 4)
                                                                                                                    label_103fe78:
                                                                                                                        
                                                                                                                        if (x8_60 != 0x59)
                                                                                                                            goto label_103fefc
                                                                                                                        
                                                                                                                        if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                                            x8_60 = *(arg1 + 4)
                                                                                                                        label_103fefc:
                                                                                                                            
                                                                                                                            if (x8_60 != 0x4c)
                                                                                                                            label_103ff1c:
                                                                                                                                int32_t x8_71 = *(arg1 + 4)
                                                                                                                                
                                                                                                                                if (x8_71 != 0x4c)
                                                                                                                                    goto label_103ff38
                                                                                                                                
                                                                                                                                if ((AppIsKeyDown(0) & 1) != 0)
                                                                                                                                    x19_1 = 1
                                                                                                                                else
                                                                                                                                    x8_71 = *(arg1 + 4)
                                                                                                                                label_103ff38:
                                                                                                                                    
                                                                                                                                    if (x8_71 == 0x41)
                                                                                                                                        if ((AppIsKeyDown(0) & 1) == 0
                                                                                                                                                || zx.d(*(gUI2Editor + 0x7054)) != 0)
                                                                                                                                            x8_71 = *(arg1 + 4)
                                                                                                                                        label_103ffa0:
                                                                                                                                            
                                                                                                                                            if (x8_71 != 0x44)
                                                                                                                                                x19_1 = 1
                                                                                                                                            else
                                                                                                                                                x19_1 = 1
                                                                                                                                                
                                                                                                                                                if ((AppIsKeyDown(0) & 1) != 0
                                                                                                                                                        && zx.d(*(gUI2Editor + 0x7054)) == 0)
                                                                                                                                                    goto label_1040090
                                                                                                                                        else
                                                                                                                                            uint64_t x8_73 =
                                                                                                                                                zx.q(*(gUI2Editor + 0x6000))
                                                                                                                                            int32_t x9_32 = *(gUI2Editor + 0x704c)
                                                                                                                                            
                                                                                                                                            if (x8_73.d s>= 1)
                                                                                                                                                int32_t x11_12
                                                                                                                                                int64_t i_8
                                                                                                                                                
                                                                                                                                                if (x8_73.d u>= 3)
                                                                                                                                                    int64_t (* const x13_4)() = gUI2Editor
                                                                                                                                                    i_8 = x8_73 & 0xfffffffe
                                                                                                                                                    int32_t x11_13 = 0
                                                                                                                                                    int32_t x12_12 = 0
                                                                                                                                                    int64_t i_7 = i_8
                                                                                                                                                    int64_t i_1
                                                                                                                                                    
                                                                                                                                                    do
                                                                                                                                                        void* x15_1 = *x13_4
                                                                                                                                                        void* x16_1 = *(x13_4 + 0x18)
                                                                                                                                                        i_1 = i_7
                                                                                                                                                        i_7 -= 2
                                                                                                                                                        x13_4 += 0x30
                                                                                                                                                        x11_13 += zx.d(*(x15_1 + 0x16)) ^ 1
                                                                                                                                                        x12_12 += zx.d(*(x16_1 + 0x16)) ^ 1
                                                                                                                                                    while (i_1 != 2)
                                                                                                                                                    x11_12 = x12_12 + x11_13
                                                                                                                                                    
                                                                                                                                                    if (i_8 != x8_73)
                                                                                                                                                        goto label_104005c
                                                                                                                                                else
                                                                                                                                                    i_8 = 0
                                                                                                                                                    x11_12 = 0
                                                                                                                                                label_104005c:
                                                                                                                                                    int64_t i_6 = x8_73 - i_8
                                                                                                                                                    int64_t* x10_21 =
                                                                                                                                                        gUI2Editor + i_8 * 0x18
                                                                                                                                                    int64_t i_2
                                                                                                                                                    
                                                                                                                                                    do
                                                                                                                                                        void* x13_5 = *x10_21
                                                                                                                                                        x10_21 = &x10_21[3]
                                                                                                                                                        i_2 = i_6
                                                                                                                                                        i_6 -= 1
                                                                                                                                                        x11_12 += zx.d(*(x13_5 + 0x16)) ^ 1
                                                                                                                                                    while (i_2 != 1)
                                                                                                                                                
                                                                                                                                                if (x9_32 == x11_12)
                                                                                                                                                    goto label_1040090
                                                                                                                                                
                                                                                                                                                int64_t i_3 = 0
                                                                                                                                                int64_t (* const x13_8)() = gUI2Editor
                                                                                                                                                x19_1 = 1
                                                                                                                                                
                                                                                                                                                do
                                                                                                                                                    void* x14_1 = *x13_8
                                                                                                                                                    
                                                                                                                                                    if (zx.d(*(x14_1 + 0x16)) == 0)
                                                                                                                                                        int64_t x8_78 =
                                                                                                                                                            sx.q(*(gUI2Editor + 0x704c))
                                                                                                                                                        int32_t x14_2 = *(x14_1 + 0x1690)
                                                                                                                                                        *(gUI2Editor + 0x704c) = x8_78.d + 1
                                                                                                                                                        *(gUI2Editor + (x8_78 << 2) + 0x604c) =
                                                                                                                                                            x14_2
                                                                                                                                                        x8_73 = zx.q(*(gUI2Editor + 0x6000))
                                                                                                                                                    
                                                                                                                                                    i_3 += 1
                                                                                                                                                    x13_8 += 0x18
                                                                                                                                                while (i_3 s< sx.q(x8_73.d))
                                                                                                                                            else if (x9_32 == 0)
                                                                                                                                            label_1040090:
                                                                                                                                                *(gUI2Editor + 0x704c) = 0
                                                                                                                                                memcpy(
                                                                                                                                                    gUI2Editor
                                                                                                                                                        + sx.q(*(gUI2Editor + 0x88060))
                                                                                                                                                        * 0x1020 + 0x6040, 
                                                                                                                                                    gUI2Editor + 0x6048, 0x1018)
                                                                                                                                                x19_1 = 1
                                                                                                                                            else
                                                                                                                                                x19_1 = 1
                                                                                                                                    else
                                                                                                                                        if (x8_71 != 0xf728)
                                                                                                                                            goto label_103ffa0
                                                                                                                                        
                                                                                                                                        UI2ExecDelete()
                                                                                                                                        x19_1 = 1
                                                                                                                            else
                                                                                                                                if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                                                    goto label_103ff1c
                                                                                                                                
                                                                                                                                if ((AppIsKeyDown(0) & 1) == 0)
                                                                                                                                    goto label_103ff1c
                                                                                                                                
                                                                                                                                x19_1 = 1
                                                                                                                        else
                                                                                                                            int64_t x8_70 =
                                                                                                                                sx.q(*(gUI2Editor + 0x88060))
                                                                                                                            x19_1 = 1
                                                                                                                            
                                                                                                                            if (x8_70.d s< *(gUI2Editor + 0x88064))
                                                                                                                                *(gUI2Editor + 0x8806a) = 1
                                                                                                                                *(gUI2Editor + 0x88060) = x8_70.d + 1
                                                                                                                                x8_69 = gUI2Editor + x8_70 * 0x1020
                                                                                                                                x9_29 = 0x7060
                                                                                                                                goto label_103fee0
                                                                                                                    else
                                                                                                                        int64_t x8_68 =
                                                                                                                            sx.q(*(gUI2Editor + 0x88060))
                                                                                                                        x19_1 = 1
                                                                                                                        
                                                                                                                        if (x8_68.d s>= 2)
                                                                                                                            *(gUI2Editor + 0x8806a) = 1
                                                                                                                            *(gUI2Editor + 0x88060) = x8_68.d - 1
                                                                                                                            x8_69 = gUI2Editor + x8_68 * 0x1020
                                                                                                                            x9_29 = 0x5020
                                                                                                                        label_103fee0:
                                                                                                                            UI2RestoreUndoState(x8_69 + x9_29)
                                                                                                                            UI2Free(gUI2Editor + 0x6010)
                                                                                                                            *(gUI2Editor + 0x8806a) = 0
                                                                                                                else
                                                                                                                    *(gUI2Editor + 0x603c) =
                                                                                                                        *(gUI2Editor + 0x603c)
                                                                                                                        / float.s(0x3fa66666)
                                                                                                                    x19_1 = 1
                                                                                                            else
                                                                                                                *(gUI2Editor + 0x603c) =
                                                                                                                    *(gUI2Editor + 0x603c)
                                                                                                                    * float.s(0x3fa66666)
                                                                                                                x19_1 = 1
                                                                                                        else
                                                                                                            if (x8_60 != 0x42)
                                                                                                                goto label_103fe18
                                                                                                            
                                                                                                            *(gUI2Editor + 0x704c) = 0
                                                                                                            memcpy(
                                                                                                                gUI2Editor
                                                                                                                    + sx.q(*(gUI2Editor + 0x88060))
                                                                                                                    * 0x1020 + 0x6040, 
                                                                                                                gUI2Editor + 0x6048, 0x1018)
                                                                                                            *(gUI2Editor + 0x7056) = 0
                                                                                                            *(gUI2Editor + 0x7054) = 0x100
                                                                                                            x19_1 = 1
                                                                                                    else if (*(gUI2Editor + 0x704c) == 0)
                                                                                                        x19_1 = 1
                                                                                                    else
                                                                                                        *(gUI2 + 0x14)
                                                                                                        XTrace("total uis before after %d")
                                                                                                        UI2CopyCurrentSelection()
                                                                                                        *(gUI2 + 0x14)
                                                                                                        XTrace("total uis between %d")
                                                                                                        *(gUI2 + 0x14)
                                                                                                        XTrace("total uis after %d")
                                                                                                        x19_1 = 1
                                                                                                        UI2CreateUndoCheckpoint(true)
                                                                                                else
                                                                                                    UI2SizeToSource()
                                                                                                    x19_1 = 1
                                                                                            else
                                                                                                UI2MakeGroup()
                                                                                                x19_1 = 1
                                                                                    else
                                                                                        UI2MoveDownOne()
                                                                                        x19_1 = 1
                                                                                else
                                                                                    UI2MoveUpOne()
                                                                                    x19_1 = 1
                                                                            else
                                                                                UI2MoveDownGroup()
                                                                                x19_1 = 1
                                                                        else
                                                                            UI2MoveUpGroup()
                                                                            x19_1 = 1
                                                                    else if (*(gUI2Editor + 0x704c) != 1)
                                                                        x19_1 = 1
                                                                    else
                                                                        UI2GetIndex(zx.q(
                                                                            *(gUI2Editor + 0x604c)))
                                                                        x19_1 = 1
                                                            else
                                                                if ((AppIsKeyDown(0) & 1) == 0)
                                                                    goto label_103fa90
                                                                
                                                                if ((AppIsKeyDown(0) & 1) == 0)
                                                                    goto label_103fa90
                                                                
                                                                x19_1 = 1
                                                    else
                                                        *(gUI2Editor + 0x7055) = 0
                                                        x19_1 = 1
                                                        
                                                        if (*(gUI2Editor + 0x704c) s>= 1)
                                                            *(gUI2Editor + 0x7054) = 1
                                                else
                                                    if (x8_56 != 0x57)
                                                        goto label_103fa58
                                                    
                                                    int32_t x9_20 = *(gUI2Editor + 0x8c3e0)
                                                    x19_1 = 1
                                                    int32_t x9_21
                                                    
                                                    if (x9_20 + 1 s< 0)
                                                        x9_21 = x9_20 + 4
                                                    else
                                                        x9_21 = x9_20 + 1
                                                    
                                                    *(gUI2Editor + 0x8c3e0) =
                                                        x9_20 + 1 - (x9_21 & 0xfffffffc)
                                        else
                                            if ((AppIsKeyDown(0) & 1) == 0)
                                                goto label_103f91c
                                            
                                            if ((AppIsKeyDown(0) & 1) == 0)
                                                goto label_103f91c
                                            
                                            x19_1 = 1
                                    else
                                        x19_1 = 1
                                        *(gUI2Editor + 0x8c3e4) ^= 1
                            else if (x8_40 == 0xf702)
                                uint64_t x8_45 = zx.q(*(gUI2Editor + 0x6000))
                                
                                if (x8_45.d s< 1)
                                    goto label_103f7a8
                                
                                int64_t (* const x10_13)() = gUI2Editor
                                
                                while (*(x10_13 + 0xc) != *(gUI2Editor + 0x7050))
                                    uint64_t temp1_1 = x8_45
                                    x8_45 -= 1
                                    x10_13 += 0x18
                                    
                                    if (temp1_1 == 1)
                                        goto label_103f7a8
                                
                                UI2* x20_3 = *x10_13
                                
                                if (*(x20_3 + 0x167c) == 6)
                                    if (zx.d(*(x20_3 + 0x17)) == 0)
                                        goto label_103f9b0
                                    
                                    goto label_103f7e4
                                
                                if (*(x20_3 + 0x1970) s< 1 || zx.d(*(x20_3 + 0x17)) != 0)
                                label_103f7e4:
                                    void* x8_50 = *(x20_3 + 0x17d0)
                                    
                                    if (x8_50 == 0 || *(x8_50 + 0x17d0) == 0
                                            || (*(x8_50 + 0x167c) != 6 && *(x8_50 + 0x1970) s< 1)
                                            || zx.d(*(x8_50 + 0x17)) != 0)
                                        x19_1 = 1
                                    else
                                        int32_t x0_35 = AppIsKeyDown(0)
                                        int32_t x0_36
                                        
                                        if ((x0_35 & 1) != 0)
                                            x0_36 = AppIsKeyDown(0)
                                        
                                        int64_t x3_1
                                        
                                        if ((x0_35 & 1) == 0 || (x0_36 & 1) == 0)
                                            if ((AppIsKeyDown(0) & 1) == 0)
                                                if ((AppIsKeyDown(0) & 1) != 0)
                                                    x3_1 = 2
                                                else
                                                    x3_1 = 0
                                            else
                                                x3_1 = 1
                                        else
                                            x3_1 = 3
                                        
                                        SetProperty(*(x20_3 + 0x17d0), 0x8b, true, x3_1)
                                        *(gUI2Editor + 0x704c) = 0
                                        int32_t x9_27 = *(*gUI2
                                            + zx.q(*(*(x20_3 + 0x17d0) + 0x19a0)) * 0x19a8
                                            + 0x1690)
                                        *(gUI2Editor + 0x704c) = 1
                                        *(gUI2Editor + 0x604c) = x9_27
                                        uint64_t x8_62 = zx.q(*(gUI2Editor + 0x6000))
                                        
                                        if (x8_62.d s< 1)
                                            goto label_103f7a8
                                        
                                        int64_t (* const x11_11)() = gUI2Editor
                                        
                                        while (*x11_11 != *(x20_3 + 0x17d0))
                                            uint64_t temp4_1 = x8_62
                                            x8_62 -= 1
                                            x11_11 += 0x18
                                            
                                            if (temp4_1 == 1)
                                                goto label_103f7a8
                                        
                                        x19_1 = 1
                                        *(gUI2Editor + 0x7050) = *(x11_11 + 0xc)
                                else
                                label_103f9b0:
                                    int32_t x0_44 = AppIsKeyDown(0)
                                    int32_t x0_45
                                    
                                    if ((x0_44 & 1) != 0)
                                        x0_45 = AppIsKeyDown(0)
                                    
                                    int64_t x3_3
                                    
                                    if ((x0_44 & 1) == 0 || (x0_45 & 1) == 0)
                                        if ((AppIsKeyDown(0) & 1) == 0)
                                            if ((AppIsKeyDown(0) & 1) != 0)
                                                x3_3 = 2
                                            else
                                                x3_3 = 0
                                        else
                                            x3_3 = 1
                                    else
                                        x3_3 = 3
                                    
                                    x19_1 = 1
                                    SetProperty(x20_3, 0x8b, true, x3_3)
                            else if (x8_40 == 0xf703)
                                uint64_t x8_46 = zx.q(*(gUI2Editor + 0x6000))
                                
                                if (x8_46.d s< 1)
                                    goto label_103f7a8
                                
                                int64_t (* const x9_13)() = gUI2Editor
                                
                                while (*(x9_13 + 0xc) != *(gUI2Editor + 0x7050))
                                    uint64_t temp2_1 = x8_46
                                    x8_46 -= 1
                                    x9_13 += 0x18
                                    
                                    if (temp2_1 == 1)
                                        goto label_103f7a8
                                
                                UI2* x19_7 = *x9_13
                                
                                if (*(x19_7 + 0x167c) == 6 || *(x19_7 + 0x1970) s>= 1)
                                    int32_t x0_37 = AppIsKeyDown(0)
                                    int32_t x0_38
                                    
                                    if ((x0_37 & 1) != 0)
                                        x0_38 = AppIsKeyDown(0)
                                    
                                    int64_t x3_2
                                    
                                    if ((x0_37 & 1) == 0 || (x0_38 & 1) == 0)
                                        if ((AppIsKeyDown(0) & 1) == 0)
                                            if ((AppIsKeyDown(0) & 1) != 0)
                                                x3_2 = 2
                                            else
                                                x3_2 = 0
                                        else
                                            x3_2 = 1
                                    else
                                        x3_2 = 3
                                    
                                    SetProperty(x19_7, 0x8b, false, x3_2)
                                    x19_1 = 1
                                else
                                    x19_1 = 1
                            else
                                if (x8_40 != 0xf729)
                                    goto label_103f8fc
                                
                                UI2EditorClearState((*(arg1 + 8)).b & 1)
                                x19_1 = 1
                        else
                            UI2EditorChangeStyleIdx(0xffffffff)
                            UI2CreateUndoCheckpoint(false)
                            x19_1 = 1
                    else
                        x19_1 = 1
                        UI2EditorChangeStyleIdx(1)
                        UI2CreateUndoCheckpoint(false)
                else
                    int64_t (* const x11_5)()
                    
                    if (x8_40 != 0xf700)
                        if (x8_40 != 0xf701)
                            goto label_103f554
                        
                        if (*(gUI2Editor + 0x704c) s< 1)
                            x19_1 = 1
                        else
                            int64_t x9_4 = sx.q(*(gUI2Editor + 0x7050))
                            int64_t x8_15 = sx.q(*(gUI2Editor + 0x6000))
                            
                            if (x9_4.d + 1 s< x8_15.d)
                                int64_t x10_3 = sx.q(x9_4.d + 1)
                                void* x11_4 = gUI2Editor + muls.dp.d(x9_4.d + 1, 0x18) + 0x10
                                
                                do
                                    if (*(x11_4 - 4) s> x9_4.d && *x11_4 != 2)
                                        x9_4 = x10_3
                                        break
                                    
                                    x10_3 += 1
                                    x11_4 += 0x18
                                while (x8_15 != x10_3)
                            
                            void* i_4 = *(gUI2Editor + x9_4 * 0x18)
                            *(gUI2Editor + 0x704c) = 0
                            int32_t x10_6 = *(*gUI2 + zx.q(*(i_4 + 0x19a0)) * 0x19a8 + 0x1690)
                            *(gUI2Editor + 0x704c) = 1
                            *(gUI2Editor + 0x604c) = x10_6
                            
                            if (x8_15.d s< 1)
                            label_103f7a8:
                                pthread_kill(pthread_self(), 6)
                                XNoReturn()
                                x19_1 = 1
                                UI2EditorChangeStateIdx(1)
                            else
                                int64_t x8_16 = x8_15 & 0xffffffff
                                x11_5 = gUI2Editor
                                
                                while (*x11_5 != i_4)
                                    int64_t temp0_1 = x8_16
                                    x8_16 -= 1
                                    x11_5 += 0x18
                                    
                                    if (temp0_1 == 1)
                                        goto label_103f7a8
                                
                                x19_1 = 1
                                *(gUI2Editor + 0x7050) = *(x11_5 + 0xc)
                    else if (*(gUI2Editor + 0x704c) s< 1)
                        x19_1 = 1
                    else
                        uint64_t x8_39 = zx.q(*(gUI2Editor + 0x6000))
                        int64_t x9_8 = sx.q(*(gUI2Editor + 0x7050))
                        uint64_t x10_7
                        
                        if (x8_39.d s< 1)
                            x10_7 = 0
                        label_103f62c:
                            uint64_t x11_7 = zx.q(x10_7.d)
                            void* x10_9 = gUI2Editor + mulu.dp.d(x10_7.d, 0x18) + 0x10
                            bool cond:2_1
                            
                            do
                                if (*(x10_9 - 4) s< x9_8.d && *x10_9 != 2)
                                    x9_8 = x11_7 & 0xffffffff
                                    break
                                
                                cond:2_1 = x11_7 s<= 0
                                x11_7 -= 1
                                x10_9 -= 0x18
                            while (not(cond:2_1))
                        else
                            x10_7 = 0
                            int64_t (* x11_6)() = gUI2Editor + 0xc
                            
                            while (*x11_6 != x9_8.d)
                                x10_7 += 1
                                x11_6 += 0x18
                                
                                if (x8_39 == x10_7)
                                    x10_7 = zx.q(x8_39.d)
                                    break
                            
                            if ((x10_7.d & 0x80000000) == 0)
                                goto label_103f62c
                        void* i_5 = *(gUI2Editor + x9_8 * 0x18)
                        *(gUI2Editor + 0x704c) = 0
                        int32_t x10_12 = *(*gUI2 + zx.q(*(i_5 + 0x19a0)) * 0x19a8 + 0x1690)
                        *(gUI2Editor + 0x704c) = 1
                        *(gUI2Editor + 0x604c) = x10_12
                        
                        if (x8_39.d s< 1)
                            goto label_103f7a8
                        
                        x11_5 = gUI2Editor
                        
                        while (*x11_5 != i_5)
                            uint64_t temp3_1 = x8_39
                            x8_39 -= 1
                            x11_5 += 0x18
                            
                            if (temp3_1 == 1)
                                goto label_103f7a8
                        
                        x19_1 = 1
                        *(gUI2Editor + 0x7050) = *(x11_5 + 0xc)
            else
                *(gUI2Editor + 0x7054) = 0
                *(gUI2Editor + 0x7056) = 0
                x19_1 = 1
else
    x19_1 = zx.d(var_94) != 0 ? 1 : 0

if (*(x21 + 0x28) != x8)
    __stack_chk_fail()
    noreturn

entry_v8.q = var_38
entry_v10.q = var_50
return zx.q(x19_1)
