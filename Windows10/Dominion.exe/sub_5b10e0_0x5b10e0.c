// 函数: sub_5b10e0
// 地址: 0x5b10e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?accept_message@?$single_assignment@I@Concurrency@@MAEPAV?$message@I@2@H@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_3c
int32_t* arg_4
sub_5bbfb0(&var_3c, &arg_4)
int32_t var_38
int32_t var_34
int32_t* esi_1 = *(arg3 + (zx.d(sub_5b0f20(var_3c, var_38, var_34)) << 2))

if (esi_1 == 0)
label_5b11f7:
    int32_t* var_28_3 = sub_5bbe50(&arg_4)
    sub_63b870(sub_4f7f30("Couldn't find network vector %s!\n"), &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Dominion\code\NeuralEigen.cpp", 0x7b, "find_vector")
else
    int32_t* edi_1 = arg_4
    
    while (true)
        char* ecx_1 = *esi_1
        int32_t* eax_5 = &arg_4
        
        if (arg4 u> 0xf)
            eax_5 = edi_1
        
        int32_t eax_7
        
        while (true)
            char edx = *ecx_1
            char temp0_1 = *eax_5
            bool c_1 = edx u< temp0_1
            
            if (edx == temp0_1)
                if (edx == 0)
                    eax_7 = 0
                    break
                
                edx = ecx_1[1]
                char temp1_1 = *(eax_5 + 1)
                c_1 = edx u< temp1_1
                
                if (edx == temp1_1)
                    ecx_1 = &ecx_1[2]
                    eax_5 += 2
                    
                    if (edx != 0)
                        continue
                    
                    eax_7 = 0
                    break
            
            eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
            break
        
        if (eax_7 == 0)
            int32_t result = esi_1[3]
            
            if (result == 0)
                sub_63b870(eax_7, &data_801800, "w_ptr->vector != NULL", 
                    "C:\x\ax2017\Jams\Dominion\code\NeuralEigen.cpp", 0x73, "find_vector")
                break
            
            if (arg4 u> 0xf)
                int32_t ecx_2 = arg4 + 1
                int32_t* eax_8 = edi_1
                
                if (ecx_2 u>= 0x1000)
                    edi_1 = eax_8[-1]
                    ecx_2 += 0x23
                    
                    if (eax_8 - edi_1 - 4 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                int32_t var_28_2 = ecx_2
                operator new(edi_1)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        esi_1 = esi_1[1]
        
        if (esi_1 == 0)
            goto label_5b11f7

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
