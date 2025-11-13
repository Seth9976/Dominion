// 函数: sub_744210
// 地址: 0x744210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
int32_t eax = data_147ac28

if ((*(eax + 0x1c) & 2) != 0)
    eax = data_cf65b4
    
    if (*(eax + 0x18) != 0)
        TEB* fsbase
        
        if (data_1a9a478 s> *(*fsbase->ThreadLocalStoragePointer + 8))
            sub_75970e(&data_1a9a478)
            
            if (data_1a9a478 == 0xffffffff)
                data_1a9a47c = 0
                data_1a9a480 = 0
                __Init_thread_footer(&data_1a9a478)
        
        float var_3c
        sub_63c270(&var_3c)
        POINT point
        float var_38
        
        if (data_151244a == 0)
            ShowCursor(0)
            data_1a9a47c = var_3c
            data_1a9a480 = var_38
        else
            float xmm0_1 = var_3c f- data_1a9a47c
            float xmm5_1 = *arg1
            float xmm6_1 = arg1[2]
            float xmm2_1 = arg1[3]
            float xmm4_1 = arg1[1]
            float xmm0_3 = var_38 f- data_1a9a480
            float xmm1_3 = xmm5_1 * xmm4_1 - xmm6_1 * xmm2_1
            float xmm1_4 = xmm1_3 + xmm1_3
            float xmm3_5 = xmm4_1 * xmm4_1 - xmm6_1 * xmm6_1 + xmm2_1 * xmm2_1 - xmm5_1 * xmm5_1
            float xmm2_3 = xmm2_1 * xmm5_1 + xmm6_1 * xmm4_1
            float xmm2_4 = xmm2_3 + xmm2_3
            float xmm1_9 =
                1f / sub_4ac580(ebp_1, xmm1_4 * xmm1_4 + xmm3_5 * xmm3_5 + xmm2_4 * xmm2_4)
            float xmm2_5 = 1f / sub_4ac580(ebp_1, 1f)
            float xmm1_11 = xmm2_5 * 0f
            float xmm5_6[0x2] =
                xmm1_9 * xmm3_5 * xmm1_11 + xmm1_9 * xmm1_4 * xmm1_11 + xmm1_9 * xmm2_4 * xmm2_5
            float var_20_2
            
            if (xmm5_6 f< 1f)
                float xmm0_23
                
                if (-1f f< xmm5_6)
                    double xmm0_24 = _mm_cvtps_pd(xmm5_6)
                    _libm_sse2_acos_precise(arg2, var_3c.w, var_38, point.y, xmm1_4)
                    xmm0_23 = fconvert.s(xmm0_24)
                else
                    xmm0_23 = 3.14159274f
                
                var_20_2 = xmm0_23
            else
                var_20_2 = 0f
            
            float xmm0_27 = xmm0_1 * -0.00300000003f * 0.5f
            float xmm0_28 = sub_4ae0d0(ebp_1, xmm0_27)
            float xmm0_30 = sub_4ae0f0(ebp_1, xmm0_27)
            float xmm7_2 = xmm0_30 * 0f
            float xmm1_13 = var_20_2 - xmm0_3 * -0.00300000003f
            float var_24_3 = 0.00999999978f
            
            if (not(0.00999999978f > xmm1_13))
                var_24_3 = _mm_min_ss(0x40486c04, xmm1_13)
            
            float xmm1_14 = arg1[3]
            float xmm3_10 = xmm7_2 f* *arg1
            float xmm2_9 = xmm7_2 f* arg1[1]
            float xmm1_15 = xmm1_14 * xmm7_2
            float xmm7_3 = xmm7_2 f* arg1[2]
            float xmm6_6 = xmm0_28 * xmm1_14 - xmm3_10 - xmm2_9 - arg1[2] f* xmm0_30
            float xmm5_11 = xmm0_28 f* *arg1 + xmm1_15 + xmm7_3 - arg1[1] f* xmm0_30
            float xmm4_6 = xmm0_28 f* arg1[1] + xmm1_15 + xmm0_30 f* *arg1 - xmm7_3
            float xmm7_8 = xmm0_28 f* arg1[2] + arg1[3] f* xmm0_30 + xmm2_9 - xmm3_10
            float xmm0_45 = sub_4ac580(ebp_1, 
                xmm6_6 * xmm6_6 + xmm5_11 * xmm5_11 + xmm4_6 * xmm4_6 + xmm7_8 * xmm7_8)
            float xmm2_11 = xmm4_6 / xmm0_45
            float xmm4_8 = xmm6_6 / xmm0_45
            float xmm3_12 = xmm5_11 / xmm0_45
            float xmm5_13 = xmm7_8 / xmm0_45
            float xmm1_24 = xmm2_11 * xmm3_12 + xmm4_8 * xmm5_13
            point.y = xmm3_12 * xmm5_13 - xmm4_8 * xmm2_11
            float xmm0_53 = ((var_24_3 - var_20_2) ^ (data_8937c0.o).d) * 0.5f
            float xmm0_54 = sub_4ae0d0(ebp_1, xmm0_53)
            float xmm0_56 = sub_4ae0f0(ebp_1, xmm0_53)
            int32_t y = point.y
            float xmm4_10 = (y f+ y) * xmm0_56
            float xmm5_16 = (xmm1_24 + xmm1_24) * xmm0_56
            float xmm3_18 = (xmm4_8 * xmm4_8 + xmm3_12 * xmm3_12 - xmm5_13 * xmm5_13
                - xmm2_11 * xmm2_11) * xmm0_56
            *arg1 = xmm3_18 * xmm4_8 + xmm3_12 * xmm0_54 + xmm5_16 * xmm5_13 - xmm2_11 * xmm4_10
            arg1[1] = xmm5_16 * xmm4_8 + xmm2_11 * xmm0_54 + xmm3_12 * xmm4_10 - xmm3_18 * xmm5_13
            arg1[2] = xmm5_13 * xmm0_54 + xmm4_8 * xmm4_10 + xmm3_18 * xmm2_11 - xmm5_16 * xmm3_12
            arg1[3] = xmm4_8 * xmm0_54 - xmm3_18 * xmm3_12 - xmm5_16 * xmm2_11 - xmm5_13 * xmm4_10
        int32_t eax_3
        int32_t edx
        eax_3, edx = sub_6c84d0(data_1a9a47c, data_1a9a480)
        point.x = eax_3
        point.y = edx
        ClientToScreen(data_147b084, &point)
        BOOL eax_4 = SetCursorPos(point.x, point.y)
        data_151244a = 1
        return eax_4

if (data_151244a != 0)
    eax = ShowCursor(1)

data_151244a = 0
return eax
