// 函数: sub_6261f0
// 地址: 0x6261f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b8ad
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_cf6498
int32_t esi = 0xc
char* arg_4
char* edi = arg_4
int32_t ecx = *(edi + 0x578c)
int32_t edx_1 = eax_3 * 0xc
int32_t eax_5 = ecx - edx_1

if (eax_5 s< 0xc)
    esi = eax_5

uint32_t eax_11 = sub_64e7a0(arg1)
sub_665db0(eax_11, &data_bf0f08, eax_11, 0x3f800000, 0, 0)
uint32_t eax_12 = sub_64e7a0(arg1)
sub_665db0(eax_12, &data_bf0f20, eax_12, 0x3f800000, 1, 0)
uint32_t eax_13 = sub_64e7a0(arg1)
sub_665db0(eax_13, &data_bf0f14, eax_13, 0x3f800000, 2, 0)
uint32_t eax_14 = sub_64e7a0(arg1)
sub_665db0(eax_14, &data_bf0f20, eax_14, 0x3f800000, 3, 0)
uint32_t eax_15 = sub_64e7a0(arg1)
sub_665db0(eax_15, &data_bf0f2c, eax_15, 0x3f800000, esi + 4, 0)
int32_t var_94 = 0xffffffff
sub_666120(esi + 5, &data_bf0ec0, arg1, esi + 5)
int32_t ecx_14 = edx_1
char const* const var_74_7
int32_t var_70_12
char const* const var_6c_15
void* eax_26
char* ecx_51

if (ecx_14 s>= esi + ecx_14)
label_6267ea:
    eax_26 = data_cc8d5c
    
    if (eax_26 != 0)
        void* edi_4 = arg2 - *(eax_26 + 0x7590)
        void* esi_2 = edi_4 + sub_4b95e0()
        
        if (edi_4 s>= 0)
            esi_2 = edi_4
        
        int32_t ecx_52 = sub_4b9480()[0x46a]
        
        if (eax_3 s<= 0)
            arg_4:3.b = 0
        
        if (eax_3 s> 0 || esi_2 s> 0)
            arg_4:3.b = 1
        
        if (eax_3 s< (ecx + 0xb) s/ 0xc - 1 || esi_2 s< ecx_52 - 1)
            uint32_t eax_62 = sub_64e7a0(arg1)
            sub_665db0(eax_62, &data_be5da4, eax_62, 0x3f800000, 0xffffffff, 0)
        
        if (arg_4:3.b != 0)
            uint32_t eax_63 = sub_64e7a0(arg1)
            sub_665db0(eax_63, &data_be5d98, eax_63, 0x3f800000, 0xffffffff, 0)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return esi + 5
    
    var_6c_15 = "GetClient"
    var_70_12 = 0x7b
    var_74_7 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_51 = "gClient"
