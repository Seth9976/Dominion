// 函数: sub_6296d0
// 地址: 0x6296d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_64e7a0(arg1)
int32_t edx = data_ccea14
*(eax + 0x18bc) = sub_629380
int32_t eax_1

if (edx != 0)
    void* eax_2 = data_cc8d5c
    
    if (eax_2 == 0)
        sub_63b870(eax_2, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (edx == 0)
        eax_1 = data_1a97548
    else
        uint32_t ecx_1 = zx.d(edx.w)
        
        if (ecx_1 u>= *(eax_2 + 0x7758))
            eax_1 = data_1a97548
        else
            int32_t eax_3 = *(eax_2 + 0x7754)
            uint32_t ecx_2 = ecx_1 * 3
            void* eax_4 = eax_3 + (ecx_2 << 2)
            
            if (*(eax_3 + (ecx_2 << 2) + 8) != edx || eax_4 == 0)
                eax_1 = data_1a97548
            else
                eax_1 = *(eax_4 + 4)
                data_1a97548 = eax_1
else
    eax_1 = 4
    data_1a97548 = 4

int32_t var_c
char const (** const result_2)[0xb]
int32_t ebx

if (eax_1 - 1 u<= 3)
    switch (eax_1)
        case 1
            ebx = 1
            result_2 = &data_86e41c
            var_c = 1
        case 2
            ebx = 3
            result_2 = &data_86e404
            var_c = 3
        case 3
            ebx = 3
            result_2 = &data_86e3ec
            var_c = 3
        case 4
            ebx = 3
            result_2 = &data_86e3d4
            var_c = 3
    
    goto label_6297a6

void* result_1
void* result = result_1
ebx = 0
result_2 = result
var_c = 0

if (eax_1 - 1 u<= 3)
label_6297a6:
    uint32_t eax_5
    void** edx_1
    
    switch (jump_table_629904[eax_1 - 1])
        case 0x6297ad
            eax_5 = sub_64e7a0(arg1)
            edx_1 = &data_bf11bc
        case 0x6297bb
            eax_5 = sub_64e7a0(arg1)
            edx_1 = &data_bf11c8
        case 0x6297c9
            eax_5 = sub_64e7a0(arg1)
            edx_1 = &data_bf11d4
        case 0x6297d7
            eax_5 = sub_64e7a0(arg1)
            edx_1 = &data_bf11e0
    
    result = sub_665db0(eax_5, edx_1, eax_5, 0x3f800000, 0xffffffff, 0)

int32_t esi_1 = 0
int32_t var_10 = 0

if (ebx != 0)
    void* edi_1 = &data_1a97554
    
    do
        char* edx_2 = result_2[esi_1 * 2]
        void* result_3
        
        if (*edi_1 == edx_2 && *(edi_1 - 4) == arg1 && *(edi_1 + 4) == 0xffffffff)
            result_3 = *(edi_1 + 0x1c)
            
            if (result_3 == 0)
                goto label_629851
            
            uint32_t eax_7 = zx.d(result_3.w)
            
            if (eax_7 u>= data_c23bac || *(eax_7 * 0x18d0 + data_c23ba8 + 0x18c8) != result_3)
                goto label_629851
            
            goto label_62987d
        
    label_629851:
        result = sub_67bd70(arg1, edx_2)
        result_3 = result
        *(edi_1 + 0x1c) = result_3
        
        if (result_3 != 0)
            *edi_1 = edx_2
            *(edi_1 - 4) = arg1
            *(edi_1 + 4) = 0xffffffff
        label_62987d:
            int32_t* eax_13 = sub_571b30(result_2[esi_1 * 2 + 1], 0x18)
            sub_5e0df0(sub_5e01b0(eax_13, eax_13, result_3, nullptr, 0, 0), eax_13, result_3, 
                nullptr)
            result = sub_5defb0(result_3, eax_13)
            esi_1 = var_10
        
        esi_1 += 1
        edi_1 += 0x24
        var_10 = esi_1
    while (esi_1 s< var_c)

return result
