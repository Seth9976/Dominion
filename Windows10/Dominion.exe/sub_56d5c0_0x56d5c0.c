// 函数: sub_56d5c0
// 地址: 0x56d5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*eax != 4)
    sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_SETUP", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1675, "AddTokensHere")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edi = *(eax + 0x10)
void* eax_1 = sub_573400()
void* esi = *(eax_1 + 4)
int32_t eax_2 = sub_57da30(esi, edi)
int32_t ecx_1 = 7
void* esi_1 = esi + 0x1594
void* i

while (true)
    int32_t edx_1 = *esi_1
    
    if (edx_1 != edi && *(esi_1 + 4) != edi && edx_1 != eax_2)
        ecx_1 += 1
        esi_1 += 0x10
        
        if (ecx_1 s>= 0x48)
            break
        
        continue
    
    if (edx_1 == 0)
        break
    
    i = 7
    int32_t* eax_4 = *(eax_1 + 4) + 0x1594
    
    do
        if (*eax_4 == edx_1)
            goto label_56d644
        
        if (eax_4[1] == edx_1)
            goto label_56d644
        
        i += 1
        eax_4 = &eax_4[4]
    while (i s< 0x48)
    
    break

i = nullptr
label_56d644:
void* eax_5 = sub_573400()
int32_t var_24 = 0
int32_t var_28 = 0xffffffff
int32_t var_2c = 0
return sub_571fa0(eax_5, 0xffffffff, *(eax_5 + 4), arg1, arg2, i, nullptr)
