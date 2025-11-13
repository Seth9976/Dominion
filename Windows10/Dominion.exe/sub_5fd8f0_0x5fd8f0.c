// 函数: sub_5fd8f0
// 地址: 0x5fd8f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
__chkstk(0x348c)
int32_t var_8
int32_t arg_3480 = __security_cookie ^ &var_8
int32_t ebx
int32_t var_c = ebx
int32_t ebx_1 = arg1
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
*(sub_64e7a0(ebx_1) + 0x18bc) = sub_5fb080
sub_4bbdb0()
int32_t var_18 = 0x1990
void arg_24
void arg_1aec
memcpy(&arg_24, sub_4e49d0(esi, &arg_1aec), 0x1990)
int32_t* esp_1 = &var_14
void** arg_19b4 = &data_be49e4
int32_t esi_1 = 0
void** arg_19b8 = &data_be468c
void** arg_19bc = &data_be49f0
void** arg_19c0 = &data_be468c
void** arg_19c4 = &data_be49fc
void** arg_19c8 = &data_be4698
void** arg_19cc = &data_be4a08
void** arg_19d0 = &data_be4680
void** arg_19d4 = &data_be4a14
void** arg_19d8 = &data_be4680
void** arg_19dc = &data_be4a20
void** arg_19e0 = &data_be4680
void** arg_19e4 = &data_be4a2c
void** arg_19e8 = &data_be4680
var_8 = 0
__return_addr = &arg_19b4
uint32_t result

