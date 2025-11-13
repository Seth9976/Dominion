// 函数: sub_5e3ec0
// 地址: 0x5e3ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = sub_5e3c60(arg2)
int32_t eax_2 = 0
int32_t ebx = *(esi + 0x200)

if (ebx s<= 0)
label_5e3f06:
    *(esi + 0x200) = ebx + 1
    *(esi + (ebx << 3)) = arg1
    *(esi + (ebx << 3) + 4) = sub_61cf40(arg1, sub_61cee0())
else
    while (true)
        int32_t ecx_1 = *(esi + (eax_2 << 3))
        void* edi_1 = esi + (eax_2 << 3)
        
        if (ecx_1 == arg1)
            *(edi_1 + 4) = sub_61cf40(ecx_1, *(edi_1 + 4))
            break
        
        eax_2 += 1
        
        if (eax_2 s>= ebx)
            goto label_5e3f06

char* result = sub_5e3da0(arg2)

if (arg2 == 1)
    result = data_cc8d5c
    
    if (result == 0)
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(result + 0x5068) == 2)
        int32_t var_14_1 = 0
        int32_t* eax_7 = sub_4b9480()
        int32_t ecx_5 = *(esi + 0x200)
        int32_t var_1c_1 = 0
        char* var_20 = *eax_7
        int32_t i_1 = ecx_5 << 3
        int32_t eax_9 = 0
        void* var_18_1 = esi
        int32_t var_10_1 = ecx_5
        
        if (i_1 != 0)
            int32_t i
            
            do
                char ecx_6 = *esi
                esi += 1
                eax_9 = eax_9 u>> 8 ^ *(((zx.d(ecx_6) ^ zx.d(eax_9.b)) << 2) + &data_7ffd70)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        void* ecx_9 = data_cc8d5c
        int32_t var_c_1 = eax_9
        
        if (ecx_9 != 0)
            return sub_68b720(&var_20, 0xf42cd, *(ecx_9 + 0x14), data_1597d60, &var_20)
        
        sub_63b870(eax_9, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return result
