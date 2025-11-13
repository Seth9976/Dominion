// 函数: sub_5ded60
// 地址: 0x5ded60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = arg1
bool cond:0_1

if (*(esi + 0x2c) == 1)
label_5dee96:
    
    if (*(esi + 0x174) == 2)
        if (*(esi + 0x1a18) == 0)
            if (*(esi + 0x370) != 1)
                return 1
            
            int32_t result
            result.b = *(esi + 0x378) != 0x21
            return result
        
        if (*(esi + 0x2e8) != 1 || *(esi + 0x2f0) != 0x21)
            if (*(esi + 0x418) != 1)
                return 1
            
            cond:0_1 = *(esi + 0x420) != 0x21
        label_5deed2:
            
            if (cond:0_1)
                return 1
    
    return 0

while (true)
    uint32_t eax_1 = *(esi + 0x2c)
    
    if (eax_1 == 3)
        if (*(esi + 0x1c28) == data_b7d434)
            return 0
        
        if (*(esi + 0x1a18) != 0)
            if (*(esi + 0x2e8) == 1 && *(esi + 0x2f0) == 0x21)
                return 0
            
            if (*(esi + 0x418) == 1 && *(esi + 0x420) == 0x21)
                return 0
        
        int32_t ecx_6 = *(esi + 0x5c)
        
        if (ecx_6 - 7 u<= 0xa)
            return 2
        
        if (ecx_6 - 0x27 u<= 0x1f)
            return 3
        
        return 1
    
    int32_t var_c
    char const* const var_8
    char* ecx_4
    
    if (eax_1 != 0)
        var_8 = "CalcCardSize"
        var_c = 0x3e7d
        ecx_4 = "gfx.type == DOMGFX_CARD"
        goto label_5def91
    
    if (*(esi + 0x1a18) == eax_1)
        if (*(esi + 0x370) != 1 || *(esi + 0x378) != 0x1d)
            eax_1.b = 0
        else
            eax_1.b = 1
        
        if (eax_1.b != 0)
            goto label_5dee81
        
        goto label_5dedb7
    
    if (*(esi + 0x2e8) != 1 || *(esi + 0x2f0) != 0x1d || *(esi + 0x418) != 1
        || *(esi + 0x420) != 0x1d)
    label_5dedb7:
        
        if (sub_5dc910(esi, 0x3e9) != 0)
            void* eax_3 = sub_5ded20()
            
            if (eax_3.b == 0)
                return 1
            
            uint32_t eax_4
            int32_t edx_1
            eax_4, edx_1 = sub_5cbaa0(eax_3, 0x3e9, esi, 0x2000000, 0)
            
            if (eax_4.b != 0)
                return 1
            
            if (sub_5cbaa0(eax_4, edx_1, esi, &data_1000000, 0) != 0)
                return 1
        
        if (sub_5dc840(esi) == 0)
            return 0
        
        if (sub_5dc910(esi, 2) != 0)
            return 0
        
        eax_1 = sub_5cba00(*(esi + 0x9c))
        
        if (*(eax_1 + 0x2c) == 3)
            cond:0_1 = *(eax_1 + 0x1c28) != data_b7fcf4
            break
        
        var_8 = "PileIsOpen"
        var_c = 0xaf0
        ecx_4 = "gfx.type == DOMGFX_PILE"
    label_5def91:
        sub_63b870(eax_1, &data_801800, ecx_4, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_c, var_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
label_5dee81:
    eax_1 = sub_5de8b0(*(esi + 0x37c))
    esi = eax_1
    
    if (esi == 0)
        var_8 = "LookupCard"
        var_c = 0x3d96
        ecx_4 = &data_871964
        goto label_5def91
    
    if (*(esi + 0x2c) == 1)
        goto label_5dee96

goto label_5deed2
