// 函数: sub_6d95c0
// 地址: 0x6d95c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770dc5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esi = arg1
struct _EXCEPTION_REGISTRATION_RECORD** var_1c = esi
struct _EXCEPTION_REGISTRATION_RECORD** edi

if (esi != 0)
    if (esi[1] != 2)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    edi = arg1
else
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    sub_69fd50(eax_3, "!Null\Null", &var_14, 2)
    struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = esi
    char* eax_4 = var_14
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3 = sub_69f030(ecx_1, esi + 2)
    esi = eax_3
    var_1c = esi
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    edi = esi

struct _EXCEPTION_REGISTRATION_RECORD** var_20 = esi

if (*edi == 0)
    sub_69f4a0(eax_3, 0, edi, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_5 = *edi
edi[7] = &edi[7]->Next + 1
struct _EXCEPTION_REGISTRATION_RECORD* Next = eax_5->Next
int32_t var_8_4 = 2
int32_t* Next_1 = Next->Next
int32_t* Next_2 = Next_1

if (Next_1 != 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*Next_1 s> 0)
        int32_t esi_1 = 0
        
        do
            void* edi_2 = Next_1[2] + esi_1
            
            if (*(edi_2 + 0x14) != 0)
                Next = (*(*data_147b070 + 0x2c))(*(edi_2 + 0x38))
                
                if (Next.b == 0)
                    Next = (*(*data_147b070 + 0x28))(*(edi_2 + 0x20), *(edi_2 + 0x18), 
                        *(edi_2 + 0x10), 0)
                    *(edi_2 + 0x38) = Next
                
                if (*(edi_2 + 0x2c) s> 0)
                    Next = (*(*data_147b070 + 0x38))(*(edi_2 + 0x3c))
                    
                    if (Next.b == 0)
                        int32_t edx_4 = *(edi_2 + 0x2c)
                        int32_t eax_12
                        eax_12.b = edx_4 != *(edi_2 + 0x28) * 2
                        Next = (*(*data_147b070 + 0x34))(*(edi_2 + 0x30), edx_4, zx.d(eax_12.b), 0, 
                            *(edi_2 + 0x38))
                        i = i_1
                        *(edi_2 + 0x3c) = Next
            
            Next_1 = Next_2
            i += 1
            esi_1 += 0x150
            i_1 = i
        while (i s< *Next_1)
        
        esi = var_1c

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return Next
