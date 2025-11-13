// 函数: sub_7402e0
// 地址: 0x7402e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_773095
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg3
int32_t* var_24 = edx
*arg2 = 0

if (data_147ef94 != 0)
    int32_t eax_4 = data_1512420
    
    if (eax_4 u> 5)
        sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\Editor\FabEditor.cpp", 0x3aa, 
            "ComputeTransformStyle")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void var_58
    float var_3c
    
    switch (eax_4)
        case 2
            if (data_14ff3e8 != 0xffffffff)
                void* esi_2 = *fsbase->ThreadLocalStoragePointer
                
                if (data_1a9a420 s> *(esi_2 + 8))
                    sub_75970e(&data_1a9a420)
                    
                    if (data_1a9a420 == 0xffffffff)
                        int32_t var_14_9 = 4
                        data_1a9a424 = sub_69f030("sys/editor/translate.fab", 0x20)
                        int32_t var_14_10 = 0xffffffff
                        __Init_thread_footer(&data_1a9a420)
                
                if (data_1a9a428 s> *(esi_2 + 8))
                    sub_75970e(&data_1a9a428)
                    
                    if (data_1a9a428 == 0xffffffff)
                        int32_t var_14_11 = 5
                        data_1a9a42c = sub_6d1020(data_1a9a424, "RedArrow")
                        int32_t var_14_12 = 0xffffffff
                        __Init_thread_footer(&data_1a9a428)
                
                if (data_1a9a430 s> *(esi_2 + 8))
                    sub_75970e(&data_1a9a430)
                    
                    if (data_1a9a430 == 0xffffffff)
                        int32_t var_14_13 = 6
                        data_1a9a434 = sub_6d1020(data_1a9a424, "GreenArrow")
                        int32_t var_14_14 = 0xffffffff
                        __Init_thread_footer(&data_1a9a430)
                
                if (data_1a9a438 s> *(esi_2 + 8))
                    sub_75970e(&data_1a9a438)
                    
                    if (data_1a9a438 == 0xffffffff)
                        int32_t var_14_15 = 7
                        data_1a9a43c = sub_6d1020(data_1a9a424, "BlueArrow")
                        int32_t var_14_16 = 0xffffffff
                        __Init_thread_footer(&data_1a9a438)
                
                if (data_14ff3e8 == data_1a9a42c)
                    *arg2 = 1
                else if (data_14ff3e8 == data_1a9a434)
                    *arg2 = 2
                else if (data_14ff3e8 == data_1a9a43c)
                    *arg2 = 3
                
                edx = var_24
            
            int32_t ecx_16 = 0
            int32_t i = 0
            int32_t var_28_1 = 0
            float var_44_1 = 10000f
            var_3c = 2.80259693e-45f
            int32_t var_38_4 = 3
            int32_t var_34_4 = 4
            int32_t i_3 = 0
            
            do
                int32_t esi_3 = (&var_3c)[i]
                
                if (esi_3 != 2)
                    bool cond:1_1
                    
                    if (esi_3 != 3)
                    label_740a46:
                        
                        if (esi_3 == 4)
                            cond:1_1 = *arg2 == 2
                            goto label_740a4e
                        
                    label_740a6a:
                        float xmm2_7[0x4] = *sub_740000(&var_58, edx, esi_3, &var_58)
                        float xmm3_11 = xmm2_7[0] * arg8
                        float xmm4_29 = _mm_shuffle_ps(xmm2_7, xmm2_7, 0x55)
                        float xmm5_20 = _mm_shuffle_ps(xmm2_7, xmm2_7, 0xaa)
                        uint32_t xmm3_13[0x4] = xmm3_11 + xmm4_29 * arg9 + xmm5_20 * arg10
                        int32_t xmm0_46 = __andps_xmmxud_memxud(xmm3_13, data_8937a0.o)
                        float xmm1_15
                        
                        if (not(9.99999975e-06f f> xmm0_46))
                            xmm1_15 = xmm2_7[0] * arg5 + xmm4_29 * arg6 + xmm5_20 * arg7
                                + _mm_shuffle_ps(xmm2_7, xmm2_7, 0xff)
                        
                        float xmm0_53
                        float var_2c
                        
                        if (9.99999975e-06f f> xmm0_46 || 0 f< xmm1_15 f* xmm3_13)
                            xmm0_53 = var_2c
                        else
                            xmm0_53 = (xmm1_15 ^ (data_8937c0.o).d) f/ xmm3_13
                            var_2c = xmm0_53
                        
                        if (0 f> xmm0_53 || var_44_1 <= xmm0_53)
                            ecx_16 = var_28_1
                        else
                            ecx_16 = esi_3
                            var_44_1 = xmm0_53
                            var_28_1 = ecx_16
                            *arg4 = xmm2_7
                    else
                        cond:1_1 = *arg2 == 1
                    label_740a4e:
                        
                        if (not(cond:1_1))
                            goto label_740a6a
                else if (*arg2 != 3)
                    goto label_740a46
                
                edx = var_24
                i = i_3 + 1
                i_3 = i
            while (i s< 3)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return ecx_16
        case 3
            if (data_14ff3e8 != 0xffffffff)
                void* esi_1 = *fsbase->ThreadLocalStoragePointer
                
                if (data_1a9a400 s> *(esi_1 + 8))
                    sub_75970e(&data_1a9a400)
                    
                    if (data_1a9a400 == 0xffffffff)
                        int32_t var_14_1 = 0
                        data_1a9a404 = sub_69f030("sys/editor/rotate_quarter.fab", 0x20)
                        int32_t var_14_2 = 0xffffffff
                        __Init_thread_footer(&data_1a9a400)
                
                if (data_1a9a408 s> *(esi_1 + 8))
                    sub_75970e(&data_1a9a408)
                    
                    if (data_1a9a408 == 0xffffffff)
                        int32_t var_14_3 = 1
                        data_1a9a40c = sub_6d1020(data_1a9a404, "RedRing")
                        int32_t var_14_4 = 0xffffffff
                        __Init_thread_footer(&data_1a9a408)
                
                if (data_1a9a410 s> *(esi_1 + 8))
                    sub_75970e(&data_1a9a410)
                    
                    if (data_1a9a410 == 0xffffffff)
                        int32_t var_14_5 = 2
                        data_1a9a414 = sub_6d1020(data_1a9a404, "GreenRing")
                        int32_t var_14_6 = 0xffffffff
                        __Init_thread_footer(&data_1a9a410)
                
                if (data_1a9a418 s> *(esi_1 + 8))
                    sub_75970e(&data_1a9a418)
                    
                    if (data_1a9a418 == 0xffffffff)
                        int32_t var_14_7 = 3
                        data_1a9a41c = sub_6d1020(data_1a9a404, "BlueRing")
                        int32_t var_14_8 = 0xffffffff
                        __Init_thread_footer(&data_1a9a418)
                
                if (data_14ff3e8 == data_1a9a40c)
                    float xmm6 = data_15123f4
                    float xmm3_1 = data_1512400
                    float xmm2_1 = data_15123fc
                    float xmm1_1 = data_15123f8
                    float xmm5_5 = xmm6 * xmm6 + xmm3_1 * xmm3_1 - xmm2_1 * xmm2_1 - xmm1_1 * xmm1_1
                    float xmm4_3 = xmm2_1 * xmm3_1 + xmm6 * xmm1_1
                    float xmm5_6 = xmm5_5 f* *var_24
                    float xmm6_2 = xmm6 * xmm2_1 - xmm3_1 * xmm1_1
                    float xmm4_4 = xmm4_3 + xmm4_3
                    float xmm6_3 = xmm6_2 + xmm6_2
                    var_3c = xmm4_4
                    float var_38 = xmm6_3
                    int32_t var_34 =
                        (xmm4_4 f* var_24[1] + xmm5_6 + xmm6_3 f* var_24[2]) ^ (data_8937c0.o).d
                    *arg4 = xmm5_5.o
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 6
                
                if (data_14ff3e8 == data_1a9a414)
                    float xmm6_5 = data_15123f4
                    float xmm2_2 = data_15123fc
                    float xmm3_3 = data_15123f8
                    float xmm1_2 = data_1512400
                    float* eax_19 = var_24
                    float xmm5_9 = xmm6_5 * xmm3_3 - xmm2_2 * xmm1_2
                    float xmm5_10 = xmm5_9 + xmm5_9
                    float xmm4_13 =
                        xmm3_3 * xmm3_3 - xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 - xmm6_5 * xmm6_5
                    float xmm5_11 = xmm5_10 * *eax_19
                    float xmm6_7 = xmm6_5 * xmm1_2 + xmm2_2 * xmm3_3
                    var_3c = xmm4_13
                    float xmm6_8 = xmm6_7 + xmm6_7
                    float var_38_1 = xmm6_8
                    int32_t var_34_1 =
                        (xmm4_13 * eax_19[1] + xmm5_11 + xmm6_8 * eax_19[2]) ^ (data_8937c0.o).d
                    *arg4 = xmm5_10.o
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 7
                
                if (data_14ff3e8 == data_1a9a41c)
                    float xmm3_4 = data_15123f4
                    float xmm2_4 = data_1512400
                    float xmm6_10 = data_15123fc
                    float xmm1_3 = data_15123f8
                    float xmm5_14 = xmm3_4 * xmm6_10 + xmm2_4 * xmm1_3
                    float xmm5_15 = xmm5_14 + xmm5_14
                    float xmm4_20 = xmm6_10 * xmm1_3 - xmm3_4 * xmm2_4
                    float xmm5_16 = xmm5_15 f* *var_24
                    float xmm4_21 = xmm4_20 + xmm4_20
                    float xmm6_14 =
                        xmm6_10 * xmm6_10 - xmm1_3 * xmm1_3 - xmm3_4 * xmm3_4 + xmm2_4 * xmm2_4
                    var_3c = xmm4_21
                    float var_38_2 = xmm6_14
                    int32_t var_34_2 =
                        (xmm4_21 f* var_24[1] + xmm5_16 + xmm6_14 f* var_24[2]) ^ (data_8937c0.o).d
                    *arg4 = xmm5_15.o
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 5
                
                edx = var_24
            
            int32_t i_1 = 0
            int32_t var_28 = 0
            float var_2c_1 = 10000f
            var_3c = 7.00649232e-45f
            int32_t var_38_3 = 6
            int32_t var_34_3 = 7
            int32_t eax_28
            
            do
                int32_t edi_1 = (&var_3c)[i_1]
                float xmm2_6[0x4] = *sub_740000(&var_58, edx, edi_1, &var_58)
                float xmm3_7 = xmm2_6[0] * arg8
                float xmm4_27 = _mm_shuffle_ps(xmm2_6, xmm2_6, 0x55)
                float xmm5_18 = _mm_shuffle_ps(xmm2_6, xmm2_6, 0xaa)
                uint32_t xmm3_9[0x4] = xmm3_7 + xmm4_27 * arg9 + xmm5_18 * arg10
                int32_t xmm0_29 = __andps_xmmxud_memxud(xmm3_9, data_8937a0.o)
                float xmm1_9
                
                if (not(9.99999975e-06f f> xmm0_29))
                    xmm1_9 = arg5 f* xmm2_6 + arg6 * xmm4_27 + arg7 * xmm5_18
                        + _mm_shuffle_ps(xmm2_6, xmm2_6, 0xff)
                
                float xmm0_40
                float var_44
                
                if (9.99999975e-06f f> xmm0_29 || 0 f< xmm1_9 f* xmm3_9)
                    xmm0_40 = var_44
                else
                    xmm0_40 = (xmm1_9 ^ (data_8937c0.o).d) f/ xmm3_9
                    var_44 = xmm0_40
                
                if (0 f> xmm0_40 || var_2c_1 <= xmm0_40)
                    eax_28 = var_28
                else
                    eax_28 = edi_1
                    var_2c_1 = xmm0_40
                    var_28 = eax_28
                    *arg4 = xmm2_6
                
                edx = var_24
                i_1 += 1
            while (i_1 s< 3)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_28
        case 4
            int32_t i_2 = 0
            int32_t var_28_2 = 0
            float var_2c_2 = 10000f
            var_3c = 1.26116862e-44f
            int32_t var_38_5 = 0xa
            int32_t var_34_5 = 0xb
            int32_t eax_47
            
            do
                int32_t edi_2 = (&var_3c)[i_2]
                void var_68
                float xmm2_8[0x4] = *sub_740000(&var_68, edx, edi_2, &var_68)
                float xmm4_32 = _mm_shuffle_ps(xmm2_8, xmm2_8, 0x55)
                float xmm5_23 = _mm_shuffle_ps(xmm2_8, xmm2_8, 0xaa)
                uint32_t xmm3_17[0x4] = arg8 f* xmm2_8 + arg9 * xmm4_32 + arg10 * xmm5_23
                int32_t xmm0_59 = __andps_xmmxud_memxud(xmm3_17, data_8937a0.o)
                float xmm1_21
                
                if (not(9.99999975e-06f f> xmm0_59))
                    xmm1_21 = arg5 f* xmm2_8 + arg6 * xmm4_32 + arg7 * xmm5_23
                        + _mm_shuffle_ps(xmm2_8, xmm2_8, 0xff)
                
                float xmm0_70
                float var_48
                
                if (9.99999975e-06f f> xmm0_59 || 0 f< xmm1_21 f* xmm3_17)
                    xmm0_70 = var_48
                else
                    xmm0_70 = (xmm1_21 ^ (data_8937c0.o).d) f/ xmm3_17
                    var_48 = xmm0_70
                
                if (0 f> xmm0_70 || var_2c_2 <= xmm0_70)
                    eax_47 = var_28_2
                else
                    eax_47 = edi_2
                    var_2c_2 = xmm0_70
                    var_28_2 = eax_47
                    *arg4 = xmm2_8
                
                edx = var_24
                i_2 += 1
            while (i_2 s< 3)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_47

fsbase->NtTib.ExceptionList = ExceptionList
return 1