else
    int32_t edx_4 = esi - 1
    int32_t var_40_1 = edx_4
    int32_t esi_1 = 4
    void* edi_2 = &edi[ecx_14 * 0x1c + 0x10]
    
    while (true)
        if (esi_1 - 4 + ecx_14 == edx_4)
            uint32_t eax_22 = sub_64e7a0(arg1)
            sub_665db0(eax_22, &data_bf0efc, eax_22, 0x3f800000, esi_1, 0)
        
        int32_t eax_23 = *(edi_2 - 8)
        
        if (eax_23 == 0)
            char* const var_24
            sub_4d47c0(&var_24, "dom_taptip_vp_token_header")
            int32_t var_8_14 = 0
            int32_t var_6c_9 = esi_1
            sub_666380(&var_24, &data_bf0ecc, arg1, &var_24)
            int32_t var_8_15 = 1
            
            if (data_cf65bc != 0)
                char* eax_44 = var_24
                
                if (eax_44 != 0 && *eax_44 != 0)
                    char* eax_45 = sub_63d4e0(&var_24)
                    int32_t temp3_1 = *(eax_45 + 4)
                    *(eax_45 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                        var_24 = &data_801800
            
            int32_t var_8_16 = 0xffffffff
            int32_t var_6c_10 = *(edi_2 - 4)
            char* const var_28
            sub_63df30(&var_28, "%d")
            int32_t var_8_17 = 2
            int32_t var_6c_11 = esi_1
            sub_666380(&var_28, &data_bf0ed8, arg1, &var_28)
            int32_t var_8_18 = 3
            
            if (data_cf65bc != 0)
                char* eax_47 = var_28
                
                if (eax_47 != 0 && *eax_47 != 0)
                    char* eax_48 = sub_63d4e0(&var_28)
                    int32_t temp4_1 = *(eax_48 + 4)
                    *(eax_48 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
                        var_28 = &data_801800
            
            int32_t var_8_19 = 0xffffffff
            int32_t var_6c_12 = *(edi_2 - 4)
            char* const var_2c
            sub_63df30(&var_2c, "%d")
            int32_t var_8_20 = 4
            int32_t var_6c_13 = esi_1
            sub_666380(&var_2c, &data_bf0ee4, arg1, &var_2c)
            int32_t var_8_21 = 5
            
            if (data_cf65bc != 0)
                char* eax_50 = var_2c
                
                if (eax_50 != 0 && *eax_50 != 0)
                    char* eax_51 = sub_63d4e0(&var_2c)
                    int32_t temp6_1 = *(eax_51 + 4)
                    *(eax_51 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                        var_2c = &data_801800
            
            int32_t var_8_22 = 0xffffffff
            char* const var_30
            sub_63d720(&var_30, &data_801800)
            int32_t var_8_23 = 6
            int32_t var_6c_14 = esi_1
            sub_666380(&var_30, &data_bf0ef0, arg1, &var_30)
            int32_t var_8_24 = 7
            
            if (data_cf65bc != 0)
                char* eax_53 = var_30
                
                if (eax_53 != 0 && *eax_53 != 0)
                    char* eax_54 = sub_63d4e0(&var_30)
                    int32_t temp7_1 = *(eax_54 + 4)
                    *(eax_54 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
                        var_30 = &data_801800
        else
            if (eax_23 != 1)
                eax_26 = eax_23 - 2
                
                if (eax_23 != 2)
                    var_6c_15 = "ScoresBreakdownRowsUpdate"
                    var_70_12 = 0xef3d
                    var_74_7 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx_51 = "Halt"
                    break
            
            uint32_t eax_27 = sub_4c89a0()
            void* eax_28
            int32_t ecx_18
            eax_28, ecx_18 = sub_571b30(*(edi_2 - 4), 0x18)
            int32_t var_6c_1 = 0
            sub_4e3fa0(eax_28, eax_28, &arg_4, eax_27, ecx_18)
            int32_t var_8_1 = 8
            int32_t var_6c_2 = esi_1
            sub_666380(&arg_4, &data_bf0ecc, arg1, &arg_4)
            int32_t var_8_2 = 9
            
            if (data_cf65bc != 0)
                char* eax_30 = arg_4
                
                if (eax_30 != 0 && *eax_30 != 0)
                    char* eax_31 = sub_63d4e0(&arg_4)
                    int32_t temp5_1 = *(eax_31 + 4)
                    *(eax_31 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                        arg_4 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
            
            if (*(edi_2 - 8) != 2)
                int32_t var_6c_4 = *(edi_2 + 4)
                char* const var_18
                sub_63df30(&var_18, "%d")
                int32_t var_8_6 = 0xc
                int32_t var_6c_5 = esi_1
                sub_666380(&var_18, &data_bf0ed8, arg1, &var_18)
                int32_t var_8_7 = 0xd
                
                if (data_cf65bc != 0)
                    char* eax_36 = var_18
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_37 = sub_63d4e0(&var_18)
                        int32_t temp8_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                            var_18 = &data_801800
            else
                char* const var_14
                sub_63d720(&var_14, &data_801800)
                int32_t var_8_4 = 0xa
                int32_t var_6c_3 = esi_1
                sub_666380(&var_14, &data_bf0ed8, arg1, &var_14)
                int32_t var_8_5 = 0xb
                
                if (data_cf65bc != 0)
                    char* eax_33 = var_14
                    
                    if (eax_33 != 0 && *eax_33 != 0)
                        char* eax_34 = sub_63d4e0(&var_14)
                        int32_t temp9_1 = *(eax_34 + 4)
                        *(eax_34 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                            var_14 = &data_801800
            
            int32_t var_8_8 = 0xffffffff
            int32_t var_6c_6 = *edi_2
            int32_t* var_1c
            sub_63df30(&var_1c, "%d")
            int32_t var_8_9 = 0xe
            int32_t var_6c_7 = esi_1
            int32_t* eax_39 = sub_666380(&var_1c, &data_bf0ee4, arg1, &var_1c)
            int32_t var_8_10 = 0xf
            
            if (data_cf65bc != 0)
                eax_39 = var_1c
                
                if (eax_39 != 0 && *eax_39 != 0)
                    eax_39 = sub_63d4e0(&var_1c)
                    int32_t temp10_1 = eax_39[1]
                    eax_39[1] -= 1
                    
                    if (temp10_1 == 1)
                        eax_39 = sub_64c080(eax_39, eax_39[3] + 0x10)
                        var_1c = &data_801800
            
            int32_t var_8_11 = 0xffffffff
            char* var_20
            sub_5925e0(eax_39, eax_27, &var_20, *(edi_2 - 4), *(edi_2 + 8), *(edi_2 + 0xc), 
                *(edi_2 + 0x10))
            int32_t var_8_12 = 0x10
            int32_t var_7c_1 = esi_1
            sub_666380(&var_20, &data_bf0ef0, arg1, &var_20)
            int32_t var_8_13 = 0x11
            
            if (data_cf65bc != 0)
                char* eax_41 = var_20
                
                if (eax_41 != 0 && *eax_41 != 0)
                    char* eax_42 = sub_63d4e0(&var_20)
                    int32_t temp11_1 = *(eax_42 + 4)
                    *(eax_42 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                        var_20 = &data_801800
        
        ecx_14 = edx_1
        esi_1 += 1
        edi_2 += 0x1c
        int32_t var_8_25 = 0xffffffff
        
        if (ecx_14 - 4 + esi_1 s>= esi + edx_1)
            goto label_6267ea
        
        edx_4 = var_40_1

sub_63b870(eax_26, &data_801800, ecx_51, var_74_7, var_70_12, var_6c_15)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
