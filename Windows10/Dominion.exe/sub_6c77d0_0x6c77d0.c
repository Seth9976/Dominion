// 函数: sub_6c77d0
// 地址: 0x6c77d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7705d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_d4 = esi
int32_t edi
int32_t var_d8 = edi
int32_t __saved_ebp
int32_t var_dc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_e0 = 1
uint32_t esi_1 = zx.d(GetKeyState(var_e0))
var_e0 = 2
uint32_t esi_2 = esi_1 u>> 0xf
uint32_t edi_2 = esi_2 | 2
bool cond:0 = GetKeyState(var_e0) s>= 0
var_e0 = 4

if (cond:0)
    edi_2 = esi_2

int32_t* esp = &var_dc
char* ecx_1 = edi_2 | 4

if (GetKeyState(var_e0) s>= 0)
    ecx_1 = edi_2

if (data_147cc88 s> 0)
    ecx_1 |= 1

*(data_147ac28 + 0x1c) = ecx_1
uint32_t result
int32_t var_54
int32_t var_4c

if (arg2 u> 0x201)
    if (arg2 - 0x202 u> 0x45)
    label_6c80ca:
        var_e0 = arg4
        result = DefWindowProcW(arg1, arg2, arg3)
        esp = &var_dc
    else
        uint32_t eax_22 = zx.d(*(arg2 + 0x6c804a))
        int32_t var_ec
        int64_t var_34
        int32_t var_2c
        int32_t* ecx_16
        
        switch (eax_22)
            case 0
                goto label_6c7a75
            case 1
                int32_t var_14_5 = 5
                int128_t var_cc
                __builtin_memset(&var_cc, 0, 0x20)
                var_e0 = 0x10
                var_cc.d = 9
                uint32_t esi_18 = zx.d(GetKeyState(var_e0))
                var_e0 = 0x11
                uint32_t esi_19 = esi_18 u>> 0xf
                uint32_t edi_8 = esi_19 | 2
                bool cond:2_1 = GetKeyState(var_e0) s>= 0
                var_e0 = 0x12
                
                if (cond:2_1)
                    edi_8 = esi_19
                
                uint32_t ecx_28 = edi_8 | 4
                
                if (GetKeyState() s>= 0)
                    ecx_28 = edi_8
                
                var_cc:0xc.d = sx.d((arg3 u>> 0x10).w)
                var_e0 = &var_34
                var_cc:8.d = ecx_28
                GetClientRect(data_147b084, var_e0)
                esp = &var_dc
                int32_t edx_13 = var_2c
                float xmm1_18
                float xmm2_18
                
                if (edx_13 == 0 || arg3 == 0)
                    xmm1_18 = 0f
                    xmm2_18 = 0f
                else
                    void* eax_64 = data_cf65b8
                    xmm1_18 = float.s(*(eax_64 + 0x14)) * float.s(zx.d(arg4.w)) / float.s(edx_13)
                    xmm2_18 = float.s(*(eax_64 + 0x18)) * float.s(arg4 u>> 0x10) / float.s(arg3)
                
                int128_t var_bc
                var_bc.d = xmm1_18
                var_bc:4.d = xmm2_18
                
                if (data_147abe8 != 0)
                    sub_69e480(&var_cc)
                
                int32_t var_14_6 = 6
                
                if (data_cf65bc == 0)
                labelid_2:
                    result = 0
                else
                    char* eax_65 = var_bc:8.d
                    
                    if (eax_65 != 0 && *eax_65 != 0)
                        ecx_16 = &var_bc:8
                        goto label_6c8091
                    
                labelid_2:
                    result = 0
            case 2, 8
                goto label_6c80ca
            case 3
                var_e0 = arg4
                result = sub_6c7130(eax_22, arg3, arg1, var_e0)
                esp = &var_dc
            case 4
                sub_6c72e0(arg3)
                result = 0
            case 5
                if ((arg3 u>> 0x10 & 0x2000) == 0)
                labelid_2:
                    result = 0
                else
                    var_e0 = &var_2c
                    var_2c = sx.d(arg4.w)
                    ScreenToClient(arg1, var_e0)
                    var_e0 = &var_2c
                    PhysicalToLogicalPoint(arg1, var_e0)
                    int32_t eax_39 = var_2c
                    var_e0 = &var_54
                    GetClientRect(data_147b084, var_e0)
                    esp = &var_dc
                    int32_t edx_9 = var_4c
                    float xmm1_12
                    float xmm2_12
                    
                    if (edx_9 == 0 || arg4 == 0)
                        xmm1_12 = 0f
                        xmm2_12 = 0f
                    else
                        void* eax_40 = data_cf65b8
                        xmm1_12 = float.s(*(eax_40 + 0x14)) * float.s(eax_39) / float.s(edx_9)
                        xmm2_12 = float.s(*(eax_40 + 0x18)) * float.s(sx.d((arg4 u>> 0x10).w))
                            / float.s(arg4)
                    
                    int32_t edx_10 = data_147cc88
                    int32_t eax_41 = 0
                    
                    if (edx_10 s<= 0)
                    labelid_2:
                        result = 0
                    else
                        int32_t* ecx_19 = &data_147cc90
                        
                        while (true)
                            if (*ecx_19 == zx.d(arg3.w))
                                int32_t eax_42 = eax_41 * 3
                                (&data_147cc94)[eax_42] = xmm1_12
                                (&data_147cc98)[eax_42] = xmm2_12
                                result = 0
                                break
                            
                            eax_41 += 1
                            ecx_19 = &ecx_19[3]
                            
                            if (eax_41 s>= edx_10)
                                result = 0
                                break
            case 6
                if ((arg3 u>> 0x10 & 0x2000) == 0)
                labelid_2:
                    result = 0
                else
                    var_e0 = &var_4c
                    var_4c = sx.d(arg4.w)
                    ScreenToClient(arg1, var_e0)
                    var_e0 = &var_4c
                    PhysicalToLogicalPoint(arg1, var_e0)
                    int32_t eax_31 = var_4c
                    var_e0 = &var_34
                    GetClientRect(data_147b084, var_e0)
                    int32_t edx_8 = var_2c
                    int32_t ecx_13
                    
                    if (edx_8 != 0)
                        ecx_13 = arg3
                    
                    float xmm1_5[0x2]
                    float xmm2_7[0x2]
                    
                    if (edx_8 == 0 || ecx_13 == 0)
                        xmm2_7 = 0
                        xmm1_5 = 0
                    else
                        void* eax_32 = data_cf65b8
                        xmm2_7 = float.s(*(eax_32 + 0x14)) * float.s(eax_31) / float.s(edx_8)
                        xmm1_5 = float.s(*(eax_32 + 0x18)) * float.s(sx.d((arg4 u>> 0x10).w))
                            / float.s(ecx_13)
                    
                    int32_t var_28_1 = xmm1_5
                    int32_t var_ac_2 = xmm2_7
                    HWND var_e4_8
                    var_e4_8.q = _mm_cvtps_pd(data_177747c)
                    var_ec.q = _mm_cvtps_pd(xmm1_5)
                    int64_t var_f4_1 = _mm_cvtps_pd(xmm2_7)
                    sub_63b5f0("ptr down %f %f %f")
                    uint32_t esi_10 = zx.d(arg3.w)
                    var_e4_8.q = _mm_cvtps_pd(var_28_1)
                    var_ec.q = _mm_cvtps_pd(var_ac_2)
                    var_f4_1:4.d = esi_10
                    sub_63b5f0("Touch Down %d (%02f %02f)")
                    esp = &var_dc
                    
                    if (data_147cc88 != 0)
                    labelid_2:
                        result = 0
                    else
                        data_147cc88 = 1
                        data_147cc90 = esi_10
                        data_147cc94 = var_ac_2
                        data_147cc98 = var_28_1
                        int128_t var_44
                        __builtin_memset(&var_44, 0, 0x18)
                        var_2c = &data_801800
                        int32_t var_14_1 = 0
                        void* ecx_14 = data_147ac28
                        var_e0 = &var_44
                        int32_t var_28_2 = 0
                        var_44.d = 3
                        var_34.d = var_ac_2
                        var_34:4.d = var_28_1
                        sub_69e9c0(ecx_14 + 0x10, var_e0)
                        esp = &var_dc
                        int32_t var_14_2 = 1
                        
                        if (data_cf65bc == 0)
                        labelid_2:
                            result = 0
                        else
                            int32_t eax_33 = var_2c
                            
                            if (eax_33 == 0 || *eax_33 == 0)
                            labelid_2:
                                result = 0
                            else
                                ecx_16 = &var_2c
                            label_6c8091:
                                char* eax_66 = sub_63d4e0(ecx_16)
                                int32_t temp1_1 = *(eax_66 + 4)
                                *(eax_66 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)
                                
                            labelid_2:
                                result = 0
            case 7
                if ((arg3 u>> 0x10 & 0x2000) == 0)
                labelid_2:
                    result = 0
                else
                    var_e0 = &var_2c
                    var_2c = sx.d(arg4.w)
                    ScreenToClient(arg1, var_e0)
                    var_e0 = &var_2c
                    PhysicalToLogicalPoint(arg1, var_e0)
                    int32_t eax_48 = var_2c
                    var_e0 = &var_54
                    GetClientRect(data_147b084, var_e0)
                    int32_t edx_11 = var_4c
                    float xmm1_15[0x2]
                    float xmm2_15[0x2]
                    
                    if (edx_11 == 0 || arg4 == 0)
                        xmm1_15 = 0
                        xmm2_15 = 0
                    else
                        void* eax_49 = data_cf65b8
                        xmm1_15 = float.s(*(eax_49 + 0x14)) * float.s(eax_48) / float.s(edx_11)
                        xmm2_15 = float.s(*(eax_49 + 0x18)) * float.s(sx.d((arg4 u>> 0x10).w))
                            / float.s(arg4)
                    
                    HWND var_e4_14
                    var_e4_14.q = _mm_cvtps_pd(data_177747c)
                    var_ec.q = _mm_cvtps_pd(xmm2_15)
                    int64_t var_f4_2 = _mm_cvtps_pd(xmm1_15)
                    sub_63b5f0("ptr up %f %f %f")
                    int32_t edx_12 = data_147cc88
                    esp = &var_dc
                    int32_t eax_50 = 0
                    
                    if (edx_12 s<= 0)
                    labelid_2:
                        result = 0
                    else
                        int32_t* ecx_22 = &data_147cc90
                        
                        do
                            if (*ecx_22 == zx.d(arg3.w))
                                var_4c = &data_801800
                                int128_t var_64
                                __builtin_memset(&var_64, 0, 0x18)
                                int32_t var_14_3 = 2
                                int32_t esi_17 = eax_50 * 3
                                void* ecx_23 = data_147ac28
                                var_54 = (&data_147cc94)[esi_17]
                                int32_t xmm0_24 = (&data_147cc98)[esi_17]
                                var_e0 = &var_64
                                int32_t var_48_2 = 0
                                var_64.d = 4
                                int32_t var_50_1 = xmm0_24
                                sub_69e9c0(ecx_23 + 0x10, var_e0)
                                esp = &var_dc
                                int32_t eax_52 = data_147cc88 - 1
                                data_147cc88 = eax_52
                                int32_t eax_53 = eax_52 * 3
                                *((esi_17 << 2) + &data_147cc90) = *((eax_53 << 2) + &data_147cc90)
                                (&data_147cc98)[esi_17] = (&data_147cc98)[eax_53]
                                int32_t var_14_4 = 3
                                
                                if (data_cf65bc == 0)
                                    goto label_6c80a9_2
                                
                                int32_t eax_55 = var_4c
                                
                                if (eax_55 == 0)
                                    goto label_6c80a9_2
                                
                                if (*eax_55 == 0)
                                    goto label_6c80a9_2
                                
                                ecx_16 = &var_4c
                                goto label_6c8091
                            
                            eax_50 += 1
                            ecx_22 = &ecx_22[3]
                        while (eax_50 s< edx_12)
                        
                        result = 0
