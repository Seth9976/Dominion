// 函数: sub_4db7a0
// 地址: 0x4db7a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t esi = 0
int32_t eax = 0
void* const eax_1
void* const ecx
void* const ebx
void* const esi_1
void* const edi

while (true)
    if (*(eax + &data_780878) == arg1)
        int32_t eax_2 = esi * 0x10c
        esi_1 = eax_2 + &data_780884
        ebx = eax_2 + &data_780884
        ecx = eax_2 + &data_780884
        edi = eax_2 + &data_780884
        eax_1 = eax_2 + &data_780880
        break
    
    eax += 0x10c
    esi += 1
    
    if (eax u>= 0x28d4)
        esi_1 = &data_780884
        eax_1 = &data_780880
        ebx = &data_780884
        ecx = &data_780884
        edi = &data_780884
        break

void* result = *eax_1

if (result == 1)
label_4db90e:
    result.b = 1
    return result

if (result u> 5)
    sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 
        0x159, "DomEntitlementGrantsCard")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (result)
    case 2
        if (*sub_571b30(arg2, 0x18) != 1)
            int32_t eax_4
            char edx_2
            edx_2:eax_4 = sx.q(arg2)
            result = (eax_4 + zx.d(edx_2)) s>> 8
            int32_t edx_4 = 0
            
            while (true)
                int32_t ecx_3 = *ebx
                
                if (ecx_3 == 0)
                    break
                
                if (ecx_3 == result)
                    goto label_4db90e
                
                if (ecx_3 == 2 && result == 1)
                    goto label_4db90e
                
                edx_4 += 1
                ebx += 4
                
                if (edx_4 s>= 4)
                    result.b = 0
                    return result
    case 3
        if (*sub_571b30(arg2, 0x18) == 1)
            int32_t eax_7
            char edx_5
            edx_5:eax_7 = sx.q(arg2)
            
            for (int32_t i = 0; i s< 4; )
                int32_t edx_7 = *esi_1
                
                if (edx_7 == 0)
                    break
                
                if (edx_7 == (eax_7 + zx.d(edx_5)) s>> 8)
                    goto label_4db90e
                
                i += 1
                esi_1 += 4
    case 4
        result = nullptr
        
        while (true)
            int32_t edx_1 = *ecx
            
            if (edx_1 == 0)
                break
            
            if (edx_1 == arg2)
                goto label_4db90e
            
            result += 1
            ecx += 4
            
            if (result s>= 8)
                result.b = 0
                return result
    case 5
        int32_t esi_2 = 0
        
        while (*edi != 0)
            if (sub_4db7a0().b == 1)
                goto label_4db90e
            
            esi_2 += 1
            edi += 4
            
            if (esi_2 s>= 0x40)
                result.b = 0
                return result

result.b = 0
return result
