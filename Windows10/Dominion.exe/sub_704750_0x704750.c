// 函数: sub_704750
// 地址: 0x704750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lock_and_call@V<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104>@@@@YAXW4__acrt_lock_id@@$$QAV<lambda_b8d4b9c228a6ecc3f80208dbb4b4a104>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_8
int32_t result

if (arg_8 == 0)
    int32_t* edi_1 = arg2
    int32_t* ebx_1
    int32_t* esi_1
    
    if (edi_1 != 0)
        if (edi_1[1] != 4)
            sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
                "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        esi_1 = edi_1
        ebx_1 = edi_1
    else
        sub_69fd50(eax_3, "!Null\Null", &arg_8, 4)
        int32_t* var_8_1 = edi_1
        char* eax_4 = arg_8
        char* ecx_3 = &data_801800
        
        if (eax_4 != 0)
            ecx_3 = eax_4
        
        eax_3 = sub_69f030(ecx_3, &edi_1[1])
        esi_1 = eax_3
        int32_t var_8_2 = 1
        
        if (data_cf65bc != edi_1)
            eax_3 = arg_8
            
            if (eax_3 != 0 && *eax_3 != 0)
                eax_3 = sub_63d4e0(&arg_8)
                int32_t temp1_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp1_1 == 1)
                    eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                    arg_8 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        ebx_1 = esi_1
    
    arg2 = esi_1
    
    if (*ebx_1 == 0)
        sub_69f4a0(eax_3, 0, ebx_1, 1)
    
    int32_t* eax_5 = *ebx_1
    ebx_1[7] += 1
    char* eax_6 = *eax_5
    arg_8 = eax_6
    int32_t var_8_4 = 2
    void* ebx_2 = *(eax_6 + 8)
    
    if (ebx_2 == 0)
        result = 0
    else
        uint32_t eax_7 = sub_703fc0(eax_6, *(ebx_2 + 0x38), 0x8b31, edi_1)
        uint32_t var_14_1 = eax_7
        
        if (eax_7 != 0)
            char* eax_9 = &arg_8[0x28]
            arg_8 = eax_9
            void* ebx_3 = *(eax_9 + 8)
            eax_7 = sub_703fc0(eax_9, *(ebx_3 + 0x38), 0x8b30, edi_1)
            
            if (eax_7 != 0)
                uint32_t eax_10 = sub_703ed0(var_14_1, eax_7)
                
                if (eax_10 == 0)
                    result = 0
                else
                    int32_t* eax_11 = sub_706a30(arg1 + 0x424c)
                    char* edx_8 = arg_8
                    *eax_11 = eax_10
                    eax_11[1] = 3
                    sub_703c40(eax_11, edx_8, eax_10, eax_11)
                    int32_t edi_3 = *eax_11
                    eax_11[0x41] = (*__glewGetAttribLocation)(edi_3, "Position")
                    eax_11[0x42] = (*__glewGetAttribLocation)(edi_3, "Normal")
                    eax_11[0x43] = (*__glewGetAttribLocation)(edi_3, "Tangent")
                    eax_11[0x44] = (*__glewGetAttribLocation)(edi_3, "Binormal")
                    eax_11[0x45] = (*__glewGetAttribLocation)(edi_3, "Color0")
                    eax_11[0x46] = (*__glewGetAttribLocation)(edi_3, "Color1")
                    eax_11[0x47] = (*__glewGetAttribLocation)(edi_3, "TexCoord0")
                    eax_11[0x48] = (*__glewGetAttribLocation)(edi_3, "TexCoord1")
                    eax_11[0x49] = (*__glewGetAttribLocation)(edi_3, "BlendIndices")
                    eax_11[0x4a] = (*__glewGetAttribLocation)(edi_3, "BlendWeights")
                    eax_11[0x4b] = (*__glewGetAttribLocation)(edi_3, "gWorld")
                    eax_11[0x4c] = (*__glewGetAttribLocation)(edi_3, "gWorldViewProj")
                    result = eax_11[0x52]
            else
                sub_703fc0(eax_7, *(ebx_3 + 0x48), 0x8b30, edi_1)
                result = 0
        else
            sub_703fc0(eax_7, *(ebx_2 + 0x48), 0x8b31, edi_1)
            result = 0
    
    if (esi_1 != 0)
        esi_1[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
