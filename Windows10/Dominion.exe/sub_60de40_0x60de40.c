// 函数: sub_60de40
// 地址: 0x60de40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_from_source@V?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@@__crt_strtox@@YA?AW4floating_point_parse_result@0@QAU__crt_locale_pointers@@AAV?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@0@AAUfloating_point_string@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_94 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 u> 7)
    sub_63b870(arg2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xb141, 
        "GameSpecific_UpdateExpansionButtons")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void** edi

switch (arg2)
    case 0, 5
        uint32_t eax_5 = sub_64e7a0(arg3)
        sub_665db0(eax_5, &data_be6038, eax_5, 0x3f800000, 0xffffffff, 0)
        edi = &data_be6050
    case 1, 2, 3
        edi = &data_be602c
    case 4
        edi = &data_be6020
    case 6, 7
        uint32_t eax_4 = sub_64e7a0(arg3)
        sub_665db0(eax_4, &data_be6044, eax_4, 0x3f800000, 0xffffffff, 0)
        edi = &data_be6050

uint32_t eax_6 = sub_64e7a0(arg3)
sub_665db0(eax_6, edi, eax_6, 0x3f800000, 0xffffffff, 0)
void** edi_1

if (arg2 == 7)
    edi_1 = &data_be6074
else if (arg2 == 6)
    edi_1 = &data_be6068
else
    int32_t eax_7
    eax_7.b = arg2 != 3
    
    switch (jump_table_60e8a4[eax_7 + 2])
        case 0x60df2d
            edi_1 = &data_be605c
        case 0x60df34
            edi_1 = &data_be6080
        case 0x60df3b
            edi_1 = &data_be6068
        case 0x60df42
            edi_1 = &data_be6074

uint32_t eax_9 = sub_64e7a0(arg3)
sub_665db0(eax_9, edi_1, eax_9, 0x3f800000, 0xffffffff, 0)
int32_t var_50 = 0
void* const i = &data_77fca8
char var_23 = 0
void* var_70
int32_t edi_2

do
    int32_t ecx_7 = *i
    edi_2 = arg2
    
    if (ecx_7 != 0 && ecx_7 != 0x13)
        int32_t* var_98_1 = &var_70
        
        if (sub_60d820() != 0)
            var_50 += 1
    
    i += 0x1c
while (i s< &data_77fea0)

void* i_1 = nullptr
void* var_58 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* i_2 = nullptr
void* result

