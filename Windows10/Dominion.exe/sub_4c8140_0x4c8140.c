// 函数: sub_4c8140
// 地址: 0x4c8140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg4) + 0x18bc) = sub_4c5f50
*(sub_64e7a0(arg4) + 0x18c0) = sub_4c5eb0
uint32_t eax_5 = sub_64e7a0(arg4)
sub_665db0(eax_5, &data_8dc2fc, eax_5, 0x3f800000, 0xffffffff, 0)
uint32_t eax_6 = sub_64e7a0(arg4)
int32_t edx = sub_4c7d90(sub_665db0(eax_6, &data_8dc320, eax_6, 0x3f800000, 0xffffffff, 0), 
    &data_8dc0bc, &data_8dbfbc, &data_8dc0c0, &data_8dc140)

if (data_8dc0bc s>= 0x32)
    uint32_t eax_8 = sub_64e7a0(arg4)
    edx = sub_665db0(eax_8, &data_8dbc04, eax_8, 0x3f800000, 0xffffffff, 0)

int32_t eax_24 = data_8dbfb0
int32_t var_2c
void** esi_1

if (eax_24 u> 3)
    char const* const var_28_7 = "MultiplayerUpdate"
    var_2c = 0x1ea4
else
    switch (eax_24)
        case 0
            void* ebx_2 = nullptr
            
            for (void* i = &data_19e57dc; i s< 0x19e58d8; )
                uint32_t eax_18
                int32_t ecx_12
                
                if (*i != "tblGames" || *(i - 4) != arg4 || *(i + 4) != ebx_2 || *(i + 8) != 0)
                label_4c835b:
                    ecx_12 = sub_67be20(ebx_2)
                    *(i + 0x1c) = ecx_12
                    
                    if (ecx_12 != 0)
                        *i = "tblGames"
                        *(i - 4) = arg4
                        *(i + 4) = ebx_2
                        *(i + 8) = 0
                        eax_18 = sub_64e7a0(ecx_12)
                        sub_665db0(eax_18, &data_8dc158, eax_18, 0x3f800000, 0xffffffff, 0)
                else
                    ecx_12 = *(i + 0x1c)
                    
                    if (ecx_12 == 0)
                        goto label_4c835b
                    
                    uint32_t eax_14 = zx.d(ecx_12.w)
                    
                    if (eax_14 u>= data_c23bac
                            || *(eax_14 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_12)
                        goto label_4c835b
                    
                    eax_18 = sub_64e7a0(ecx_12)
                    sub_665db0(eax_18, &data_8dc158, eax_18, 0x3f800000, 0xffffffff, 0)
                i += 0x24
                ebx_2 += 1
            
            uint32_t eax_19 = sub_64e7a0(arg4)
            sub_665db0(eax_19, &data_8dc2f0, eax_19, 0x3f800000, 0xffffffff, 0)
            int32_t eax_22 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71fc) & 1
            
            if (eax_22 == 0)
                esi_1 = &data_8dc308
            label_4c840d:
                uint32_t eax_25 = sub_64e7a0(arg4)
                sub_665db0(eax_25, esi_1, eax_25, 0x3f800000, 0xffffffff, 0)
                int32_t eax_26 = sub_4bb9f0(0x19e58d4, arg4, "inp_code")
                void* eax_27
                uint32_t eax_28
                
                if (data_c23be0 == eax_26)
                    eax_28 = sub_64e7a0(arg4)
                    eax_27 = sub_665db0(eax_28, &data_8dc344, eax_28, 0x3f800000, 0xffffffff, 0)
                else
                    eax_27 = data_8dc144
                    
                    if (eax_27 != 0 && *eax_27 != 0)
                        eax_28 = sub_64e7a0(arg4)
                        eax_27 = sub_665db0(eax_28, &data_8dc344, eax_28, 0x3f800000, 0xffffffff, 0)
                int32_t var_28_6 = 0xffffffff
                sub_666380(eax_27, &data_8dc32c, arg4, &data_8dc144)
                var_14 = &data_801800
                int32_t var_8_1 = 0
                
                if (sub_67c0d0(arg4, &var_14) == 0)
                    sub_63d850(&var_14, &data_8dc144)
                
                char* const esi_2 = var_14
                char* const ecx_26 = &data_801800
                
                if (esi_2 != 0)
                    ecx_26 = esi_2
                
                if (sub_4c5e40(ecx_26) == 0)
                    uint32_t eax_31 = sub_64e7a0(arg4)
                    sub_665db0(eax_31, &data_8dc338, eax_31, 0x3f800000, 0xffffffff, 0)
                
                void* eax_32 = data_cc8d5c
                
                if (eax_32 == 0)
                    sub_63b870(eax_32, &data_801800, "gClient", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                if (*(eax_32 + 0x7694) != 0)
                    uint32_t eax_33 = sub_64e7a0(arg4)
                    sub_665db0(eax_33, &data_8dbc28, eax_33, 0x3f800000, 0xffffffff, 0)
                
                void* result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                
                if (*(result + 0x71e0) == 1)
                    uint32_t eax_34 = sub_64e7a0(arg4)
                    result = sub_665db0(eax_34, &data_8dbc34, eax_34, 0x3f800000, 0xffffffff, 0)
                
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                    result = sub_63d4e0(&var_14)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            eax_24 = eax_22 - 1
            
            if (eax_22 == 1)
                esi_1 = &data_8dc314
                goto label_4c840d
            
            char const* const var_28_5 = "MultiplayerUpdate"
            var_2c = 0x1e9e
        case 1, 2
            if (eax_24 != 1)
                int32_t var_28_2 = 1
                sub_4c7f30(eax_24, edx, arg4)
                esi_1 = &data_8dc2d8
            else
                int32_t var_28_1 = 0
                sub_4c7f30(eax_24, edx, arg4)
                esi_1 = &data_8dc2e4
            
            goto label_4c840d
        case 3
            void* ebx_1 = nullptr
            
            for (char** i_1 = &data_19e57dc; i_1 s< 0x19e58d8; )
                uint32_t eax_13
                int32_t ecx_9
                
                if (*i_1 != "tblGames" || i_1[-1] != arg4 || i_1[1] != ebx_1 || i_1[2] != 0)
                label_4c82ac:
                    ecx_9 = sub_67be20(ebx_1)
                    i_1[7] = ecx_9
                    
                    if (ecx_9 != 0)
                        *i_1 = "tblGames"
                        i_1[-1] = arg4
                        i_1[1] = ebx_1
                        i_1[2] = 0
                        eax_13 = sub_64e7a0(ecx_9)
                        sub_665db0(eax_13, &data_8dc158, eax_13, 0x3f800000, 0xffffffff, 0)
                else
                    ecx_9 = i_1[7]
                    
                    if (ecx_9 == 0)
                        goto label_4c82ac
                    
                    uint32_t eax_9 = zx.d(ecx_9.w)
                    
                    if (eax_9 u>= data_c23bac || *(eax_9 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_9)
                        goto label_4c82ac
                    
                    eax_13 = sub_64e7a0(ecx_9)
                    sub_665db0(eax_13, &data_8dc158, eax_13, 0x3f800000, 0xffffffff, 0)
                i_1 = &i_1[9]
                ebx_1 += 1
            
            esi_1 = &data_8dc2cc
            goto label_4c840d
sub_63b870(eax_24, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
    var_2c, "MultiplayerUpdate")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
