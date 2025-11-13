// 函数: sub_5e9120
// 地址: 0x5e9120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg2
void* var_14 = ebx
void* eax = sub_5cc410(arg1, data_b80b44, 0x3e9, 0, 0)
char var_8

if (eax == 0)
label_5e91a4:
    var_8 = 0
else
    if (*(eax + 0x2c) != 3)
        sub_63b870(eax, &data_801800, "gfxPile.type == DOMGFX_PILE", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3da8, "PileHeadCard")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx_1 = *(eax + 0x70)
    
    if (ecx_1 == 0)
    label_5e91a4_1:
        var_8 = 0
    else
        uint32_t eax_1
        int32_t edx_1
        eax_1, edx_1 = sub_5cba00(ecx_1)
        uint32_t esi_1 = eax_1
        
        if (esi_1 == 0)
        label_5e91a4_2:
            var_8 = 0
        else
            while (true)
                char eax_2
                eax_2, edx_1 = sub_5cbaa0(eax_1, edx_1, esi_1, 2, 0)
                
                if (eax_2 != 0)
                    var_8 = 1
                    break
                
                eax_1 = *(esi_1 + 0x1b94)
                
                if (eax_1 == 0)
                    goto label_5e91a4_2
                
                uint32_t ecx_3 = zx.d(eax_1.w)
                
                if (ecx_3 u>= data_b809e4)
                    goto label_5e91a4_2
                
                esi_1 = ecx_3 * 0x1c30 + data_b809e0
                
                if (*(esi_1 + 0x1c28) != eax_1)
                    goto label_5e91a4_2
                
                if (esi_1 == 0)
                    goto label_5e91a4_2

void* i = *(ebx + 0x20528)
void* result = *(ebx + 0x2052c) * 0x1c30 + i

if (i u< result)
    while ((*(i + 0x1c28) & 0xffff0000) == 0)
        i += 0x1c30
        
        if (i u>= result)
            return result
    
    while (i != 0xffffffff)
        sub_5e88a0(result, 0xb604d0, i, arg3, var_8.d)
        
        if (*(i + 0x2c) == 0)
            sub_632f50(i)
        
        if (*(i + 0x2c) == 3)
            int32_t var_10
            int32_t var_c
            char eax_5 = sub_5e32f0(&var_10, &var_c, i, &var_10)
            int32_t ecx_7 = *(i + 0xd8)
            
            if (eax_5 == 0)
                if (ecx_7 != 0)
                    uint32_t eax_10 = sub_5cba00(ecx_7)
                    sub_5cd880(eax_10, i)
                    sub_5cb5a0(eax_10)
                    *(i + 0xd8) = 0
            else if (ecx_7 == 0)
                int32_t j = *(i + 0x74)
                int32_t ebx_1 = 0
                
                for (; j != 0; j = *(sub_5cba00(j) + 0x1b94))
                    ebx_1 += 1
                
                uint32_t eax_8 = sub_631f30(j, var_10, i, var_c, 0, ebx_1)
                sub_5cd5d0(eax_8, i, eax_8, ebx_1)
                ebx = var_14
                *(i + 0xd8) = *(eax_8 + 0x1c28)
            else
                uint32_t eax_6 = sub_5cba00(ecx_7)
                *(eax_6 + 0x234) = var_10
                *(eax_6 + 0x238) = var_c
        
        i += 0x1c30
        result = *(ebx + 0x2052c) * 0x1c30 + *(ebx + 0x20528)
        
        if (i u>= result)
            break
        
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= result)
                return result

return result