else if (arg2 == 0x201)
label_6c7a75:
    int32_t eax_25 = sx.d((arg4 u>> 0x10).w)
    var_e0 = eax_25
    sub_6c6da0(eax_25, arg2, arg2, sx.d(arg4.w), var_e0)
    esp = &var_dc
    result = 0
else if (arg2 u> 0x14)
    if (arg2 - 0x1c u> 0xea)
        goto label_6c80ca
    
    uint32_t eax_20 = zx.d(lookup_table_6c8114[0xc + arg2])
    
    switch (eax_20)
        case 0
            void* ecx_9 = data_cf65b4
            
            if (ecx_9 == 0)
            labelid_2:
                result = 0
            else
                eax_20.b = arg3 == 1
                *(ecx_9 + 0x18) = eax_20.b
                result = 0
        case 1
            var_e0 = 1
            sub_6c7000(eax_20, arg4, arg3, var_e0)
            esp = &var_dc
            result = 0
        case 2
            var_e0 = 2
            sub_6c7000(eax_20, arg4, arg3, var_e0)
            esp = &var_dc
            result = 0
        case 3
            var_e0 = 0
            sub_6c7000(eax_20, arg4, arg3, var_e0)
            esp = &var_dc
            result = 0
        case 4
            var_e0 = 1
            sub_6c7000(eax_20, arg4, arg3, var_e0)
            var_e0 = arg4
            result = DefWindowProcW(arg1, arg2, arg3)
            esp = &var_dc
        case 5
            goto label_6c80ca
