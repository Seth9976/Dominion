// 函数: sub_5fa330
// 地址: 0x5fa330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a600
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_11c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg2
char* var_e8 = esi
int32_t edi = 0
int32_t eax_4 = arg5[0x2ff]

if (eax_4 == 0)
    goto label_5fa3be

char const* const var_128
int32_t var_124
char const* const var_120
void* eax_7
char* ecx
int32_t var_44[0xc]

if (eax_4 == 1)
    var_44[0] = 0
label_5fa3b9:
    edi = 1
label_5fa3be:
    int32_t eax_8 = arg5[0x300]
    
    if (eax_8 == 0)
        goto label_5fa3ff
    
    if (eax_8 == 1)
        var_44[edi] = 2
    label_5fa3fe:
        edi += 1
    label_5fa3ff:
        int32_t eax_11 = arg5[0x5bd]
        
        if ((eax_11.b & 1) != 0)
            var_44[edi] = 4
            edi += 1
        
        int32_t ecx_2 = eax_11 & 2
        
        if (ecx_2 != 0)
            var_44[edi] = 5
            edi += 1
        
        if ((eax_11.b & 4) != 0 && ecx_2 == 0)
            var_44[edi] = 6
            edi += 1
        
        if ((eax_11.b & 8) != 0)
            var_44[edi] = 7
            edi += 1
        
        if ((eax_11.b & 0x10) != 0)
            var_44[edi] = 8
            edi += 1
        
        if ((eax_11.b & 0x20) != 0)
            var_44[edi] = 9
            edi += 1
        
        if ((eax_11.b & 0x40) != 0)
            var_44[edi] = 0xa
            edi += 1
        
        if (arg5[0x5c4] != 0)
            var_44[edi] = 0xb
            edi += 1
        
        int32_t var_120_1 = 0xffffffff
        char* ecx_3 = esi
        eax_7 = sub_666120(eax_11, &data_be4750, ecx_3, edi)
        void* ebx_1 = nullptr
        char var_ec
        
        if (edi s> 0)
            void* esi_1 = &data_1a94584
            
            do
                if (esi_1 s>= 0x1a94734)
                    var_120 = "DomCreateUpdateKingdom"
                    var_124 = 0x889e
                    var_128 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx = "i < MAX_MODIFIERS"
                    goto label_5fa9d5
                
                if (*esi_1 != "tbl_modifiers" || *(esi_1 - 4) != var_e8 || *(esi_1 + 4) != ebx_1
                    || *(esi_1 + 8) != 0)
                label_5fa501:
                    ecx_3 = sub_67be20(ebx_1)
                    *(esi_1 + 0x1c) = ecx_3
                    
                    if (ecx_3 != 0)
                        char* eax_16 = var_e8
                        *esi_1 = "tbl_modifiers"
                        *(esi_1 - 4) = eax_16
                        *(esi_1 + 4) = ebx_1
                        *(esi_1 + 8) = 0
                else
                    ecx_3 = *(esi_1 + 0x1c)
                    
                    if (ecx_3 == 0)
                        goto label_5fa501
                    
                    uint32_t eax_12 = zx.d(ecx_3.w)
                    
                    if (eax_12 u>= data_c23bac
                            || *(eax_12 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_3)
                        goto label_5fa501
                
                eax_7 = var_44[ebx_1]
                int32_t edx_4 = eax_7 << 4
                var_ec.d = edx_4
                
                if (*(edx_4 + 0xbe4810) != eax_7)
                    var_120 = "GetModfierDef"
                    var_124 = 0x85bd
                    var_128 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx = "DOM_MODIFIER_DEFS[modifier].modifier == modifier"
                    goto label_5fa9d5
                
                if (ecx_3 != 0)
                    uint32_t eax_17 = sub_64e7a0(ecx_3)
                    eax_7, ecx_3 = sub_665db0(eax_17, var_ec.d + &data_be4814, eax_17, 0x3f800000, 
                        0xffffffff, 0)
                
                ebx_1 += 1
                esi_1 += 0x24
            while (ebx_1 s< edi)
            
            esi = var_e8
        
        char* var_120_3 = ecx_3
        int32_t eax_18 = sub_5f8a90()
        int32_t var_f8_1 = eax_18
        int32_t var_120_4 = 0xffffffff
        eax_7 = sub_666120(eax_18, &data_be475c, esi, eax_18)
        void* ebx_2 = nullptr
        
        if (eax_18 s<= 0)
        label_5fa6cd:
            char var_ec_1 = 0
            int32_t eax_25 = *(arg4 + 0xc)
            
            if (eax_25 == 0)
            label_5fa919:
                sub_63d720(&var_e8, &data_1a94b20)
                int32_t var_8_1 = 0
                int32_t var_120_7 = 0xffffffff
                char* eax_44 = sub_666380(&var_e8, &data_be48e8, esi, &var_e8)
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    eax_44 = var_e8
                    
                    if (eax_44 != 0 && *eax_44 != 0)
                        eax_44 = sub_63d4e0(&var_e8)
                        int32_t temp9_1 = *(eax_44 + 4)
                        *(eax_44 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            eax_44 = sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                
                int32_t var_120_8 = var_ec_1.d
                int32_t var_8_3 = 0xffffffff
                void* result = sub_5f8de0(eax_44, esi, arg3, arg5, *(arg4 + 0x28))
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
            
            if (eax_25 == 1)
                void* eax_38 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                int32_t eax_39 = *(arg4 + 0x10)
                
                if (eax_39 s>= 0 && eax_39 s< *(eax_38 + 0x71dc))
                    char* _Source_1 = *(eax_38 + eax_39 * 0xc + 0x6edc)
                    char* const _Source = &data_801800
                    
                    if (_Source_1 != 0)
                        _Source = _Source_1
                    
                    strncpy(&data_1a94b20, _Source, 0x40)
                    data_1a94b5f = 0
                    uint32_t eax_41 = sub_64e7a0(esi)
                    sub_665db0(eax_41, &data_be48d0, eax_41, 0x3f800000, 0xffffffff, 0)
                    uint32_t eax_42 = sub_64e7a0(esi)
                    sub_665db0(eax_42, &data_be48dc, eax_42, 0x3f800000, 0xffffffff, 0)
                    var_ec_1 = 1
                
                goto label_5fa919
            
            eax_7 = eax_25 - 2
            
            if (eax_25 == 2)
                eax_7 = *(arg4 + 0x10)
                
                if (eax_7 s< 0)
                    eax_7 = 1
                else if (eax_7 s> 0x1b5)
                    eax_7 = 1
                
                int32_t edi_2 = eax_7 * 0x64
                
                if (*(edi_2 + &data_783370) == eax_7)
                    strncpy(&data_1a94b20, (&data_783374)[eax_7 * 0x19], 0x40)
                    data_1a94b5f = 0
                    uint32_t eax_28 = sub_64e7a0(esi)
                    sub_665db0(eax_28, &data_be48d0, eax_28, 0x3f800000, 0xffffffff, 0)
                    var_ec_1 = 1
                    int32_t i = *(edi_2 + &data_783370) + 0x10c8e0
                    void* eax_29 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                    int32_t* eax_31 =
                        *(*(eax_29 + 0x429c) + (((i s>> 4 | i) & *(eax_29 + 0x42a0)) << 2))
                    int64_t var_fc
                    int32_t ecx_23
                    
                    if (eax_31 == 0)
                    label_5fa7d5:
                        var_fc = 0
                        ecx_23 = var_fc.d
                    else
                        while (i != *eax_31)
                            eax_31 = eax_31[6]
                            
                            if (eax_31 == 0)
                                goto label_5fa7d5
                        
                        if (eax_31 == 0xfffffff8)
                            goto label_5fa7d5
                        
                        ecx_23 = eax_31[4]
                        var_f8_1 = eax_31[5]
                    
                    bool var_ed
                    
                    if (sub_4c3830(&var_fc:4, &var_ed, ecx_23, &var_fc:4) != 0)
                        void** edi_4 = &data_be4930
                        
                        if (var_ed == 0)
                            edi_4 = &data_be493c
                        
                        uint32_t eax_37 = sub_64e7a0(esi)
                        sub_665db0(eax_37, edi_4, eax_37, 0x3f800000, 0xffffffff, 0)
                        sub_5fa230(esi, var_f8_1)
                    else
                        uint32_t eax_34 = sub_64e7a0(esi)
                        sub_665db0(eax_34, &data_be4918, eax_34, 0x3f800000, 0xffffffff, 0)
                    
                    goto label_5fa919
                
                var_120 = "DomSetGet"
                var_124 = 0xb1
                var_128 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx = "EXP_BASE_SETS[idx - 1].id == idx"
            else
                var_120 = "DomCreateUpdateKingdom"
                var_124 = 0x88e9
                var_128 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx = "Halt"
        else
            void* i_1 = &data_1a94584
            
            while (i_1 s< 0x1a94b24)
                if (*i_1 == "tbl_expansions" && *(i_1 - 4) == esi && *(i_1 + 4) == ebx_2
                        && *(i_1 + 8) == 0)
                    int32_t ecx_9 = *(i_1 + 0x1c)
                    var_ec.d = ecx_9
                    
                    if (ecx_9 == 0)
                        goto label_5fa618
                    
                    uint32_t eax_19 = zx.d(ecx_9.w)
                    
                    if (eax_19 u>= data_c23bac
                            || *(eax_19 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_9)
                        goto label_5fa618
                    
                    goto label_5fa687
                
            label_5fa618:
                int32_t eax_22 = sub_67be20(ebx_2)
                var_ec.d = eax_22
                *(i_1 + 0x1c) = eax_22
                int32_t var_e4[0x28]
                
                if (eax_22 != 0)
                    *i_1 = "tbl_expansions"
                    *(i_1 - 4) = esi
                    *(i_1 + 4) = ebx_2
                    *(i_1 + 8) = 0
                label_5fa687:
                    int32_t eax_23 = sub_5f8b10(var_e4[ebx_2])
                    uint32_t eax_24 = sub_64e7a0(var_ec.d)
                    eax_7 = sub_665db0(eax_24, eax_23, eax_24, 0x3f800000, 0xffffffff, 0)
                    esi = var_e8
                else
                    eax_7 = sub_5f8b10(var_e4[ebx_2])
                ebx_2 += 1
                i_1 += 0x24
                
                if (ebx_2 s>= var_f8_1)
                    goto label_5fa6cd
            
            var_120 = "DomCreateUpdateKingdom"
            var_124 = 0x88aa
            var_128 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx = "i < MAX_DOM_EXPANSIONS"
    else
        eax_7 = eax_8 - 2
        
        if (eax_8 == 2)
            var_44[edi] = 3
            goto label_5fa3fe
        
        var_120 = "CollectModifiers"
        var_124 = 0x85dc
        var_128 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx = "Halt"
else
    eax_7 = eax_4 - 2
    
    if (eax_4 == 2)
        var_44[0] = 1
        goto label_5fa3b9
    
    var_120 = "CollectModifiers"
    var_124 = 0x85cf
    var_128 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "Halt"
label_5fa9d5:
sub_63b870(eax_7, &data_801800, ecx, var_128, var_124, var_120)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
