// 函数: sub_6c25f0
// 地址: 0x6c25f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$?_Process_message_helper@?$ordered_message_processor@W4agent_status@Concurrency@@@Concurrency@@AAEJXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
void* edi = *arg1
char* result = nullptr
void* var_24 = edi
char* result_1 = nullptr

if (*(edi + 8) s> 0)
    while (true)
        int32_t* esi_2 = result * 0x168 + *edi
        memset(&esi_2[5], 0, 0x71)
        memset(esi_2 + 0x85, 0, 0x71)
        void* edx_1 = data_1777544
        esi_2[0x3f] = 1
        esi_2[0x3e] = 1
        esi_2[0x40] = 0x3c23d70a
        esi_2[0x41] = 0x3c23d70a
        esi_2[0x58] = 0
        sub_69ce80(&esi_2[0x44], edx_1, &esi_2[0x44], &data_8cc5f8)
        sub_69ce80(&esi_2[0x48], data_1777544, &esi_2[0x48], &data_8cc5f8)
        sub_69ce80(&esi_2[0x4c], data_1777544, &esi_2[0x4c], &data_8cc5f8)
        int32_t ecx_4 = 0
        int32_t var_2c_1 = 0
        
        if (*esi_2 s> 0)
            int32_t* eax_9 = esi_2
            
            while (true)
                int32_t* esi_5 = (ecx_4 << 4) + eax_9[2]
                void* eax_10 = *esi_5
                char const* const var_60_6
                int32_t var_5c_4
                char const* const var_58_4
                char* ecx_86
                
                if (eax_10 u>= 0x71)
                    var_58_4 = "ParticleReimport"
                    var_5c_4 = 0xaf4
                    var_60_6 = "C:\x\ax2017\Engine\Particle.cpp"
                    ecx_86 = "attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES"
                else
                    int32_t* edi_1 = esi_5[2]
                    
                    if (eax_10 == 0x23 || eax_10 == 0x24 || eax_10 == 0x25 || eax_10 == 0x26
                            || eax_10 == 0x27 || eax_10 == 0x28 || eax_10 == 0x3c || eax_10 == 0x29
                            || eax_10 == 0x2a || eax_10 == 0x2b || eax_10 == 0x2c || eax_10 == 0x2d
                            || eax_10 == 0x2e || eax_10 == 0x2f || eax_10 == 0x30 || eax_10 == 0x31
                            || eax_10 == 0x37 || eax_10 == 0x36 || eax_10 == 0x32 || eax_10 == 0x33
                            || eax_10 == 0x34 || eax_10 == 0x35 || eax_10 == 0x41 || eax_10 == 0x50
                            || eax_10 == 0x38 || eax_10 == 0x4b || eax_10 == 0x4c || eax_10 == 9
                            || eax_10 == 0x68 || eax_10 == 0x67 || eax_10 == 0x69 || eax_10 == 0x6b
                            || eax_10 == 0x6a || eax_10 == 0x17)
                        sub_6dcc50(eax_10, &esi_2[0x44], &data_8cc5f8, eax_10, edi_1, esi_5[3])
                    
                    void* eax_11 = *esi_5
                    
                    if (eax_11 == 0x11 || eax_11 == 0x12 || eax_11 == 0x14 || eax_11 == 0xf
                            || eax_11 == 0x10 || eax_11 == 0x13)
                        sub_6dcc50(eax_11, &esi_2[0x48], &data_8cc5f8, eax_11, esi_5[2], esi_5[3])
                    
                    void* eax_12 = *esi_5
                    
                    if (eax_12 == 0x63 || eax_12 == 0x3d || eax_12 == 0x3e || eax_12 == 0x3f
                            || eax_12 == 0x40 || eax_12 == 0x41 || eax_12 == 0x52 || eax_12 == 0x42
                            || eax_12 == 0x43 || eax_12 == 0x44 || eax_12 == 0x45 || eax_12 == 0x46
                            || eax_12 == 0x47 || eax_12 == 0x48 || eax_12 == 0x49 || eax_12 == 0x4a
                            || eax_12 == 0x1f || eax_12 == 0x20 || eax_12 == 0x21 || eax_12 == 0x51
                            || eax_12 == 0x39 || eax_12 == 0x3a || eax_12 == 0x3b
                            || eax_12 == 0x53)
                        sub_6dcc50(eax_12, &esi_2[0x4c], &data_8cc5f8, eax_12, esi_5[2], esi_5[3])
                    
                    int32_t eax_13 = *esi_5
                    int32_t* esi_8
                    
                    if (eax_13 == 0xc)
                        int32_t edx_7 = edi_1[2]
                        int32_t ecx_5 = 0
                        
                        if (edx_7 s> 0)
                            int32_t* eax_15 = *edi_1 + 8
                            
                            while (not(*eax_15 f>= 0))
                                ecx_5 += 1
                                eax_15 = &eax_15[4]
                                
                                if (ecx_5 s>= edx_7)
                                    break
                        
                        int32_t xmm1_1 = (zx.o(0)).d
                        int32_t xmm0_2
                        
                        if (ecx_5 != 0)
                            int32_t eax_16 = *edi_1
                            
                            if (ecx_5 != edx_7)
                                int32_t ecx_9 = ecx_5 * 2
                                int32_t* esi_6 = eax_16 + (ecx_9 << 3)
                                float xmm2_2 =
                                    (0f f- esi_6[-2]) / (*(eax_16 + (ecx_9 << 3) + 8) f- esi_6[-2])
                                float xmm0_5 = sub_706af0(&esi_6[-4], edi_1[3], xmm1_1)
                                float xmm0_6 = sub_706af0(esi_6, edi_1[3], (zx.o(0)).d)
                                xmm0_2 = sub_4ae110(esi_6[3], xmm2_2, xmm0_5, xmm0_6)
                            else
                                xmm0_2 = sub_706af0((edx_7 << 4) - 0x10 + eax_16, edi_1[3], xmm1_1)
                        else
                            xmm0_2 = sub_706af0(*edi_1, edi_1[3], xmm1_1)
                        
                        *(var_24 + 0xc) = xmm0_2
                        int32_t eax_18 = 0
                        int32_t edx_13 = edi_1[2]
                        
                        if (edx_13 s> 0)
                            int32_t* ecx_14 = *edi_1 + 8
                            
                            while (not(*ecx_14 f>= 0))
                                eax_18 += 1
                                ecx_14 = &ecx_14[4]
                                
                                if (eax_18 s>= edx_13)
                                    break
                        
                        int32_t xmm0_14
                        
                        if (edx_13 s<= 0 || eax_18 == 0)
                            xmm0_14 = sub_706af0(*edi_1, edi_1[3], 1f)
                        else
                            void* ecx_15 = *edi_1
                            
                            if (eax_18 != edx_13)
                                int32_t eax_19 = eax_18 * 2
                                void* esi_7 = ecx_15 + (eax_19 << 3)
                                float xmm2_5 = (0f f- *(esi_7 - 8))
                                    / (*(ecx_15 + (eax_19 << 3) + 8) f- *(esi_7 - 8))
                                float xmm0_11 = sub_706af0(esi_7 - 0x10, edi_1[3], 1f)
                                float xmm0_12 = sub_706af0(esi_7, edi_1[3], 1f)
                                xmm0_14 = sub_4ae110(*(esi_7 + 0xc), xmm2_5, xmm0_11, xmm0_12)
                            else
                                xmm0_14 = sub_706af0(ecx_15 + (edx_13 << 4) - 0x10, edi_1[3], 1f)
                        
                        edi = var_24
                        *(edi + 0x18) = xmm0_14
                        esi_8 = esi_2
                    else if (eax_13 == 0xd)
                        int32_t edx_22 = edi_1[2]
                        int32_t ecx_26 = 0
                        
                        if (edx_22 s> 0)
                            int32_t* eax_24 = *edi_1 + 8
                            
                            while (not(*eax_24 f>= 0))
                                ecx_26 += 1
                                eax_24 = &eax_24[4]
                                
                                if (ecx_26 s>= edx_22)
                                    break
                        
                        int32_t xmm1_5 = (zx.o(0)).d
                        int32_t xmm0_16
                        
                        if (ecx_26 != 0)
                            int32_t eax_25 = *edi_1
                            
                            if (ecx_26 != edx_22)
                                int32_t ecx_30 = ecx_26 * 2
                                int32_t* esi_9 = eax_25 + (ecx_30 << 3)
                                float xmm2_8 =
                                    (0f f- esi_9[-2]) / (*(eax_25 + (ecx_30 << 3) + 8) f- esi_9[-2])
                                float xmm0_19 = sub_706af0(&esi_9[-4], edi_1[3], xmm1_5)
                                float xmm0_20 = sub_706af0(esi_9, edi_1[3], (zx.o(0)).d)
                                xmm0_16 = sub_4ae110(esi_9[3], xmm2_8, xmm0_19, xmm0_20)
                            else
                                xmm0_16 =
                                    sub_706af0((edx_22 << 4) - 0x10 + eax_25, edi_1[3], xmm1_5)
                        else
                            xmm0_16 = sub_706af0(*edi_1, edi_1[3], xmm1_5)
                        
                        *(var_24 + 0x10) = xmm0_16
                        int32_t eax_27 = 0
                        int32_t edx_28 = edi_1[2]
                        
                        if (edx_28 s> 0)
                            int32_t* ecx_35 = *edi_1 + 8
                            
                            while (not(*ecx_35 f>= 0))
                                eax_27 += 1
                                ecx_35 = &ecx_35[4]
                                
                                if (eax_27 s>= edx_28)
                                    break
                        
                        if (edx_28 s<= 0 || eax_27 == 0)
                            edi = var_24
                            *(edi + 0x1c) = sub_706af0(*edi_1, edi_1[3], 1f)
                        else
                            void* ecx_36 = *edi_1
                            
                            if (eax_27 != edx_28)
                                int32_t eax_28 = eax_27 * 2
                                void* esi_10 = ecx_36 + (eax_28 << 3)
                                float xmm2_11 = (0f f- *(esi_10 - 8))
                                    / (*(ecx_36 + (eax_28 << 3) + 8) f- *(esi_10 - 8))
                                float xmm0_25 = sub_706af0(esi_10 - 0x10, edi_1[3], 1f)
                                float xmm0_26 = sub_706af0(esi_10, edi_1[3], 1f)
                                edi = var_24
                                *(edi + 0x1c) =
                                    sub_4ae110(*(esi_10 + 0xc), xmm2_11, xmm0_25, xmm0_26)
                            else
                                edi = var_24
                                *(edi + 0x1c) =
                                    sub_706af0(ecx_36 + (edx_28 << 4) - 0x10, edi_1[3], 1f)
                        
                        esi_8 = esi_2
                    else if (eax_13 == 0xe)
                        int32_t edx_34 = edi_1[2]
                        int32_t ecx_41 = 0
                        
                        if (edx_34 s> 0)
                            int32_t* eax_30 = *edi_1 + 8
                            
                            while (not(*eax_30 f>= 0))
                                ecx_41 += 1
                                eax_30 = &eax_30[4]
                                
                                if (ecx_41 s>= edx_34)
                                    break
                        
                        int32_t xmm1_9 = (zx.o(0)).d
                        int32_t xmm0_31
                        
                        if (ecx_41 != 0)
                            int32_t eax_31 = *edi_1
                            
                            if (ecx_41 != edx_34)
                                int32_t ecx_45 = ecx_41 * 2
                                int32_t* esi_11 = eax_31 + (ecx_45 << 3)
                                float xmm2_14 = (0f f- esi_11[-2])
                                    / (*(eax_31 + (ecx_45 << 3) + 8) f- esi_11[-2])
                                float xmm0_34 = sub_706af0(&esi_11[-4], edi_1[3], xmm1_9)
                                float xmm0_35 = sub_706af0(esi_11, edi_1[3], (zx.o(0)).d)
                                xmm0_31 = sub_4ae110(esi_11[3], xmm2_14, xmm0_34, xmm0_35)
                            else
                                xmm0_31 =
                                    sub_706af0((edx_34 << 4) - 0x10 + eax_31, edi_1[3], xmm1_9)
                        else
                            xmm0_31 = sub_706af0(*edi_1, edi_1[3], xmm1_9)
                        
                        *(var_24 + 0x14) = xmm0_31
                        int32_t eax_33 = 0
                        int32_t edx_40 = edi_1[2]
                        
                        if (edx_40 s> 0)
                            int32_t* ecx_50 = *edi_1 + 8
                            
                            while (not(*ecx_50 f>= 0))
                                eax_33 += 1
                                ecx_50 = &ecx_50[4]
                                
                                if (eax_33 s>= edx_40)
                                    break
                        
                        if (edx_40 s<= 0 || eax_33 == 0)
                            edi = var_24
                            *(edi + 0x20) = sub_706af0(*edi_1, edi_1[3], 1f)
                        else
                            void* ecx_51 = *edi_1
                            
                            if (eax_33 != edx_40)
                                int32_t eax_34 = eax_33 * 2
                                void* esi_12 = ecx_51 + (eax_34 << 3)
                                float xmm2_17 = (0f f- *(esi_12 - 8))
                                    / (*(ecx_51 + (eax_34 << 3) + 8) f- *(esi_12 - 8))
                                float xmm0_40 = sub_706af0(esi_12 - 0x10, edi_1[3], 1f)
                                float xmm0_41 = sub_706af0(esi_12, edi_1[3], 1f)
                                edi = var_24
                                *(edi + 0x20) =
                                    sub_4ae110(*(esi_12 + 0xc), xmm2_17, xmm0_40, xmm0_41)
                            else
                                edi = var_24
                                *(edi + 0x20) =
                                    sub_706af0(ecx_51 + (edx_40 << 4) - 0x10, edi_1[3], 1f)
                        
                        esi_8 = esi_2
                    else if (eax_13 == 6)
                        int32_t edx_46 = edi_1[2]
                        int32_t eax_35 = 0
                        
                        if (edx_46 s> 0)
                            int32_t* ecx_57 = *edi_1 + 8
                            
                            while (not(*ecx_57 f>= 0))
                                eax_35 += 1
                                ecx_57 = &ecx_57[4]
                                
                                if (eax_35 s>= edx_46)
                                    break
                        
                        int32_t* ecx_58 = *edi_1
                        int32_t xmm1_13 = (zx.o(0)).d
                        float xmm0_46
                        
                        if (eax_35 == 0)
                            xmm0_46 = sub_706af0(ecx_58, edi_1[3], xmm1_13)
                        else if (eax_35 != edx_46)
                            int32_t eax_36 = eax_35 * 2
                            void* esi_13 = &ecx_58[eax_36 * 2]
                            float xmm2_20 =
                                (0f f- *(esi_13 - 8)) / (ecx_58[eax_36 * 2 + 2] f- *(esi_13 - 8))
                            float xmm0_49 = sub_706af0(esi_13 - 0x10, edi_1[3], xmm1_13)
                            float xmm0_50 = sub_706af0(esi_13, edi_1[3], (zx.o(0)).d)
                            xmm0_46 = sub_4ae110(*(esi_13 + 0xc), xmm2_20, xmm0_49, xmm0_50)
                        else
                            xmm0_46 = sub_706af0(ecx_58 + (edx_46 << 4) - 0x10, edi_1[3], xmm1_13)
                        
                        float xmm1_17
                        
                        if (0 f<= xmm0_46)
                            xmm1_17 = xmm0_46 + 0.5f
                        else
                            xmm1_17 = xmm0_46 - 0.5f
                        
                        esi_8 = esi_2
                        int32_t eax_37 = 1
                        edi = var_24
                        int32_t ecx_63 = int.d(xmm1_17)
                        
                        if (ecx_63 s> 1)
                            eax_37 = ecx_63
                        
                        esi_8[0x3e] = eax_37
                    else if (eax_13 == 7)
                        int32_t edx_53 = edi_1[2]
                        int32_t eax_38 = 0
                        
                        if (edx_53 s> 0)
                            int32_t* ecx_65 = *edi_1 + 8
                            
                            while (not(*ecx_65 f>= 0))
                                eax_38 += 1
                                ecx_65 = &ecx_65[4]
                                
                                if (eax_38 s>= edx_53)
                                    break
                        
                        int32_t* ecx_66 = *edi_1
                        int32_t xmm1_18 = (zx.o(0)).d
                        float xmm0_53
                        
                        if (eax_38 == 0)
                            xmm0_53 = sub_706af0(ecx_66, edi_1[3], xmm1_18)
                        else if (eax_38 != edx_53)
                            int32_t eax_39 = eax_38 * 2
                            void* esi_14 = &ecx_66[eax_39 * 2]
                            float xmm2_23 =
                                (0f f- *(esi_14 - 8)) / (ecx_66[eax_39 * 2 + 2] f- *(esi_14 - 8))
                            float xmm0_56 = sub_706af0(esi_14 - 0x10, edi_1[3], xmm1_18)
                            float xmm0_57 = sub_706af0(esi_14, edi_1[3], (zx.o(0)).d)
                            xmm0_53 = sub_4ae110(*(esi_14 + 0xc), xmm2_23, xmm0_56, xmm0_57)
                        else
                            xmm0_53 = sub_706af0(ecx_66 + (edx_53 << 4) - 0x10, edi_1[3], xmm1_18)
                        
                        float xmm1_22
                        
                        if (0 f<= xmm0_53)
                            xmm1_22 = xmm0_53 + 0.5f
                        else
                            xmm1_22 = xmm0_53 - 0.5f
                        
                        esi_8 = esi_2
                        int32_t eax_40 = 1
                        edi = var_24
                        int32_t ecx_71 = int.d(xmm1_22)
                        
                        if (ecx_71 s> 1)
                            eax_40 = ecx_71
                        
                        esi_8[0x3f] = eax_40
                    else if (eax_13 == 0x15)
                        int32_t edx_60 = edi_1[2]
                        int32_t eax_41 = 0
                        
                        if (edx_60 s> 0)
                            int32_t* ecx_73 = *edi_1 + 8
                            
                            while (not(*ecx_73 f>= 0))
                                eax_41 += 1
                                ecx_73 = &ecx_73[4]
                                
                                if (eax_41 s>= edx_60)
                                    break
                        
                        int32_t* ecx_74 = *edi_1
                        int32_t xmm1_23 = (zx.o(0)).d
                        int32_t xmm0_60
                        
                        if (eax_41 == 0)
                            xmm0_60 = sub_706af0(ecx_74, edi_1[3], xmm1_23)
                        else if (eax_41 != edx_60)
                            int32_t eax_42 = eax_41 * 2
                            void* esi_15 = &ecx_74[eax_42 * 2]
                            float xmm2_26 =
                                (0f f- *(esi_15 - 8)) / (ecx_74[eax_42 * 2 + 2] f- *(esi_15 - 8))
                            float xmm0_63 = sub_706af0(esi_15 - 0x10, edi_1[3], xmm1_23)
                            float xmm0_64 = sub_706af0(esi_15, edi_1[3], (zx.o(0)).d)
                            xmm0_60 = sub_4ae110(*(esi_15 + 0xc), xmm2_26, xmm0_63, xmm0_64)
                        else
                            xmm0_60 = sub_706af0(ecx_74 + (edx_60 << 4) - 0x10, edi_1[3], xmm1_23)
                        
                        esi_8 = esi_2
                        edi = var_24
                        esi_8[0x42] = xmm0_60 ^ (data_8937c0.o).d
                    else if (eax_13 != 0x16)
                        edi = var_24
                        
                        if (eax_13 == 8)
                            esi_8 = esi_2
                            esi_8[0x50] = esi_5[2]
                        else if (eax_13 == 0xa)
                            esi_8 = esi_2
                            esi_8[0x52] = esi_5[2]
                        else if (eax_13 == 0xb)
                            esi_8 = esi_2
                            esi_8[0x54] = esi_5[2]
                        else if (eax_13 == 5)
                            esi_8 = esi_2
                            esi_8[0x56] = esi_5[2]
                        else if (eax_13 == 0x55)
                            esi_8 = esi_2
                            
                            if ((esi_5[2] | esi_5[3]) != 0)
                                esi_8[0x58] = 1
                        else if (eax_13 == 0x56)
                            esi_8 = esi_2
                            
                            if ((esi_5[2] | esi_5[3]) != 0)
                                esi_8[0x58] = 2
                        else if (eax_13 == 0x57)
                            esi_8 = esi_2
                            
                            if ((esi_5[2] | esi_5[3]) != 0)
                                esi_8[0x58] = 3
                        else if (eax_13 != 0x58 || (esi_5[2] | esi_5[3]) == 0)
                            esi_8 = esi_2
                        else
                            esi_8 = esi_2
                            esi_8[0x58] = 4
                    else
                        int32_t edx_67 = edi_1[2]
                        int32_t eax_43 = 0
                        
                        if (edx_67 s> 0)
                            int32_t* ecx_80 = *edi_1 + 8
                            
                            while (not(*ecx_80 f>= 0))
                                eax_43 += 1
                                ecx_80 = &ecx_80[4]
                                
                                if (eax_43 s>= edx_67)
                                    break
                        
                        int32_t* ecx_81 = *edi_1
                        int32_t xmm1_26 = (zx.o(0)).d
                        int32_t xmm0_68
                        
                        if (eax_43 == 0)
                            xmm0_68 = sub_706af0(ecx_81, edi_1[3], xmm1_26)
                        else if (eax_43 != edx_67)
                            int32_t eax_44 = eax_43 * 2
                            void* esi_16 = &ecx_81[eax_44 * 2]
                            float xmm2_29 =
                                (0f f- *(esi_16 - 8)) / (ecx_81[eax_44 * 2 + 2] f- *(esi_16 - 8))
                            float xmm0_71 = sub_706af0(esi_16 - 0x10, edi_1[3], xmm1_26)
                            float xmm0_72 = sub_706af0(esi_16, edi_1[3], (zx.o(0)).d)
                            xmm0_68 = sub_4ae110(*(esi_16 + 0xc), xmm2_29, xmm0_71, xmm0_72)
                        else
                            xmm0_68 = sub_706af0(ecx_81 + (edx_67 << 4) - 0x10, edi_1[3], xmm1_26)
                        
                        esi_8 = esi_2
                        edi = var_24
                        esi_8[0x43] = xmm0_68 ^ (data_8937c0.o).d
                    
                    eax_10 = *esi_5
                    *(eax_10 + esi_8 + 0x14) = 1
                    int32_t edx_19 = *esi_5
                    
                    if (edx_19 s< 0 || edx_19 s>= data_8cc608)
                        var_58_4 = "AttribTagGetField"
                        var_5c_4 = 0x8b
                        var_60_6 = "C:\x\ax2017\Engine\AttribMap.cpp"
                        ecx_86 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                    else
                        eax_10 = *(*(data_8cc604 + (edx_19 << 2)) + 0xc)
                        
                        if (eax_10 == 0)
                            var_58_4 = "AttribTagGetDefMap"
                            var_5c_4 = 0x1fe
                            var_60_6 = "C:\x\ax2017\Engine\AttribMap.cpp"
                            ecx_86 = "pAttribField->pDefMap"
                        else
                            if (*(eax_10 + 0x10) == 0xa)
                                eax_10.b = esi_5[2] != 0
                                *(edx_19 + esi_8 + 0x85) = eax_10.b
                            
                            eax_9 = esi_2
                            ecx_4 = var_2c_1 + 1
                            var_2c_1 = ecx_4
                            
                            if (ecx_4 s>= *eax_9)
                                break
                            
                            continue
                
                sub_63b870(eax_10, &data_801800, ecx_86, var_60_6, var_5c_4, var_58_4)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        result = &result_1[1]
        result_1 = result
        
        if (result s>= *(edi + 8))
            break

int32_t var_14_2 = 1

if (data_cf65bc != 0)
    char* result_2
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
