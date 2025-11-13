// 函数: sub_68b970
// 地址: 0x68b970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lock_and_call@V<lambda_f03950bc5685219e0bcd2087efbe011e>@@@@YAHW4__acrt_lock_id@@$$QAV<lambda_f03950bc5685219e0bcd2087efbe011e>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx_1

if (data_147abfc == 0)
    int32_t* eax_4 = sub_64bfd0(0x20c)
    eax_4[3] += 1
    
    if (*eax_4 == 0)
        sub_64be70(eax_4)
    
    int32_t* edi_1 = *eax_4
    *eax_4 = *edi_1
    memset(edi_1, 0, 0x20c)
    int32_t* var_14_1 = edi_1
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_1)(int32_t* arg1) = sub_693170
    `eh vector constructor iterator'(edi_1, 0xc, 0x15, PDBStream::PDBStream)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_2)(int32_t* arg1) = sub_693170
    int32_t var_8_1 = 0
    eax_3 = `eh vector constructor iterator'(&edi_1[0x3f], 0xc, 0x15, PDBStream::PDBStream)
    int32_t var_8_2 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD*** esi_2 = nullptr
    data_147abfc = edi_1
    edi_1[0x80] = sub_631870
    edi_1[0x81] = 0x77ecd8
    edi_1[0x82] = 0xc
    
    while (true)
        if (*(esi_2 + edi_1) == 0)
            eax_3 = sub_64c020(0x8000)
            *(esi_2 + edi_1) = eax_3
            *(esi_2 + edi_1 + 4) = 0x1fff
            int32_t edi_2 = data_147abfc
            
            if (*(edi_2 + esi_2 + 0xfc) == 0)
                eax_3 = sub_64c020(0x8000)
                *(edi_2 + esi_2 + 0xfc) = eax_3
                *(edi_2 + esi_2 + 0x100) = 0x1fff
                esi_2 = &esi_2[3]
                
                if (esi_2 s< 0xfc)
                    edi_1 = data_147abfc
                    continue
                
                int32_t result
                
                for (void** const i = &data_77ecdc; i s< 0x77ed3c; i = &i[2])
                    result = sub_68c150(**i)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
        
        var_24 = "XMap<class XString,struct Translation>::SetNumBuckets"
        var_28 = 0x74
        ecx_1 = "mNodeBuckets == NULL"
        var_2c = "C:\x\ax2017\Engine\xMap.h"
        break
else
    var_24 = "LocalizationInit"
    var_28 = 0x4f
    var_2c = "C:\x\ax2017\Engine\Localization.cpp"
    ecx_1 = "gTranslations == NULL"

sub_63b870(eax_3, &data_801800, ecx_1, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
