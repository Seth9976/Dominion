// 函数: sub_4e3b00
// 地址: 0x4e3b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_10
void* var_c

if (arg1 == 0x5000)
    uint32_t edi_4 = sub_4daf40(&var_c, &var_10)
    int32_t esi_4 = 0
    
    if (edi_4 s> 0)
        void* ebx_4 = var_c
        
        do
            if (sub_4db700(*(ebx_4 + (esi_4 << 2)), 8).b != 0)
                goto label_4e3cb7
            
            esi_4 += 1
        while (esi_4 s< edi_4)
    
    goto label_4e3ca6

if (arg1 == 0x2000)
    uint32_t edi_3 = sub_4daf40(&var_c, &var_10)
    int32_t esi_3 = 0
    
    if (edi_3 s> 0)
        void* ebx_3 = var_c
        
        do
            if (sub_4db700(*(ebx_3 + (esi_3 << 2)), 3).b != 0)
                goto label_4e3cb7
            
            esi_3 += 1
        while (esi_3 s< edi_3)
    
    goto label_4e3ca6

if (arg1 == 0x3000)
    uint32_t edi_2 = sub_4daf40(&var_c, &var_10)
    int32_t esi_2 = 0
    
    if (edi_2 s> 0)
        void* ebx_2 = var_c
        
        do
            if (sub_4db700(*(ebx_2 + (esi_2 << 2)), 4).b != 0)
                goto label_4e3cb7
            
            esi_2 += 1
        while (esi_2 s< edi_2)
    
    goto label_4e3ca6

if (arg1 == 0x4000)
    uint32_t edi_1 = sub_4daf40(&var_c, &var_10)
    int32_t esi_1 = 0
    
    if (edi_1 s> 0)
        void* ebx_1 = var_c
        
        do
            if (sub_4db700(*(ebx_1 + (esi_1 << 2)), 6).b != 0)
                goto label_4e3cb7
            
            esi_1 += 1
        while (esi_1 s< edi_1)
    
    goto label_4e3ca6

uint32_t result

if (arg1 == 0x8000)
    uint32_t edi_6 = sub_4daf40(&var_c, &var_10)
    int32_t esi_6 = 0
    
    if (edi_6 s> 0)
        void* ebx_6 = var_c
        
        do
            if (sub_4db700(*(ebx_6 + (esi_6 << 2)), 7).b != 0)
                goto label_4e3cb7
            
            esi_6 += 1
        while (esi_6 s< edi_6)
    
label_4e3ca6:
    int32_t var_8
    
    if (var_8 != 0x63)
        result.b = 1
        return result
else if (arg1 == 0x9000)
    uint32_t edi_5 = sub_4daf40(&var_c, &var_10)
    int32_t esi_5 = 0
    
    if (edi_5 s> 0)
        void* ebx_5 = var_c
        
        do
            if (sub_4db700(*(ebx_5 + (esi_5 << 2)), 0xa).b != 0)
                goto label_4e3cb7
            
            esi_5 += 1
        while (esi_5 s< edi_5)
    
    goto label_4e3ca6

label_4e3cb7:
result.b = 0
return result
