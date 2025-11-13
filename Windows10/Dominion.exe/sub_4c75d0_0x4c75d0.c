// 函数: sub_4c75d0
// 地址: 0x4c75d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76311d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
char* edx
ecx, edx = __chkstk(0x3330)
char* ebx
char* var_14 = ebx
char* esi
char* const var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
var_18 = edx

if (arg2 == 1)
    arg1[0xa]
    arg1[0xc]
    void var_3340
    int32_t var_19b0[0x272]
    memcpy(&var_19b0, sub_4deeb0(&var_3340), 0x1990)
    
    if (sub_4e4720(&var_19b0) == 0)
        int32_t esi_1 = 0
        void var_fe8
        void* ecx_6 = &var_fe8
        
        for (int32_t i = 0; i s< 0x20; )
            int32_t eax_7 = *ecx_6
            
            if (eax_7 == 0)
                break
            
            if (eax_7 != 0x13 && eax_7 != 2)
                esi_1 += 1
            
            i += 1
            ecx_6 += 0x10
        
        if (esi_1 != 0)
            uint32_t eax_8 = sub_64e7a0(ecx)
            sub_665db0(eax_8, &data_8dc284, eax_8, 0x3f800000, 0xffffffff, 0)
            int32_t var_2c_2 = esi_1
            sub_63df30(&var_14, "%d")
            int32_t var_8_1 = 0
            int32_t var_38_1 = 0xffffffff
            sub_666380(&var_14, &data_8dc290, ecx, &var_14)
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                char* eax_10 = var_14
                
                if (eax_10 != 0 && *eax_10 != 0)
                    char* eax_11 = sub_63d4e0(&var_14)
                    int32_t temp6_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                        var_14 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
    else
        uint32_t eax_6 = sub_64e7a0(ecx)
        sub_665db0(eax_6, &data_8dc26c, eax_6, 0x3f800000, 0xffffffff, 0)
    
    int32_t ebx_1
    
    if (data_19e574c != "tbl_ico_rules" || data_19e5748 != ecx || data_19e5750 != 0xffffffff)
    label_4c7788:
        ebx_1 = sub_67bd70(ecx, "tbl_ico_rules")
        data_19e5768 = ebx_1
        
        if (ebx_1 != 0)
            data_19e574c = "tbl_ico_rules"
            data_19e5748 = ecx
            data_19e5750 = 0xffffffff
    else
        ebx_1 = data_19e5768
        
        if (ebx_1 == 0)
            goto label_4c7788
        
        uint32_t eax_12 = zx.d(ebx_1.w)
        
        if (eax_12 u>= data_c23bac || *(eax_12 * 0x18d0 + data_c23ba8 + 0x18c8) != ebx_1)
            goto label_4c7788
    
    int32_t esi_2
    
    if (data_19e5770 != "img_bg_strictness" || data_19e576c != ecx || data_19e5774 != 0xffffffff)
    label_4c7800:
        esi_2 = sub_67bd70(ecx, "img_bg_strictness")
        data_19e578c = esi_2
        
        if (esi_2 != 0)
            data_19e5770 = "img_bg_strictness"
            data_19e576c = ecx
            data_19e5774 = 0xffffffff
    else
        esi_2 = data_19e578c
        
        if (esi_2 == 0)
            goto label_4c7800
        
        uint32_t eax_16 = zx.d(esi_2.w)
        
        if (eax_16 u>= data_c23bac || *(eax_16 * 0x18d0 + data_c23ba8 + 0x18c8) != esi_2)
            goto label_4c7800
    
    int32_t var_2b8
    
    if (var_2b8 u> 4)
        sub_63b870(var_2b8, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x1c9c, "DisplayNetworkGame")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint32_t eax_22
    
    switch (var_2b8)
        case 1
            uint32_t eax_23 = sub_64e7a0(ebx_1)
            sub_665db0(eax_23, &data_8dc2a8, eax_23, 0x3f800000, 0xffffffff, 0)
            eax_22 = sub_64e7a0(esi_2)
            sub_665db0(eax_22, &data_8dc2a8, eax_22, 0x3f800000, 0xffffffff, 0)
        case 2
            uint32_t eax_21 = sub_64e7a0(ebx_1)
            sub_665db0(eax_21, &data_8dc29c, eax_21, 0x3f800000, 0xffffffff, 0)
            eax_22 = sub_64e7a0(esi_2)
            sub_665db0(eax_22, &data_8dc29c, eax_22, 0x3f800000, 0xffffffff, 0)
        case 3
            uint32_t eax_24 = sub_64e7a0(ebx_1)
            sub_665db0(eax_24, &data_8dc2b4, eax_24, 0x3f800000, 0xffffffff, 0)
            eax_22 = sub_64e7a0(esi_2)
            sub_665db0(eax_22, &data_8dc2b4, eax_22, 0x3f800000, 0xffffffff, 0)
        case 4
            uint32_t eax_25 = sub_64e7a0(ebx_1)
            sub_665db0(eax_25, &data_8dc2c0, eax_25, 0x3f800000, 0xffffffff, 0)
            eax_22 = sub_64e7a0(esi_2)
            sub_665db0(eax_22, &data_8dc2c0, eax_22, 0x3f800000, 0xffffffff, 0)
    
    int32_t eax_26 = sub_4bb9f0(0x19e5790, ecx, "tbl_ico_time")
    int32_t eax_27 = sub_4bb9f0(0x19e57b4, ecx, "img_bg_time")
    
    if (arg1[8] == 5)
        uint32_t eax_29 = sub_64e7a0(eax_26)
        sub_665db0(eax_29, &data_8dc278, eax_29, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_30 = sub_64e7a0(eax_27)
        sub_665db0(eax_30, &data_8dc278, eax_30, 0x3f800000, 0xffffffff, 0)

int32_t var_1c_1 = 0
int32_t eax_31
int32_t edx_6
eax_31, edx_6 = sub_6245e0(2)
void* eax_34 = sub_624450(eax_31 + modu.dp.d(0:var_18, edx_6 - eax_31))
uint32_t eax_35 = sub_64e7a0(ecx)
sub_665db0(eax_35, eax_34, eax_35, 0x3f800000, 0xffffffff, 0)
int32_t* ecx_36 = arg1
int32_t i_1 = 0
int32_t* ebx_3 = &ecx_36[0x16]

do
    if (i_1 s>= ecx_36[0x468])
        sub_63d720(&var_18, &data_801800)
        int32_t var_8_7 = 5
        int32_t i_3 = i_1
        sub_666380(&var_18, &data_8dc14c, ecx, &var_18)
        int32_t var_8_8 = 6
        
        if (data_cf65bc != 0)
            char* eax_48 = var_18
            
            if (eax_48 != 0 && *eax_48 != 0)
                char* eax_49 = sub_63d4e0(&var_18)
                int32_t temp3_1 = *(eax_49 + 4)
                *(eax_49 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                    var_18 = &data_801800
    else
        sub_4b06c0(&ebx_3[-6], ecx_36, &var_14, &ebx_3[-6], &var_20)
        int32_t var_8_4 = 2
        int32_t i_2 = i_1
        sub_666380(&var_14, &data_8dc14c, ecx, &var_14)
        int32_t eax_38 = ebx_3[-1]
        
        if (eax_38 != 0)
            var_1c_1 += 1
            uint32_t eax_42
            
            if (eax_38 == 2)
                int32_t eax_41 = *ebx_3
                
                if (eax_41 == 0)
                    eax_42 = sub_64e7a0(ecx)
                    sub_665db0(eax_42, &data_8dc23c, eax_42, 0x3f800000, i_1, 0)
                else if (eax_41 == 1)
                    eax_42 = sub_64e7a0(ecx)
                    sub_665db0(eax_42, &data_8dc248, eax_42, 0x3f800000, i_1, 0)
            else if (eax_38 == 1)
                if (ebx_3[2] == eax_38)
                    uint32_t eax_43 = sub_64e7a0(ecx)
                    sub_665db0(eax_43, &data_8dc260, eax_43, 0x3f800000, i_1, 0)
                
                void* eax_44 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                int32_t ecx_47 = *ebx_3
                int32_t eax_45
                
                if (ecx_47 != *(eax_44 + 0x4250))
                    eax_45 = sub_4b9280(ecx_47)
                
                if (ecx_47 == *(eax_44 + 0x4250) || eax_45 == 1)
                    eax_42 = sub_64e7a0(ecx)
                    sub_665db0(eax_42, &data_8dc254, eax_42, 0x3f800000, i_1, 0)
            int32_t var_8_6 = 4
        else
            int32_t var_8_5 = 3
        
        if (data_cf65bc != 0)
            char* eax_39 = var_14
            
            if (eax_39 != 0 && *eax_39 != 0)
                char* eax_40 = sub_63d4e0(&var_14)
                int32_t temp5_1 = *(eax_40 + 4)
                *(eax_40 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                    var_14 = &data_801800
    
    ecx_36 = arg1
    i_1 += 1
    ebx_3 = &ebx_3[0x8b]
    int32_t var_8_9 = 0xffffffff
while (i_1 s< 8)

int32_t var_24_15 = 0xffffffff
sub_666120(var_1c_1, &data_8dc230, ecx, var_1c_1)

if (arg1[0xa] s< 0x17)
    uint32_t eax_51 = sub_64e7a0(ecx)
    sub_665db0(eax_51, &data_8dba00, eax_51, 0x3f800000, 0xffffffff, 0)

if (arg2 == 1)
    uint32_t eax_52 = sub_64e7a0(ecx)
    sub_665db0(eax_52, &data_8dc224, eax_52, 0x3f800000, 0xffffffff, 0)

void* result = sub_4c72f0(ecx, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
