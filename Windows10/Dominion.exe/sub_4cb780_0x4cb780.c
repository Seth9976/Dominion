// 函数: sub_4cb780
// 地址: 0x4cb780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
*(sub_64e7a0(arg1) + 0x18bc) = sub_4cb050
void* eax_3 = data_cc8d5c

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi = 0
int32_t var_88[0x20]

if (*(eax_3 + 0x5068) != 0)
    for (void* i = &data_b8212c; i s< 0xb8225c; i += 0x10)
        int32_t eax_4 = *i
        
        if (eax_4 != 0)
            int32_t eax_5
            char edx_1
            edx_1:eax_5 = sx.q(eax_4)
            int32_t ecx_1 = 0
            int32_t eax_7 = (eax_5 + zx.d(edx_1)) s>> 8
            
            if (esi s> 0)
                do
                    if (var_88[ecx_1] == eax_7)
                        goto label_4cb7f6
                    
                    ecx_1 += 1
                while (ecx_1 s< esi)
            
            var_88[esi] = eax_7
            esi += 1
        
    label_4cb7f6:
    
    if (data_be0760 == 1)
        int32_t eax_8 = 0
        
        if (esi s<= 0)
        label_4cb81f:
            var_88[esi] = 9
            esi += 1
        else
            while (var_88[eax_8] != 9)
                eax_8 += 1
                
                if (eax_8 s>= esi)
                    goto label_4cb81f
    
    if (data_be075c == 1)
        int32_t eax_9 = 0
        
        if (esi s> 0)
            do
                if (var_88[eax_9] == 6)
                    goto label_4cb85b
                
                eax_9 += 1
            while (eax_9 s< esi)
        
        var_88[esi] = 6
        esi += 1

label_4cb85b:
void* ecx_2 = nullptr
void** const var_90 = &data_7e7670
void* var_8c = nullptr
void* edi_1 = &data_19e5a1c

do
    int32_t ebx_1
    
    if (*edi_1 != "tblRulesItem" || *(edi_1 - 4) != arg1 || *(edi_1 + 4) != ecx_2
        || *(edi_1 + 8) != 0)
    label_4cb8bc:
        int32_t eax_14 = sub_67be20(ecx_2)
        ecx_2 = var_8c
        ebx_1 = eax_14
        *(edi_1 + 0x1c) = ebx_1
        
        if (ebx_1 != 0)
            *edi_1 = "tblRulesItem"
            *(edi_1 - 4) = arg1
            *(edi_1 + 4) = ecx_2
            *(edi_1 + 8) = 0
    else
        ebx_1 = *(edi_1 + 0x1c)
        
        if (ebx_1 == 0)
            goto label_4cb8bc
        
        uint32_t eax_11 = zx.d(ebx_1.w)
        
        if (eax_11 u>= data_c23bac || *(eax_11 * 0x18d0 + data_c23ba8 + 0x18c8) != ebx_1)
            goto label_4cb8bc
    
    int32_t eax_16 = 0
    
    if (esi s> 0)
        do
            if (var_88[eax_16] == ecx_2 + 3)
                if (ebx_1 != 0)
                    uint32_t eax_17 = sub_64e7a0(ebx_1)
                    sub_665db0(eax_17, &data_8dc434, eax_17, 0x3f800000, 0xffffffff, 0)
                
                break
            
            eax_16 += 1
        while (eax_16 s< esi)
    
    void* eax_19 = *var_90
    
    if (eax_19 != 0 && ebx_1 != 0)
        uint32_t eax_20 = sub_64e7a0(ebx_1)
        sub_665db0(eax_20, eax_19, eax_20, 0x3f800000, 0xffffffff, 0)
    
    if (var_90[2] == 0)
        uint32_t eax_21 = sub_64e7a0(arg1)
        sub_665db0(eax_21, &data_8dc41c, eax_21, 0x3f800000, var_8c, 0)
    
    ecx_2 = var_8c + 1
    var_90 = &var_90[6]
    edi_1 += 0x24
    var_8c = ecx_2
while (ecx_2 + 1 s< 0x11)

int32_t var_a4_2 = 0xffffffff
uint32_t result = sub_666120(ecx_2 + 1, &data_8dc404, arg1, ecx_2)

if (data_8db5c4 == 0x27)
    result = data_8db5c8
label_4cb9ec:
    
    if (result != 0)
        uint32_t eax_23 = sub_64e7a0(arg1)
        result = sub_665db0(eax_23, &data_8dc428, eax_23, 0x3f800000, 0xffffffff, 0)
else if (data_8db5d4 == 0x27)
    result = data_8db5d8
    goto label_4cb9ec

CookieCheckFunction(result)
return result
