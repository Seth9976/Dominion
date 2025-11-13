// 函数: sub_1068a30
// 地址: 0x1068a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
int32_t x0_1 = AInputEvent_getType(arg2)
int32_t x19_3

if (x0_1 == 1)
    int32_t x0_5 = AKeyEvent_getAction(arg2)
    int32_t x19_2 = AKeyEvent_getKeyCode(arg2)
    int32_t x0_9 = AKeyEvent_getRepeatCount(arg2)
    int32_t x0_11 = AKeyEvent_getMetaState(arg2)
    
    if (x0_5 != 0 || x19_2 != 0x18)
        if (x0_5 != 0 || x19_2 != 0x19)
            int32_t var_78
            int32_t x23_1
            int32_t x24_1
            
            if (x19_2 - 0x13 u>= 4)
                if (x19_2 - 0x60 u< 0xf)
                    x24_1 = *(&data_8698cc + (zx.q(x19_2 - 0x60) << 2))
                    
                    if (x0_5 != 0 || x24_1 == 0)
                        goto label_1068dc4
                    
                    goto label_1068d7c
                
                x23_1 = x0_5 == 1 ? 1 : 0
            label_1068e14:
                
                if (x19_2 == 0x7d)
                    x19_3 = 0
                else
                    if (x19_2 == 4)
                        x19_2 = 0x6f
                    
                    if (x0_9 != 0)
                        x19_3 = 1
                    else
                        if (x0_5 == 0)
                            XString::XString()
                            InputDataClear(&var_78)
                            var_78 = 1
                            int32_t var_74_3 = x19_2
                            AppInput(&var_78)
                            XString::~XString()
                        
                        if (x23_1 == 0)
                            x19_3 = 1
                        else
                            XString::XString()
                            InputDataClear(&var_78)
                            var_78 = 2
                            int32_t var_74_4 = x19_2
                            AppInput(&var_78)
                            int32_t x0_39 = GetUnicodeChar(XString::~XString(), 1, x19_2, x0_11)
                            XString::XString()
                            InputDataClear(&var_78)
                            var_78 = 0
                            int32_t var_74_5 = x0_39
                            AppInput(&var_78)
                            XString::~XString()
                            x19_3 = 1
            else
                x24_1 = *(&data_71bbf0 + (sx.q(x19_2 - 0x13) << 2))
                
                if (x0_5 == 0 && x24_1 != 0)
                label_1068d7c:
                    
                    if (x0_9 != 0)
                        x19_3 = 1
                    else
                        *(gAndroidGlobals + 0x58) |= x24_1
                        XString::XString()
                        InputDataClear(&var_78)
                        var_78 = 0xd
                        int32_t var_74_1 = x24_1
                        AppInput(&var_78)
                        XString::~XString()
                        x19_3 = 1
                else
                label_1068dc4:
                    x23_1 = x0_5 == 1 ? 1 : 0
                    
                    if (x0_5 != 1 || x24_1 == 0)
                        goto label_1068e14
                    
                    if (x0_9 != 0)
                        x19_3 = 1
                    else
                        *(gAndroidGlobals + 0x58) &= not.d(x24_1)
                        XString::XString()
                        InputDataClear(&var_78)
                        var_78 = 0xc
                        int32_t var_74_2 = x24_1
                        AppInput(&var_78)
                        XString::~XString()
                        x19_3 = 1
        else if (zx.d(*(*gAppInterface + 0x3c)) == 0)
            x19_3 = 0
        else
            int64_t* x19_4 = *(gAndroidGlobals + 8)
            _jmethodID* x20_3 = *(*(arg1 + 0x18) + 0x18)
            int64_t x0_19 = (*(*x19_4 + 0xf8))(x19_4, x20_3)
            (*(*x19_4 + 0x108))(x19_4, x0_19, "adjustVolume", "(I)F")
            *(gAndroidGlobals + 0x34) = _JNIEnv::CallFloatMethod(x19_4, x20_3)
            *(gAndroidGlobals + 0x38) = 0x40000000
            (*(*x19_4 + 0xb8))(x19_4, x0_19)
            x19_3 = 1
    else if (zx.d(*(*gAppInterface + 0x3c)) == 0)
        x19_3 = 0
    else
        int64_t* x20_2 = *(gAndroidGlobals + 8)
        _jmethodID* x21_2 = *(*(arg1 + 0x18) + 0x18)
        int64_t x0_13 = (*(*x20_2 + 0xf8))(x20_2, x21_2)
        (*(*x20_2 + 0x108))(x20_2, x0_13, "adjustVolume", "(I)F")
        x19_3 = 1
        *(gAndroidGlobals + 0x34) = _JNIEnv::CallFloatMethod(x20_2, x21_2)
        *(gAndroidGlobals + 0x38) = 0x40000000
        (*(*x20_2 + 0xb8))(x20_2, x0_13)
else if (x0_1 != 2)
    x19_3 = 0
else
    int32_t x0_3
    int32_t x1
    x0_3, x1 = AMotionEvent_getAction(arg2)
    
    if ((x0_3 & 0xff) u<= 6)
        switch (x0_3.b)
            case 0, 7, 8, 9
                AndroidActionInput(3, x1, arg2)
                *(gAndroidGlobals + 0x30) = 1
                InputSetMouseButtons(1)
            case 1
                AndroidActionInput(4, x1, arg2)
                *(gAndroidGlobals + 0x30) = 0
                InputSetMouseButtons(0)
            case 2
                if (AInputEvent_getSource(arg2) == 0x1000010)
                    ProcessJoystickEvent(arg2)
            case 3
                *(gAndroidGlobals + 0x30) = 0
                InputSetMouseButtons(0)
                XTrace("android action cancel")
            case 5
                AndroidActionInput(3, x1, arg2)
                XTrace("android action pointer down %d")
            case 6
                AndroidActionInput(4, x1, arg2)
                XTrace("android action pointer up %d")
    
    float v0_3 = AMotionEvent_getX(arg2, 0)
    v8.d = fconvert.s(0.5f)
    v9.d = fconvert.s(-0.5f)
    float v1_1
    
    if (v0_3 < 0f)
        v1_1 = v9.d
    else
        v1_1 = v8.d
    
    *(gAndroidGlobals + 0x28) = vcvts_s32_f32(v0_3 + v1_1)
    float v0_4 = AMotionEvent_getY(arg2, 0)
    float v1_2
    
    if (v0_4 < 0f)
        v1_2 = v9.d
    else
        v1_2 = v8.d
    
    *(gAndroidGlobals + 0x2c) = vcvts_s32_f32(v0_4 + v1_2)
    x19_3 = 1

return zx.q(x19_3)
