// 函数: sub_4fe200
// 地址: 0x4fe200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(*(sub_573400() + 4) + 0x19cc)
void* eax_2 = sub_573400()
void* ecx = *(eax_2 + 4)
*(ecx + 0xd38)

if (esi == mods.dp.d(sx.q(*(eax_2 + 0xc) + 1), *(ecx + 0xd38)))
    return 1

int32_t ebx = 0
int32_t var_10 = 0
int32_t var_c = 0
void* eax_8 = sub_573400()
int32_t i = 0
void* var_8 = eax_8
void* esi_1 = *(eax_8 + 4)

if (*(esi_1 + 0x19b8) s> 0)
    do
        if (*(ebx + esi_1 + 0x3b5b4) == 0)
            void* eax_9 = sub_573400()
            eax_8 = var_8
            
            if (*(ebx + esi_1 + 0x3b5b8)
                    == mods.dp.d(sx.q(*(eax_9 + 0xc) + 1), *(*(eax_9 + 4) + 0xd38)))
                var_10 += 1
        
        if (*(ebx + esi_1 + 0x3b5b4) == 1)
            void* eax_13 = sub_573400()
            eax_8 = var_8
            
            if (*(ebx + esi_1 + 0x3b5b8)
                    == mods.dp.d(sx.q(*(eax_13 + 0xc) + 1), *(*(eax_13 + 4) + 0xd38)))
                var_c += 1
        
        esi_1 = *(eax_8 + 4)
        i += 1
        ebx += 0xa8
    while (i s< *(esi_1 + 0x19b8))
    
    ebx = var_c

int32_t result
result.b = var_10 s> ebx
return result
