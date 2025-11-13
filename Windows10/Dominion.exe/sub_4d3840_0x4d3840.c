// 函数: sub_4d3840
// 地址: 0x4d3840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const arg_4
char* esi = *(arg_4 + 4)
sub_63d720(&arg_4, "btn_join")
char* eax_4 = arg_4
char* const ecx_1 = &data_801800

if (eax_4 != 0)
    ecx_1 = eax_4

int32_t esi_2

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            esi_2 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    eax_4 = sub_63d4e0(&arg_4)
    int32_t temp3_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp3_1 == 1)
        eax_4 = sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    void* esi_3 = data_cc8d5c
    char const* const var_30
    int32_t var_2c_1
    char const* const var_28_1
    char* ecx_4
    
    if (esi_3 == 0)
    label_4d3a48:
        var_28_1 = "GetClient"
        var_2c_1 = 0x7b
        ecx_4 = "gClient"
        var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    label_4d3a5e:
        sub_63b870(eax_4, &data_801800, ecx_4, var_30, var_2c_1, var_28_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_5 = *(esi_3 + 0x7694)
    
    if (eax_5 != 1)
        eax_4 = eax_5 - 2
        
        if (eax_5 != 2)
            var_28_1 = "MatchmakingClick"
            var_2c_1 = 0x2ddc
            var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
            ecx_4 = "Halt"
            goto label_4d3a5e
        
        int32_t edi_1 = *(esi_3 + 0x7698)
        int32_t* var_18
        eax_4 = sub_4bad70(esi_3 + 0x507c, &var_18)
        int32_t* i_1
        
        for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
            if (*i == edi_1)
                eax_4 = sub_4b0e60(i[0x4ca])
                esi_3 = data_cc8d5c
                break
            
            eax_4 = sub_4baf10(var_18, &i_1)
        
        if (esi_3 == 0)
            goto label_4d3a48
        
        *(esi_3 + 0x7694) = 0
        *(esi_3 + 0x7698) = 0
        sub_4d46e0(9, 0)
        int32_t eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    *(esi_3 + 0x7694) = 0
    *(esi_3 + 0x7698) = 0
    sub_4d46e0(9, 0)
    eax_4 = data_cc8d5c
    arg_4 = nullptr
    
    if (eax_4 == 0)
        goto label_4d3a48
    
    if (*(eax_4 + 0x18) == 3)
        eax_4 = *(eax_4 + 0x14)
        void* ecx_10 = data_147abf4
        
        if (eax_4 != 0)
            uint32_t edx_5 = zx.d(eax_4.w)
            
            if (edx_5 u< *(ecx_10 + 4))
                void* esi_5 = edx_5 * 0x64 + *ecx_10
                
                if (*(esi_5 + 0x60) == eax_4 && esi_5 != 0)
                    int32_t var_28_4 = 0xf42bd
                    sub_689e00(eax_4, 4, esi_5 + 0x50)
                    sub_689be0(&arg_4, 4, esi_5 + 0x50, &arg_4)

eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
