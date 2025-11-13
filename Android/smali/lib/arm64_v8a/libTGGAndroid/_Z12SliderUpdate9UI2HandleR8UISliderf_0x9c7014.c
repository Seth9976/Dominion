// 函数: _Z12SliderUpdate9UI2HandleR8UISliderf
// 地址: 0x9c7014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t x0 = InputIsButtonDown(0)
int32_t var_78
GetCursorPosition(&var_78)
float temp0 = vrndp_f32(arg3 * fconvert.s(8f))
float v1

if (temp0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

int32_t i = 0
int64_t v9
v9.d = 0f
uint32_t temp0_1 = vcvts_s32_f32(temp0 + v1)
int64_t v10
v10.d = fconvert.s(0.125f)
int64_t result

do
    int64_t* x1
    
    if (i s< temp0_1)
        x1 = &data_11cfdd0
    else
        x1 = &data_11cfde8
    
    result = UI2SetState(zx.q(x20), x1, i, 0)
    
    if (*arg2 == 1)
        if ((x0 & 1) == 0)
            *arg2 = 0
        else
            int64_t x0_4 = UI2GetChild(zx.q(x20), i)
            int32_t x23_1 = x0_4.d
            float v0_1
            int32_t v1_1
            int32_t v2_1
            int32_t v3_1
            result, v0_1, v1_1, v2_1, v3_1 = UI2GetRectHitTest(x0_4)
            int32_t v4_1 = var_78
            float var_74
            float* x23_2
            float v0_2
            float v1_2
            
            if (v0_1 f<= v4_1 && not(v3_1 f< var_74) && not(v2_1 f< v4_1) && not(v1_1 f> var_74))
                uint32_t fp_1
                
                if (i == 0)
                    fp_1 = temp0_1
                
                if (i != 0 || *(arg2 + 4) != 1)
                    fp_1 = i + 1
                    *arg2 = 1
                
                float* x0_5 = GetLocalSettings()
                v1_2 = x0_5[1]
                float v2_2 = float.s(fp_1) f* v10.d
                
                v0_2 = arg2 == gOptionsDlg ? v1_2 : v2_2
                
                x23_2 = x0_5
                x0_5[zx.q(arg2 != gOptionsDlg ? 1 : 0)] = v2_2
                
                if (v0_2 == v1_2)
                    SoundSetGlobalVolume(v0_2, *x23_2)
                    result = SaveLocalSettings()
                else
                label_9c7184:
                    SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_BTN_SLIDER)
                    SoundSetGlobalVolume(x23_2[1], *x23_2)
                    result = SaveLocalSettings()
            else if (i == 0)
                float v0_3
                int32_t v1_3
                int32_t v2_3
                int32_t v3_2
                result, v0_3, v1_3, v2_3, v3_2 = UI2GetRect(zx.q(x23_1))
                int32_t v4_2 = var_78
                
                if (not(v0_3 + float.s(0xc7c35000) f> v4_2) && not(v3_2 f< var_74)
                        && not(v2_3 f< v4_2) && not(v1_3 f> var_74))
                    *arg2 = 1
                    float* x0_8 = GetLocalSettings()
                    v1_2 = x0_8[1]
                    x23_2 = x0_8
                    
                    v0_2 = arg2 == gOptionsDlg ? v1_2 : v9.d
                    
                    x0_8[zx.q(arg2 != gOptionsDlg ? 1 : 0)] = 0
                    
                    if (v0_2 != v1_2)
                        goto label_9c7184
                    
                    SoundSetGlobalVolume(v0_2, *x23_2)
                    result = SaveLocalSettings()
            else if (i == 7)
                float v0_4
                int32_t v1_4
                float v2_4
                float v3_3
                result, v0_4, v1_4, v2_4, v3_3 = UI2GetRect(zx.q(x23_1))
                int32_t v4_3 = var_78
                
                if (v0_4 f> v4_3 || v3_3 < var_74 || v2_4 + float.s(0x47c35000) f< v4_3
                        || v1_4 f> var_74)
                    break
                
                *arg2 = 1
                float* x0_10 = GetLocalSettings()
                float v1_5 = x0_10[1]
                float v0_5
                
                if (arg2 == gOptionsDlg)
                    v0_5 = v1_5
                else
                    v0_5 = fconvert.s(1f)
                
                x0_10[zx.q(arg2 != gOptionsDlg ? 1 : 0)] = 0x3f800000
                
                if (not(v0_5 == v1_5))
                    SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_BTN_SLIDER)
                    v0_5 = x0_10[1]
                
                SoundSetGlobalVolume(v0_5, *x0_10)
                return SaveLocalSettings()
    
    i += 1
while (i != 8)

return result
