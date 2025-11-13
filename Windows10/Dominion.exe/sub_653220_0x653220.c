// 函数: sub_653220
// 地址: 0x653220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ceae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_14 = 0
int32_t var_18 = 0x1a99060
sub_63d720(0x1a99194, &data_801800)
int32_t var_8_2 = 0
int32_t var_14_1 = 1
memset(0x1a99060, 0, 0x1e8)
void* edi = data_1724b0c

if (*(edi + 8) != 0)
    int32_t i_1 = 0
    int32_t i
    
    do
        int32_t eax_3 = *(edi + 4)
        int32_t ecx_3 = i_1 * 0xf
        i = i_1 + 1
        void* edx_1 = *(eax_3 + (ecx_3 << 2) + 0xc)
        int32_t* ecx_4 = eax_3 + (ecx_3 << 2)
        
        if (i s>= *(edi + 8))
            sub_69c840(eax_3, edx_1, 0x1a99060, ecx_4)
            break
        
        sub_69c840(eax_3, edx_1, 0x1a99060, ecx_4)
        i_1 = i
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return 0x1a99060
