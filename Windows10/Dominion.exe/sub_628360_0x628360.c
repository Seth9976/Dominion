// 函数: sub_628360
// 地址: 0x628360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg1
int32_t var_10 = esi

if (*arg2 == 0)
    void* const esi_1 = &data_780878
    
    while (true)
        if (*(esi_1 + 8) == 2 && *(esi_1 + 4) == arg2[1])
            int32_t ecx = *(esi_1 + 0xc)
            
            if (ecx == 0)
                esi = var_10
            else
                void* eax_1 = sub_4e3950(ecx)
                int32_t ecx_1 = *(eax_1 + 0x18)
                int32_t var_2c
                void** ebx_1
                
                if (ecx_1 != 0)
                    if (ecx_1 == 1)
                        ebx_1 = &data_bf115c
                        goto label_6283ea
                    
                    if (ecx_1 == 2)
                        ebx_1 = &data_bf1168
                        goto label_6283ea
                    
                    char const* const var_28 = "GameSpecific_UpdateStoreItem"
                    var_2c = 0xf4ae
                label_62860d:
                    sub_63b870(eax_1, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_2c, 
                        "GameSpecific_UpdateStoreItem")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                ebx_1 = &data_bf1150
            label_6283ea:
                esi = var_10
                uint32_t eax_2 = sub_64e7a0(esi)
                sub_665db0(eax_2, ebx_1, eax_2, 0x3f800000, 0xffffffff, 0)
                int32_t eax_4 = *(eax_1 + 0x14)
                
                if (eax_4 == 0)
                    uint32_t eax_9 = sub_64e7a0(esi)
                    sub_665db0(eax_9, &data_bf1174, eax_9, 0x3f800000, 0xffffffff, 0)
                else if (eax_4 == 1)
                    uint32_t eax_8 = sub_64e7a0(esi)
                    sub_665db0(eax_8, &data_bf1180, eax_8, 0x3f800000, 0xffffffff, 0)
                else
                    eax_1 = eax_4 - 2
                    
                    if (eax_4 != 2)
                        char const* const var_28_1 = "GameSpecific_UpdateStoreItem"
                        var_2c = 0xf4bd
                        goto label_62860d
                    
                    uint32_t eax_7 = sub_64e7a0(esi)
                    sub_665db0(eax_7, &data_bf118c, eax_7, 0x3f800000, 0xffffffff, 0)
            
            break
        
        esi_1 += 0x10c
        
        if (esi_1 == &data_78314c)
            esi = arg1
            break

if (*arg2 != 2)
    return 

char const (** const eax)[0xb] = arg2[1]
int32_t var_c_1

if (eax s<= 0x4000)
    if (eax == 0x4000)
        eax = &data_86eb28
        goto label_62852d
    
    if (eax == 0x1000)
        var_c_1 = 7
        eax = &data_86eb70
        goto label_628534
    
    if (eax == 0x2000)
        var_c_1 = 7
        eax = &data_86eba8
        goto label_628534
    
    if (eax == 0x3000)
        eax = &data_86eae8
        var_c_1 = 8
        goto label_628534
else if (eax == 0x5000)
    eax = &data_86ea50
label_62852d:
    var_c_1 = 9
label_628534:
    char const (** const var_8_1)[0xb] = eax
    int32_t ebx_2 = 0
    void* edi_1 = &data_1a9697c
    
    do
        char* edx_1 = eax[ebx_2 * 2]
        int32_t* var_14_2
        
        if (*edi_1 == edx_1 && *(edi_1 - 4) == esi && *(edi_1 + 4) == 0xffffffff)
            int32_t* ecx_13 = *(edi_1 + 0x1c)
            var_14_2 = ecx_13
            
            if (ecx_13 == 0)
                goto label_628580
            
            uint32_t eax_10 = zx.d(ecx_13.w)
            
            if (eax_10 u>= data_c23bac || *(eax_10 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_13)
                goto label_628580
            
            goto label_6285aa
        
    label_628580:
        int32_t* eax_13 = sub_67bd70(esi, edx_1)
        var_14_2 = eax_13
        *(edi_1 + 0x1c) = eax_13
        
        if (eax_13 != 0)
            *edi_1 = edx_1
            *(edi_1 - 4) = esi
            *(edi_1 + 4) = 0xffffffff
        label_6285aa:
            void* eax_15 = sub_571b30(var_8_1[ebx_2 * 2 + 1], 0x18)
            sub_5e0df0(sub_5e01b0(eax_15, eax_15, var_14_2, nullptr, 0, 0), eax_15, var_14_2, 
                nullptr)
            sub_5defb0(var_14_2, eax_15)
            esi = var_10
        
        eax = var_8_1
        ebx_2 += 1
        edi_1 += 0x24
    while (ebx_2 s< var_c_1)
else
    if (eax == 0x8000)
        var_c_1 = 0xa
        eax = &data_86ea98
        goto label_628534
    
    if (eax == 0x9000)
        var_c_1 = 3
        eax = &data_86ea38
        goto label_628534
