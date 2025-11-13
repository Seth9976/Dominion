// 函数: _Z20ProcessJoystickEventP11AInputEvent
// 地址: 0x1067834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = AMotionEvent_getAxisValue(arg1, 0, 0)
float v1

if (v0 > float.s(0x3e87c400))
    v1 = (v0 + float.s(-0x41783c00)) / float.s(0x3f3c1e00)
else
    v1 = 0f
    
    if (not(v0 >= float.s(0xbe87c400)))
        v1 = (v0 + float.s(0x3e87c400)) / float.s(0x3f3c1e00)

*(gAndroidGlobals + 0x44) = v1
float v0_1 = AMotionEvent_getAxisValue(arg1, 1, 0)
float v1_1

if (v0_1 > float.s(0x3e87c400))
    v1_1 = (v0_1 + float.s(-0x41783c00)) / float.s(0x3f3c1e00)
else
    v1_1 = 0f
    
    if (not(v0_1 >= float.s(0xbe87c400)))
        v1_1 = (v0_1 + float.s(0x3e87c400)) / float.s(0x3f3c1e00)

v0_1 = fneg(v1_1)
*(gAndroidGlobals + 0x48) = v0_1
float v0_2 = AMotionEvent_getAxisValue(arg1, 0xb, 0, v0_1)
float v1_2

if (v0_2 > float.s(0x3e87c400))
    v1_2 = (v0_2 + float.s(-0x41783c00)) / float.s(0x3f3c1e00)
else
    v1_2 = 0f
    
    if (not(v0_2 >= float.s(0xbe87c400)))
        v1_2 = (v0_2 + float.s(0x3e87c400)) / float.s(0x3f3c1e00)

*(gAndroidGlobals + 0x4c) = v1_2
float v0_3 = AMotionEvent_getAxisValue(arg1, 0xe, 0)
float v1_3

if (v0_3 > float.s(0x3e87c400))
    v1_3 = (v0_3 + float.s(-0x41783c00)) / float.s(0x3f3c1e00)
else
    v1_3 = 0f
    
    if (not(v0_3 >= float.s(0xbe87c400)))
        v1_3 = (v0_3 + float.s(0x3e87c400)) / float.s(0x3f3c1e00)

v0_3 = fneg(v1_3)
*(gAndroidGlobals + 0x50) = v0_3
float v0_4 = AMotionEvent_getAxisValue(arg1, 0xf, 0, v0_3)
int64_t result
int32_t v0_5
result, v0_5 = AMotionEvent_getAxisValue(arg1, 0x10, 0)
int32_t var_68
int32_t x21
int32_t x22
int32_t x23

if (not(v0_4 != fconvert.s(1f)))
    x22 = 0
    x21 = 8
    x23 = *(gAndroidGlobals + 0x3c)
    
    if (x23 != 8)
    label_1067a74:
        
        if (x23 != 0)
            *(gAndroidGlobals + 0x58) &= not.d(x23)
            XString::XString()
            InputDataClear(&var_68)
            var_68 = 0xc
            int32_t var_64_1 = x23
            AppInput(&var_68)
            result = XString::~XString()
        
        if ((x22 & 1) == 0)
            *(gAndroidGlobals + 0x58) |= x21
            XString::XString()
            InputDataClear(&var_68)
            var_68 = 0xd
            int32_t var_64_2 = x21
            AppInput(&var_68)
            result = XString::~XString()
        
        *(gAndroidGlobals + 0x3c) = x21
else if (v0_4 f!= fconvert.s(-1f))
    if (not(v0_4 == 0f))
        result = XTrace("unknown dpad axis x value %f")
    
    x21 = 0
    x22 = 1
    x23 = *(gAndroidGlobals + 0x3c)
    
    if (x23 != 0)
        goto label_1067a74
else
    x22 = 0
    x21 = 4
    x23 = *(gAndroidGlobals + 0x3c)
    
    if (x23 != 4)
        goto label_1067a74
int32_t x21_1
int32_t x22_1
int32_t x23_1

if (not(v0_5 f!= fconvert.s(1f)))
    x22_1 = 0
    x21_1 = 2
    x23_1 = *(gAndroidGlobals + 0x40)
    
    if (x23_1 != 2)
    label_1067b6c:
        
        if (x23_1 != 0)
            *(gAndroidGlobals + 0x58) &= not.d(x23_1)
            XString::XString()
            InputDataClear(&var_68)
            var_68 = 0xc
            int32_t var_64_3 = x23_1
            AppInput(&var_68)
            result = XString::~XString()
        
        if ((x22_1 & 1) == 0)
            *(gAndroidGlobals + 0x58) |= x21_1
            XString::XString()
            InputDataClear(&var_68)
            var_68 = 0xd
            int32_t var_64_4 = x21_1
            AppInput(&var_68)
            result = XString::~XString()
        
        *(gAndroidGlobals + 0x40) = x21_1
else if (v0_5 f!= fconvert.s(-1f))
    if (not(v0_5 f== 0f))
        result = XTrace("unknown dpad axis y value %f")
    
    x21_1 = 0
    x22_1 = 1
    x23_1 = *(gAndroidGlobals + 0x40)
    
    if (x23_1 != 0)
        goto label_1067b6c
else
    x22_1 = 0
    x21_1 = 1
    x23_1 = *(gAndroidGlobals + 0x40)
    
    if (x23_1 != 1)
        goto label_1067b6c
return result
