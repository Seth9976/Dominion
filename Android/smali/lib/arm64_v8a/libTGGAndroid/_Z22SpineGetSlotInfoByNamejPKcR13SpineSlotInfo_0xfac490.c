// 函数: _Z22SpineGetSlotInfoByNamejPKcR13SpineSlotInfo
// 地址: 0xfac490
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
int64_t* x22_1 = *gSpine + mulu.dp.d(arg1 & 0xffff, 0x28) + 8
void* x8_1 = *x22_1
int64_t x23 = sx.q(*(x8_1 + 0x20))

if (x23.d s>= 1)
    int64_t x24_1 = *(x8_1 + 0x30)
    int64_t x25_1 = 0
    
    do
        int64_t* x21_1 = *(x24_1 + (x25_1 << 3))
        int32_t x0_1
        int128_t v0_1
        float128 v1_1
        float128 v2_1
        float128 v3_1
        x0_1, v0_1, v1_1, v2_1, v3_1 = strcmp(*(*x21_1 + 8), arg2)
        
        if (x0_1 == 0)
            *(arg3 + 0x40) = x25_1.d
            void* x20_2 = x21_1[5]
            float v0_4
            
            if (*(x20_2 + 8) != 0)
                pthread_kill(pthread_self(), 6)
                v0_4 = XNoReturn()
            label_fac650:
                float var_64_1 = v0_4
                v0_4 = var_64_1
                
                if (__cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION) != 0)
                    *x22_1 = *TWO_PI / float.s(0x43b40000)
                    __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
                    v0_4 = var_64_1
            else
                int128_t* x8_4 = x21_1[4]
                
                if (x8_4 == 0)
                    v0_1.q = 0
                    v0_1:8.q = 0
                else
                    v0_1 = *x8_4
                
                *(arg3 + 0x20) =
                    vmulq_f32(vmulq_f32(*(*x22_1 + 0x70), *(x21_1 + 0x10), 0), *(x20_2 + 0x4c), 0)
                *(arg3 + 0x30) = v0_1
                *(arg3 + 0x10) = spBone_getWorldScaleX(x21_1[1]) * *(x20_2 + 0x38)
                *(arg3 + 0x14) = spBone_getWorldScaleY(x21_1[1]) * *(x20_2 + 0x3c)
                v0_4 = spBone_getWorldRotationX(x21_1[1]) - *(x20_2 + 0x40)
                x22_1 = DegToRad(float)::CONVERSION
                
                if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
                    goto label_fac650
            
            int32_t v0_5
            int32_t v1_7
            v0_5, v1_7 = Rot2FromAngle(v0_4 * *x22_1)
            *(arg3 + 8) = v0_5
            *(arg3 + 0xc) = v1_7
            *arg3 = *V20
            void* x0_5 = x21_1[1]
            v10.d = *(x20_2 + 0x30)
            v8.d = *(x0_5 + 0x6c)
            v9.d = *(x0_5 + 0x78)
            int32_t v0_6 = spBone_getWorldScaleX()
            v11.d = *(x20_2 + 0x34)
            v10.d = v10.d f* v0_6
            float v0_7 = v9.d f- v11.d f* spBone_getWorldScaleY(x21_1[1]) + *(arg3 + 4)
            *arg3 = v8.d f+ v10.d + *arg3
            *(arg3 + 4) = v0_7
            *(arg3 + 0x18) = *(x20_2 + 0x44)
            *(arg3 + 0x1c) = *(x20_2 + 0x48)
            return 1
        
        x25_1 += 1
    while (x25_1 s< x23)

return 0
