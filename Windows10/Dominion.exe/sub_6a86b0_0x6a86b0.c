// 函数: sub_6a86b0
// 地址: 0x6a86b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$??$sort@ABVparallel_policy@execution@std@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGSISymbolEntry@@@std@@@std@@@3@V<lambda_f12f7cc50901386c0acd4a75a468741a>@@$0A@@std@@YAXABVparallel_policy@execution@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGSISymbolEntry@@@std@@@std@@@0@1V<lambda_f12f7cc50901386c0acd4a75a468741a>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t var_bc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void*** esi = arg2
void*** var_88 = esi
uint32_t result = sub_6a82e0(arg1)
uint32_t result_1 = result
void* ecx = *(result + 4)
float xmm0 = *(ecx + 0x44)
xmm0 f- 0
result:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int32_t edx = 0
    int32_t var_84_1 = 0
    
    if (*(ecx + 0x10) s> 0)
        while (true)
            void** edx_1 = *(*(ecx + 0x18) + (edx << 2))
            void** var_78_1 = edx_1
            void* edi = edx_1[7]
            
            if (edi != 0)
                char* eax_4
                
                if (esi != 0)
                    int32_t edi_1 = 0
                    eax_4 = *(*edx_1 + 4)
                    char* var_7c_1 = eax_4
                    
                    if (esi[2] s> 0)
                        void** esi_1 = *esi
                        
                        while (true)
                            char* ecx_1 = eax_4
                            void* eax_5 = *esi_1
                            int32_t eax_7
                            
                            while (true)
                                edx_1.b = *eax_5
                                char temp0_1 = *ecx_1
                                bool c_1 = edx_1.b u< temp0_1
                                
                                if (edx_1.b == temp0_1)
                                    if (edx_1.b == 0)
                                        eax_7 = 0
                                        break
                                    
                                    edx_1.b = *(eax_5 + 1)
                                    char temp1_1 = ecx_1[1]
                                    c_1 = edx_1.b u< temp1_1
                                    
                                    if (edx_1.b == temp1_1)
                                        eax_5 += 2
                                        ecx_1 = &ecx_1[2]
                                        
                                        if (edx_1.b != 0)
                                            continue
                                        
                                        eax_7 = 0
                                        break
                                
                                eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
                                break
                            
                            if (eax_7 == 0)
                                goto label_6a8c46
                            
                            edi_1 += 1
                            esi_1 = &esi_1[4]
                            eax_4 = var_7c_1
                            
                            if (edi_1 s>= var_88[2])
                                edx_1 = var_78_1
                                break
                
                float xmm0_1 = edx_1[5]
                xmm0_1 f- 0
                eax_4:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                    | (xmm0_1 < 0f ? 1 : 0)
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (p_3)
                    void* ecx_2 = edx_1[1]
                    
                    if (*(ecx_2 + 0x6c) != 0)
                        if (*(edi + 4) != 0)
                            char const* const var_c0_11 = "SpineDraw"
                            int32_t var_c4_3 = 0x2d1
                            char const* const var_c8_2 = "C:\x\ax2017\Engine\Spine.cpp"
                            sub_63b870(eax_4, &data_801800, "Halt")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        float xmm0_2 = *(edi + 0x40)
                        xmm0_2 f- 0
                        eax_4:1.b = (xmm0_2 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2 | (xmm0_2 < 0f ? 1 : 0)
                        bool p_5 = unimplemented  {test ah, 0x44}
                        
                        if (p_5)
                            float xmm4_1 = *(ecx_2 + 0x54)
                            float xmm7_1 = *(ecx_2 + 0x50)
                            float xmm6_1 = *(ecx_2 + 0x64)
                            float xmm0_5 = *(ecx_2 + 0x5c)
                            float xmm3_4 =
                                xmm7_1 f* *(edi + 0x78) + xmm4_1 f* *(edi + 0x7c) f+ *(ecx_2 + 0x58)
                            float xmm3_5 = *(ecx_2 + 0x60)
                            float xmm1_3 =
                                xmm0_5 f* *(edi + 0x78) + xmm3_5 f* *(edi + 0x7c) + xmm6_1
                            float xmm5_2 = xmm7_1 f* *(edi + 0x60) + xmm4_1 f* *(edi + 0x64)
                            float var_6c_2 = xmm5_2
                            float xmm0_14 = xmm5_2 f+ *(ecx_2 + 0x58)
                            float xmm1_6 =
                                xmm0_5 f* *(edi + 0x60) + xmm3_5 f* *(edi + 0x64) + xmm6_1
                            float xmm5_4 = xmm7_1 f* *(edi + 0x68) + xmm4_1 f* *(edi + 0x6c)
                            float var_74_2 = xmm5_4
                            float xmm0_24 = xmm5_4 f+ *(ecx_2 + 0x58)
                            float xmm7_4 =
                                xmm7_1 f* *(edi + 0x70) + xmm4_1 f* *(edi + 0x74) f+ *(ecx_2 + 0x58)
                            float xmm1_8 = xmm0_5 f* *(edi + 0x68) + xmm3_5 f* *(edi + 0x6c)
                            float xmm2_3 = xmm0_5 f* *(edi + 0x70) + xmm3_5 f* *(edi + 0x74)
                            int128_t var_44 = *(edi + 0x80)
                            int32_t var_34_1 = *(edi + 0x98)
                            int32_t var_30_1 = *(edi + 0x9c)
                            int32_t var_2c_1 = *(edi + 0x90)
                            int128_t* esi_2 = edx_1[6]
                            int32_t ecx_3 = 0
                            int32_t var_28_1 = *(edi + 0x94)
                            float var_c8
                            float var_c4
                            float var_c0
                            
                            if (esi_2 != 0)
                                ecx_3 = sub_64b360((*esi_2).d, var_c8, var_c4, var_c0)
                            
                            void* eax_11 = *(result_1 + 4)
                            float var_a8_1 = edx_1[3] f* *(eax_11 + 0x3c) f* *(edi + 0x38)
                            float var_a4_1 = edx_1[4] f* *(eax_11 + 0x40) f* *(edi + 0x3c)
                            float var_a0_1 = edx_1[5] f* *(eax_11 + 0x44) f* *(edi + 0x40)
                            int32_t var_9c = sub_64b360(
                                *(eax_11 + 0x38) f* edx_1[2] f* *(edi + 0x34), var_c8, var_c4, 
                                var_c0)
                            int32_t var_98_1 = ecx_3
                            uint32_t result_3 = *(*edx_1 + 0x24)
                            void* esi_3 = *fsbase->ThreadLocalStoragePointer
                            
                            if (data_1a9a078 s> *(esi_3 + 8))
                                int32_t* var_c0_1 = &data_1a9a078
                                sub_75970e(&data_1a9a078)
                                
                                if (data_1a9a078 == 0xffffffff)
                                    int32_t var_14_1 = 0
                                    int32_t* var_c0_2 = &data_1a9a078
                                    data_1a9a07c = sub_69f030("sys/SpineTint.material", 5)
                                    int32_t var_14_2 = 0xffffffff
                                    __Init_thread_footer(&data_1a9a078)
                            
                            if (data_1a9a080 s> *(esi_3 + 8))
                                int32_t* var_c0_3 = &data_1a9a080
                                sub_75970e(&data_1a9a080)
                                
                                if (data_1a9a080 == 0xffffffff)
                                    int32_t var_14_3 = 1
                                    int32_t* var_c0_4 = &data_1a9a080
                                    data_1a9a084 = sub_69f030("sys/SpineTintAdditive.material", 5)
                                    int32_t var_14_4 = 0xffffffff
                                    __Init_thread_footer(&data_1a9a080)
                            
                            if (data_1a9a088 s> *(esi_3 + 8))
                                int32_t* var_c0_5 = &data_1a9a088
                                sub_75970e(&data_1a9a088)
                                
                                if (data_1a9a088 == 0xffffffff)
                                    int32_t var_14_5 = 2
                                    int32_t* var_c0_6 = &data_1a9a088
                                    data_1a9a08c = sub_69f030("sys/SpineTintMultiply.material", 5)
                                    int32_t var_14_6 = 0xffffffff
                                    __Init_thread_footer(&data_1a9a088)
                            
                            if (data_1a9a090 s> *(esi_3 + 8))
                                int32_t* var_c0_7 = &data_1a9a090
                                sub_75970e(&data_1a9a090)
                                
                                if (data_1a9a090 == 0xffffffff)
                                    int32_t var_14_7 = 3
                                    int32_t* var_c0_8 = &data_1a9a090
                                    data_1a9a094 = sub_69f030("sys/SpineTintScreen.material", 5)
                                    int32_t var_14_8 = 0xffffffff
                                    __Init_thread_footer(&data_1a9a090)
                            
                            uint32_t result_2 = result_3
                            char const* const ecx_10
                            
                            if (result_2 u> 3)
                                char const* const var_c0_10 = "SpineMaterial"
                                int32_t var_c4_2 = 0x269
                                ecx_10 = "Halt"
                            label_6a8c9e:
                                char const* const var_c8_1 = "C:\x\ax2017\Engine\Spine.cpp"
                                sub_63b870(result_2, &data_801800, ecx_10)
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            float esi_4
                            
                            switch (result_2)
                                case 0
                                    esi_4 = data_1a9a07c
                                case 1
                                    esi_4 = data_1a9a084
                                case 2
                                    esi_4 = data_1a9a08c
                                case 3
                                    esi_4 = data_1a9a094
                            
                            result_2 = result_1
                            int32_t* ecx_4 = *result_2
                            
                            if (ecx_4[1] != 0x23)
                                char const* const var_c0_9 = "SpineDefGet"
                                int32_t var_c4_1 = 0x1bd
                                ecx_10 = "assetPtr->assetType == ASSET_TYPE_SPINE"
                                goto label_6a8c9e
                            
                            void* eax_23 = sub_5af880(ecx_4)
                            float ecx_5 = *(edi + 0x44)
                            
                            if (*(eax_23 + 0x20) != 0)
                                ecx_5 = *(*(ecx_5 i+ 0x4c) + 0x1c)
                            
                            void* eax_25 = data_147abe4
                            var_c0 = esi_4
                            float xmm1_10 = *(eax_25 + 0x20)
                            var_c4 = ecx_5
                            var_c8 = 0f
                            float var_64 = xmm3_4 + xmm1_10
                            float xmm0_50 = *(eax_25 + 0x24)
                            float var_60_1 = xmm1_3 + xmm0_50
                            float var_5c_1 = xmm0_14 + xmm1_10
                            float var_58_1 = xmm1_6 + xmm0_50
                            float var_54_1 = xmm7_4 + xmm1_10
                            float var_50_1 = xmm2_3 + xmm6_1 + xmm0_50
                            float var_4c_1 = xmm0_24 + xmm1_10
                            float var_48_1 = xmm1_8 + xmm6_1 + xmm0_50
                            sub_6867a0(&var_9c, &var_44, &var_64, &var_9c, 0, var_c4, var_c0)
            
        label_6a8c46:
            result = result_1
            edx = var_84_1 + 1
            var_84_1 = edx
            ecx = *(result + 4)
            
            if (edx s>= *(ecx + 0x10))
                break
            
            esi = var_88

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
