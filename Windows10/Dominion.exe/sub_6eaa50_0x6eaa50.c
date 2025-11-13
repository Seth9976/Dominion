// 函数: sub_6eaa50
// 地址: 0x6eaa50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lowio_lock_fh_and_call@V<lambda_66567acadc90904ea62d5b5218c83326>@@@@YAHH$$QAV<lambda_66567acadc90904ea62d5b5218c83326>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
char* edx = *edi
char* const ebx = &data_801800
char* const arg_4
uint32_t esi = arg_4
char* const eax_3 = &data_801800

if (edx != 0)
    eax_3 = edx

arg1.b = eax_3[esi]

if (arg1.b u>= 0x80)
    eax_3.b = arg1.b
    eax_3.b &= 0xe0
    
    if (eax_3.b != 0xc0)
        eax_3.b = arg1.b
        eax_3.b &= 0xf0
        
        if (eax_3.b != 0xe0)
            arg1.b &= 0xf8
            
            if (arg1.b != 0xf0)
                sub_63b870(eax_3, &data_801800, "!Xutf8_is_invalid_lead_char(mText + charIndex)", 
                    "C:\x\ax2017\Engine\UITextBox.cpp", 0x2b1, "UITextBox::GetCharacterX")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn

arg_4 = &data_801800
int32_t var_8_1 = 0
char* const eax_4 = &data_801800

if (edx != 0)
    eax_4 = edx

sub_63db30(&arg_4, eax_4, esi)
uint32_t eax_6 = sub_6ea9d0(edi) - 1

if (eax_6 u<= 7)
    eax_6 = zx.d(lookup_table_6ead10[eax_6])
    
    switch (eax_6)
        case 0
            char* const esi_1 = arg_4
            int32_t* ecx_2 = edi[0xf]
            
            if (esi_1 != 0)
                ebx = esi_1
            
            char* eax_7
            float xmm0
            
            if (ecx_2 == 0)
                eax_7, xmm0 = sub_6b43a0(edi[0xe], ebx, edi[0x13], edi[0x14])
            else
                int32_t* var_2c_1 = ecx_2
                eax_7, xmm0 = sub_6417e0(ecx_2, ebx, edi[0x10], edi[0x13])
            
            float var_14_1 = edi[0xa] f+ edi[4] f+ edi[8] + xmm0 f* edi[0x12]
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                eax_7 = sub_63d4e0(&arg_4)
                int32_t temp1_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp1_1 == 1)
                    eax_7 = sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        case 1
            char* eax_8 = *edi
            char* const edx_4 = &data_801800
            int32_t* ecx_8 = edi[0xf]
            
            if (eax_8 != 0)
                edx_4 = eax_8
            
            float xmm0_8
            
            if (ecx_8 == 0)
                xmm0_8 = sub_6b43a0(edi[0xe], edx_4, edi[0x13], edi[0x14]) f* edi[0x12]
            else
                int32_t* var_2c_2 = ecx_8
                xmm0_8 = sub_6417e0(ecx_8, edx_4, edi[0x10], edi[0x13]) f* edi[0x12]
            
            char* const esi_2 = arg_4
            int32_t* ecx_10 = edi[0xf]
            
            if (esi_2 != 0)
                ebx = esi_2
            
            uint32_t eax_9
            float xmm0_10
            
            if (ecx_10 == 0)
                eax_9, xmm0_10 = sub_6b43a0(edi[0xe], ebx, edi[0x13], edi[0x14])
            else
                int32_t* var_2c_3 = ecx_10
                eax_9, xmm0_10 = sub_6417e0(ecx_10, ebx, edi[0x10], edi[0x13])
            
            int32_t var_14_4 = edi[6] f* 0.5f f+ edi[4] f+ edi[0xa] f+ edi[8] - xmm0_8 * 0.5f
                + xmm0_10 f* edi[0x12]
            int32_t var_8_3 = 2
            
            if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                eax_9 = sub_63d4e0(&arg_4)
                int32_t temp2_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp2_1 == 1)
                    eax_9 = sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9

sub_63b870(eax_6, &data_801800, "Halt", "C:\x\ax2017\Engine\UITextBox.cpp", 0x2c5, 
    "UITextBox::GetCharacterX")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
