// 函数: sub_4c0290
// 地址: 0x4c0290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_beta@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const var_14 = arg3
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_63d720(&var_14, "btnBack")
char* const esi = &data_801800
char* eax_3 = var_14
char* const ecx_1 = &data_801800
char* edx = *(arg4 + 4)

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t ecx_3

while (true)
    ebx.b = *edx
    char temp0_1 = *ecx_1
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_3 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = ecx_1[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            ecx_1 = &ecx_1[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
    break

if (ecx_3 == 0 || *(arg4 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        var_14 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b == 0)
    sub_63d720(&var_14, "btn_trash")
    char* const eax_4 = var_14
    char* const ecx_9 = &data_801800
    char* edx_3 = *(arg4 + 4)
    
    if (eax_4 != 0)
        ecx_9 = eax_4
    
    int32_t edi_1
    
    while (true)
        ebx.b = *edx_3
        char temp3_1 = *ecx_9
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = edx_3[1]
            char temp4_1 = ecx_9[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                edx_3 = &edx_3[2]
                ecx_9 = &ecx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
            var_14 = &data_801800
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_1 == 0)
        int32_t eax_6 = *(arg4 + 8)
        data_8dbc50 = eax_6
        data_8db6b0 = 0x20
        void* eax_7 = sub_68caf0(eax_6, nullptr, "dom_msg_delete_profile_header", edi_1)
        char const* const ecx_13
        
        if (eax_7 != 0)
            char* eax_8 = *eax_7
            ecx_13 = &data_801800
            
            if (eax_8 != 0)
                ecx_13 = eax_8
        else
            ecx_13 = "dom_msg_delete_profile_header"
        
        void* eax_10 =
            sub_68caf0(sub_63d8d0(&data_8db750, ecx_13), nullptr, "dom_msg_delete_profile_body", 0)
        char const* const ecx_14
        
        if (eax_10 != 0)
            char* eax_11 = *eax_10
            ecx_14 = &data_801800
            
            if (eax_11 != 0)
                ecx_14 = eax_11
        else
            ecx_14 = "dom_msg_delete_profile_body"
        
        void* eax_13 = sub_68caf0(sub_63d8d0(&data_8db754, ecx_14), nullptr, &data_801800, 0)
        char* const ecx_15
        
        if (eax_13 != 0)
            char* eax_14 = *eax_13
            ecx_15 = &data_801800
            
            if (eax_14 != 0)
                ecx_15 = eax_14
        else
            ecx_15 = &data_801800
        
        void* eax_16 = sub_68caf0(sub_63d8d0(&data_8db758, ecx_15), nullptr, &data_801800, 0)
        
        if (eax_16 != 0)
            char* eax_17 = *eax_16
            
            if (eax_17 != 0)
                esi = eax_17
        else
            esi = &data_801800
        
        sub_63d8d0(&data_8db75c, esi)
        data_8db760 = sub_4c0780
        char** eax_18
        eax_18.b = 0
        data_8db764 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_18
    
    sub_63d720(&var_14, "btn_profile")
    char* ecx_19 = &data_801800
    char* edx_6 = *(arg4 + 4)
    eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_19 = eax_3
    
    int32_t edi_3
    
    while (true)
        ebx.b = *edx_6
        char temp6_1 = *ecx_19
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                edi_3 = 0
                break
            
            ebx.b = edx_6[1]
            char temp7_1 = ecx_19[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                edx_6 = &edx_6[2]
                ecx_19 = &ecx_19[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_3 = 0
                break
        
        edi_3 = sbb.d(edi_1, edi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
        eax_3 = sub_63d4e0(&var_14)
        int32_t temp8_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
            var_14 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_3 == 0)
        void* eax_20 = data_8dbc44
        
        if (eax_20 != 0 && eax_20 != &data_801800)
            if (data_cf65bc != edi_3 && *eax_20 != 0)
                char* eax_21 = sub_63d4e0(&data_8dbc44)
                int32_t temp10_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
            
            data_8dbc44 = &data_801800
        
        data_8dbc40 = 0
        sub_4c01d0()
        void* edx_11 = data_cc8dc8
        void* eax_22 = *(arg4 + 8)
        int32_t ecx_24 = *(edx_11 + 0x1e1a0)
        
        if (eax_22 != ecx_24)
            void* ecx_30
            void* ecx_31
            
            if (eax_22 s>= 0 && eax_22 s< ecx_24)
                ecx_30 = eax_22 * 0x7868
                ecx_31 = ecx_30 + edx_11
            
            char const* const var_30
            int32_t var_2c
            char const* const var_28_7
            char* ecx_34
            
            if (eax_22 s< 0 || eax_22 s>= ecx_24 || ecx_30 == neg.d(edx_11))
                var_28_7 = "GetProfileBySlot"
                var_2c = 0x544
                var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                ecx_34 = "retval"
            else
                *(edx_11 + 0x1e1a4) = *(ecx_31 + 0x42b0)
                sub_4d9160(ecx_31)
                sub_61e010()
                void* eax_25 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                
                if (*(eax_25 + 0x42b4) == 2)
                    *(eax_25 + 0x42b4) = 0
                
                eax_22 = data_cc8d5c
                
                if (eax_22 != 0)
                    if (*(eax_22 + 0x18) == 3)
                        *(eax_22 + 0x75b0) = 1
                    else
                        sub_4aea20()
                    
                    sub_4c01d0()
                    data_cc8dc8
                    sub_4d8ad0(&data_801800)
                    char* eax_26
                    eax_26.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_26
                
                var_28_7 = "GetClient"
                var_2c = 0x7b
                var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                ecx_34 = "gClient"
            
            sub_63b870(eax_22, &data_801800, ecx_34, var_30, var_2c, var_28_7)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d720(&var_14, &data_801800)
        int32_t var_8_7 = 3
        data_8db6b0 = 0x22
        data_8db768 = &data_8dbc60
        data_8db770 = sub_4c0890
        data_8db774 = sub_4bfb50
        sub_63d850(&data_8db76c, &var_14)
        data_8db778 = 1
        int32_t var_8_8 = 4
        
        if (data_cf65bc != 0)
            eax_3 = var_14
            
            if (eax_3 != 0 && *eax_3 != 0)
                eax_3 = sub_63d4e0(&var_14)
                int32_t temp11_1 = *(eax_3 + 4)
                *(eax_3 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
                    int32_t* eax_23
                    eax_23.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_23
else
    data_8db660 = 5

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