do
    void* i_3 = i_1
    
    if (edi_2 == 6 || edi_2 == 7)
        i_3 = i_1 + 1
    
    if (i_3 s>= 0x12)
        break
    
    result = *(i_3 * 0x1c + &data_77fca8)
    
    if (result != 0)
        if (result != 0x13)
        label_60e012:
            void* esi_1 = i_1 * 9
            char var_22_1 = 0
            void* var_30_1
            void* edi_3
            
            if (*((esi_1 << 2) + &data_1a9515c) == "tblExpansions"
                    && *((esi_1 << 2) + &data_1a95158) == arg3
                    && *((esi_1 << 2) + &data_1a95160) == i_1
                    && *((esi_1 << 2) + &data_1a95164) == 0)
                edi_3 = *((esi_1 << 2) + &data_1a95178)
                var_30_1 = edi_3
                
                if (edi_3 == 0)
                    goto label_60e07a
                
                uint32_t eax_14 = zx.d(edi_3.w)
                
                if (eax_14 u>= data_c23bac || *(eax_14 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_3)
                    goto label_60e07a
                
                goto label_60e0be
            
        label_60e07a:
            edi_3 = sub_67be20(i_1)
            var_30_1 = edi_3
            *((esi_1 << 2) + &data_1a95178) = edi_3
            
            if (edi_3 == 0)
                edi_2 = arg2
            else
                *((esi_1 << 2) + &data_1a95158) = arg3
                *((esi_1 << 2) + &data_1a9515c) = "tblExpansions"
                *((esi_1 << 2) + &data_1a95160) = i_2
                *((esi_1 << 2) + &data_1a95164) = 0
            label_60e0be:
                int32_t esi_2 = (&data_77fcb4)[i_3 * 7]
                uint32_t eax_19 = sub_64e7a0(edi_3)
                sub_665db0(eax_19, esi_2, eax_19, 0x3f800000, 0xffffffff, 0)
                int32_t esi_3 = (&data_77fcb4)[i_3 * 7]
                uint32_t eax_21 = sub_64e7a0(edi_3)
                void* result_4 = sub_665db0(eax_21, esi_3, eax_21, 0x3f800000, 0xffffffff, 0)
                int32_t ecx_16 = arg2
                
                if (ecx_16 == 6)
                    int32_t edi_4 = 0
                    void* esi_5 = var_58 + 0x35c4
                    int128_t var_88 = zx.o(0)
                    
                    while (*esi_5 != 0)
                        result_4 = result
                        
                        if (*(esi_5 - 8) == result_4)
                            result_4 = sub_60b9e0(*(esi_5 - 4))
                            
                            if (result_4 s> var_88.d)
                                var_88.d = result_4
                                result_4 = *(esi_5 + 4)
                                
                                if (result_4 s<= 0)
                                    result_4 = *esi_5
                                    var_88:4.d = 0
                                else
                                    var_88:4.d = 1
                                
                                var_88:8.d = result_4
                        
                        edi_4 += 1
                        esi_5 += 0x14
                        
                        if (edi_4 s>= 0xa0)
                            break
                    
                    edi_3 = var_30_1
                    var_88 = var_88
                    sub_60ba50(result_4, &var_88, edi_3, 0xffffffff)
                    ecx_16 = arg2
                
                if (result s<= 3 || ecx_16 != 4)
                    void* eax_25
                    void* edi_5
                    
                    if (result != 0x13)
                        void* var_64
                        
                        if (result != 2)
                            void* var_60
                            void* var_5c
                            eax_25, ecx_16 = sub_4daf40(&var_5c, &var_60)
                            void* edi_6 = eax_25
                            int32_t esi_7 = 0
                            
                            if (edi_6 s<= 0)
                            label_60e23d:
                                ecx_16.b = 0
                                edi_5 = var_30_1
                            else
                                while (true)
                                    eax_25, ecx_16 = sub_4db700(*(var_5c + (esi_7 << 2)), result)
                                    
                                    if (eax_25.b != 0)
                                        ecx_16.b = 1
                                        edi_5 = var_30_1
                                        var_30_1 = edi_5
                                        var_64 = *(var_60 + (esi_7 << 2))
                                        break
                                    
                                    esi_7 += 1
                                    
                                    if (esi_7 s>= edi_6)
                                        goto label_60e23d
                        else
                            ecx_16.b = 1
                            edi_5 = var_30_1
                        
                        eax_25.b = var_64 == 0x63
                    else
                        eax_25, ecx_16 = sub_4dada0()
                        edi_5 = var_30_1
                        ecx_16.b = eax_25.b
                        eax_25.b = 0
                    
                    if (ecx_16.b == 0)
                        uint32_t eax_29 = sub_64e7a0(edi_5)
                        sub_665db0(eax_29, &data_be60e0, eax_29, 0x3f800000, 0xffffffff, 0)
                        
                        if (arg2 != 2 && arg2 != 1)
                            uint32_t eax_30 = sub_64e7a0(edi_5)
                            sub_665db0(eax_30, &data_be60b0, eax_30, 0x3f800000, 0xffffffff, 0)
                    else
                        void** esi_8 = &data_be60d4
                        
                        if (eax_25.b == 0)
                            esi_8 = &data_be60c8
                        
                        uint32_t eax_27 = sub_64e7a0(edi_5)
                        sub_665db0(eax_27, esi_8, eax_27, 0x3f800000, 0xffffffff, 0)
                        var_22_1 = 1
                else
                    uint32_t eax_22 = sub_64e7a0(edi_3)
                    sub_665db0(eax_22, &data_be60e0, eax_22, 0x3f800000, 0xffffffff, 0)
                    uint32_t eax_23 = sub_64e7a0(edi_3)
                    sub_665db0(eax_23, &data_be60b0, eax_23, 0x3f800000, 0xffffffff, 0)
                    uint32_t eax_24 = sub_64e7a0(edi_3)
                    sub_665db0(eax_24, &data_be6170, eax_24, 0x3f800000, 0xffffffff, 0)
                
                int32_t var_54 = 0xffffffff
                void* result_5 = result
                int32_t* var_98_3 = &var_54
                char eax_31 = sub_60d820()
                int32_t edi_7 = *(i_3 * 0x1c + &data_77fca8)
                int32_t eax_37
                void* edi_8
                int32_t ecx_34
                
                if (edi_7 != 2)
                    if (edi_7 == 0x13)
                    label_60e3ce:
                        edi_8 = var_30_1
                        goto label_60e3da
                    
                    ecx_34 = arg2
                label_60e347:
                    
                    if (eax_31 == 0 || var_50 s> arg4 || (ecx_34 != 5 && ecx_34 != 7))
                        goto label_60e3ce
                    
                    if (edi_7 != 2)
                        void* var_74
                        void* var_68
                        uint32_t eax_34 = sub_4daf40(&var_68, &var_74)
                        int32_t esi_9 = 0
                        
                        if (eax_34 s<= 0)
                        label_60e397:
                            eax_34.b = 0
                        else
                            while (true)
                                if (sub_4db700(*(var_68 + (esi_9 << 2)), edi_7).b != 0)
                                    eax_34.b = 1
                                    break
                                
                                esi_9 += 1
                                
                                if (esi_9 s>= eax_34)
                                    goto label_60e397
                        
                        result_5 = result
                        
                        if (eax_34.b == 0)
                            goto label_60e3ce
                    
                    edi_8 = var_30_1
                    uint32_t eax_36 = sub_64e7a0(edi_8)
                    sub_665db0(eax_36, &data_be60bc, eax_36, 0x3f800000, 0xffffffff, 0)
                    eax_37 = var_54
                else
                    ecx_34 = arg2
                    
                    if (ecx_34 != 5)
                        goto label_60e347
                    
                    edi_8 = var_30_1
                    uint32_t eax_32 = sub_64e7a0(edi_8)
                    sub_665db0(eax_32, &data_be60bc, eax_32, 0x3f800000, 0xffffffff, 0)
                label_60e3da:
                    eax_37 = var_54
                    
                    if (eax_31 == 0)
                        eax_37 = 0xffffffff
                void* result_1
                sub_60dd30(eax_37, i_3 * 0x1c + &data_77fca8, &result_1, eax_37)
                int32_t var_14_1 = 0
                int32_t var_98_5 = 0xffffffff
                sub_666380(&result_1, &data_be617c, edi_8, &result_1)
                
                if (var_22_1 != 1)
                    if (eax_31 == 0)
                        goto label_60e425
                    
                label_60e5fe:
                    uint32_t eax_62 = sub_64e7a0(edi_8)
                    sub_665db0(eax_62, &data_be6098, eax_62, 0x3f800000, 0xffffffff, 0)
                    edi_2 = arg2
                    
                    if (edi_2 != 0)
                        goto label_60e448
                    
                    if (*(sub_4e3950(result_5) + 8) != edi_2)
                        void* var_78
                        void* edi_10 = sub_4daf40(&var_70, &var_78)
                        int32_t esi_16 = 0
                        
                        if (edi_10 s> 0)
                            do
                                if (sub_4db650(*(var_70 + (esi_16 << 2)), result).b != 0)
                                    uint32_t eax_64 = sub_64e7a0(var_30_1)
                                    sub_665db0(eax_64, &data_be6104, eax_64, 0x3f800000, 
                                        0xffffffff, 0)
                                    break
                                
                                esi_16 += 1
                            while (esi_16 s< edi_10)
                        
                        edi_2 = arg2
                else
                    if (eax_31 != 0)
                        goto label_60e5fe
                    
                    var_23 = 1
                label_60e425:
                    uint32_t eax_39 = sub_64e7a0(edi_8)
                    sub_665db0(eax_39, &data_be60a4, eax_39, 0x3f800000, 0xffffffff, 0)
                    edi_2 = arg2
                label_60e448:
                    
                    if (edi_2 == 1 || edi_2 == 2)
                        void* ecx_45 = data_cc8dc8
                        var_54 = 0
                        int32_t eax_41 = *(i_3 * 0x1c + &data_77fca8)
                        int32_t j = 0
                        void* esi_10 = sub_4d8f30(*(ecx_45 + 0x1e1a4)) + 0x63e0
                        
                        do
                            int32_t eax_43 = *esi_10
                            
                            if (eax_43 == 0)
                                break
                            
                            int32_t eax_44
                            char edx_14
                            edx_14:eax_44 = sx.q(eax_43)
                            j += 1
                            esi_10 += 4
                            int32_t edx_16 = var_54
                            int32_t ecx_47 = edx_16 + 1
                            
                            if ((eax_44 + zx.d(edx_14)) s>> 8 != eax_41)
                                ecx_47 = edx_16
                            
                            var_54 = ecx_47
                        while (j s< 0x2bc)
                        
                        int32_t eax_48 = *(i_3 * 0x1c + &data_77fca8)
                        int32_t j_1 = 0
                        int32_t ecx_50 = 0
                        void* esi_12 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x58ec
                        
                        do
                            int32_t eax_50 = *esi_12
                            
                            if (eax_50 == 0)
                                break
                            
                            int32_t eax_51
                            char edx_17
                            edx_17:eax_51 = sx.q(eax_50)
                            j_1 += 1
                            esi_12 += 4
                            int32_t edx_19 = ecx_50 + 1
                            
                            if ((eax_51 + zx.d(edx_17)) s>> 8 != eax_48)
                                edx_19 = ecx_50
                            
                            ecx_50 = edx_19
                        while (j_1 s< 0x2bc)
                        
                        *(i_3 * 0x1c + &data_77fca8)
                        int32_t eax_55 = sub_6092a0()
                        int32_t esi_13 = var_54
                        
                        if (esi_13 != 0)
                            uint32_t eax_56 = sub_64e7a0(arg3)
                            sub_665db0(eax_56, &data_be6110, eax_56, 0x3f800000, i_2, 0)
                            *((i_2 << 2) + &data_1a955d8) = esi_13
                        
                        int32_t var_98_6 = *((i_2 << 2) + &data_1a955d8)
                        char* const var_40
                        sub_63df30(&var_40, "%d")
                        void* i_4 = i_2
                        var_14_1.b = 1
                        sub_666380(&var_40, &data_be6134, arg3, &var_40)
                        var_14_1.b = 2
                        
                        if (data_cf65bc != 0)
                            char* eax_59 = var_40
                            
                            if (eax_59 != 0 && *eax_59 != 0)
                                char* eax_60 = sub_63d4e0(&var_40)
                                int32_t temp1_1 = *(eax_60 + 4)
                                *(eax_60 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_64c080(eax_60, *(eax_60 + 0xc) + 0x10)
                                    var_40 = &data_801800
                        
                        var_14_1.b = 0
                        void* i_7
                        
                        if (ecx_50 == 0)
                            i_7 = i_2
                        else
                            uint32_t eax_61 = sub_64e7a0(arg3)
                            sub_665db0(eax_61, &data_be611c, eax_61, 0x3f800000, i_2, 0)
                            i_7 = i_2
                            *((i_7 << 2) + &data_1a95678) = ecx_50
                        
                        int32_t var_98_7 = *((i_7 << 2) + &data_1a95678)
                        void* result_3
                        sub_63df30(&result_3, "%d")
                        void* i_5 = i_2
                        var_14_1.b = 3
                        sub_666380(&result_3, &data_be6140, arg3, &result_3)
                        var_14_1.b = 4
                        
                        if (data_cf65bc != 0)
                            result = result_3
                            
                            if (result != 0 && *result != 0)
                                result = sub_63d4e0(&result_3)
                                int32_t temp2_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    sub_64c080(result, *(result + 0xc) + 0x10)
                                    result_3 = &data_801800
                        
                        var_14_1.b = 0
                        
                        if (arg2 == 1)
                            void* i_8
                            
                            if (eax_55 == 0)
                                i_8 = i_2
                            else
                                uint32_t eax_66 = sub_64e7a0(arg3)
                                sub_665db0(eax_66, &data_be6128, eax_66, 0x3f800000, i_2, 0)
                                i_8 = i_2
                                *((i_8 << 2) + &data_1a95718) = eax_55
                                
                                if (ecx_50 == 0)
                                    uint32_t eax_67 = sub_64e7a0(arg3)
                                    sub_665db0(eax_67, &data_be6158, eax_67, 0x3f800000, i_2, 
                                        ecx_50.b)
                                    i_8 = i_2
                            
                            int32_t var_98_9 = *((i_8 << 2) + &data_1a95718)
                            void* result_2
                            sub_63df30(&result_2, "%d")
                            void* i_6 = i_2
                            var_14_1.b = 5
                            sub_666380(&result_2, &data_be614c, arg3, &result_2)
                            var_14_1.b = 6
                            
                            if (data_cf65bc != 0)
                                result = result_2
                                
                                if (result != 0 && *result != 0)
                                    result = sub_63d4e0(&result_2)
                                    int32_t temp3_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp3_1 == 1)
                                        sub_64c080(result, *(result + 0xc) + 0x10)
                                        result_2 = &data_801800
                        
                        edi_2 = arg2
                
                int32_t var_14_2 = 7
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp0_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                            result_1 = &data_801800
                
                int32_t var_14_3 = 0xffffffff
            
            i_1 = i_2
        else if (edi_2 != 3 && edi_2 != 6)
            goto label_60e012
    
    i_1 += 1
    i_2 = i_1
while (i_1 s< 0x12)

result.b = var_23
fsbase->NtTib.ExceptionList = ExceptionList
return result
