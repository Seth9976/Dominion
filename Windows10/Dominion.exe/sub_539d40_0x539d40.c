// 函数: sub_539d40
// 地址: 0x539d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax = sub_573400()

if (*eax != 5)
    sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edx = *(eax + 0x18)
int32_t eax_1 = 0
int32_t eax_2
int32_t ebx

if (arg2 s> 0)
    while (*(arg1 + (eax_1 << 2)) != 0x1f)
        eax_1 += 1
        
        if (eax_1 s>= arg2)
            goto label_539d6e
    
    ebx:1.b = 1
    eax_2 = 0
    goto label_539d7a

label_539d6e:
eax_2 = 0
ebx:1.b = 0
int32_t result

if (arg2 s> 0)
label_539d7a:
    
    while (*(arg1 + (eax_2 << 2)) != 0x1d)
        eax_2 += 1
        
        if (eax_2 s>= arg2)
            goto label_539d81
    
    ebx.b = 1
    result = 0
    goto label_539d94

label_539d81:
result = 0
ebx.b = 0

if (arg2 s<= 0)
label_539d9b:
    result.b = 0
else
label_539d94:
    
    while (*(arg1 + (result << 2)) != 0x1e)
        result += 1
        
        if (result s>= arg2)
            goto label_539d9b
    
    result.b = 1

if (ebx:1.b != 0)
    *(edx + 4) += 1

if (ebx.b != 0)
    *(edx + 8) += 1

if (result.b != 0)
    *(edx + 0xc) += 1

if (*(edx + 4) s>= 2 && *(edx + 8) s>= 2)
    result.b = *(edx + 0xc) s>= 2
    return result

result.b = 0
return result
