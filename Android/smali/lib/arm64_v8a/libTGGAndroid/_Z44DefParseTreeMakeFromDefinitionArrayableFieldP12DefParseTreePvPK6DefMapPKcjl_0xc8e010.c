// 函数: _Z44DefParseTreeMakeFromDefinitionArrayableFieldP12DefParseTreePvPK6DefMapPKcjl
// 地址: 0xc8e010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v13
int64_t var_80 = v13
int64_t v12
int64_t var_78 = v12
int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int64_t v9
int64_t var_60 = v9
int128_t entry_v8
int64_t var_58 = entry_v8.q
uint64_t x8_1 = zx.q(*(arg3 + 0x18) - 1)
int64_t result

if (x8_1.d u> 0xf)
label_c8e3c8:
    
    if (*macro_ptr_Vec2 == arg3)
        entry_v8.d = *arg2
        v9.d = *(arg2 + 4)
        char* x0_29 = DefParseItemAlloc()
        XString::operator=(x0_29)
        char** x0_30
        int128_t v0_3
        int128_t v1_1
        x0_30, v0_3, v1_1 = XPooledCalloc(0x18)
        *x0_30 = x0_29
        x0_30[1] = 0
        v0_3.q = fconvert.d(entry_v8.d)
        x0_30[2] = *(arg1 + 0x10)
        void* x8_71 = *(arg1 + 0x10)
        v1_1.q = fconvert.d(v9.d)
        void* __offset(DefParseTree, 0x8) x8_72
        
        if (x8_71 == 0)
            x8_72 = arg1 + 8
        else
            x8_72 = x8_71 + 8
        
        *x8_72 = x0_30
        int32_t x9_14 = *(arg1 + 0x18)
        *(arg1 + 0x10) = x0_30
        *(arg1 + 0x18) = x9_14 + 1
        result = XString::Format(&x0_29[8])
        
        if (*(arg1 + 0x18) s>= 1)
            goto label_c8e968
    else if (*macro_ptr_Vec3 == arg3 || *macro_ptr_ParamRange == arg3 || *macro_ptr_ColorRgb == arg3
            || *macro_ptr_EulerRotation == arg3)
        entry_v8.d = *arg2
        v9.d = *(arg2 + 4)
        v10.d = *(arg2 + 8)
        char* x0_32 = DefParseItemAlloc()
        XString::operator=(x0_32)
        char** x0_33
        int128_t v0_4
        int128_t v1_2
        int128_t v2_1
        x0_33, v0_4, v1_2, v2_1 = XPooledCalloc(0x18)
        *x0_33 = x0_32
        x0_33[1] = 0
        v0_4.q = fconvert.d(entry_v8.d)
        x0_33[2] = *(arg1 + 0x10)
        void* x9_16 = *(arg1 + 0x10)
        v1_2.q = fconvert.d(v9.d)
        v2_1.q = fconvert.d(v10.d)
        void* __offset(DefParseTree, 0x8) x9_17
        
        if (x9_16 == 0)
            x9_17 = arg1 + 8
        else
            x9_17 = x9_16 + 8
        
        *x9_17 = x0_33
        int32_t x9_18 = *(arg1 + 0x18)
        *(arg1 + 0x10) = x0_33
        *(arg1 + 0x18) = x9_18 + 1
        result = XString::Format(&x0_32[8])
        
        if (*(arg1 + 0x18) s>= 1)
            goto label_c8e968
    else if (*macro_ptr_Vec4 == arg3 || *macro_ptr_ColorRgba == arg3 || *macro_ptr_RectF == arg3)
        entry_v8.d = *arg2
        v9.d = *(arg2 + 4)
        v10.d = *(arg2 + 8)
        v11.d = *(arg2 + 0xc)
        char* x0_35 = DefParseItemAlloc()
        XString::operator=(x0_35)
        char** x0_36
        int128_t v0_5
        int128_t v1_3
        int128_t v2_2
        int128_t v3_1
        x0_36, v0_5, v1_3, v2_2, v3_1 = XPooledCalloc(0x18)
        *x0_36 = x0_35
        x0_36[1] = 0
        v0_5.q = fconvert.d(entry_v8.d)
        x0_36[2] = *(arg1 + 0x10)
        void* x9_20 = *(arg1 + 0x10)
        v1_3.q = fconvert.d(v9.d)
        v2_2.q = fconvert.d(v10.d)
        void* __offset(DefParseTree, 0x8) x9_21
        
        if (x9_20 == 0)
            x9_21 = arg1 + 8
        else
            x9_21 = x9_20 + 8
        
        *x9_21 = x0_36
        int32_t x9_22 = *(arg1 + 0x18)
        *(arg1 + 0x10) = x0_36
        v3_1.q = fconvert.d(v11.d)
        *(arg1 + 0x18) = x9_22 + 1
        result = XString::Format(&x0_35[8])
        
        if (*(arg1 + 0x18) s>= 1)
            goto label_c8e968
    else if (*macro_ptr_Vec6 == arg3)
        entry_v8.d = *arg2
        v9.d = *(arg2 + 4)
        v10.d = *(arg2 + 8)
        v11.d = *(arg2 + 0xc)
        v12.d = *(arg2 + 0x10)
        v13.d = *(arg2 + 0x14)
        char* x0_38 = DefParseItemAlloc()
        XString::operator=(x0_38)
        char** x0_39
        int128_t v0_6
        int128_t v1_4
        int128_t v2_3
        int128_t v3_2
        int128_t v4_1
        int128_t v5_1
        x0_39, v0_6, v1_4, v2_3, v3_2, v4_1, v5_1 = XPooledCalloc(0x18)
        *x0_39 = x0_38
        x0_39[1] = 0
        x0_39[2] = *(arg1 + 0x10)
        void* x9_25 = *(arg1 + 0x10)
        v0_6.q = fconvert.d(entry_v8.d)
        v1_4.q = fconvert.d(v9.d)
        v2_3.q = fconvert.d(v10.d)
        void* __offset(DefParseTree, 0x8) x9_26
        
        if (x9_25 == 0)
            x9_26 = arg1 + 8
        else
            x9_26 = x9_25 + 8
        
        *x9_26 = x0_39
        int32_t x9_27 = *(arg1 + 0x18)
        v3_2.q = fconvert.d(v11.d)
        v4_1.q = fconvert.d(v12.d)
        *(arg1 + 0x10) = x0_39
        v5_1.q = fconvert.d(v13.d)
        *(arg1 + 0x18) = x9_27 + 1
        result = XString::Format(&x0_38[8])
        
        if (*(arg1 + 0x18) s>= 1)
            goto label_c8e968
    else if (*macro_ptr_Vec8 == arg3)
        entry_v8.d = *arg2
        v9.d = *(arg2 + 4)
        v10.d = *(arg2 + 8)
        v11.d = *(arg2 + 0xc)
        v12.d = *(arg2 + 0x10)
        v13.d = *(arg2 + 0x14)
        v14.d = *(arg2 + 0x18)
        v15.d = *(arg2 + 0x1c)
        char* x0_41 = DefParseItemAlloc()
        XString::operator=(x0_41)
        char** x0_42
        int128_t v0_7
        int128_t v1_5
        int128_t v2_4
        int128_t v3_3
        int128_t v4_2
        int128_t v5_2
        int128_t v6_1
        int128_t v7_1
        x0_42, v0_7, v1_5, v2_4, v3_3, v4_2, v5_2, v6_1, v7_1 = XPooledCalloc(0x18)
        *x0_42 = x0_41
        x0_42[1] = 0
        x0_42[2] = *(arg1 + 0x10)
        void* x10_17 = *(arg1 + 0x10)
        v0_7.q = fconvert.d(entry_v8.d)
        v1_5.q = fconvert.d(v9.d)
        v2_4.q = fconvert.d(v10.d)
        void* __offset(DefParseTree, 0x8) x9_30
        
        if (x10_17 == 0)
            x9_30 = arg1 + 8
        else
            x9_30 = x10_17 + 8
        
        *x9_30 = x0_42
        int32_t x9_31 = *(arg1 + 0x18)
        v3_3.q = fconvert.d(v11.d)
        v4_2.q = fconvert.d(v12.d)
        v5_2.q = fconvert.d(v13.d)
        v6_1.q = fconvert.d(v14.d)
        *(arg1 + 0x10) = x0_42
        v7_1.q = fconvert.d(v15.d)
        *(arg1 + 0x18) = x9_31 + 1
        result = XString::Format(&x0_41[8])
        
        if (*(arg1 + 0x18) s>= 1)
            goto label_c8e968
    else if (*macro_ptr_ColorRgbaI == arg3)
        *arg2
        *(arg2 + 1)
        *(arg2 + 2)
        *(arg2 + 3)
    label_c8e8e4:
        char* x0_44 = DefParseItemAlloc()
        XString::operator=(x0_44)
        char** x0_45 = XPooledCalloc(0x18)
        *x0_45 = x0_44
        x0_45[1] = 0
        x0_45[2] = *(arg1 + 0x10)
        void* x8_86 = *(arg1 + 0x10)
        void* __offset(DefParseTree, 0x8) x8_87
        
        if (x8_86 == 0)
            x8_87 = arg1 + 8
        else
            x8_87 = x8_86 + 8
        
        *x8_87 = x0_45
        int32_t x8_88 = *(arg1 + 0x18)
        *(arg1 + 0x10) = x0_45
        *(arg1 + 0x18) = x8_88 + 1
        result = XString::Format(&x0_44[8])
        
        if (*(arg1 + 0x18) s>= 1)
            goto label_c8e968
    else
        if (*macro_ptr_Vec4I == arg3 || *macro_ptr_RectI == arg3)
            *arg2
            *(arg2 + 4)
            *(arg2 + 8)
            *(arg2 + 0xc)
            goto label_c8e8e4
        
        if (*macro_ptr_ColorRgbI == arg3)
            *arg2
            *(arg2 + 1)
            *(arg2 + 2)
            char* x0_23 = DefParseItemAlloc()
            XString::operator=(x0_23)
            char** x0_24 = XPooledCalloc(0x18)
            *x0_24 = x0_23
            x0_24[1] = 0
            x0_24[2] = *(arg1 + 0x10)
            void* x8_55 = *(arg1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_56
            
            if (x8_55 == 0)
                x8_56 = arg1 + 8
            else
                x8_56 = x8_55 + 8
            
            *x8_56 = x0_24
            int32_t x8_57 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_24
            *(arg1 + 0x18) = x8_57 + 1
            XString::Format(&x0_23[8])
            
            if (*(arg1 + 0x18) s>= 1)
                void* x8_61 = **(arg1 + 0x10)
                *(x8_61 + 0x28) = (arg5 u>> 9).b & 1
                *(x8_61 + 0x29) = (arg5 u>> 0xa).b & 1
        
        if (*macro_ptr_Vec3I == arg3)
            *arg2
            *(arg2 + 4)
            *(arg2 + 8)
            char* x0_47 = DefParseItemAlloc()
            XString::operator=(x0_47)
            char** x0_48 = XPooledCalloc(0x18)
            *x0_48 = x0_47
            x0_48[1] = 0
            x0_48[2] = *(arg1 + 0x10)
            void* x8_94 = *(arg1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_95
            
            if (x8_94 == 0)
                x8_95 = arg1 + 8
            else
                x8_95 = x8_94 + 8
            
            *x8_95 = x0_48
            int32_t x8_96 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_48
            *(arg1 + 0x18) = x8_96 + 1
            result = XString::Format(&x0_47[8])
            
            if (*(arg1 + 0x18) s>= 1)
                goto label_c8e968
        else
            if (*macro_ptr_Vec2I != arg3)
                pthread_kill(pthread_self(), 6)
                int64_t* x0_51 = XNoReturn()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                sub_1101e04(x0_51)
                noreturn
            
            *(zx.q(*arg2) + 4)
            char* x0_26 = DefParseItemAlloc()
            XString::operator=(x0_26)
            char** x0_27 = XPooledCalloc(0x18)
            *x0_27 = x0_26
            x0_27[1] = 0
            x0_27[2] = *(arg1 + 0x10)
            void* x8_65 = *(arg1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_66
            
            if (x8_65 == 0)
                x8_66 = arg1 + 8
            else
                x8_66 = x8_65 + 8
            
            *x8_66 = x0_27
            int32_t x8_67 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_27
            *(arg1 + 0x18) = x8_67 + 1
            result = XString::Format(&x0_26[8])
            
            if (*(arg1 + 0x18) s>= 1)
                goto label_c8e968
else
    switch (x8_1)
        case 0
            result = DefParseTreeMakeFromDefinitionInt(arg1, arg2, arg4, arg5, arg6)
            
            if (*(arg1 + 0x18) s>= 1)
            label_c8e968:
                void* x8_92 = **(arg1 + 0x10)
                *(x8_92 + 0x28) = (arg5 u>> 9).b & 1
                *(x8_92 + 0x29) = (arg5 u>> 0xa).b & 1
        case 1
            *arg2
            goto label_c8e120
        case 2, 9
            *arg2
        label_c8e120:
            char* x0_4 = DefParseItemAlloc()
            XString::operator=(x0_4)
            char** x0_5 = XPooledCalloc(0x18)
            *x0_5 = x0_4
            x0_5[1] = 0
            x0_5[2] = *(arg1 + 0x10)
            void* x8_9 = *(arg1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_10
            
            if (x8_9 == 0)
                x8_10 = arg1 + 8
            else
                x8_10 = x8_9 + 8
            
            *x8_10 = x0_5
            int32_t x8_11 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_5
            *(arg1 + 0x18) = x8_11 + 1
            result = XString::Format(&x0_4[8])
            
            if (*(arg1 + 0x18) s>= 1)
                goto label_c8e968
        case 3
            entry_v8.d = *arg2
            char* x0 = DefParseItemAlloc()
            XString::operator=(x0)
            char** x0_1
            int128_t v0_1
            x0_1, v0_1 = XPooledCalloc(0x18)
            *x0_1 = x0
            x0_1[1] = 0
            v0_1.q = fconvert.d(entry_v8.d)
            x0_1[2] = *(arg1 + 0x10)
            void* x8_3 = *(arg1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_4
            
            if (x8_3 == 0)
                x8_4 = arg1 + 8
            else
                x8_4 = x8_3 + 8
            
            *x8_4 = x0_1
            int32_t x9_2 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_1
            *(arg1 + 0x18) = x9_2 + 1
            result = XString::Format(&x0[8])
            
            if (*(arg1 + 0x18) s>= 1)
                goto label_c8e968
        case 4, 5, 6, 8, 0xa, 0xb, 0xc
            goto label_c8e3c8
        case 7
            *arg2
            char* x0_7 = DefParseItemAlloc()
            XString::operator=(x0_7)
            char** x0_8 = XPooledCalloc(0x18)
            *x0_8 = x0_7
            x0_8[1] = 0
            x0_8[2] = *(arg1 + 0x10)
            void* x8_15 = *(arg1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_16
            
            if (x8_15 == 0)
                x8_16 = arg1 + 8
            else
                x8_16 = x8_15 + 8
            
            *x8_16 = x0_8
            int32_t x8_17 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_8
            *(arg1 + 0x18) = x8_17 + 1
            result = XString::operator=(&x0_7[8])
            
            if (*(arg1 + 0x18) s>= 1)
                goto label_c8e968
        case 0xd
            *arg2
            char* x0_10 = DefParseItemAlloc()
            XString::operator=(x0_10)
            char** x0_11 = XPooledCalloc(0x18)
            *x0_11 = x0_10
            x0_11[1] = 0
            x0_11[2] = *(arg1 + 0x10)
            void* x8_21 = *(arg1 + 0x10)
            char*** x8_22
            
            if (x8_21 == 0)
                x8_22 = arg1 + 8
            else
                x8_22 = x8_21 + 8
            
            *x8_22 = x0_11
            int32_t x8_23 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_11
            *(arg1 + 0x18) = x8_23 + 1
            result = XString::Format(&x0_10[8])
            
            if (*(arg1 + 0x18) s>= 1)
                goto label_c8e968
        case 0xe
            int64_t x22_5 = *arg2
            XString::XString()
            
            if (x22_5 != 0)
                void var_a8
                XString::XString(&var_a8)
                AssetSourceFullPathToLocalPath(&var_a8)
                void var_98
                XString::operator=(&var_98)
                XString::~XString()
                XString::~XString()
            
            XString::operator char const*()
            char* x0_17 = DefParseItemAlloc()
            XString::operator=(x0_17)
            char** x0_18 = XPooledCalloc(0x18)
            *x0_18 = x0_17
            x0_18[1] = 0
            x0_18[2] = *(arg1 + 0x10)
            void* x8_27 = *(arg1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_28
            
            if (x8_27 == 0)
                x8_28 = arg1 + 8
            else
                x8_28 = x8_27 + 8
            
            *x8_28 = x0_18
            int32_t x8_29 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_18
            *(arg1 + 0x18) = x8_29 + 1
            XString::operator=(&x0_17[8])
            
            if (*(arg1 + 0x18) s>= 1)
                void* x8_33 = **(arg1 + 0x10)
                *(x8_33 + 0x28) = (arg5 u>> 9).b & 1
                *(x8_33 + 0x29) = (arg5 u>> 0xa).b & 1
            
            result = XString::~XString()
        case 0xf
            entry_v8.q = *arg2
            char* x0_20 = DefParseItemAlloc()
            XString::operator=(x0_20)
            char** x0_21 = XPooledCalloc(0x18)
            *x0_21 = x0_20
            x0_21[1] = 0
            x0_21[2] = *(arg1 + 0x10)
            void* x8_35 = *(arg1 + 0x10)
            char*** x8_36
            
            if (x8_35 == 0)
                x8_36 = arg1 + 8
            else
                x8_36 = x8_35 + 8
            
            *x8_36 = x0_21
            int32_t x8_37 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x0_21
            *(arg1 + 0x18) = x8_37 + 1
            result = XString::Format(&x0_20[8])
            
            if (*(arg1 + 0x18) s>= 1)
                goto label_c8e968

entry_v8.q = var_58
return result
