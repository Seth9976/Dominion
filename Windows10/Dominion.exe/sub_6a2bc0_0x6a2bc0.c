// 函数: sub_6a2bc0
// 地址: 0x6a2bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f69d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
char* eax_3

if (*esi != 0)
label_6a2c18:
    eax_3 = esi[1]
    
    if (eax_3 == 3)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = sub_6a0f60(esi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    if (eax_3 == 2)
        struct _EXCEPTION_REGISTRATION_RECORD* eax_6 = sub_6d95c0(esi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    if (eax_3 == 4)
        sub_6d8ed0(esi, 0)
        int32_t eax_7 = sub_6d8ed0(esi, 1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    if (eax_3 == 0x15)
        int32_t eax_9 = (*(*data_147abec + 0x3c))(esi)
        
        if (esi[1] != 0x15)
            sub_63b870(eax_9, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
                "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        eax_3 = sub_5af880(esi)
        int32_t i = 0
        
        if (*(eax_3 + 0x30) s> 0)
            int32_t eax_10
            
            do
                eax_10 = *(eax_3 + 0x20)
                
                if (*(eax_10 + (i << 3)) != 0)
                    eax_10 = sub_6a2bc0(eax_2)
                
                i += 1
            while (i s< *(eax_3 + 0x30))
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10
    else if (eax_3 == 0x1d)
        int32_t* var_14_1 = esi
        
        if (*esi == 0)
            sub_69f4a0(eax_3, 0, esi, 1)
        
        esi[7] += 1
        int32_t var_8_1 = 2
        eax_3 = sub_6edec0(**esi)
        esi[7] -= 1
else
    eax_3 = sub_6c5b80(arg1, 0)
    
    if (*esi != 0)
        char* eax_4 = esi[8]
        char* const ecx = &data_801800
        
        if (eax_4 != 0)
            ecx = eax_4
        
        strstr(ecx, "campai")
        goto label_6a2c18

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
