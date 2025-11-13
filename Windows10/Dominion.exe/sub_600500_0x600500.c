// 函数: sub_600500
// 地址: 0x600500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 != 7 && arg3 != 8)
    if (arg3 != 0 || *(arg2 + 4) != 2)
        goto label_600538
    
    goto label_60051f

void* result

if (*(arg2 + 4) != 2)
label_600538:
    result = data_cc8d5c
    
    if (result == 0)
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(result + 0x5068) != 0)
        int32_t* eax = sub_4b9480()
        int32_t ecx_1 = data_8db664
        int32_t* edx
        
        if (ecx_1 == 0x7f3 || ecx_1 == 0x7f4)
            if (*(arg2 + 4) != 2)
            label_6005a2:
                
                if (arg3 == 0)
                    edx.b = 0
                    return sub_4d46e0(5, edx.b) __tailcall
            else if (((eax[8] u>> 2).b & 1) == 0)
                int32_t eax_3 = *eax
                
                for (int32_t i = 0; i s< 0x78; i += 0xc)
                    void* eax_4
                    eax_4, edx = sub_61dad0()
                    
                    if (*(eax_4 + i + 8) == eax_3)
                        ecx_1 = data_8db664
                        goto label_6005aa
                
                ecx_1 = data_8db664
                goto label_6005a2
        
    label_6005aa:
        
        if (data_ccf768 != 0 && arg3 == 0)
            return sub_5ec880() __tailcall
        
        if (ecx_1 == 0x7ec)
            edx.b = 0
            return sub_4d46e0(5, edx.b) __tailcall
        
        if (data_be220c != 0)
            if (*(arg2 + 4) != 2)
                data_be220c = 0
                data_b7d418 = 0
            else
                int32_t eax_6 = *(arg2 + 0x1c)
                
                if (eax_6 u<= 0x4e20 && eax_6 != 0x2e7e)
                    data_be220c = 0
                    data_b7d418 = 0
        
        result = sub_5cb070()
        
        if (result == 0)
            if (arg3 == 3)
                return sub_5f4e70(nullptr) __tailcall
            
            if (arg3 == 4)
                return sub_5f4e70(result + 1) __tailcall
else
label_60051f:
    result = *(arg2 + 0x1c)
    
    if (result u<= 0x4e20 && result != 0x2e7e)
        goto label_600538

return result