while (true)
    int32_t esi_2 = esi_1 * 9
    int32_t ebx_2
    int32_t edi_1
    
    if (esp_1[esi_2 + 0x681] == "tbl_modifiers")
        ebx_2 = esp_1[3]
        
        if (esp_1[esi_2 + 0x680] != ebx_1 || esp_1[esi_2 + 0x682] != ebx_2
                || esp_1[esi_2 + 0x683] != 0)
            goto label_5fda68
        
        edi_1 = esp_1[esi_2 + 0x688]
        
        if (edi_1 == 0)
            goto label_5fda68
        
        uint32_t eax_5 = zx.d(edi_1.w)
        
        if (eax_5 u>= data_c23bac || *(eax_5 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_1)
            goto label_5fda68
        
        goto label_5fdaab
    
    ebx_2 = esp_1[3]
label_5fda68:
    *(esp_1 - 4) = ebx_2
    edi_1 = sub_67be20()
    esp_1[esi_2 + 0x688] = edi_1
    
    if (edi_1 == 0)
        esi_1 = esp_1[3]
    else
        esp_1[esi_2 + 0x681] = "tbl_modifiers"
        esp_1[esi_2 + 0x680] = arg1
        esp_1[esi_2 + 0x682] = ebx_2
        esp_1[esi_2 + 0x683] = 0
    label_5fdaab:
        uint32_t eax_10 = sub_64e7a0(edi_1)
        int32_t* esi_3 = esp_1[5]
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0xffffffff
        sub_665db0(eax_10, *esi_3, eax_10, 0x3f800000)
        uint32_t eax_11 = sub_64e7a0(edi_1)
        int32_t edx_3 = esi_3[1]
        *(esp_1 - 0xc) = 0
        *(esp_1 - 0x10) = 0xffffffff
        sub_665db0(eax_11, edx_3, eax_11, 0x3f800000)
        char const (* ebx_3)[0x6] = data_be46f8
        int32_t ecx_7
        
        if (esp_1[ebx_2 * 0x1b + 0x6c1] != ebx_3 || esp_1[ebx_2 * 0x1b + 0x6c0] != edi_1
            || esp_1[ebx_2 * 0x1b + 0x6c2] != 0xffffffff)
        label_5fdb41:
            ecx_7 = sub_67bd70(edi_1, ebx_3)
            esp_1[ebx_2 * 0x1b + 0x6c8] = ecx_7
            
            if (ecx_7 != 0)
                esp_1[ebx_2 * 0x1b + 0x6c1] = ebx_3
                esp_1[ebx_2 * 0x1b + 0x6c0] = edi_1
                esp_1[ebx_2 * 0x1b + 0x6c2] = 0xffffffff
        else
            ecx_7 = esp_1[ebx_2 * 0x1b + 0x6c8]
            
            if (ecx_7 == 0)
                goto label_5fdb41
            
            uint32_t eax_12 = zx.d(ecx_7.w)
            
            if (eax_12 u>= data_c23bac || *(eax_12 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_7)
                goto label_5fdb41
        
        char const (* ebx_4)[0x6] = data_be46fc
        esp_1[9] = ecx_7
        int32_t ecx_9
        
        if (esp_1[ebx_2 * 0x1b + 0x6ca] != ebx_4 || esp_1[ebx_2 * 0x1b + 0x6c9] != edi_1
            || esp_1[ebx_2 * 0x1b + 0x6cb] != 0xffffffff)
        label_5fdbc0:
            ecx_9 = sub_67bd70(edi_1, ebx_4)
            esp_1[ebx_2 * 0x1b + 0x6d1] = ecx_9
            
            if (ecx_9 != 0)
                esp_1[ebx_2 * 0x1b + 0x6ca] = ebx_4
                esp_1[ebx_2 * 0x1b + 0x6c9] = edi_1
                esp_1[ebx_2 * 0x1b + 0x6cb] = 0xffffffff
        else
            ecx_9 = esp_1[ebx_2 * 0x1b + 0x6d1]
            
            if (ecx_9 == 0)
                goto label_5fdbc0
            
            uint32_t eax_16 = zx.d(ecx_9.w)
            
            if (eax_16 u>= data_c23bac || *(eax_16 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_9)
                goto label_5fdbc0
        
        char const (* ebx_5)[0x6] = data_be4700
        esp_1[0xa] = ecx_9
        int32_t ecx_11
        
        if (esp_1[ebx_2 * 0x1b + 0x6d3] != ebx_5 || esp_1[ebx_2 * 0x1b + 0x6d2] != edi_1
            || esp_1[ebx_2 * 0x1b + 0x6d4] != 0xffffffff)
        label_5fdc3f:
            ecx_11 = sub_67bd70(edi_1, ebx_5)
            esp_1[ebx_2 * 0x1b + 0x6da] = ecx_11
            
            if (ecx_11 != 0)
                esp_1[ebx_2 * 0x1b + 0x6d3] = ebx_5
                esp_1[ebx_2 * 0x1b + 0x6d2] = edi_1
                esp_1[ebx_2 * 0x1b + 0x6d4] = 0xffffffff
        else
            ecx_11 = esp_1[ebx_2 * 0x1b + 0x6da]
            
            if (ecx_11 == 0)
                goto label_5fdc3f
            
            uint32_t eax_20 = zx.d(ecx_11.w)
            
            if (eax_20 u>= data_c23bac || *(eax_20 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_11)
                goto label_5fdc3f
        
        int32_t edx_7 = 0
        esp_1[0xb] = ecx_11
        esp_1[4] = 0
        
        while (true)
            int32_t ebx_6 = edx_7 << 2
            void* eax_24
            int32_t edx_8
            eax_24, edx_8 = __chkstk(0x1990)
            __builtin_memcpy(esp_1, &esp_1[0xe], 0x1990)
            int32_t esi_6 = esp_1[0x667]
            int32_t eax_25 = sub_5facc0(eax_24, edx_8, esi_6)
            void* esp_7 = &esp_1[0x664]
            
            if (eax_25.b != 0)
                uint32_t eax_26 = sub_64e7a0(*(esp_7 + ebx_6 + 0x24))
                *(esp_7 - 4) = 0
                *(esp_7 - 8) = 0xffffffff
                eax_25 = sub_665db0(eax_26, &data_be46b0, eax_26, 0x3f800000)
            
            char const* const ecx_28
            void* esp_18
            
            if (esi_6 u> 6)
                *(esp_7 - 4) = "GetModifierFromButton"
                *(esp_7 - 8) = 0x8cc4
                esp_18 = esp_7 - 8
                ecx_28 = "Halt"
            else
                switch (esi_6)
                    case 0
                        eax_25.b = *(esp_7 + 0x10) != 0
                    case 1
                        int32_t eax_27
                        eax_27.b = *(esp_7 + 0x10) != 0
                        eax_25 = eax_27 + 2
                    case 2
                        int32_t ecx_16 = *(esp_7 + 0x10)
                        
                        if (ecx_16 != 0)
                            int32_t eax_28
                            eax_28.b = ecx_16 != 1
                            eax_25 = eax_28 + 5
                        else
                            eax_25 = ecx_16 + 4
                    case 3
                        eax_25 = 7
                    case 4
                        eax_25 = 8
                    case 5
                        eax_25 = 9
                    case 6
                        eax_25 = 0xa
                
                if (*((eax_25 << 4) + 0xbe4810) != eax_25)
                    *(esp_7 - 4) = "GetModfierDef"
                    *(esp_7 - 8) = 0x85bd
                    esp_18 = esp_7 - 8
                    ecx_28 = "DOM_MODIFIER_DEFS[modifier].modifier == modifier"
                else
                    int32_t eax_29 = *(esp_7 + ebx_6 + 0x24)
                    *(esp_7 + 0x18) = eax_29
                    uint32_t eax_30 = sub_64e7a0(eax_29)
                    *(esp_7 - 4) = 0
                    *(esp_7 - 8) = 0xffffffff
                    sub_665db0(eax_30, &(&data_be4814)[eax_25 * 4], eax_30, 0x3f800000)
                    esp_1 = esp_7
                    
                    if (esi_6 == 0)
                        uint32_t eax_31 = sub_4daf40(&esp_1[7], &esp_1[0xc])
                        
                        if (eax_31 s<= 0)
                        label_5fddda:
                            uint32_t eax_35 = sub_64e7a0(esp_1[6])
                            *(esp_1 - 4) = 0
                            *(esp_1 - 8) = 0xffffffff
                            sub_665db0(eax_35, &data_be4a74, eax_35, 0x3f800000)
                            esi_6 = esp_1[3]
                        else
                            int32_t ebx_7 = esp_1[7]
                            
                            while (sub_4db700(*(ebx_7 + (esi_6 << 2)), 6) == 0)
                                esi_6 += 1
                                
                                if (esi_6 s>= eax_31)
                                    goto label_5fddda
                            
                            esi_6 = esp_1[3]
                    else if (esi_6 == 1)
                        uint32_t eax_33 = sub_4daf40(&esp_1[8], &esp_1[0xd])
                        int32_t esi_7 = 0
                        
                        if (eax_33 s<= 0)
                            goto label_5fddda
                        
                        int32_t ebx_8 = esp_1[8]
                        
                        while (sub_4db700(*(ebx_8 + (esi_7 << 2)), 9) == 0)
                            esi_7 += 1
                            
                            if (esi_7 s>= eax_33)
                                goto label_5fddda
                        
                        esi_6 = esp_1[3]
                    
                    edx_7 = esp_1[4] + 1
                    esp_1[4] = edx_7
                    
                    if (edx_7 s< 3)
                        continue
                    
                    esi_1 = esi_6 + 1
                    esp_1[3] = esi_1
                    break
            
            *(esp_18 - 4) = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            sub_63b870(eax_25, &data_801800, ecx_28)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    result = esp_1[5] + 8
    esp_1[5] = result
    
    if (result == &esp_1[0x680])
        break
    
    ebx_1 = arg1

esp_1[0xd25]
*esp_1
esp_1[1]
esp_1[2]
CookieCheckFunction(result)
return result
