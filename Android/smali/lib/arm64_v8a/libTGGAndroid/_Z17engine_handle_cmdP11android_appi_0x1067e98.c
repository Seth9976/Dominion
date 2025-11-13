// 函数: _Z17engine_handle_cmdP11android_appi
// 地址: 0x1067e98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u> 0xf)
    pthread_kill(pthread_self(), 6)
    return AndroidDisplayKeyboard(XNoReturn()) __tailcall

int64_t* x19 = *arg1
char* x0_13
int64_t* result

switch (arg2)
    case 0
        return XTrace("android cmd input changed") __tailcall
    case 1
        XTrace("andriod cmd init")
        
        if (*(*x19 + 0x48) != 0)
            int64_t x0_1 = eglGetDisplay(0)
            int32_t var_58
            int32_t var_54
            eglInitialize(x0_1, &var_54, &var_58)
            XTrace("EGL version %d.%d")
            int64_t var_60 = 0
            uint64_t x8_3 = *gAppInterface
            int128_t var_20a0
            int32_t var_94
            int128_t var_90
            int32_t x0_3
            
            if (zx.d(*(x8_3 + 0x3c)) == 0)
                __builtin_memcpy(&var_20a0, 
                    "\x40\x30\x00\x00\x04\x00\x00\x00\x22\x30\x00\x00\x08\x00\x00\x00\x23\x30\x00\x00\x"
                "08\x00\x00\x00\x24\x30\x00\x00\x08\x00\x00\x00\x25\x30\x00\x00\x10\x00\x00\x00\x38"
                "30\x00\x00", 
                    0x2c)
                __builtin_memcpy(&var_90, 
                    "\x40\x30\x00\x00\x04\x00\x00\x00\x22\x30\x00\x00\x08\x00\x00\x00\x23\x30\x00\x00\x"
                "08\x00\x00\x00\x24\x30\x00\x00\x08\x00\x00\x00\x38\x30\x00\x00", 
                    0x24)
                int128_t* x1_23
                
                if (zx.d(*(x8_3 + 0x34)) == 0)
                    x1_23 = &var_90
                else
                    x1_23 = &var_20a0
                
                x0_3 = eglChooseConfig(x0_1, x1_23, &var_60, 1, &var_94)
            label_10683dc:
                int64_t x1_24 = var_60
                
                if (x1_24 == 0)
                    int32_t x8_50 = eglGetError(x0_3, x1_24) - 0x3000
                    
                    if (x8_50 u<= 0xe)
                        (&data_1181348)[sx.q(x8_50)]
                    
                    XLog("        eglChooseConfig() failed couldn't find config: %s")
                else
                    eglGetConfigAttrib(x0_1, x1_24, 0x302e, &var_90)
                    ANativeWindow_setBuffersGeometry(*(*x19 + 0x48), 0, 0, zx.q(var_90.d))
                    var_20a0.q = 0x200003098
                    var_20a0:8.d = 0x3038
                    int64_t x0_36 = eglCreateContext(x0_1, var_60, 0, &var_20a0)
                    int64_t x0_38 = eglCreateWindowSurface(x0_1, var_60, *(*x19 + 0x48), 0)
                    
                    if (eglMakeCurrent(x0_1, x0_38, x0_38, x0_36) == 0)
                        XTrace("Unable to eglMakeCurrent")
                    else
                        eglQuerySurface(x0_1, x0_38, 0x3057, &var_94)
                        int32_t var_20a4
                        eglQuerySurface(x0_1, x0_38, 0x3056, &var_20a4)
                        XTrace("display size %dx%d")
                        int32_t x8_43 = var_94
                        int32_t x9_8 = var_20a4
                        int32_t x10_5
                        
                        x10_5 = x8_43 s< x9_8 ? x9_8 : x8_43
                        
                        int32_t x8_44
                        
                        x8_44 = x8_43 s< x9_8 ? x8_43 : x9_8
                        
                        *(gAndroidGlobals + 0x10) = x10_5
                        *(gAndroidGlobals + 0x14) = x8_44
                        x19[1] = x0_1
                        x19[2] = x0_38
                        x19[3] = x0_36
                        int64_t* x0_43 = *gGraphicsInterface
                        (*(*x0_43 + 0x10))(x0_43, 0)
                        
                        if (zx.d(*(gAndroidGlobals + 0x54)) == 0)
                            int64_t* x0_44 = *gAppInterface
                            *(gAndroidGlobals + 0x54) = 1
                            (*(*x0_44 + 0x18))()
            else
                var_90.d = 0
                x0_3 = eglGetConfigs(x0_1, &var_20a0, 0x400, &var_90)
                
                if (x0_3 != 0)
                    if (var_90.d s>= 1)
                        int64_t i = 0
                        
                        do
                            int64_t x1_3 = *(&var_20a0 + (i << 3))
                            var_94 = 0
                            x0_3 = eglGetConfigAttrib(x0_1, x1_3, 0x3040, &var_94)
                            
                            if ((zx.d(var_94.b) & 0x40) != 0)
                                x0_3 = eglGetConfigAttrib(x0_1, *(&var_20a0 + (i << 3)), 0x3033, 
                                    &var_94)
                                
                                if ((5 & not.d(var_94)) == 0)
                                    x0_3 = eglGetConfigAttrib(x0_1, *(&var_20a0 + (i << 3)), 
                                        0x3022, &var_94)
                                    
                                    if (var_94 == 8)
                                        x0_3 = eglGetConfigAttrib(x0_1, *(&var_20a0 + (i << 3)), 
                                            0x3023, &var_94)
                                        
                                        if (var_94 == 8)
                                            x0_3 = eglGetConfigAttrib(x0_1, 
                                                *(&var_20a0 + (i << 3)), 0x3024, &var_94)
                                            
                                            if (var_94 == 8)
                                                x0_3 = eglGetConfigAttrib(x0_1, 
                                                    *(&var_20a0 + (i << 3)), 0x3025, &var_94)
                                                
                                                if (var_94 == 0)
                                                    x0_3 = eglGetConfigAttrib(x0_1, 
                                                        *(&var_20a0 + (i << 3)), 0x3031, &var_94)
                                                    
                                                    if (var_94 == 0)
                                                        var_60 = *(&var_20a0 + (i << 3))
                                                        break
                            
                            i += 1
                        while (i s< sx.q(var_90.d))
                    
                    goto label_10683dc
                
                int32_t x8_51 = eglGetError() - 0x3000
                
                if (x8_51 u<= 0xe)
                    (&data_1181348)[sx.q(x8_51)]
                
                XLog("        eglGetConfigs() failed, no configs: %s")
        
        return AppSetWindow(true)
    case 2
        XTrace("andriod cmd term")
        AppSetWindow(false)
        return sub_1068710(x19) __tailcall
    case 3
        x0_13 = "andriod cmd resized"
    label_1068150:
        result = XTrace(x0_13)
        
        if (*gAppInterface != 0)
            result = AConfiguration_getOrientation(*(arg1 + 0x20))
            *(*gAppInterface + 0x48) = result.d
        
        return result
    case 4
        return XTrace("APP_CMD_WINDOW_REDRAW_NEEDED") __tailcall
    case 5
        return XTrace("APP_CMD_CONTENT_RECT_CHANGED") __tailcall
    case 6
        XTrace("android cmd gained focus")
        return AppSetFocus(true) __tailcall
    case 7
        XTrace("android cmd lost focus")
        return AppSetFocus(false) __tailcall
    case 8
        x0_13 = "android cmd config changed"
        goto label_1068150
    case 9
        return XTrace("APP_CMD_LOW_MEMORY") __tailcall
    case 0xa
        return XTrace("andriod cmd start") __tailcall
    case 0xb
        XTrace("andriod cmd resume")
        SoundInterfaceResume()
        int64_t* x19_1 = *(gAndroidGlobals + 8)
        _jmethodID* x20_2 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
        int64_t x0_18 = (*(*x19_1 + 0xf8))(x19_1, x20_2)
        (*(*x19_1 + 0x108))(x19_1, x0_18, "hideKeyboard", &data_75d47f)
        _JNIEnv::CallVoidMethod(x19_1, x20_2)
        (*(*x19_1 + 0xb8))(x19_1, x0_18)
        result = AppSetResume(true)
        
        if (*gAppInterface != 0)
            int64_t* x19_2 = *(gAndroidGlobals + 8)
            _jmethodID* x20_3 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
            int64_t x0_24 = (*(*x19_2 + 0xf8))(x19_2, x20_3)
            (*(*x19_2 + 0x108))(x19_2, x0_24, "XClearNotifications", &data_75d47f)
            _JNIEnv::CallVoidMethod(x19_2, x20_3)
            (*(*x19_2 + 0xb8))(x19_2, x0_24)
            result = *gAppInterface
            
            if (result != 0)
                jump(*(*result + 0x30))
        
        return result
    case 0xc
        return XTrace("andriod cmd save") __tailcall
    case 0xd
        XTrace("andriod cmd pause")
        AppSetResume(false)
        int64_t* x0_29 = *gAppInterface
        
        if (x0_29 != 0)
            (*(*x0_29 + 0x28))()
        
        SoundCutAllForFocusLoss()
        return SoundInterfaceSuspend() __tailcall
    case 0xe
        return XTrace("andriod cmd stop") __tailcall
    case 0xf
        return XTrace("andriod cmd destroy") __tailcall
