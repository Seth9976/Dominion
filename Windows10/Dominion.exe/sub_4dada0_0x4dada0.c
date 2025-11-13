// 函数: sub_4dada0
// 地址: 0x4dada0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c
void* var_8
uint32_t eax = sub_4daf40(&var_8, &var_c)
int32_t esi = 0
void* result

if (eax s> 0)
    void* ebx_1 = var_8
    
    do
        if (sub_4db7a0(*(ebx_1 + (esi << 2)), 0x1300).b != 0)
        label_4dae71:
            result.b = 1
            return result
        
        esi += 1
    while (esi s< eax)

uint32_t eax_1 = sub_4daf40(&var_8, &var_c)
int32_t esi_1 = 0

if (eax_1 s> 0)
    void* ebx_2 = var_8
    
    do
        if (sub_4db7a0(*(ebx_2 + (esi_1 << 2)), 0x1304).b != 0)
            goto label_4dae71
        
        esi_1 += 1
    while (esi_1 s< eax_1)

uint32_t eax_2 = sub_4daf40(&var_8, &var_c)
int32_t esi_2 = 0

if (eax_2 s> 0)
    void* ebx_3 = var_8
    
    do
        if (sub_4db7a0(*(ebx_3 + (esi_2 << 2)), 0x1305).b != 0)
            goto label_4dae71
        
        esi_2 += 1
    while (esi_2 s< eax_2)

void* edi_3 = sub_4daf40(&var_8, &var_c)
int32_t esi_3 = 0

if (edi_3 s> 0)
    void* ebx_4 = var_8
    
    do
        if (sub_4db7a0(*(ebx_4 + (esi_3 << 2)), 0x130e).b != 0)
            goto label_4dae71
        
        esi_3 += 1
    while (esi_3 s< edi_3)

result.b = 0
return result