else if (arg2 == 0x14)
labelid_2:
    result = 0
else
    if (arg2 - 2 u> 0xe)
        goto label_6c80ca
    
    switch (arg2 + &jump_table_6c80fc[5]:2)
        case &lookup_table_6c8114
            var_e0 = 0
            PostQuitMessage(var_e0)
            esp = &var_dc
            result = 0
        case &lookup_table_6c8114[1], &lookup_table_6c8114[2], &lookup_table_6c8114[7], 
                &lookup_table_6c8114[8], &lookup_table_6c8114[9], &lookup_table_6c8114[0xa], 
                &lookup_table_6c8114[0xb], &lookup_table_6c8114[0xc]
            goto label_6c80ca
        case &lookup_table_6c8114[3]
            if (data_147b070 == 0)
            label_6c80a9:
                result = 0
            else
                var_e0 = &var_54
                GetClientRect(arg1, var_e0)
                int32_t var_50
                
                if (arg4 != var_50)
                    void* ecx_2 = data_cf65b8
                    int32_t eax_13 = var_4c - var_54
                    bool cond:6_1 = *(ecx_2 + 0x24) == 0
                    *(ecx_2 + 0x14) = eax_13
                    int32_t eax_15
                    
                    if (cond:6_1)
                        float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_13))
                        float xmm2_3 = xmm2_2 / (xmm2_2 / _mm_cvtepi32_ps(zx.o(arg4 - var_50)))
                        float xmm2_4
                        
                        if (0 f<= xmm2_3)
                            xmm2_4 = xmm2_3 + 0.5f
                        else
                            xmm2_4 = xmm2_3 - 0.5f
                        
                        eax_15 = int.d(xmm2_4)
                    else
                        eax_15 = arg4 - var_50
                    
                    *(ecx_2 + 0x18) = eax_15
                
                (*(*data_147b070 + 0xc))()
                int32_t eax_17 = 2
                
                if (arg3 != 2)
                    eax_17 = 0
                
                int32_t edx_3 = *data_cf65b8
                var_e0 = eax_17
                esp = &var_e0
                (*(edx_3 + 0x4c))(var_e0)
                result = 0
        case &lookup_table_6c8114[4], &lookup_table_6c8114[5], &lookup_table_6c8114[6]
        label_6c80a9_1:
            result = 0
        case &lookup_table_6c8114[0xd]
            void var_a8
            var_e0 = &var_a8
            BeginPaint(arg1, var_e0)
            var_e0 = &var_a8
            EndPaint(arg1, var_e0)
            esp = &var_dc
            result = 0
        case &lookup_table_6c8114[0xe]
            if (sub_6f2a60(ecx_1) == 0)
            label_6c80a9_2:
                result = 0
            else
                var_e0 = arg1
                DestroyWindow(var_e0)
                esp = &var_dc
                result = 0
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
CookieCheckFunction(result)
return result
