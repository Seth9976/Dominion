// 函数: sub_66f200
// 地址: 0x66f200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg3

if (arg5 u> 3)
    sub_63b870(arg5, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x463a, "SetProperty")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* const var_10
void* eax_1

switch (arg5)
    case 0
        eax_1 = *(esi + 0x1600)
        
        if (eax_1 == data_c27c20)
            void* eax_7 = sub_667ae0(arg3, arg2)
            int32_t* ecx_8
            
            if (arg4 == 0)
                int64_t var_10_1 = 0
                ecx_8 = nullptr
            else
                ecx_8 = 1
            
            sub_6dcc50(eax_7, eax_7, &data_8cae70, arg2, ecx_8, 0)
            sub_65bf00(esi)
            return sub_66ba20(esi)
    case 1
        char* eax_4 = *(esi + 0x1718)
        
        if (eax_4 != 0)
            esi = eax_4
        
        eax_1 = *(esi + 0x1600)
        
        if (eax_1 == data_c27c20)
            eax_1 = *(esi + 0x189c)
            int32_t ebx_2 = 0
            
            if (eax_1 != 0)
                void* eax_6
                
                do
                    char* eax_5 = sub_64e7a0(*(esi + (ebx_2 << 2) + 0x179c))
                    eax_6 = sub_66f130(eax_5, arg2, eax_5, arg4, 0)
                    ebx_2 += 1
                while (ebx_2 != eax_1)
                
                return eax_6
    case 2
        eax_1 = *(esi + 0x1600)
        
        if (eax_1 == data_c27c20)
            void* eax_9 = sub_667ae0(arg3, arg2)
            int32_t* ecx_10
            
            if (arg4 == 0)
                var_10 = nullptr
                ecx_10 = nullptr
            else
                ecx_10 = 1
            
            sub_6dcc50(eax_9, eax_9, &data_8cae70, arg2, ecx_10, 0)
            sub_65bf00(esi)
            sub_66ba20(esi)
            eax_1 = *(esi + 0x189c)
            int32_t ebx_3 = 0
            
            if (eax_1 != 0)
                void* eax_11
                
                do
                    char* eax_10 = sub_64e7a0(*(esi + (ebx_3 << 2) + 0x179c))
                    eax_11 = sub_66f130(eax_10, arg2, eax_10, arg4, 2)
                    ebx_3 += 1
                while (ebx_3 != eax_1)
                
                return eax_11
    case 3
        eax_1 = sub_6580f0(arg3)
        void* ebx_1 = eax_1
        
        if (*(ebx_1 + 0x1600) == data_c27c20)
            void* eax_2 = sub_667ae0(ebx_1, arg2)
            int32_t* ecx_2
            
            if (arg4 == 0)
                var_10 = nullptr
                ecx_2 = nullptr
            else
                ecx_2 = 1
            
            sub_6dcc50(eax_2, eax_2, &data_8cae70, arg2, ecx_2, 0)
            sub_65bf00(ebx_1)
            sub_66ba20(ebx_1)
            eax_1 = *(ebx_1 + 0x189c)
            int32_t esi_1 = 0
            var_10 = eax_1
            
            if (eax_1 != 0)
                do
                    uint32_t eax_3 = sub_64e7a0(*(ebx_1 + (esi_1 << 2) + 0x179c))
                    eax_1 = sub_66f130(eax_3, arg2, eax_3, arg4, 2)
                    esi_1 += 1
                while (esi_1 != var_10)

return eax_1
