// 函数: sub_539a00
// 地址: 0x539a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg2
int32_t ecx = 0
int32_t ecx_1
int32_t ebx

if (eax s> 0)
    while (*(arg1 + (ecx << 2)) != 0x17)
        ecx += 1
        
        if (ecx s>= eax)
            goto label_539a1e
    
    ebx:1.b = 1
    ecx_1 = 0
    goto label_539a2a

label_539a1e:
ecx_1 = 0
ebx:1.b = 0
char var_5
int32_t ecx_2

if (eax s> 0)
label_539a2a:
    
    while (*(arg1 + (ecx_1 << 2)) != 0x16)
        ecx_1 += 1
        
        if (ecx_1 s>= eax)
            goto label_539a31
    
    var_5 = 1
    ecx_2 = 0
    goto label_539a44

label_539a31:
ecx_2 = 0
var_5 = 0
int32_t ecx_3

if (eax s> 0)
label_539a44:
    
    while (*(arg1 + (ecx_2 << 2)) != 0x19)
        ecx_2 += 1
        
        if (ecx_2 s>= eax)
            goto label_539a4b
    
    arg2:3.b = 1
    ecx_3 = 0
    goto label_539a58

label_539a4b:
ecx_3 = 0
arg2:3.b = 0

if (eax s<= 0)
label_539a5f:
    ebx.b = 0
else
label_539a58:
    
    while (*(arg1 + (ecx_3 << 2)) != 0x18)
        ecx_3 += 1
        
        if (ecx_3 s>= eax)
            goto label_539a5f
    
    ebx.b = 1

void* eax_1
int16_t ecx_4
int16_t edx_1
eax_1, ecx_4, edx_1 = sub_573400()

if (*eax_1 != 5)
    sub_63b870(eax_1, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* result = *(eax_1 + 0x18) + 4
edx_1.b = *result

if (ebx:1.b != 0 && var_5 != 0)
    ecx_4.b = result[1]
    edx_1.b |= 1
    *result = edx_1.b
    ecx_4:1.b = ecx_4.b
    
    if (arg2:3.b == 0)
        goto label_539ac5
    
    goto label_539aba

ecx_4.b = result[1]
*result = edx_1.b
ecx_4:1.b = ecx_4.b

if (ebx:1.b == 0 || arg2:3.b == 0)
label_539ac5:
    edx_1:1.b = result[2]
    ecx_4:1.b = ecx_4.b
    result[1] = ecx_4:1.b
    
    if (ebx:1.b == 0 || ebx.b == 0)
        ecx_4.b = 0
    else
        ecx_4.b = 1
else
label_539aba:
    edx_1:1.b = result[2]
    ecx_4:1.b |= 1
    result[1] = ecx_4:1.b
    
    if (ebx.b == 0)
        ecx_4.b = 0
    else
        ecx_4.b = 1

ebx:1.b = var_5
edx_1:1.b |= ecx_4.b
ecx_4.b = result[3]
result[2] = edx_1:1.b
char var_c

if (ebx:1.b == 0 || arg2:3.b == 0)
    var_c = ecx_4.b
    result[3] = ecx_4.b
    ecx_4.b = result[4]
    
    if (ebx:1.b == 0 || ebx.b == 0)
        ebx:1.b = 0
    else
        ebx:1.b = 1
else
    ecx_4.b |= 1
    var_c = ecx_4.b
    result[3] = ecx_4.b
    ecx_4.b = result[4]
    
    if (ebx.b == 0)
        ebx:1.b = 0
    else
        ebx:1.b = 1

ecx_4.b |= ebx:1.b
char var_10 = ecx_4.b
result[4] = ecx_4.b
ecx_4.b = result[5]

if (arg2:3.b == 0 || ebx.b == 0)
    ebx.b = 0
else
    ebx.b = 1

ecx_4.b |= ebx.b
result[5] = ecx_4.b

if (edx_1.b != 0 && ecx_4:1.b != 0 && edx_1:1.b != 0 && var_c != 0 && var_10 != 0)
    result.b = ecx_4.b != 0
    return result

result.b = 0
return result
